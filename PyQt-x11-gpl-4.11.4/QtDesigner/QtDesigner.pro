TEMPLATE = lib
CONFIG += warn_on plugin
CONFIG += designer
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtDesigner.pyd
    target.files = QtDesigner.pyd
    LIBS += -L/usr/lib -lpython27
} else {
    PY_MODULE = QtDesigner.so
    target.files = QtDesigner.so
}

target.CONFIG = no_check_exist
target.path = /usr/lib/python2.7/dist-packages/PyQt4
INSTALLS += target
sip.path = /usr/share/sip/PyQt4/QtDesigner
sip.files = ../sip/QtDesigner/abstractactioneditor.sip ../sip/QtDesigner/abstractformeditor.sip ../sip/QtDesigner/qpydesignertaskmenuextension.sip ../sip/QtDesigner/taskmenu.sip ../sip/QtDesigner/formbuilder.sip ../sip/QtDesigner/qpydesignerpropertysheetextension.sip ../sip/QtDesigner/propertysheet.sip ../sip/QtDesigner/abstractformbuilder.sip ../sip/QtDesigner/qpydesignercustomwidgetplugin.sip ../sip/QtDesigner/qextensionmanager.sip ../sip/QtDesigner/qpydesignercustomwidgetcollectionplugin.sip ../sip/QtDesigner/extension.sip ../sip/QtDesigner/abstractwidgetbox.sip ../sip/QtDesigner/QtDesignermod.sip ../sip/QtDesigner/abstractformwindow.sip ../sip/QtDesigner/abstractformwindowmanager.sip ../sip/QtDesigner/customwidget.sip ../sip/QtDesigner/qpydesignermembersheetextension.sip ../sip/QtDesigner/container.sip ../sip/QtDesigner/abstractpropertyeditor.sip ../sip/QtDesigner/abstractformwindowcursor.sip ../sip/QtDesigner/qpydesignercontainerextension.sip ../sip/QtDesigner/membersheet.sip ../sip/QtDesigner/default_extensionfactory.sip ../sip/QtDesigner/abstractobjectinspector.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtDesigner.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /usr/include/python2.7
INCLUDEPATH += ../qpy/QtDesigner

win32 {
    QMAKE_POST_LINK = $(COPY_FILE) $(DESTDIR_TARGET) $$PY_MODULE
} else {
    QMAKE_POST_LINK = $(COPY_FILE) $(TARGET) $$PY_MODULE
}
macx {
    QMAKE_LFLAGS += "-undefined dynamic_lookup"
}

TARGET = QtDesigner
HEADERS = sipAPIQtDesigner.h ../qpy/QtDesigner/qpydesignermembersheetextension.h ../qpy/QtDesigner/qpydesignercustomwidgetplugin.h ../qpy/QtDesigner/qpydesignercustomwidgetcollectionplugin.h ../qpy/QtDesigner/qpydesignercontainerextension.h ../qpy/QtDesigner/qpydesignerpropertysheetextension.h ../qpy/QtDesigner/qpydesignertaskmenuextension.h
SOURCES = sipQtDesignerQList0101QDesignerCustomWidgetInterface.cpp sipQtDesignerQDesignerContainerExtension.cpp sipQtDesignerQExtensionManager.cpp sipQtDesignerQDesignerPropertySheetExtension.cpp sipQtDesignerQPyDesignerMemberSheetExtension.cpp sipQtDesignerQDesignerFormWindowCursorInterface.cpp sipQtDesignerQDesignerObjectInspectorInterface.cpp sipQtDesignerQDesignerFormWindowInterfaceFeature.cpp sipQtDesignerQAbstractExtensionManager.cpp sipQtDesignerQExtensionFactory.cpp sipQtDesignerQAbstractExtensionFactory.cpp sipQtDesignerQDesignerMemberSheetExtension.cpp sipQtDesignerQPyDesignerCustomWidgetPlugin.cpp sipQtDesignerQDesignerCustomWidgetInterface.cpp sipQtDesignerQAbstractFormBuilder.cpp sipQtDesignerQDesignerCustomWidgetCollectionInterface.cpp sipQtDesignerQPyDesignerTaskMenuExtension.cpp sipQtDesignerQPyDesignerCustomWidgetCollectionPlugin.cpp sipQtDesignerQDesignerFormWindowInterface.cpp sipQtDesignerQDesignerFormEditorInterface.cpp sipQtDesignerQPyDesignerPropertySheetExtension.cpp sipQtDesignerQFormBuilder.cpp sipQtDesignerQPyDesignerContainerExtension.cpp sipQtDesignerQDesignerPropertyEditorInterface.cpp sipQtDesignerQDesignerActionEditorInterface.cpp sipQtDesignercmodule.cpp sipQtDesignerQDesignerTaskMenuExtension.cpp sipQtDesignerQDesignerFormWindowManagerInterface.cpp sipQtDesignerQDesignerWidgetBoxInterface.cpp
