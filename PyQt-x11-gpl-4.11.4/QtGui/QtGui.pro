TEMPLATE = lib
CONFIG += warn_on plugin
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtGui.pyd
    target.files = QtGui.pyd
    LIBS += -L/usr/lib -lpython27
} else {
    PY_MODULE = QtGui.so
    target.files = QtGui.so
}

target.CONFIG = no_check_exist
target.path = /usr/lib/python2.7/dist-packages/PyQt4
INSTALLS += target
sip.path = /usr/share/sip/PyQt4/QtGui
sip.files = ../sip/QtGui/qplaintextedit.sip ../sip/QtGui/qdialog.sip ../sip/QtGui/qabstractbutton.sip ../sip/QtGui/qdrag.sip ../sip/QtGui/qaction.sip ../sip/QtGui/qcolordialog.sip ../sip/QtGui/qfontmetrics.sip ../sip/QtGui/qtoolbar.sip ../sip/QtGui/qdialogbuttonbox.sip ../sip/QtGui/qtableview.sip ../sip/QtGui/qgraphicslinearlayout.sip ../sip/QtGui/qinputcontextfactory.sip ../sip/QtGui/qstylefactory.sip ../sip/QtGui/qformlayout.sip ../sip/QtGui/qheaderview.sip ../sip/QtGui/qgraphicswidget.sip ../sip/QtGui/qshortcut.sip ../sip/QtGui/qfontcombobox.sip ../sip/QtGui/qstandarditemmodel.sip ../sip/QtGui/qpixmapcache.sip ../sip/QtGui/qwindowdefs.sip ../sip/QtGui/qprinter.sip ../sip/QtGui/qpalette.sip ../sip/QtGui/qgraphicssceneevent.sip ../sip/QtGui/qlayout.sip ../sip/QtGui/qdial.sip ../sip/QtGui/qgraphicsproxywidget.sip ../sip/QtGui/qdirmodel.sip ../sip/QtGui/qgesturerecognizer.sip ../sip/QtGui/qtreewidgetitemiterator.sip ../sip/QtGui/qabstractitemdelegate.sip ../sip/QtGui/qmainwindow.sip ../sip/QtGui/qabstractscrollarea.sip ../sip/QtGui/qcommonstyle.sip ../sip/QtGui/qprinterinfo.sip ../sip/QtGui/qtransform.sip ../sip/QtGui/qfontinfo.sip ../sip/QtGui/qmenubar.sip ../sip/QtGui/qtexttable.sip ../sip/QtGui/qworkspace.sip ../sip/QtGui/qsizegrip.sip ../sip/QtGui/qimage.sip ../sip/QtGui/opengl_types.sip ../sip/QtGui/qiconengine.sip ../sip/QtGui/qcolor.sip ../sip/QtGui/qpicture.sip ../sip/QtGui/qtextdocumentfragment.sip ../sip/QtGui/qkeysequence.sip ../sip/QtGui/qpagesetupdialog.sip ../sip/QtGui/qmenu.sip ../sip/QtGui/qpushbutton.sip ../sip/QtGui/qicon.sip ../sip/QtGui/qx11embed_x11.sip ../sip/QtGui/qmatrix4x4.sip ../sip/QtGui/qgraphicslayout.sip ../sip/QtGui/qitemselectionmodel.sip ../sip/QtGui/qtextdocument.sip ../sip/QtGui/qgroupbox.sip ../sip/QtGui/qwhatsthis.sip ../sip/QtGui/qstyleditemdelegate.sip ../sip/QtGui/qabstractspinbox.sip ../sip/QtGui/qapplication.sip ../sip/QtGui/qcursor.sip ../sip/QtGui/qtextlist.sip ../sip/QtGui/qinputcontext.sip ../sip/QtGui/qrubberband.sip ../sip/QtGui/qabstractitemview.sip ../sip/QtGui/qprintengine.sip ../sip/QtGui/qdatawidgetmapper.sip ../sip/QtGui/qglyphrun.sip ../sip/QtGui/qfileiconprovider.sip ../sip/QtGui/qpixmap.sip ../sip/QtGui/qevent.sip ../sip/QtGui/qundoview.sip ../sip/QtGui/qpainter.sip ../sip/QtGui/qimagereader.sip ../sip/QtGui/qsizepolicy.sip ../sip/QtGui/qlistwidget.sip ../sip/QtGui/qpen.sip ../sip/QtGui/qtoolbutton.sip ../sip/QtGui/qgraphicsitem.sip ../sip/QtGui/qcombobox.sip ../sip/QtGui/qprogressdialog.sip ../sip/QtGui/qtextformat.sip ../sip/QtGui/qtextcursor.sip ../sip/QtGui/qcompleter.sip ../sip/QtGui/qgraphicsview.sip ../sip/QtGui/qtextoption.sip ../sip/QtGui/qgridlayout.sip ../sip/QtGui/qslider.sip ../sip/QtGui/qquaternion.sip ../sip/QtGui/qfilesystemmodel.sip ../sip/QtGui/qtabbar.sip ../sip/QtGui/qmatrix.sip ../sip/QtGui/qstyleoption.sip ../sip/QtGui/qprintpreviewdialog.sip ../sip/QtGui/qstringlistmodel.sip ../sip/QtGui/qmouseeventtransition.sip ../sip/QtGui/qstackedlayout.sip ../sip/QtGui/qsystemtrayicon.sip ../sip/QtGui/qprintpreviewwidget.sip ../sip/QtGui/qbrush.sip ../sip/QtGui/qbitmap.sip ../sip/QtGui/qmdiarea.sip ../sip/QtGui/qregion.sip ../sip/QtGui/qabstractslider.sip ../sip/QtGui/qtextbrowser.sip ../sip/QtGui/qmdisubwindow.sip ../sip/QtGui/qvector2d.sip ../sip/QtGui/qsound.sip ../sip/QtGui/qcalendarwidget.sip ../sip/QtGui/qtablewidget.sip ../sip/QtGui/qgenericmatrix.sip ../sip/QtGui/qfontdatabase.sip ../sip/QtGui/qlistview.sip ../sip/QtGui/qdockwidget.sip ../sip/QtGui/qtoolbox.sip ../sip/QtGui/qstyle.sip ../sip/QtGui/qimagewriter.sip ../sip/QtGui/qpainterpath.sip ../sip/QtGui/qfiledialog.sip ../sip/QtGui/qguiapplication.sip ../sip/QtGui/qsyntaxhighlighter.sip ../sip/QtGui/qlineedit.sip ../sip/QtGui/qrgb.sip ../sip/QtGui/qsplashscreen.sip ../sip/QtGui/qrawfont.sip ../sip/QtGui/qwidgetaction.sip ../sip/QtGui/qpaintdevice.sip ../sip/QtGui/qsessionmanager.sip ../sip/QtGui/qtextdocumentwriter.sip ../sip/QtGui/qcolumnview.sip ../sip/QtGui/qscrollarea.sip ../sip/QtGui/qkeyeventtransition.sip ../sip/QtGui/qpolygon.sip ../sip/QtGui/qundogroup.sip ../sip/QtGui/qscrollbar.sip ../sip/QtGui/qgraphicsgridlayout.sip ../sip/QtGui/qproxymodel.sip ../sip/QtGui/qabstracttextdocumentlayout.sip ../sip/QtGui/qframe.sip ../sip/QtGui/qwizard.sip ../sip/QtGui/qmovie.sip ../sip/QtGui/qundostack.sip ../sip/QtGui/qsplitter.sip ../sip/QtGui/qfontdialog.sip ../sip/QtGui/qpagedpaintdevice.sip ../sip/QtGui/qboxlayout.sip ../sip/QtGui/qtouchdevice.sip ../sip/QtGui/qstatusbar.sip ../sip/QtGui/qpytextobject.sip ../sip/QtGui/qitemdelegate.sip ../sip/QtGui/qx11info_x11.sip ../sip/QtGui/qtooltip.sip ../sip/QtGui/qdrawutil.sip ../sip/QtGui/qidentityproxymodel.sip ../sip/QtGui/qgraphicseffect.sip ../sip/QtGui/qtreeview.sip ../sip/QtGui/qpaintengine.sip ../sip/QtGui/qtextlayout.sip ../sip/QtGui/qtextobject.sip ../sip/QtGui/qlcdnumber.sip ../sip/QtGui/qvector3d.sip ../sip/QtGui/qinputdialog.sip ../sip/QtGui/qprintdialog.sip ../sip/QtGui/qtabwidget.sip ../sip/QtGui/qspinbox.sip ../sip/QtGui/qlabel.sip ../sip/QtGui/qvector4d.sip ../sip/QtGui/qfont.sip ../sip/QtGui/qactiongroup.sip ../sip/QtGui/qabstractproxymodel.sip ../sip/QtGui/qitemeditorfactory.sip ../sip/QtGui/qdatetimeedit.sip ../sip/QtGui/qprogressbar.sip ../sip/QtGui/qdesktopwidget.sip ../sip/QtGui/qbuttongroup.sip ../sip/QtGui/qscreen.sip ../sip/QtGui/qstackedwidget.sip ../sip/QtGui/qsortfilterproxymodel.sip ../sip/QtGui/QtGuimod.sip ../sip/QtGui/qabstractprintdialog.sip ../sip/QtGui/qstylepainter.sip ../sip/QtGui/qwidget.sip ../sip/QtGui/qgraphicstransform.sip ../sip/QtGui/qcheckbox.sip ../sip/QtGui/qmessagebox.sip ../sip/QtGui/qgraphicsscene.sip ../sip/QtGui/qstatictext.sip ../sip/QtGui/qcommandlinkbutton.sip ../sip/QtGui/qfocusframe.sip ../sip/QtGui/qdesktopservices.sip ../sip/QtGui/qtreewidget.sip ../sip/QtGui/qlayoutitem.sip ../sip/QtGui/qtextedit.sip ../sip/QtGui/qimageiohandler.sip ../sip/QtGui/qgraphicsanchorlayout.sip ../sip/QtGui/qradiobutton.sip ../sip/QtGui/qgraphicslayoutitem.sip ../sip/QtGui/qgesture.sip ../sip/QtGui/qerrormessage.sip ../sip/QtGui/qvalidator.sip ../sip/QtGui/qmime.sip ../sip/QtGui/qclipboard.sip ../sip/QtGui/qgraphicsitemanimation.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtGui.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /usr/include/python2.7
INCLUDEPATH += ../qpy/QtGui

