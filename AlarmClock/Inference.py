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
        predicted = 'light on'
    elif predicted == 'F':
        predicted = 'light off'
    else:
        predicted = 'error'
        print 'error in light'
    return predicted

class InferenceEngine(QWidget):
    Speed = 300
    def __init__(self, cam):
        self.cam = cam
        super(InferenceEngine, self).__init__()
        # getting the first frame
        self.frame = self.cam.read_raw()
        var_light = light_is_on_off(self.frame)
        print var_light

        self.timer = QBasicTimer()
        self.timer.start(InferenceEngine.Speed, self)

    def timerEvent(self, event):

        if event.timerId() == self.timer.timerId():
            self.frame = self.cam.read()
            var_light = light_is_on_off(self.frame)
            print var_light

        else:
            super(InferenceEngine, self).timerEvent(event)