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


import sys
from PyQt4.QtGui import *
from PyQt4.QtCore import *

from PyQt4 import QtGui, QtCore




# this is a threaded video stream
cam = Camera(camnum=0, width= 400).start()
print "Starting webcam"

class UI(QFrame):
    def __init__(self):
        super(UI, self).__init__()

        self.initUI()

    def initUI(self):
        grid = QtGui.QGridLayout()
        grid.setSpacing(5)

        title = QtGui.QLabel('Set Alarm')
        titleEdit = QtGui.QLineEdit()
        author = QtGui.QLabel('Train model')
        authorEdit = QtGui.QLineEdit()

        grid.addWidget(title, 1, 0)
        grid.addWidget(titleEdit, 1, 1)

        grid.addWidget(author, 2, 0)
        grid.addWidget(authorEdit, 2, 1)

        btnChooseFile = Sound.BtnChooseFile()
        grid.addWidget(btnChooseFile, 3, 0)
        camScreen = ComputerVision.CamScreen(cam)
        grid.addWidget(camScreen, 3, 1, 5, 1)

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