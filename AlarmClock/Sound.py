from PyQt4 import QtGui, QtCore
from PyQt4.phonon import Phonon
import random
import os

class BtnChooseFile(QtGui.QPushButton):
    def __init__(self):
        QtGui.QPushButton.__init__(self, 'Choose File')
        self.mediaObject = Phonon.MediaObject(self)
        self.audioOutput = Phonon.AudioOutput(Phonon.MusicCategory, self)
        Phonon.createPath(self.mediaObject, self.audioOutput)
        self.mediaObject.stateChanged.connect(self.handleStateChanged)
        self.clicked.connect(self.handleButton)

    def handleButton(self):
        if self.mediaObject.state() == Phonon.PlayingState:
            self.mediaObject.stop()
        else:
            path = QtGui.QFileDialog.getOpenFileName(self, self.text())
            if path:
                path = unicode(path)
                print path
                self.mediaObject.setCurrentSource(Phonon.MediaSource(path))
                self.mediaObject.play()

    def handleStateChanged(self, newstate, oldstate):
        if newstate == Phonon.PlayingState:
            self.setText('Stop')
        elif newstate == Phonon.StoppedState:
            self.setText('Choose File')
        elif newstate == Phonon.ErrorState:
            source = self.mediaObject.currentSource().fileName()
            print 'ERROR: could not play:', source.toLocal8Bit().data()

class SoundEngine(QtGui.QWidget):
    Speed = 300
    def __init__(self, InferenceEngine, Alarm):
        self.InferenceEngine = InferenceEngine
        self.Alarm = Alarm
        self.IS_LIGHT_ON = self.InferenceEngine.IS_LIGHT_ON
        self.IS_ALARM_TIME = self.Alarm.IS_ALARM_TIME
        super(SoundEngine, self).__init__()

        self.mediaObject = Phonon.MediaObject(self)
        self.audioOutput = Phonon.AudioOutput(Phonon.MusicCategory, self)
        Phonon.createPath(self.mediaObject, self.audioOutput)

        self.timer = QtCore.QBasicTimer()
        self.timer.start(SoundEngine.Speed, self)

    def timerEvent(self, event):
        # define what you do in every loop
        if event.timerId() == self.timer.timerId():
            self.IS_LIGHT_ON = self.InferenceEngine.IS_LIGHT_ON
            self.IS_ALARM_TIME = self.Alarm.IS_ALARM_TIME

            # this parts gets called in every loop.
            # this is when both inference and alarm results are positive.
            if (not self.IS_LIGHT_ON) & self.IS_ALARM_TIME:
                if self.mediaObject.state() == Phonon.PlayingState:
                    pass
                else:
                    path = random.choice(os.listdir("Sound/Songs/"))
                    path = path.decode('utf-8', 'ignore')
                    path = os.path.join("Sound/Songs/", path)
                    path = os.path.join(os.getcwd(), path)
                    print path
                    if path:
                        self.mediaObject.setCurrentSource(Phonon.MediaSource(path))
                        self.mediaObject.play()
            else:
                self.mediaObject.stop()
        else:
            super(SoundEngine, self).timerEvent(event)