TEMPLATE = lib
CONFIG += warn_on plugin
QT -= gui
QT += network
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtNetwork.pyd
    target.files = QtNetwork.pyd
    LIBS += -L/usr/lib -lpython27
} else {
    PY_MODULE = QtNetwork.so
    target.files = QtNetwork.so
}

target.CONFIG = no_check_exist
target.path = /usr/lib/python2.7/dist-packages/PyQt4
INSTALLS += target
sip.path = /usr/share/sip/PyQt4/QtNetwork
sip.files = ../sip/QtNetwork/qlocalsocket.sip ../sip/QtNetwork/qnetworkproxy.sip ../sip/QtNetwork/qnetworkconfigmanager.sip ../sip/QtNetwork/qftp.sip ../sip/QtNetwork/qsslerror.sip ../sip/QtNetwork/qdnslookup.sip ../sip/QtNetwork/qnetworkcookiejar.sip ../sip/QtNetwork/qhostinfo.sip ../sip/QtNetwork/qnetworkdiskcache.sip ../sip/QtNetwork/qauthenticator.sip ../sip/QtNetwork/qsslcipher.sip ../sip/QtNetwork/qnetworkcookie.sip ../sip/QtNetwork/qsslcertificate.sip ../sip/QtNetwork/qtcpsocket.sip ../sip/QtNetwork/qnetworkinterface.sip ../sip/QtNetwork/qsslkey.sip ../sip/QtNetwork/qsslconfiguration.sip ../sip/QtNetwork/qnetworksession.sip ../sip/QtNetwork/qnetworkrequest.sip ../sip/QtNetwork/qtcpserver.sip ../sip/QtNetwork/qnetworkconfiguration.sip ../sip/QtNetwork/qabstractnetworkcache.sip ../sip/QtNetwork/qsslsocket.sip ../sip/QtNetwork/qurlinfo.sip ../sip/QtNetwork/qhttp.sip ../sip/QtNetwork/qlocalserver.sip ../sip/QtNetwork/qhttpmultipart.sip ../sip/QtNetwork/qnetworkreply.sip ../sip/QtNetwork/qudpsocket.sip ../sip/QtNetwork/qabstractsocket.sip ../sip/QtNetwork/qssl.sip ../sip/QtNetwork/qsslcertificateextension.sip ../sip/QtNetwork/qhostaddress.sip ../sip/QtNetwork/QtNetworkmod.sip ../sip/QtNetwork/qnetworkaccessmanager.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtNetwork.exp
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

TARGET = QtNetwork
HEADERS = sipAPIQtNetwork.h
SOURCES = sipQtNetworkQHttpResponseHeader.cpp sipQtNetworkQSslConfiguration.cpp sipQtNetworkQHttpRequestHeader.cpp sipQtNetworkQSslCertificate.cpp sipQtNetworkQHostInfo.cpp sipQtNetworkQNetworkSession.cpp sipQtNetworkQUrlInfo.cpp sipQtNetworkQList0100QNetworkAddressEntry.cpp sipQtNetworkQSsl.cpp sipQtNetworkQHttpPart.cpp sipQtNetworkQTcpSocket.cpp sipQtNetworkQHttpHeader.cpp sipQtNetworkQList0100QNetworkProxy.cpp sipQtNetworkQNetworkProxyFactory.cpp sipQtNetworkQMultiMap0100QSslAlternateNameEntryType0100QString.cpp sipQtNetworkQUdpSocketBindMode.cpp sipQtNetworkQNetworkRequest.cpp sipQtNetworkQSslCipher.cpp sipQtNetworkQNetworkProxyCapabilities.cpp sipQtNetworkQSslError.cpp sipQtNetworkQNetworkInterface.cpp sipQtNetworkQTcpServer.cpp sipQtNetworkQNetworkInterfaceInterfaceFlags.cpp sipQtNetworkQNetworkCacheMetaData.cpp sipQtNetworkQUdpSocket.cpp sipQtNetworkQSslSocket.cpp sipQtNetworkQList0100QSslError.cpp sipQtNetworkQList0100QHostAddress.cpp sipQtNetworkQNetworkCookieJar.cpp sipQtNetworkQLocalServer.cpp sipQtNetworkQNetworkConfigurationManagerCapabilities.cpp sipQtNetworkQNetworkReply.cpp sipQtNetworkQHostAddress.cpp sipQtNetworkQNetworkConfigurationStateFlags.cpp sipQtNetworkQAbstractSocket.cpp sipQtNetworkQLocalSocket.cpp sipQtNetworkQHash0100QNetworkRequestAttribute0100QVariant.cpp sipQtNetworkQNetworkConfigurationManager.cpp sipQtNetworkQList0100QSslCipher.cpp sipQtNetworkQList0100QNetworkInterface.cpp sipQtNetworkQAuthenticator.cpp sipQtNetworkQ_IPV6ADDR.cpp sipQtNetworkQSslSslOptions.cpp sipQtNetworkQNetworkConfiguration.cpp sipQtNetworkQHttpMultiPart.cpp sipQtNetworkQPair0100QHostAddress1800.cpp sipQtNetworkQSslKey.cpp sipQtNetworkQNetworkAccessManager.cpp sipQtNetworkQList0100QSslCertificate.cpp sipQtNetworkQNetworkDiskCache.cpp sipQtNetworkQAbstractNetworkCache.cpp sipQtNetworkcmodule.cpp sipQtNetworkQNetworkProxy.cpp sipQtNetworkQFtp.cpp sipQtNetworkQHttp.cpp sipQtNetworkQList0100QNetworkConfiguration.cpp sipQtNetworkQList0100QNetworkCookie.cpp sipQtNetworkQNetworkProxyQuery.cpp sipQtNetworkQNetworkCookie.cpp sipQtNetworkQNetworkAddressEntry.cpp
