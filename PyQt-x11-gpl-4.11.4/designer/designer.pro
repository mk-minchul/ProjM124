CONFIG      += plugin release warn_on

greaterThan(QT_MAJOR_VERSION, 4) {
    QT += designer

    # Work around QTBUG-39300.
    CONFIG -= android_install
}

lessThan(QT_MAJOR_VERSION, 5) {
    CONFIG += designer
}

TARGET      = pyqt4
TEMPLATE    = lib

INCLUDEPATH += /usr/include/python2.7
LIBS        += -L/usr/lib/arm-linux-gnueabihf -lpython2.7
DEFINES     += PYTHON_LIB=\\\"libpython2.7.so\\\"

SOURCES     = pluginloader.cpp
HEADERS     = pluginloader.h

# Install.
target.path = /usr/lib/arm-linux-gnueabihf/qt4/plugins/designer

python.path = /usr/lib/arm-linux-gnueabihf/qt4/plugins/designer
python.files = python

INSTALLS    += target python

INCLUDEPATH += /home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/designer
VPATH = /home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/designer

