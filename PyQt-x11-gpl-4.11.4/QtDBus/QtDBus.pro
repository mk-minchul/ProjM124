TEMPLATE = lib
CONFIG += warn_on plugin
QT -= gui
QT += dbus
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtDBus.pyd
    target.files = QtDBus.pyd
    LIBS += -L/usr/lib -lpython27
} else {
    PY_MODULE = QtDBus.so
    target.files = QtDBus.so
}

target.CONFIG = no_check_exist
target.path = /usr/lib/python2.7/dist-packages/PyQt4
INSTALLS += target
sip.path = /usr/share/sip/PyQt4/QtDBus
sip.files = ../sip/QtDBus/qdbuserror.sip ../sip/QtDBus/QtDBusmod.sip ../sip/QtDBus/qdbuspendingcall.sip ../sip/QtDBus/qdbusconnectioninterface.sip ../sip/QtDBus/qdbusunixfiledescriptor.sip ../sip/QtDBus/qdbusconnection.sip ../sip/QtDBus/qdbusservicewatcher.sip ../sip/QtDBus/qpydbusreply.sip ../sip/QtDBus/qdbusinterface.sip ../sip/QtDBus/qdbusargument.sip ../sip/QtDBus/qdbusabstractadaptor.sip ../sip/QtDBus/qdbusabstractinterface.sip ../sip/QtDBus/qdbusextratypes.sip ../sip/QtDBus/qdbusmessage.sip ../sip/QtDBus/qpydbuspendingreply.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtDBus.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /usr/include/python2.7
INCLUDEPATH += ../qpy/QtDBus

win32 {
    QMAKE_POST_LINK = $(COPY_FILE) $(DESTDIR_TARGET) $$PY_MODULE
} else {
    QMAKE_POST_LINK = $(COPY_FILE) $(TARGET) $$PY_MODULE
}
macx {
    QMAKE_LFLAGS += "-undefined dynamic_lookup"
}

TARGET = QtDBus
HEADERS = sipAPIQtDBus.h ../qpy/QtDBus/qpydbuspendingreply.h ../qpy/QtDBus/qpydbus_chimera_helpers.h ../qpy/QtDBus/qpydbus_api.h ../qpy/QtDBus/qpydbusreply.h
SOURCES = sipQtDBusQDBusReply0100QString.cpp sipQtDBusQDBusError.cpp sipQtDBusQDBusReply0400.cpp sipQtDBusQDBusReply0100QStringList.cpp sipQtDBusQDBusSignature.cpp sipQtDBusQPyDBusReply.cpp sipQtDBusQDBusConnectionInterface.cpp sipQtDBusQDBusArgument.cpp sipQtDBusQDBusServiceWatcher.cpp sipQtDBusQDBusInterface.cpp sipQtDBusQDBusObjectPath.cpp sipQtDBusQDBusConnectionRegisterOptions.cpp sipQtDBusQDBusPendingCallWatcher.cpp sipQtDBusQDBusMessage.cpp sipQtDBusQDBusReply1900.cpp sipQtDBusQDBusReply2600.cpp sipQtDBusQDBusAbstractInterface.cpp sipQtDBusQDBusReply0100QDBusConnectionInterfaceRegisterServiceReply.cpp sipQtDBusQPyDBusPendingReply.cpp sipQtDBusQDBusPendingCall.cpp sipQtDBusQDBusConnection.cpp sipQtDBusQDBusUnixFileDescriptor.cpp sipQtDBusQDBusAbstractAdaptor.cpp sipQtDBuscmodule.cpp sipQtDBusQDBus.cpp sipQtDBusQDBusConnectionConnectionCapabilities.cpp sipQtDBusQDBusVariant.cpp sipQtDBusQDBusServiceWatcherWatchMode.cpp ../qpy/QtDBus/qpydbusreply.cpp ../qpy/QtDBus/qpydbus_chimera_helpers.cpp ../qpy/QtDBus/qpydbuspendingreply.cpp ../qpy/QtDBus/qpydbus_post_init.cpp
