/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.18.1
 *
 * Copyright (c) 2015 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt4.
 * 
 * This file may be used under the terms of the GNU General Public License
 * version 3.0 as published by the Free Software Foundation and appearing in
 * the file LICENSE included in the packaging of this file.  Please review the
 * following information to ensure the GNU General Public License version 3.0
 * requirements will be met: http://www.gnu.org/copyleft/gpl.html.
 * 
 * If you do not wish to use this file under the terms of the GPL version 3.0
 * then you may purchase a commercial license.  For more information contact
 * info@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtGui.h"

#line 26 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qabstracttextdocumentlayout.sip"
#include <qabstracttextdocumentlayout.h>
#line 46 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qabstracttextdocumentlayout.sip"
#include <qabstracttextdocumentlayout.h>
#line 31 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQAbstractTextDocumentLayoutPaintContext.cpp"

#line 163 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 35 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQAbstractTextDocumentLayoutPaintContext.cpp"
#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qpalette.sip"
#include <qpalette.h>
#line 38 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQAbstractTextDocumentLayoutPaintContext.cpp"
#line 28 "sip/QtCore/qvector.sip"
#include <qvector.h>
#line 41 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQAbstractTextDocumentLayoutPaintContext.cpp"
#line 26 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qabstracttextdocumentlayout.sip"
#include <qabstracttextdocumentlayout.h>
#line 36 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qabstracttextdocumentlayout.sip"
#include <qabstracttextdocumentlayout.h>
#line 46 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQAbstractTextDocumentLayoutPaintContext.cpp"


/* Call the instance's destructor. */
extern "C" {static void release_QAbstractTextDocumentLayout_PaintContext(void *, int);}
static void release_QAbstractTextDocumentLayout_PaintContext(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QAbstractTextDocumentLayout::PaintContext *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QAbstractTextDocumentLayout_PaintContext(void *, SIP_SSIZE_T, const void *);}
static void assign_QAbstractTextDocumentLayout_PaintContext(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QAbstractTextDocumentLayout::PaintContext *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QAbstractTextDocumentLayout::PaintContext *>(sipSrc);
}


extern "C" {static void *array_QAbstractTextDocumentLayout_PaintContext(SIP_SSIZE_T);}
static void *array_QAbstractTextDocumentLayout_PaintContext(SIP_SSIZE_T sipNrElem)
{
    return new QAbstractTextDocumentLayout::PaintContext[sipNrElem];
}


