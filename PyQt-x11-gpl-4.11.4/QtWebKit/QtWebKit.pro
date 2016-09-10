TEMPLATE = lib
CONFIG += warn_on plugin
QT += webkit network
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtWebKit.pyd
    target.files = QtWebKit.pyd
    LIBS += -L/usr/lib -lpython27
} else {
    PY_MODULE = QtWebKit.so
    target.files = QtWebKit.so
}

target.CONFIG = no_check_exist
target.path = /usr/lib/python2.7/dist-packages/PyQt4
INSTALLS += target
sip.path = /usr/share/sip/PyQt4/QtWebKit
sip.files = ../sip/QtWebKit/qwebkitglobal.sip ../sip/QtWebKit/qwebview.sip ../sip/QtWebKit/qgraphicswebview.sip ../sip/QtWebKit/qwebpluginfactory.sip ../sip/QtWebKit/qwebframe.sip ../sip/QtWebKit/qwebinspector.sip ../sip/QtWebKit/qwebkitversion.sip ../sip/QtWebKit/qwebhistory.sip ../sip/QtWebKit/qwebsettings.sip ../sip/QtWebKit/qwebsecurityorigin.sip ../sip/QtWebKit/qwebhistoryinterface.sip ../sip/QtWebKit/qwebelement.sip ../sip/QtWebKit/qwebdatabase.sip ../sip/QtWebKit/qwebpage.sip ../sip/QtWebKit/QtWebKitmod.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtWebKit.exp
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

TARGET = QtWebKit
HEADERS = sipAPIQtWebKit.h
SOURCES = sipQtWebKitQMultiMap0100QString0100QString.cpp sipQtWebKitQWebPluginFactoryExtensionReturn.cpp sipQtWebKitQWebPageChooseMultipleFilesExtensionReturn.cpp sipQtWebKitQWebDatabase.cpp sipQtWebKitQWebHistory.cpp sipQtWebKitcmodule.cpp sipQtWebKitQList0100QWebPluginFactoryPlugin.cpp sipQtWebKitQWebInspector.cpp sipQtWebKitQWebPageErrorPageExtensionReturn.cpp sipQtWebKitQWebPageExtensionOption.cpp sipQtWebKitQWebPluginFactoryPlugin.cpp sipQtWebKitQWebHistoryItem.cpp sipQtWebKitQWebPageFindFlags.cpp sipQtWebKitQWebView.cpp sipQtWebKitQList0100QWebElement.cpp sipQtWebKitQWebPluginFactoryMimeType.cpp sipQtWebKitQWebHitTestResult.cpp sipQtWebKitQWebPageExtensionReturn.cpp sipQtWebKitQList0101QWebFrame.cpp sipQtWebKitQList0100QWebPluginFactoryMimeType.cpp sipQtWebKitQList0100QWebDatabase.cpp sipQtWebKitQWebElement.cpp sipQtWebKitQWebElementCollection.cpp sipQtWebKitQWebPageViewportAttributes.cpp sipQtWebKitQWebFrame.cpp sipQtWebKitQWebPluginFactoryExtensionOption.cpp sipQtWebKitQWebPageErrorPageExtensionOption.cpp sipQtWebKitQWebPluginFactory.cpp sipQtWebKitQWebSecurityOrigin.cpp sipQtWebKitQWebHistoryInterface.cpp sipQtWebKitQWebSettings.cpp sipQtWebKitQList0100QWebHistoryItem.cpp sipQtWebKitQList0100QWebSecurityOrigin.cpp sipQtWebKitQGraphicsWebView.cpp sipQtWebKitQWebPageChooseMultipleFilesExtensionOption.cpp sipQtWebKitQWebPage.cpp
