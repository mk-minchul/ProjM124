TEMPLATE = lib
CONFIG += warn_on plugin
QT += declarative network
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtDeclarative.pyd
    target.files = QtDeclarative.pyd
    LIBS += -L/usr/lib -lpython27
} else {
    PY_MODULE = QtDeclarative.so
    target.files = QtDeclarative.so
}

target.CONFIG = no_check_exist
target.path = /usr/lib/python2.7/dist-packages/PyQt4
INSTALLS += target
sip.path = /usr/share/sip/PyQt4/QtDeclarative
sip.files = ../sip/QtDeclarative/qdeclarativescriptstring.sip ../sip/QtDeclarative/qdeclarativecontext.sip ../sip/QtDeclarative/qdeclarativelist.sip ../sip/QtDeclarative/qpydeclarativepropertyvaluesource.sip ../sip/QtDeclarative/qdeclarativepropertymap.sip ../sip/QtDeclarative/QtDeclarativemod.sip ../sip/QtDeclarative/qdeclarativeview.sip ../sip/QtDeclarative/qdeclarativenetworkaccessmanagerfactory.sip ../sip/QtDeclarative/qdeclarativeparserstatus.sip ../sip/QtDeclarative/qdeclarativeexpression.sip ../sip/QtDeclarative/qpydeclarativelistproperty.sip ../sip/QtDeclarative/qdeclarativecomponent.sip ../sip/QtDeclarative/qdeclarativepropertyvaluesource.sip ../sip/QtDeclarative/qdeclarativeextensionplugin.sip ../sip/QtDeclarative/qdeclarativeengine.sip ../sip/QtDeclarative/qdeclarativeproperty.sip ../sip/QtDeclarative/qdeclarativeerror.sip ../sip/QtDeclarative/qdeclarativeitem.sip ../sip/QtDeclarative/qdeclarativeimageprovider.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtDeclarative.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /usr/include/python2.7
INCLUDEPATH += ../qpy/QtDeclarative

win32 {
    QMAKE_POST_LINK = $(COPY_FILE) $(DESTDIR_TARGET) $$PY_MODULE
} else {
    QMAKE_POST_LINK = $(COPY_FILE) $(TARGET) $$PY_MODULE
}
macx {
    QMAKE_LFLAGS += "-undefined dynamic_lookup"
}

TARGET = QtDeclarative
HEADERS = sipAPIQtDeclarative.h ../qpy/QtDeclarative/qpydeclarativelistproperty.h ../qpy/QtDeclarative/qpydeclarativepropertyvaluesource.h ../qpy/QtDeclarative/qpydeclarative_chimera_helpers.h ../qpy/QtDeclarative/qpydeclarative_api.h ../qpy/QtDeclarative/qpydeclarative_listwrapper.h
SOURCES = sipQtDeclarativeQDeclarativeItem.cpp sipQtDeclarativeQDeclarativeListReference.cpp sipQtDeclarativeQDeclarativeComponent.cpp sipQtDeclarativeQDeclarativeParserStatus.cpp sipQtDeclarativeQDeclarativeListProperty0100QObject.cpp sipQtDeclarativeQDeclarativeExtensionPlugin.cpp sipQtDeclarativecmodule.cpp sipQtDeclarativeQDeclarativePropertyValueSource.cpp sipQtDeclarativeQDeclarativeImageProvider.cpp sipQtDeclarativeQDeclarativePropertyMap.cpp sipQtDeclarativeQDeclarativeScriptString.cpp sipQtDeclarativeQDeclarativeExpression.cpp sipQtDeclarativeQList0100QDeclarativeError.cpp sipQtDeclarativeQDeclarativeEngine.cpp sipQtDeclarativeQDeclarativeProperty.cpp sipQtDeclarativeQDeclarativeError.cpp sipQtDeclarativeQDeclarativeNetworkAccessManagerFactory.cpp sipQtDeclarativeQDeclarativeView.cpp sipQtDeclarativeQDeclarativeContext.cpp sipQtDeclarativeQPyDeclarativePropertyValueSource.cpp ../qpy/QtDeclarative/qpydeclarativelistproperty.cpp ../qpy/QtDeclarative/qpydeclarative_chimera_helpers.cpp ../qpy/QtDeclarative/qpydeclarative_listwrapper.cpp ../qpy/QtDeclarative/qpydeclarative_post_init.cpp
