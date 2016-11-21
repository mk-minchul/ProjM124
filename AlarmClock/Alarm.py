from PyQt4 import QtGui, QtCore
import datetime

def determine_sleepingtime(h, m, duration):
    """
    :param h: integer betwen 0 and 24
    :param m: integer between 0 and 60
    :param duration:  real number signifying hours. Ex) 1: 1 hour, 0.5: 30 minnutes.
    :return: alarm starting time , alarm ending time in datetime format.
    """

    datetime_alarm = datetime.time(h, m)

    if datetime_alarm >= datetime.datetime.now().time():
        year = datetime.datetime.now().year
        month = datetime.datetime.now().month
        day = datetime.datetime.now().day
        return datetime.datetime(year, month, day, h, m), \
               datetime.datetime(year, month, day, h, m) + datetime.timedelta(hours=duration)
    else:
        tomorrow = datetime.datetime.now() + datetime.timedelta(days=1)
        year = tomorrow.year
        month = tomorrow.month
        day = tomorrow.day
        return datetime.datetime(year, month, day, h, m), \
               datetime.datetime(year, month, day, h, m) + datetime.timedelta(hours=duration)


class Alarm:
    def __init__(self, h = 5, m = 30, dur = 1):
        self.beg, self.end = determine_sleepingtime(h, m, dur)

    def set(self, h, m, dur):
        self.beg, self.end = determine_sleepingtime(h, m, dur)

    def get(self):
        return self.beg, self.end

class CurrentTimeLabel(QtGui.QLabel):
    Speed = 300
    def __init__(self):
        QtGui.QLabel.__init__(self, 'current time')
        self.timer = QtCore.QBasicTimer()
        self.timer.start(CurrentTimeLabel.Speed, self)

    def timerEvent(self, event):
        if event.timerId() == self.timer.timerId():
            current = datetime.datetime.now().strftime("%H %M %S")
            self.setText(current)

        else:
            super(CurrentTimeLabel, self).timerEvent(event)

class CurrentAlarmLabel(QtGui.QLabel):
    def __init__(self, alarm):
        self.beg, self.end = alarm.get()
        alarm_time = str(self.beg) + " ~ " + str(self.end)
        QtGui.QLabel.__init__(self, alarm_time )

class SetAlarmButton(QtGui.QPushButton):
    def __init__(self, alarm, currentAlarmLabel):
        self.alarm = alarm
        self.currentAlarmLabel = currentAlarmLabel
        self.h = 6
        self.m = 20
        self.dur = 1
        QtGui.QPushButton.__init__(self, "set alarm")

        self.clicked.connect(self.handleButton)

    def handleButton(self):
        dlg = SetTimeDialog()
        dlg.exec_()
        h = int(dlg.h)
        m = int(dlg.m)
        dur = int(dlg.dur)

        self.alarm.set(h, m, dur)
        self.beg, self.end = self.alarm.get()
        alarm_time = str(self.beg) + " ~ " + str(self.end)
        self.currentAlarmLabel.setText(alarm_time)


class SetTimeDialog(QtGui.QDialog):
    # this gets called when you press setAlarmTime button
    def __init__(self):
        super(SetTimeDialog, self).__init__()
        self.setupUI()

        self.h = None
        self.m = None
        self.dur = None

    def setupUI(self):
        self.setGeometry(400, 200, 300, 100)
        self.setWindowTitle("Set Time")


        label1 = QtGui.QLabel("hour: ")
        label2 = QtGui.QLabel("minute: ")
        label3 = QtGui.QLabel("duration: ")

        self.lineEdit1 = QtGui.QLineEdit()
        self.lineEdit2 = QtGui.QLineEdit()
        self.lineEdit3 = QtGui.QLineEdit()

        self.pushButton1= QtGui.QPushButton("set")
        self.pushButton1.clicked.connect(self.pushButtonClicked)

        layout = QtGui.QGridLayout()
        layout.addWidget(label1, 0, 0)
        layout.addWidget(self.lineEdit1, 0, 1)
        layout.addWidget(label2, 1, 0)
        layout.addWidget(self.lineEdit2, 1, 1)
        layout.addWidget(label3, 2, 0)
        layout.addWidget(self.lineEdit3, 2, 1)
        layout.addWidget(self.pushButton1, 0, 2)

        self.setLayout(layout)

    def pushButtonClicked(self):
        self.h = self.lineEdit1.text()
        self.m = self.lineEdit2.text()
        self.dur = self.lineEdit3.text()
        self.close()

