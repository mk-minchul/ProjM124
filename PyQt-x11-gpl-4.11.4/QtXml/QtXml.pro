TEMPLATE = lib
CONFIG += warn_on plugin
QT -= gui
QT += xml
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtXml.pyd
    target.files = QtXml.pyd
    LIBS += -L/usr/lib -lpython27
} else {
    PY_MODULE = QtXml.so
    target.files = QtXml.so
}

target.CONFIG = no_check_exist
target.path = /usr/lib/python2.7/dist-packages/PyQt4
INSTALLS += target
sip.path = /usr/share/sip/PyQt4/QtXml
sip.files = ../sip/QtXml/qxml.sip ../sip/QtXml/qxmlstream.sip ../sip/QtXml/QtXmlmod.sip ../sip/QtXml/qdom.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtXml.exp
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

TARGET = QtXml
HEADERS = sipAPIQtXml.h
SOURCES = sipQtXmlQXmlNamespaceSupport.cpp sipQtXmlQDomAttr.cpp sipQtXmlQXmlAttributes.cpp sipQtXmlQXmlLexicalHandler.cpp sipQtXmlcmodule.cpp sipQtXmlQDomEntityReference.cpp sipQtXmlQDomEntity.cpp sipQtXmlQXmlParseException.cpp sipQtXmlQDomNotation.cpp sipQtXmlQDomProcessingInstruction.cpp sipQtXmlQXmlInputSource.cpp sipQtXmlQXmlDTDHandler.cpp sipQtXmlQXmlEntityResolver.cpp sipQtXmlQDomElement.cpp sipQtXmlQXmlContentHandler.cpp sipQtXmlQDomNamedNodeMap.cpp sipQtXmlQXmlErrorHandler.cpp sipQtXmlQDomCDATASection.cpp sipQtXmlQXmlLocator.cpp sipQtXmlQXmlReader.cpp sipQtXmlQDomDocument.cpp sipQtXmlQDomDocumentFragment.cpp sipQtXmlQDomText.cpp sipQtXmlQDomNodeList.cpp sipQtXmlQDomComment.cpp sipQtXmlQDomImplementation.cpp sipQtXmlQDomDocumentType.cpp sipQtXmlQXmlSimpleReader.cpp sipQtXmlQDomCharacterData.cpp sipQtXmlQXmlDefaultHandler.cpp sipQtXmlQDomNode.cpp sipQtXmlQXmlDeclHandler.cpp