win32 {
    QMAKE_POST_LINK = $(COPY_FILE) $(DESTDIR_TARGET) $$PY_MODULE
} else {
    QMAKE_POST_LINK = $(COPY_FILE) $(TARGET) $$PY_MODULE
}
macx {
    QMAKE_LFLAGS += "-undefined dynamic_lookup"
}

TARGET = QtGui
HEADERS = sipAPIQtGui.h ../qpy/QtGui/qpytextobject.h
SOURCES = sipQtGuiQFrame.cpp sipQtGuiQStyleOptionToolButtonToolButtonFeatures.cpp sipQtGuiQVector0600QPair22000100QColor.cpp sipQtGuiQTextBlockFormat.cpp sipQtGuiQMatrix4x3.cpp sipQtGuiQStyleState.cpp sipQtGuiQVector0100QAbstractTextDocumentLayoutSelection.cpp sipQtGuiQToolBar.cpp sipQtGuiQGraphicsWidget.cpp sipQtGuiQGraphicsSimpleTextItem.cpp sipQtGuiQPageSetupDialogPageSetupDialogOptions.cpp sipQtGuiQDialogButtonBox.cpp sipQtGuiQMatrix3x4.cpp sipQtGuiQList0101QGraphicsWidget.cpp sipQtGuiQFileIconProvider.cpp sipQtGuiQSplashScreen.cpp sipQtGuiQList0101QGraphicsTransform.cpp sipQtGuiQProgressDialog.cpp sipQtGuiQStyleOptionRubberBand.cpp sipQtGuiQDataWidgetMapper.cpp sipQtGuiQTextLayout.cpp sipQtGuiQCloseEvent.cpp sipQtGuiQGraphicsSceneDragDropEvent.cpp sipQtGuiQHideEvent.cpp sipQtGuiQGraphicsSceneHelpEvent.cpp sipQtGuiQListWidget.cpp sipQtGuiQDockWidget.cpp sipQtGuiQWizardPage.cpp sipQtGuiQItemEditorFactory.cpp sipQtGuiQPrintEngine.cpp sipQtGuiQShowEvent.cpp sipQtGuiQPixmapCacheKey.cpp sipQtGuiQStyleOptionTitleBar.cpp sipQtGuiQAbstractSlider.cpp sipQtGuiQGraphicsOpacityEffect.cpp sipQtGuiQImageIOHandler.cpp sipQtGuiQImageWriter.cpp sipQtGuiQInputEvent.cpp sipQtGuicmodule.cpp sipQtGuiQStyleOptionFrame.cpp sipQtGuiQStyleOptionSlider.cpp sipQtGuiQTabBar.cpp sipQtGuiQPrintPreviewDialog.cpp sipQtGuiQIconDragEvent.cpp sipQtGuiQMessageBoxStandardButtons.cpp sipQtGuiQPlainTextDocumentLayout.cpp sipQtGuiQTextObjectInterface.cpp sipQtGuiQAbstractGraphicsShapeItem.cpp sipQtGuiQSyntaxHighlighter.cpp sipQtGuiQVector0100QLine.cpp sipQtGuiQTextEditExtraSelection.cpp sipQtGuiQMatrix3x3.cpp sipQtGuiQRadioButton.cpp sipQtGuiQStyleOptionProgressBarV2.cpp sipQtGuiQSystemTrayIcon.cpp sipQtGuiQTextBlock.cpp sipQtGuiQGraphicsScene.cpp sipQtGuiQHeaderView.cpp sipQtGuiQErrorMessage.cpp sipQtGuiQStyledItemDelegate.cpp sipQtGuiQTextCharFormat.cpp sipQtGuiQGraphicsRectItem.cpp sipQtGuiQFontMetricsF.cpp sipQtGuiQPaintEngineDirtyFlags.cpp sipQtGuiQTreeWidget.cpp sipQtGuiQTextItem.cpp sipQtGuiQGraphicsSceneWheelEvent.cpp sipQtGuiQTextListFormat.cpp sipQtGuiQGraphicsItemGraphicsItemFlags.cpp sipQtGuiQGroupBox.cpp sipQtGuiQGraphicsItemGroup.cpp sipQtGuiQFontDialog.cpp sipQtGuiQActionGroup.cpp sipQtGuiQInputDialog.cpp sipQtGuiQTapAndHoldGesture.cpp sipQtGuiQMatrix4x2.cpp sipQtGuiQVBoxLayout.cpp sipQtGuiQStyleOptionTabV2.cpp sipQtGuiQGraphicsBlurEffectBlurHints.cpp sipQtGuiQStyleOptionFrameV2.cpp sipQtGuiQList0100QPolygonF.cpp sipQtGuiQFontDatabase.cpp sipQtGuiQFontComboBox.cpp sipQtGuiQFileOpenEvent.cpp sipQtGuiQAbstractItemView.cpp sipQtGuiQPyTextObject.cpp sipQtGuiQItemSelectionRange.cpp sipQtGuiQGraphicsObject.cpp sipQtGuiQVector0100QTextLength.cpp sipQtGuiQWhatsThisClickedEvent.cpp sipQtGuiQCompleter.cpp sipQtGuiQRegion.cpp sipQtGuiQGraphicsSceneContextMenuEvent.cpp sipQtGuiQStatusTipEvent.cpp sipQtGuiQIconEngineV2AvailableSizesArgument.cpp sipQtGuiQX11Info.cpp sipQtGuiQStyleOptionSpinBox.cpp sipQtGuiQIconEngine.cpp sipQtGuiQItemSelectionModel.cpp sipQtGuiQGraphicsViewCacheMode.cpp sipQtGuiQPixmap.cpp sipQtGuiQMatrix2x4.cpp sipQtGuiQTextFragment.cpp sipQtGuiQFocusFrame.cpp sipQtGuiQFontComboBoxFontFilters.cpp sipQtGuiQLayout.cpp sipQtGuiQList0101QTreeWidgetItem.cpp sipQtGuiQList0101QDockWidget.cpp sipQtGuiQColor.cpp sipQtGuiQSwipeGesture.cpp sipQtGuiQStyleOptionButton.cpp sipQtGuiQStyleOptionComboBox.cpp sipQtGuiQStyleOptionFocusRect.cpp sipQtGuiQPaintEnginePaintEngineFeatures.cpp sipQtGuiQDial.cpp sipQtGuiQWindowStateChangeEvent.cpp sipQtGuiQGraphicsAnchor.cpp sipQtGuiQWidgetItem.cpp sipQtGuiQAbstractPrintDialogPrintDialogOptions.cpp sipQtGuiQList0101QUndoStack.cpp sipQtGuiQStyleOptionViewItemV2.cpp sipQtGuiQStyleSubControls.cpp sipQtGuiQCommandLinkButton.cpp sipQtGuiQList0100QFontDatabaseWritingSystem.cpp sipQtGuiQAbstractTextDocumentLayoutSelection.cpp sipQtGuiQStyleOptionHeader.cpp sipQtGuiQTableWidgetItem.cpp sipQtGuiQGraphicsSceneSceneLayers.cpp sipQtGuiQDateTimeEditSections.cpp sipQtGuiQScrollBar.cpp sipQtGuiQVector0100QTextLayoutFormatRange.cpp sipQtGuiQMatrix3x2.cpp sipQtGuiQIcon.cpp sipQtGuiQItemEditorCreatorBase.cpp sipQtGuiQAbstractButton.cpp sipQtGuiQGraphicsTextItem.cpp sipQtGuiQMatrix.cpp sipQtGuiQMatrix2x2.cpp sipQtGuiQList0100QKeySequence.cpp sipQtGuiQList0100QTouchEventTouchPoint.cpp sipQtGuiQLinearGradient.cpp sipQtGuiQDialogButtonBoxStandardButtons.cpp sipQtGuiQList0100QTextBlock.cpp sipQtGuiQStyleOptionGraphicsItem.cpp sipQtGuiQStackedWidget.cpp sipQtGuiQSortFilterProxyModel.cpp sipQtGuiQList0100QSize.cpp sipQtGuiQStyleOptionTabBarBase.cpp sipQtGuiQKeySequence.cpp sipQtGuiQList0101QStandardItem.cpp sipQtGuiQTextDocumentFindFlags.cpp sipQtGuiQStyleOptionTabCornerWidgets.cpp sipQtGuiQSplitterHandle.cpp sipQtGuiQPrintDialog.cpp sipQtGuiQTableWidget.cpp sipQtGuiQGestureEvent.cpp sipQtGuiQLabel.cpp sipQtGuiQValidator.cpp sipQtGuiQKeyEventTransition.cpp sipQtGuiQContextMenuEvent.cpp sipQtGuiQInputMethodEventAttribute.cpp sipQtGuiQPainter.cpp sipQtGuiQGraphicsSceneResizeEvent.cpp sipQtGuiQStyleOptionViewItemV2ViewItemFeatures.cpp sipQtGuiQRadialGradient.cpp sipQtGuiQVector0100QRect.cpp sipQtGuiQPlainTextEdit.cpp sipQtGuiQWizard.cpp sipQtGuiQGraphicsSceneMoveEvent.cpp sipQtGuiQGraphicsLinearLayout.cpp sipQtGuiQMatrix2x3.cpp sipQtGuiQWidgetRenderFlags.cpp sipQtGuiQRawFont.cpp sipQtGuiQList0101QTableWidgetItem.cpp sipQtGuiQWheelEvent.cpp sipQtGuiQMouseEventTransition.cpp sipQtGuiQMdiAreaAreaOptions.cpp sipQtGuiQGesture.cpp sipQtGuiQFocusEvent.cpp sipQtGuiQActionEvent.cpp sipQtGuiQStyleOptionTabWidgetFrameV2.cpp sipQtGuiQFileDialogOptions.cpp sipQtGuiQIdentityProxyModel.cpp sipQtGuiQSpinBox.cpp sipQtGuiQGraphicsSceneHoverEvent.cpp sipQtGuiQTextFormat.cpp sipQtGuiDisplay.cpp sipQtGuiQTransform.cpp sipQtGuiQTouchEvent.cpp sipQtGuiQTextLayoutFormatRange.cpp sipQtGuiQGraphicsLineItem.cpp sipQtGuiQAction.cpp sipQtGuiQPicture.cpp sipQtGuiQDragMoveEvent.cpp sipQtGuiQDoubleSpinBox.cpp sipQtGuiQWorkspace.cpp sipQtGuiQDialog.cpp sipQtGuiQStyleOptionDockWidget.cpp sipQtGuiQDateEdit.cpp sipQtGuiQTextDocument.cpp sipQtGuiQTextDocumentFragment.cpp sipQtGuiQPixmapCache.cpp sipQtGuiQTextObject.cpp sipQtGuiQTouchEventTouchPoint.cpp sipQtGuiQUndoView.cpp sipQtGuiQTextOptionTab.cpp sipQtGuiQCursor.cpp sipQtGuiQList0100QWizardWizardButton.cpp sipQtGuiQList0100QInputMethodEventAttribute.cpp sipQtGuiQGraphicsViewOptimizationFlags.cpp sipQtGuiQWhatsThis.cpp sipQtGuiQAbstractTextDocumentLayoutPaintContext.cpp sipQtGuiQScrollArea.cpp sipQtGuiQRegExpValidator.cpp sipQtGuiQStyleOptionProgressBar.cpp sipQtGuiQPrinter.cpp sipQtGuiQTextBlockiterator.cpp sipQtGuiQMovie.cpp sipQtGuiQSlider.cpp sipQtGuiQList0101QGraphicsItem.cpp sipQtGuiQMatrix4x4.cpp sipQtGuiQFileDialog.cpp sipQtGuiQDirModel.cpp sipQtGuiQStyleOptionTabBarBaseV2.cpp sipQtGuiQDesktopServices.cpp sipQtGuiQToolTip.cpp sipQtGuiQUndoCommand.cpp sipQtGuiQStyleOptionToolBoxV2.cpp sipQtGuiQTextTableFormat.cpp sipQtGuiQBoxLayout.cpp sipQtGuiQStandardItem.cpp sipQtGuiQButtonGroup.cpp sipQtGuiQAbstractItemViewEditTriggers.cpp sipQtGuiQStyleOptionButtonButtonFeatures.cpp sipQtGuiQDoubleValidator.cpp sipQtGuiQPanGesture.cpp sipQtGuiQStyleOptionMenuItem.cpp sipQtGuiQKeyEvent.cpp sipQtGuiQTabletEvent.cpp sipQtGuiQListView.cpp sipQtGuiQFont.cpp sipQtGuiQDockWidgetDockWidgetFeatures.cpp sipQtGuiQMainWindow.cpp sipQtGuiQCheckBox.cpp sipQtGuiQGraphicsProxyWidget.cpp sipQtGuiQDragEnterEvent.cpp sipQtGuiQTextFormatPageBreakFlags.cpp sipQtGuiQSessionManager.cpp sipQtGuiQGestureRecognizerResult.cpp sipQtGuiQHBoxLayout.cpp sipQtGuiQAbstractSpinBoxStepEnabled.cpp sipQtGuiQGraphicsItem.cpp sipQtGuiQSizePolicyControlTypes.cpp sipQtGuiQItemDelegate.cpp sipQtGuiQList0101QAction.cpp sipQtGuiQStyleOptionTab.cpp sipQtGuiQTextBlockGroup.cpp sipQtGuiQPolygonF.cpp sipQtGuiQDesktopWidget.cpp sipQtGuiQClipboard.cpp sipQtGuiQStyleOption.cpp sipQtGuiQStringListModel.cpp sipQtGuiQColorDialog.cpp sipQtGuiQAbstractItemDelegate.cpp sipQtGuiQPainterPixmapFragment.cpp sipQtGuiQAbstractProxyModel.cpp sipQtGuiQList0100QGlyphRun.cpp sipQtGuiQMenuBar.cpp sipQtGuiQTreeWidgetItemIteratorIteratorFlags.cpp sipQtGuiQPainterPathElement.cpp sipQtGuiQStyleOptionTabV3.cpp sipQtGuiQPainterPath.cpp sipQtGuiQTapGesture.cpp sipQtGuiQCommonStyle.cpp sipQtGuiQResizeEvent.cpp sipQtGuiQStyleOptionSizeGrip.cpp sipQtGuiQStaticText.cpp sipQtGuiQPalette.cpp sipQtGuiQPainterPixmapFragmentHints.cpp sipQtGuiQIntValidator.cpp sipQtGuiQTextFrame.cpp sipQtGuiQGraphicsLayout.cpp sipQtGuiQTextFrameiterator.cpp sipQtGuiQTextLine.cpp sipQtGuiQGraphicsPixmapItem.cpp sipQtGuiQToolButton.cpp sipQtGuiQVector3D.cpp sipQtGuiQPainterRenderHints.cpp sipQtGuiQTextCursor.cpp sipQtGuiQTextBlockUserData.cpp sipQtGuiQTableView.cpp sipQtGuiQHelpEvent.cpp sipQtGuiQQuaternion.cpp sipQtGuiQList0100QRectF.cpp sipQtGuiQPolygon.cpp sipQtGuiQGraphicsGridLayout.cpp sipQtGuiQInputDialogInputDialogOptions.cpp sipQtGuiQPaintDevice.cpp sipQtGuiQSound.cpp sipQtGuiQStyleOptionToolBox.cpp sipQtGuiQTabWidget.cpp sipQtGuiQFormLayout.cpp sipQtGuiQStyleHintReturnVariant.cpp sipQtGuiQVector4D.cpp sipQtGuiQList0101QGraphicsView.cpp sipQtGuiQList0101QWidget.cpp sipQtGuiQPainterPathStroker.cpp sipQtGuiQTextTableCell.cpp sipQtGuiQMenu.cpp sipQtGuiQList0100QTextOptionTab.cpp sipQtGuiQIconEngineV2.cpp sipQtGuiQVector0100QLineF.cpp sipQtGuiQGraphicsEffect.cpp sipQtGuiQTreeWidgetItem.cpp sipQtGuiQGraphicsScale.cpp sipQtGuiQGraphicsPathItem.cpp sipQtGuiQLCDNumber.cpp sipQtGuiQPaintEngine.cpp sipQtGuiQPageSetupDialog.cpp sipQtGuiQGraphicsLayoutItem.cpp sipQtGuiQVector0100QRectF.cpp sipQtGuiQGraphicsColorizeEffect.cpp sipQtGuiQLineEdit.cpp sipQtGuiQFontInfo.cpp sipQtGuiQTextEdit.cpp sipQtGuiQMoveEvent.cpp sipQtGuiQCalendarWidget.cpp sipQtGuiQGraphicsPolygonItem.cpp sipQtGuiQApplication.cpp sipQtGuiQPaintEvent.cpp sipQtGuiQTextDocumentWriter.cpp sipQtGuiQBrush.cpp sipQtGuiQStyleHintReturnMask.cpp sipQtGuiQMouseEvent.cpp sipQtGuiQPrinterInfo.cpp sipQtGuiQGlyphRun.cpp sipQtGuiQList0100QTableWidgetSelectionRange.cpp sipQtGuiQTextItemRenderFlags.cpp sipQtGuiQInputContext.cpp sipQtGuiQStyleOptionFrameV3.cpp sipQtGuiQTimeEdit.cpp sipQtGuiQDateTimeEdit.cpp sipQtGuiQGraphicsItemAnimation.cpp sipQtGuiQX11EmbedContainer.cpp sipQtGuiQTextTable.cpp sipQtGuiQSpacerItem.cpp sipQtGuiQTextBrowser.cpp sipQtGuiQAbstractScrollArea.cpp sipQtGuiQGraphicsRotation.cpp sipQtGuiQLayoutItem.cpp sipQtGuiQMessageBox.cpp sipQtGuiQGraphicsSceneMouseEvent.cpp sipQtGuiQMdiSubWindowSubWindowOptions.cpp sipQtGuiQMap0100QDate0100QTextCharFormat.cpp sipQtGuiQPictureIO.cpp sipQtGuiQGraphicsEllipseItem.cpp sipQtGuiQStylePainter.cpp sipQtGuiQList0101QAbstractButton.cpp sipQtGuiQRubberBand.cpp sipQtGuiQStyleOptionViewItemV4.cpp sipQtGuiQWidget.cpp sipQtGuiQTextList.cpp sipQtGuiQList0101QTextFrame.cpp sipQtGuiQBitmap.cpp sipQtGuiQPen.cpp sipQtGuiQListWidgetItem.cpp sipQtGuiQTextOption.cpp sipQtGuiQTextEditAutoFormatting.cpp sipQtGuiQWidgetAction.cpp sipQtGuiQStatusBar.cpp sipQtGuiQDropEvent.cpp sipQtGuiQFileSystemModel.cpp sipQtGuiQVector0100QTextFormat.cpp sipQtGuiQAbstractSpinBox.cpp sipQtGuiQSizePolicy.cpp sipQtGuiQSplitter.cpp sipQtGuiQShortcutEvent.cpp sipQtGuiQList0100QTextLayoutFormatRange.cpp sipQtGuiQTreeView.cpp sipQtGuiQGraphicsEffectChangeFlags.cpp sipQtGuiQStyleOptionComplex.cpp sipQtGuiQGraphicsDropShadowEffect.cpp sipQtGuiQTreeWidgetItemIterator.cpp sipQtGuiQVector0100QPoint.cpp sipQtGuiQGradient.cpp sipQtGuiQStyleOptionFrameV2FrameFeatures.cpp sipQtGuiQToolBox.cpp sipQtGuiQX11EmbedWidget.cpp sipQtGuiQStyleOptionToolButton.cpp sipQtGuiQTableWidgetSelectionRange.cpp sipQtGuiQAbstractTextDocumentLayout.cpp sipQtGuiQHoverEvent.cpp sipQtGuiQPinchGestureChangeFlags.cpp sipQtGuiQInputContextFactory.cpp sipQtGuiQTextLength.cpp sipQtGuiXEvent.cpp sipQtGuiQt.cpp sipQtGuiQItemSelectionModelSelectionFlags.cpp sipQtGuiQDrag.cpp sipQtGuiQAbstractPrintDialog.cpp sipQtGuiQUndoGroup.cpp sipQtGuiQColumnView.cpp sipQtGuiQMimeSource.cpp sipQtGuiQList0600QPair22000100QPointF.cpp sipQtGuiQMdiArea.cpp sipQtGuiQStyleOptionToolBarToolBarFeatures.cpp sipQtGuiQFontMetrics.cpp sipQtGuiQShortcut.cpp sipQtGuiQGestureRecognizer.cpp sipQtGuiQStyleOptionDockWidgetV2.cpp sipQtGuiQTextTableCellFormat.cpp sipQtGuiQTextInlineObject.cpp sipQtGuiQList0101QListWidgetItem.cpp sipQtGuiQInputMethodEvent.cpp sipQtGuiQStyleHintReturn.cpp sipQtGuiQImage.cpp sipQtGuiQList0101QGesture.cpp sipQtGuiQStyleOptionTabWidgetFrame.cpp sipQtGuiQStandardItemModel.cpp sipQtGuiQMdiSubWindow.cpp sipQtGuiQColorDialogColorDialogOptions.cpp sipQtGuiQStyleOptionViewItemV3.cpp sipQtGuiQPushButton.cpp sipQtGuiQStyleOptionViewItem.cpp sipQtGuiQList0101QMdiSubWindow.cpp sipQtGuiQVector0100QPointF.cpp sipQtGuiQGraphicsAnchorLayout.cpp sipQtGuiQStackedLayout.cpp sipQtGuiQMainWindowDockOptions.cpp sipQtGuiQItemSelection.cpp sipQtGuiQStyleFactory.cpp sipQtGuiQPaintEngineState.cpp sipQtGuiQDragLeaveEvent.cpp sipQtGuiQGraphicsView.cpp sipQtGuiQProxyModel.cpp sipQtGuiQPinchGesture.cpp sipQtGuiQVector2D.cpp sipQtGuiQStyleOptionGroupBox.cpp sipQtGuiQGraphicsTransform.cpp sipQtGuiQTextOptionFlags.cpp sipQtGuiQList0100QPrinterInfo.cpp sipQtGuiQGraphicsSceneEvent.cpp sipQtGuiQGraphicsBlurEffect.cpp sipQtGuiQProgressBar.cpp sipQtGuiQStyleOptionToolBar.cpp sipQtGuiQComboBox.cpp sipQtGuiQWizardWizardOptions.cpp sipQtGuiQPrintPreviewWidget.cpp sipQtGuiQGridLayout.cpp sipQtGuiQStyle.cpp sipQtGuiQUndoStack.cpp sipQtGuiQTextImageFormat.cpp sipQtGuiQList0100QPrinterPageSize.cpp sipQtGuiQSizeGrip.cpp sipQtGuiQFontDialogFontDialogOptions.cpp sipQtGuiQList0100QTextEditExtraSelection.cpp sipQtGuiQImageReader.cpp sipQtGuiQConicalGradient.cpp sipQtGuiQTextFrameFormat.cpp