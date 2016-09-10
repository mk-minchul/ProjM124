TEMPLATE = lib
CONFIG += warn_on plugin
QT -= gui
QT += xmlpatterns network
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtXmlPatterns.pyd
    target.files = QtXmlPatterns.pyd
    LIBS += -L/usr/lib -lpython27
} else {
    PY_MODULE = QtXmlPatterns.so
    target.files = QtXmlPatterns.so
}

target.CONFIG = no_check_exist
target.path = /usr/lib/python2.7/dist-packages/PyQt4
INSTALLS += target
sip.path = /usr/share/sip/PyQt4/QtXmlPatterns
sip.files = ../sip/QtXmlPatterns/qabstractmessagehandler.sip ../sip/QtXmlPatterns/qxmlschema.sip ../sip/QtXmlPatterns/qabstractxmlreceiver.sip ../sip/QtXmlPatterns/qsourcelocation.sip ../sip/QtXmlPatterns/qxmlresultitems.sip ../sip/QtXmlPatterns/qxmlformatter.sip ../sip/QtXmlPatterns/qxmlserializer.sip ../sip/QtXmlPatterns/qxmlschemavalidator.sip ../sip/QtXmlPatterns/QtXmlPatternsmod.sip ../sip/QtXmlPatterns/qxmlnamepool.sip ../sip/QtXmlPatterns/qxmlname.sip ../sip/QtXmlPatterns/qxmlquery.sip ../sip/QtXmlPatterns/qsimplexmlnodemodel.sip ../sip/QtXmlPatterns/qabstractxmlnodemodel.sip ../sip/QtXmlPatterns/qabstracturiresolver.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtXmlPatterns.exp
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

TARGET = QtXmlPatterns
HEADERS = sipAPIQtXmlPatterns.h
SOURCES = sipQtXmlPatternsQAbstractXmlNodeModel.cpp sipQtXmlPatternsQXmlSchema.cpp sipQtXmlPatternsQVector0100QXmlName.cpp sipQtXmlPatternsQXmlSerializer.cpp sipQtXmlPatternsQSimpleXmlNodeModel.cpp sipQtXmlPatternscmodule.cpp sipQtXmlPatternsQSourceLocation.cpp sipQtXmlPatternsQXmlNodeModelIndex.cpp sipQtXmlPatternsQXmlSchemaValidator.cpp sipQtXmlPatternsQXmlName.cpp sipQtXmlPatternsQXmlResultItems.cpp sipQtXmlPatternsQAbstractXmlReceiver.cpp sipQtXmlPatternsQAbstractMessageHandler.cpp sipQtXmlPatternsQXmlNamePool.cpp sipQtXmlPatternsQXmlFormatter.cpp sipQtXmlPatternsQVector0100QXmlNodeModelIndex.cpp sipQtXmlPatternsQXmlQuery.cpp sipQtXmlPatternsQAbstractUriResolver.cpp sipQtXmlPatternsQXmlItem.cpp
