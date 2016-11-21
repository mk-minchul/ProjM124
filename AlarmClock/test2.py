import sys
import os
print sys.path
sys.path.append('/usr/local/lib/python2.7/site-packages/')     #for allowing importing cv2 in my mac
import numpy
import cv2
from PyQt4.QtGui import *
from PyQt4.QtCore import *
from AlarmClock import Camera

cam = Camera(camnum=0).start()

class MyDialog(QDialog):
    def __init__(self, parent=None):
        super(MyDialog, self).__init__(parent)

        self.cvImage = cam.read()

        height, width, byteValue = self.cvImage.shape
        byteValue = byteValue * width

        cv2.cvtColor(self.cvImage, cv2.COLOR_BGR2RGB, self.cvImage)

        self.mQImage = QImage(self.cvImage, width, height, byteValue, QImage.Format_RGB888)

    def paintEvent(self, QPaintEvent):
        painter = QPainter()
        painter.begin(self)

        self.cvImage = cam.read()

        height, width, byteValue = self.cvImage.shape
        byteValue = byteValue * width

        cv2.cvtColor(self.cvImage, cv2.COLOR_BGR2RGB, self.cvImage)

        self.mQImage = QImage(self.cvImage, width, height, byteValue, QImage.Format_RGB888)

        painter.drawImage(0, 0, self.mQImage)
        painter.end()




if __name__=="__main__":
    import sys
    app = QApplication(sys.argv)
    w = MyDialog()
    #w.resize(600, 400)
    w.show()
    app.exec_()