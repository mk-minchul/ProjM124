import sys
import os
print sys.path
sys.path.append('/usr/local/lib/python2.7/site-packages/')     #for allowing importing cv2 in my mac
from os import path
sys.path.append( path.dirname( path.dirname( path.abspath(__file__) ) ) )    #for allowing importing AlarmClock module
import argparse
import imutils
import cv2

from AlarmClock import Camera
from AlarmClock import Inference
from AlarmClock import ComputerVision
from AlarmClock import Sound
from AlarmClock import Alarm

import sys
from PyQt4.QtGui import *
from PyQt4.QtCore import *

from PyQt4 import QtGui, QtCore




# this is a threaded video stream
cam = Camera(camnum=0, width= 400).start()

#set initial alarm time


print "Starting webcam"

class UI(QFrame):
    def __init__(self):
        super(UI, self).__init__()

        self.initUI()

    def initUI(self):


        grid = QtGui.QGridLayout()
        grid.setSpacing(5)

        currentTimeLbl = QtGui.QLabel('Current time')
        currentTime = Alarm.CurrentTimeLabel()
        grid.addWidget(currentTimeLbl, 1, 0)
        grid.addWidget(currentTime, 1, 1)

        alarm = Alarm.Alarm()
        alarmTime = Alarm.CurrentAlarmLabel(alarm)
        btnSetAlarm = Alarm.SetAlarmButton(alarm, alarmTime)

        grid.addWidget(btnSetAlarm, 2, 0)
        grid.addWidget(alarmTime, 2, 1)
        grid.addWidget(alarm,2,2)

        btnChooseFile = Sound.BtnChooseFile()
        grid.addWidget(btnChooseFile, 3, 0)
        camScreen = ComputerVision.CamScreen(cam)
        grid.addWidget(camScreen, 3, 1, 5, 1)

        inference_engine = Inference.InferenceEngine(cam)
        grid.addWidget(inference_engine, 4, 0, 1, 1)

        sound_engine = Sound.SoundEngine(inference_engine, alarm)
        grid.addWidget(sound_engine, 4, 0, 1, 2)

        self.setLayout(grid)

        self.setGeometry(200, 200, 600, 400)
        self.setWindowTitle('Review')
        self.show()




if __name__ == "__main__":
    app = QApplication(sys.argv)
    myWindow = UI()
    myWindow.show()
    app.exec_()
    cam.stop()