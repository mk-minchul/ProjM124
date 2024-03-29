TEMPLATE = lib
CONFIG += warn_on plugin
QT += scripttools script
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtScriptTools.pyd
    target.files = QtScriptTools.pyd
    LIBS += -L/usr/lib -lpython27
} else {
    PY_MODULE = QtScriptTools.so
    target.files = QtScriptTools.so
}

target.CONFIG = no_check_exist
target.path = /usr/lib/python2.7/dist-packages/PyQt4
INSTALLS += target
sip.path = /usr/share/sip/PyQt4/QtScriptTools
sip.files = ../sip/QtScriptTools/QtScriptToolsmod.sip ../sip/QtScriptTools/qscriptenginedebugger.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtScriptTools.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /usr/include/python2.7

win32 {
    QMAKE_POST_LINK = $(COPY_FILE) $(DESTDIR_TARGET) $$PY_MODULE
} else {
    QMAKE_POST_LINK = $(COPY_FILE) $(TARGET) $$PY_MODULE
}
macx {
    QMAKE_LFLAGS += "-undefined dynamic_lookup"
}

TARGET = QtScriptTools
HEADERS = sipAPIQtScriptTools.h
SOURCES = sipQtScriptToolsQScriptEngineDebugger.cpp sipQtScriptToolscmodule.cpp
