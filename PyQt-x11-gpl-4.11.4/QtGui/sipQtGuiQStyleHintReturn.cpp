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

#line 1681 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQStyleHintReturn.cpp"



/* Call the instance's destructor. */
extern "C" {static void release_QStyleHintReturn(void *, int);}
static void release_QStyleHintReturn(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStyleHintReturn *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStyleHintReturn(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleHintReturn(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleHintReturn *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleHintReturn *>(sipSrc);
}


extern "C" {static void *array_QStyleHintReturn(SIP_SSIZE_T);}
static void *array_QStyleHintReturn(SIP_SSIZE_T sipNrElem)
{
    return new QStyleHintReturn[sipNrElem];
}


extern "C" {static void *copy_QStyleHintReturn(const void *, SIP_SSIZE_T);}
static void *copy_QStyleHintReturn(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleHintReturn(reinterpret_cast<const QStyleHintReturn *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleHintReturn(sipSimpleWrapper *);}
static void dealloc_QStyleHintReturn(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleHintReturn(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStyleHintReturn(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleHintReturn(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleHintReturn *sipCpp = 0;

    {
        int a0 = QStyleOption::Version;
        int a1 = QStyleHintReturn::SH_Default;

        static const char *sipKwdList[] = {
            sipName_version,
            sipName_type,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|ii", &a0, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleHintReturn(a0,a1);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QStyleHintReturn* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleHintReturn, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleHintReturn(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}

static sipEnumMemberDef enummembers_QStyleHintReturn[] = {
    {sipName_SH_Default, static_cast<int>(QStyleHintReturn::SH_Default), 489},
    {sipName_SH_Mask, static_cast<int>(QStyleHintReturn::SH_Mask), 489},
    {sipName_SH_Variant, static_cast<int>(QStyleHintReturn::SH_Variant), 489},
    {sipName_Type, static_cast<int>(QStyleHintReturn::Type), 490},
    {sipName_Version, static_cast<int>(QStyleHintReturn::Version), 491},
};


extern "C" {static PyObject *varget_QStyleHintReturn_type(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleHintReturn_type(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
    QStyleHintReturn *sipCpp = reinterpret_cast<QStyleHintReturn *>(sipSelf);

    sipVal = sipCpp->type;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QStyleHintReturn_type(void *, PyObject *, PyObject *);}
static int varset_QStyleHintReturn_type(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
    QStyleHintReturn *sipCpp = reinterpret_cast<QStyleHintReturn *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->type = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleHintReturn_version(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleHintReturn_version(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
    QStyleHintReturn *sipCpp = reinterpret_cast<QStyleHintReturn *>(sipSelf);

    sipVal = sipCpp->version;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QStyleHintReturn_version(void *, PyObject *, PyObject *);}
static int varset_QStyleHintReturn_version(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
    QStyleHintReturn *sipCpp = reinterpret_cast<QStyleHintReturn *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->version = sipVal;

    return 0;
}

sipVariableDef variables_QStyleHintReturn[] = {
    {InstanceVariable, sipName_type, (PyMethodDef *)varget_QStyleHintReturn_type, (PyMethodDef *)varset_QStyleHintReturn_type, NULL, NULL},
    {InstanceVariable, sipName_version, (PyMethodDef *)varget_QStyleHintReturn_version, (PyMethodDef *)varset_QStyleHintReturn_version, NULL, NULL},
};

PyDoc_STRVAR(doc_QStyleHintReturn, "\1QStyleHintReturn(version: int = QStyleOption.Version, type: int = QStyleHintReturn.SH_Default)\n"
    "QStyleHintReturn(QStyleHintReturn)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QStyleHintReturn = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QStyleHintReturn,
        {0}
    },
    {
        sipNameNr_QStyleHintReturn,
        {0, 0, 1},
        0, 0,
        5, enummembers_QStyleHintReturn,
        2, variables_QStyleHintReturn,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleHintReturn,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QStyleHintReturn,
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
    dealloc_QStyleHintReturn,
    assign_QStyleHintReturn,
    array_QStyleHintReturn,
    copy_QStyleHintReturn,
    release_QStyleHintReturn,
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