extern "C" {static void *copy_QAbstractTextDocumentLayout_PaintContext(const void *, SIP_SSIZE_T);}
static void *copy_QAbstractTextDocumentLayout_PaintContext(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QAbstractTextDocumentLayout::PaintContext(reinterpret_cast<const QAbstractTextDocumentLayout::PaintContext *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QAbstractTextDocumentLayout_PaintContext(sipSimpleWrapper *);}
static void dealloc_QAbstractTextDocumentLayout_PaintContext(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QAbstractTextDocumentLayout_PaintContext(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QAbstractTextDocumentLayout_PaintContext(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QAbstractTextDocumentLayout_PaintContext(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QAbstractTextDocumentLayout::PaintContext *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QAbstractTextDocumentLayout::PaintContext();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QAbstractTextDocumentLayout::PaintContext* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QAbstractTextDocumentLayout_PaintContext, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QAbstractTextDocumentLayout::PaintContext(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static PyObject *varget_QAbstractTextDocumentLayout_PaintContext_clip(void *, PyObject *, PyObject *);}
static PyObject *varget_QAbstractTextDocumentLayout_PaintContext_clip(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QRectF*sipVal;
    QAbstractTextDocumentLayout::PaintContext *sipCpp = reinterpret_cast<QAbstractTextDocumentLayout::PaintContext *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -157);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->clip;

    sipPy = sipConvertFromType(sipVal, sipType_QRectF, NULL);
    sipKeepReference(sipPySelf, -157, sipPy);

    return sipPy;
}


extern "C" {static int varset_QAbstractTextDocumentLayout_PaintContext_clip(void *, PyObject *, PyObject *);}
static int varset_QAbstractTextDocumentLayout_PaintContext_clip(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QRectF*sipVal;
    QAbstractTextDocumentLayout::PaintContext *sipCpp = reinterpret_cast<QAbstractTextDocumentLayout::PaintContext *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QRectF *>(sipForceConvertToType(sipPy,sipType_QRectF,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->clip = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QAbstractTextDocumentLayout_PaintContext_cursorPosition(void *, PyObject *, PyObject *);}
static PyObject *varget_QAbstractTextDocumentLayout_PaintContext_cursorPosition(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
    QAbstractTextDocumentLayout::PaintContext *sipCpp = reinterpret_cast<QAbstractTextDocumentLayout::PaintContext *>(sipSelf);

    sipVal = sipCpp->cursorPosition;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QAbstractTextDocumentLayout_PaintContext_cursorPosition(void *, PyObject *, PyObject *);}
static int varset_QAbstractTextDocumentLayout_PaintContext_cursorPosition(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
    QAbstractTextDocumentLayout::PaintContext *sipCpp = reinterpret_cast<QAbstractTextDocumentLayout::PaintContext *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->cursorPosition = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QAbstractTextDocumentLayout_PaintContext_palette(void *, PyObject *, PyObject *);}
static PyObject *varget_QAbstractTextDocumentLayout_PaintContext_palette(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QPalette*sipVal;
    QAbstractTextDocumentLayout::PaintContext *sipCpp = reinterpret_cast<QAbstractTextDocumentLayout::PaintContext *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -158);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->palette;

    sipPy = sipConvertFromType(sipVal, sipType_QPalette, NULL);
    sipKeepReference(sipPySelf, -158, sipPy);

    return sipPy;
}


extern "C" {static int varset_QAbstractTextDocumentLayout_PaintContext_palette(void *, PyObject *, PyObject *);}
static int varset_QAbstractTextDocumentLayout_PaintContext_palette(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QPalette*sipVal;
    QAbstractTextDocumentLayout::PaintContext *sipCpp = reinterpret_cast<QAbstractTextDocumentLayout::PaintContext *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QPalette *>(sipForceConvertToType(sipPy,sipType_QPalette,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->palette = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QAbstractTextDocumentLayout_PaintContext_selections(void *, PyObject *, PyObject *);}
static PyObject *varget_QAbstractTextDocumentLayout_PaintContext_selections(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QVector<QAbstractTextDocumentLayout::Selection>*sipVal;
    QAbstractTextDocumentLayout::PaintContext *sipCpp = reinterpret_cast<QAbstractTextDocumentLayout::PaintContext *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -159);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->selections;

    sipPy = sipConvertFromType(sipVal, sipType_QVector_0100QAbstractTextDocumentLayout_Selection, NULL);
    sipKeepReference(sipPySelf, -159, sipPy);

    return sipPy;
}


extern "C" {static int varset_QAbstractTextDocumentLayout_PaintContext_selections(void *, PyObject *, PyObject *);}
static int varset_QAbstractTextDocumentLayout_PaintContext_selections(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QVector<QAbstractTextDocumentLayout::Selection>*sipVal;
    QAbstractTextDocumentLayout::PaintContext *sipCpp = reinterpret_cast<QAbstractTextDocumentLayout::PaintContext *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QVector<QAbstractTextDocumentLayout::Selection> *>(sipForceConvertToType(sipPy,sipType_QVector_0100QAbstractTextDocumentLayout_Selection,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->selections = *sipVal;

    sipReleaseType(sipVal, sipType_QVector_0100QAbstractTextDocumentLayout_Selection, sipValState);

    return 0;
}

sipVariableDef variables_QAbstractTextDocumentLayout_PaintContext[] = {
    {InstanceVariable, sipName_clip, (PyMethodDef *)varget_QAbstractTextDocumentLayout_PaintContext_clip, (PyMethodDef *)varset_QAbstractTextDocumentLayout_PaintContext_clip, NULL, NULL},
    {InstanceVariable, sipName_cursorPosition, (PyMethodDef *)varget_QAbstractTextDocumentLayout_PaintContext_cursorPosition, (PyMethodDef *)varset_QAbstractTextDocumentLayout_PaintContext_cursorPosition, NULL, NULL},
    {InstanceVariable, sipName_palette, (PyMethodDef *)varget_QAbstractTextDocumentLayout_PaintContext_palette, (PyMethodDef *)varset_QAbstractTextDocumentLayout_PaintContext_palette, NULL, NULL},
    {InstanceVariable, sipName_selections, (PyMethodDef *)varget_QAbstractTextDocumentLayout_PaintContext_selections, (PyMethodDef *)varset_QAbstractTextDocumentLayout_PaintContext_selections, NULL, NULL},
};

PyDoc_STRVAR(doc_QAbstractTextDocumentLayout_PaintContext, "\1QAbstractTextDocumentLayout.PaintContext()\n"
    "QAbstractTextDocumentLayout.PaintContext(QAbstractTextDocumentLayout.PaintContext)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QAbstractTextDocumentLayout_PaintContext = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QAbstractTextDocumentLayout__PaintContext,
        {0}
    },
    {
        sipNameNr_PaintContext,
        {30, 255, 0},
        0, 0,
        0, 0,
        4, variables_QAbstractTextDocumentLayout_PaintContext,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QAbstractTextDocumentLayout_PaintContext,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QAbstractTextDocumentLayout_PaintContext,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QAbstractTextDocumentLayout_PaintContext,
    assign_QAbstractTextDocumentLayout_PaintContext,
    array_QAbstractTextDocumentLayout_PaintContext,
    copy_QAbstractTextDocumentLayout_PaintContext,
    release_QAbstractTextDocumentLayout_PaintContext,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    0,
    0,
    0
};
