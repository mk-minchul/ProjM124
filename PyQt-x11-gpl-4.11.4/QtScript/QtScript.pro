TEMPLATE = lib
CONFIG += warn_on plugin
QT -= gui
QT += script
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtScript.pyd
    target.files = QtScript.pyd
    LIBS += -L/usr/lib -lpython27
} else {
    PY_MODULE = QtScript.so
    target.files = QtScript.so
}

target.CONFIG = no_check_exist
target.path = /usr/lib/python2.7/dist-packages/PyQt4
INSTALLS += target
sip.path = /usr/share/sip/PyQt4/QtScript
sip.files = ../sip/QtScript/qscriptstring.sip ../sip/QtScript/qscriptengine.sip ../sip/QtScript/qscriptclass.sip ../sip/QtScript/QtScriptmod.sip ../sip/QtScript/qscriptvalueiterator.sip ../sip/QtScript/qscriptcontext.sip ../sip/QtScript/qscriptcontextinfo.sip ../sip/QtScript/qscriptengineagent.sip ../sip/QtScript/qscriptvalue.sip ../sip/QtScript/qscriptclasspropertyiterator.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtScript.exp
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

TARGET = QtScript
HEADERS = sipAPIQtScript.h
SOURCES = sipQtScriptQScriptContext.cpp sipQtScriptQScriptEngineAgent.cpp sipQtScriptQScriptEngineQObjectWrapOptions.cpp sipQtScriptcmodule.cpp sipQtScriptQScriptClass.cpp sipQtScriptQScriptClassPropertyIterator.cpp sipQtScriptQList0100QScriptContextInfo.cpp sipQtScriptQScriptEngine.cpp sipQtScriptQScriptValueIterator.cpp sipQtScriptQScriptValue.cpp sipQtScriptQScriptValueResolveFlags.cpp sipQtScriptQScriptContextInfo.cpp sipQtScriptQScriptSyntaxCheckResult.cpp sipQtScriptQScriptString.cpp sipQtScriptQScriptClassQueryFlags.cpp sipQtScriptQScriptValuePropertyFlags.cpp sipQtScriptQList0100QScriptValue.cpp
