import sys
import os
print sys.path
sys.path.append('/usr/local/lib/python2.7/site-packages/')     #for allowing importing cv2 in my mac
from os import path
sys.path.append( path.dirname( path.dirname( path.abspath(__file__) ) ) )    #for allowing importing AlarmClock module

import cv2
import pandas as pd
from PyQt4 import QtGui, QtCore
from PyQt4.QtGui import *
from PyQt4.QtCore import *
import time
import numpy as np

import imutils
from sklearn.externals import joblib

model = joblib.load('Model/svm_model2.pkl')


def light_is_on_off(frame):

    frame = imutils.resize(frame, width=100)
    length = frame.shape[0] * frame.shape[1]

    frame = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)  # turn to grayscale
    frame = cv2.GaussianBlur(frame, (21, 21), 0)  # blur the image
    frame = frame.reshape(1, length)  # reshape the picture to a row.
    df = pd.DataFrame(frame)  # convert to dataframe
    df = df / 255.  # it is divided by 255 in making the model
    predicted = model.predict(df)
    if predicted == 'T':
        predicted = True
    elif predicted == 'F':
        predicted = False
    else:
        predicted = False
        print 'error in light'
    return predicted

def take_picture(time_in_between, num_pic, cam):
    i = 0
    frame = cam.read_raw()
    frame = imutils.resize(frame, width=100)
    length = frame.shape[0]*frame.shape[1]

    df = pd.DataFrame(np.abs(np.random.randn(num_pic, length)))
    while i < num_pic:
        frame = cam.read_raw()
        frame = imutils.resize(frame, width=100) # resize it to a smaller pic.
        frame = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY) # turn to gray scale
        frame = cv2.GaussianBlur(frame, (21,21), 0) # blur the image
        frame = frame.reshape(1, length) # reshape the pic to a row.
        df.loc[i] = frame
        time.sleep(time_in_between)
        i = i + 1
    df = df / 255.
    df = df.astype(np.float32)
    print "%d pictures taken" %num_pic
    return df

class BtnSetModel(QtGui.QPushButton):

    def __init__(self):
        QtGui.QPushButton.__init__(self, "Set Model")
        self.clicked.connect(self.handleButton)

    def handleButton(self):
        fname = QFileDialog.getOpenFileName(self, 'Open file', "model files (*.pkl)")
        print fname
        InferenceEngine.model = joblib.load(str(fname))

class BtnMakeModel(QtGui.QPushButton):

    def __init__(self):
        QtGui.QPushButton.__init__(self, "Make Model")
        self.clicked.connect(self.handleButton)

    def handleButton(self):
        model_directory = os.getcwd() + "/Model"
        if not os.path.exists(model_directory):
            os.makedirs(model_directory)

class CheckBoxLightOnOff(QtGui.QCheckBox):
    selected = False
    def __init__(self):
        QtGui.QCheckBox.__init__(self)
        self.clicked.connect(self.handleCheck)

    def handleCheck(self):
        if CheckBoxLightOnOff.selected == True:
            CheckBoxLightOnOff.selected = False
            print "selected is ", CheckBoxLightOnOff.selected
        else:
            CheckBoxLightOnOff.selected = True
            print "selected is ", CheckBoxLightOnOff.selected

class QLineEditNumSample(QtGui.QLineEdit):
    numSample = 0
    def __init__(self):
        QtGui.QLineEdit.__init__(self)

    def keyPressEvent(self, event):
        # call base class keyPressEvent
        QtGui.QLineEdit.keyPressEvent(self, event)
        try:
            QLineEditNumSample.numSample = int(self.text())
        except:
            print "Type integer."
            QLineEditNumSample.numSample = 0


class BtnGetSample(QtGui.QPushButton):
    # creating a class variable "state" so that it can be used by the InferenceEngine class.
    # if it was created within init as self, then it would just be used as an instance variable
    # unique to each instance.
    state_get_sample = False
    def __init__(self, cam):
        #receiving cam feed from the main.
        self.cam = cam
        #initializing the button.
        QtGui.QPushButton.__init__(self, 'Get Samples')
        self.clicked.connect(self.handleButton)
        #creating a getting sample state variable.

    def handleButton(self):
        if BtnGetSample.state_get_sample == False:
            print "okay now it will run"
            #setting the class variable to running.
            BtnGetSample.state_get_sample = True
            self.setText("Stop")
            new_frame = take_picture(0.2, QLineEditNumSample.numSample, self.cam)
            new_frame['light'] = CheckBoxLightOnOff.selected
            print new_frame

            # the stop button is actually not working because
            # take picture is not threaded. It needs revision..
            self.setText("Get Samples")
            BtnGetSample.state_get_sample = False

        else:
            print "okay now it will stop"
            # setting the class variable to stopped.
            BtnGetSample.state_get_sample = False
            self.setText("Get Samples")


class InferenceEngine(QWidget):
    Speed = 3000

    def __init__(self, cam):
        self.cam = cam
        super(InferenceEngine, self).__init__()
        # getting the first frame
        self.frame = self.cam.read_raw()
        #initializing the variable
        self.IS_LIGHT_ON = True
        self.timer = QBasicTimer()
        self.timer.start(InferenceEngine.Speed, self)

    def timerEvent(self, event):
        #define what you do in every loop

        #checking if the light is on off
        if event.timerId() == self.timer.timerId():
            self.frame = self.cam.read_raw()
            try:
                self.IS_LIGHT_ON = light_is_on_off(self.frame)
            except:
                print "IS_LIGHT_ON error from InferenceEngine"
                pass
            #self.IS_LIGHT_ON = False
        else:
            super(InferenceEngine, self).timerEvent(event)


