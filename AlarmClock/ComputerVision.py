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


from PyQt4.QtGui import *
from PyQt4.QtCore import *


class CamScreen(QWidget):
    Speed = 30

    def __init__(self, cam):
        self.cam = cam
        super(CamScreen, self).__init__()
        self.setWindowTitle("CamScreen")
        self.setGeometry(300, 300, 400, 300)

        #getting the first frame
        self.frame = self.cam.read()

        btn1 = QPushButton("Click me", self)
        btn1.move(40, 20)
        btn1.clicked.connect(self.btn1_clicked)

        self.timer = QBasicTimer()
        self.timer.start(CamScreen.Speed, self)

    def btn1_clicked(self):
        self.frame = self.cam.read()
        self.update()
        QMessageBox.about(self, "message", "clicked")

        print self.frame

    def paintEvent(self, QPaintEvent):
        # this is called first when the class is initiated
        # and called whenever self.update() is called.
        # the camera is updated using this.

        painter = QPainter()
        painter.begin(self)
        height, width, byteValue = self.frame.shape
        byteValue = byteValue * width

        self.mQImage = QImage(self.frame, width, height, byteValue, QImage.Format_RGB888)

        painter.drawImage(0, 0, self.mQImage)
        painter.end()

    def timerEvent(self, event):

        if event.timerId() == self.timer.timerId():
            self.frame = self.cam.read()
            self.update()

        else:
            super(CamScreen, self).timerEvent(event)
