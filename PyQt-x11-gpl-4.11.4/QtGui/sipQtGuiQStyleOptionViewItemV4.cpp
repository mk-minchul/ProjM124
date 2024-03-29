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

#line 2107 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQStyleOptionViewItemV4.cpp"

#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qbrush.sip"
#include <qbrush.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQStyleOptionViewItemV4.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 36 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQStyleOptionViewItemV4.cpp"
#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qicon.sip"
#include <qicon.h>
#line 39 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQStyleOptionViewItemV4.cpp"
#line 26 "sip/QtCore/qabstractitemmodel.sip"
#include <qabstractitemmodel.h>
#line 42 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQStyleOptionViewItemV4.cpp"
#line 31 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 45 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQStyleOptionViewItemV4.cpp"
#line 1130 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 48 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQStyleOptionViewItemV4.cpp"
#line 32 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 51 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQStyleOptionViewItemV4.cpp"


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionViewItemV4(void *, int);}
static void release_QStyleOptionViewItemV4(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStyleOptionViewItemV4 *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStyleOptionViewItemV4(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionViewItemV4(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionViewItemV4 *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionViewItemV4 *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionViewItemV4(SIP_SSIZE_T);}
static void *array_QStyleOptionViewItemV4(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionViewItemV4[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionViewItemV4(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionViewItemV4(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionViewItemV4(reinterpret_cast<const QStyleOptionViewItemV4 *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionViewItemV4(sipSimpleWrapper *);}
static void dealloc_QStyleOptionViewItemV4(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionViewItemV4(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStyleOptionViewItemV4(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionViewItemV4(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionViewItemV4 *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionViewItemV4();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QStyleOptionViewItemV4* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionViewItemV4, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionViewItemV4(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QStyleOptionViewItem* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionViewItem, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionViewItemV4(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionViewItemV4[] = {{615, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionViewItemV4[] = {
    {sipName_Beginning, static_cast<int>(QStyleOptionViewItemV4::Beginning), 619},
    {sipName_End, static_cast<int>(QStyleOptionViewItemV4::End), 619},
    {sipName_Invalid, static_cast<int>(QStyleOptionViewItemV4::Invalid), 619},
    {sipName_Middle, static_cast<int>(QStyleOptionViewItemV4::Middle), 619},
    {sipName_OnlyOne, static_cast<int>(QStyleOptionViewItemV4::OnlyOne), 619},
    {sipName_Version, static_cast<int>(QStyleOptionViewItemV4::Version), 618},
};


extern "C" {static PyObject *varget_QStyleOptionViewItemV4_backgroundBrush(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItemV4_backgroundBrush(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QBrush*sipVal;
    QStyleOptionViewItemV4 *sipCpp = reinterpret_cast<QStyleOptionViewItemV4 *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -84);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->backgroundBrush;

    sipPy = sipConvertFromType(sipVal, sipType_QBrush, NULL);
    sipKeepReference(sipPySelf, -84, sipPy);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionViewItemV4_backgroundBrush(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItemV4_backgroundBrush(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QBrush*sipVal;
    QStyleOptionViewItemV4 *sipCpp = reinterpret_cast<QStyleOptionViewItemV4 *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QBrush *>(sipForceConvertToType(sipPy,sipType_QBrush,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->backgroundBrush = *sipVal;

    sipReleaseType(sipVal, sipType_QBrush, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItemV4_checkState(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItemV4_checkState(void *sipSelf, PyObject *, PyObject *)
{
    Qt::CheckState sipVal;
    QStyleOptionViewItemV4 *sipCpp = reinterpret_cast<QStyleOptionViewItemV4 *>(sipSelf);

    sipVal = sipCpp->checkState;

    return sipConvertFromEnum(sipVal, sipType_Qt_CheckState);
}


extern "C" {static int varset_QStyleOptionViewItemV4_checkState(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItemV4_checkState(void *sipSelf, PyObject *sipPy, PyObject *)
{
    Qt::CheckState sipVal;
    QStyleOptionViewItemV4 *sipCpp = reinterpret_cast<QStyleOptionViewItemV4 *>(sipSelf);

    sipVal = (Qt::CheckState)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->checkState = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItemV4_icon(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItemV4_icon(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QIcon*sipVal;
    QStyleOptionViewItemV4 *sipCpp = reinterpret_cast<QStyleOptionViewItemV4 *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -85);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->icon;

    sipPy = sipConvertFromType(sipVal, sipType_QIcon, NULL);
    sipKeepReference(sipPySelf, -85, sipPy);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionViewItemV4_icon(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItemV4_icon(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QIcon*sipVal;
    QStyleOptionViewItemV4 *sipCpp = reinterpret_cast<QStyleOptionViewItemV4 *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QIcon *>(sipForceConvertToType(sipPy,sipType_QIcon,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->icon = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItemV4_index(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItemV4_index(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QModelIndex*sipVal;
    QStyleOptionViewItemV4 *sipCpp = reinterpret_cast<QStyleOptionViewItemV4 *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -86);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->index;

    sipPy = sipConvertFromType(sipVal, sipType_QModelIndex, NULL);
    sipKeepReference(sipPySelf, -86, sipPy);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionViewItemV4_index(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItemV4_index(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QModelIndex*sipVal;
    QStyleOptionViewItemV4 *sipCpp = reinterpret_cast<QStyleOptionViewItemV4 *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QModelIndex *>(sipForceConvertToType(sipPy,sipType_QModelIndex,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->index = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItemV4_text(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItemV4_text(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QString*sipVal;
    QStyleOptionViewItemV4 *sipCpp = reinterpret_cast<QStyleOptionViewItemV4 *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -87);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->text;

    sipPy = sipConvertFromType(sipVal, sipType_QString, NULL);
    sipKeepReference(sipPySelf, -87, sipPy);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionViewItemV4_text(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItemV4_text(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QString*sipVal;
    QStyleOptionViewItemV4 *sipCpp = reinterpret_cast<QStyleOptionViewItemV4 *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QString *>(sipForceConvertToType(sipPy,sipType_QString,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->text = *sipVal;

    sipReleaseType(sipVal, sipType_QString, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionViewItemV4_viewItemPosition(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionViewItemV4_viewItemPosition(void *sipSelf, PyObject *, PyObject *)
{
    QStyleOptionViewItemV4::ViewItemPosition sipVal;
    QStyleOptionViewItemV4 *sipCpp = reinterpret_cast<QStyleOptionViewItemV4 *>(sipSelf);

    sipVal = sipCpp->viewItemPosition;

    return sipConvertFromEnum(sipVal, sipType_QStyleOptionViewItemV4_ViewItemPosition);
}


extern "C" {static int varset_QStyleOptionViewItemV4_viewItemPosition(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionViewItemV4_viewItemPosition(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QStyleOptionViewItemV4::ViewItemPosition sipVal;
    QStyleOptionViewItemV4 *sipCpp = reinterpret_cast<QStyleOptionViewItemV4 *>(sipSelf);

    sipVal = (QStyleOptionViewItemV4::ViewItemPosition)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->viewItemPosition = sipVal;

    return 0;
}

sipVariableDef variables_QStyleOptionViewItemV4[] = {
    {InstanceVariable, sipName_backgroundBrush, (PyMethodDef *)varget_QStyleOptionViewItemV4_backgroundBrush, (PyMethodDef *)varset_QStyleOptionViewItemV4_backgroundBrush, NULL, NULL},
    {InstanceVariable, sipName_checkState, (PyMethodDef *)varget_QStyleOptionViewItemV4_checkState, (PyMethodDef *)varset_QStyleOptionViewItemV4_checkState, NULL, NULL},
    {InstanceVariable, sipName_icon, (PyMethodDef *)varget_QStyleOptionViewItemV4_icon, (PyMethodDef *)varset_QStyleOptionViewItemV4_icon, NULL, NULL},
    {InstanceVariable, sipName_index, (PyMethodDef *)varget_QStyleOptionViewItemV4_index, (PyMethodDef *)varset_QStyleOptionViewItemV4_index, NULL, NULL},
    {InstanceVariable, sipName_text, (PyMethodDef *)varget_QStyleOptionViewItemV4_text, (PyMethodDef *)varset_QStyleOptionViewItemV4_text, NULL, NULL},
    {InstanceVariable, sipName_viewItemPosition, (PyMethodDef *)varget_QStyleOptionViewItemV4_viewItemPosition, (PyMethodDef *)varset_QStyleOptionViewItemV4_viewItemPosition, NULL, NULL},
};

PyDoc_STRVAR(doc_QStyleOptionViewItemV4, "\1QStyleOptionViewItemV4()\n"
    "QStyleOptionViewItemV4(QStyleOptionViewItemV4)\n"
    "QStyleOptionViewItemV4(QStyleOptionViewItem)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QStyleOptionViewItemV4 = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionViewItemV4,
        {0}
    },
    {
        sipNameNr_QStyleOptionViewItemV4,
        {0, 0, 1},
        0, 0,
        6, enummembers_QStyleOptionViewItemV4,
        6, variables_QStyleOptionViewItemV4,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionViewItemV4,
    -1,
    -1,
    supers_QStyleOptionViewItemV4,
    0,
    init_type_QStyleOptionViewItemV4,
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
    dealloc_QStyleOptionViewItemV4,
    assign_QStyleOptionViewItemV4,
    array_QStyleOptionViewItemV4,
    copy_QStyleOptionViewItemV4,
    release_QStyleOptionViewItemV4,
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
