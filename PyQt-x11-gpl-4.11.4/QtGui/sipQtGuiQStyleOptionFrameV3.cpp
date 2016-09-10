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

#line 2142 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQStyleOptionFrameV3.cpp"

#line 26 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qframe.sip"
#include <qframe.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQStyleOptionFrameV3.cpp"
#line 409 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 36 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQStyleOptionFrameV3.cpp"
#line 32 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 39 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQStyleOptionFrameV3.cpp"


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionFrameV3(void *, int);}
static void release_QStyleOptionFrameV3(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStyleOptionFrameV3 *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStyleOptionFrameV3(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionFrameV3(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionFrameV3 *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionFrameV3 *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionFrameV3(SIP_SSIZE_T);}
static void *array_QStyleOptionFrameV3(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionFrameV3[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionFrameV3(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionFrameV3(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionFrameV3(reinterpret_cast<const QStyleOptionFrameV3 *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionFrameV3(sipSimpleWrapper *);}
static void dealloc_QStyleOptionFrameV3(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionFrameV3(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStyleOptionFrameV3(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionFrameV3(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionFrameV3 *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionFrameV3();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QStyleOptionFrameV3* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionFrameV3, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionFrameV3(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QStyleOptionFrame* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionFrame, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionFrameV3(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionFrameV3[] = {{524, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionFrameV3[] = {
    {sipName_Version, static_cast<int>(QStyleOptionFrameV3::Version), 529},
};


extern "C" {static PyObject *varget_QStyleOptionFrameV3_frameShape(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionFrameV3_frameShape(void *sipSelf, PyObject *, PyObject *)
{
    QFrame::Shape sipVal;
    QStyleOptionFrameV3 *sipCpp = reinterpret_cast<QStyleOptionFrameV3 *>(sipSelf);

    sipVal = sipCpp->frameShape;

    return sipConvertFromEnum(sipVal, sipType_QFrame_Shape);
}


extern "C" {static int varset_QStyleOptionFrameV3_frameShape(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionFrameV3_frameShape(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QFrame::Shape sipVal;
    QStyleOptionFrameV3 *sipCpp = reinterpret_cast<QStyleOptionFrameV3 *>(sipSelf);

    sipVal = (QFrame::Shape)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->frameShape = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionFrameV3_unused(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionFrameV3_unused(void *sipSelf, PyObject *, PyObject *)
{
    uint sipVal;
    QStyleOptionFrameV3 *sipCpp = reinterpret_cast<QStyleOptionFrameV3 *>(sipSelf);

    sipVal = sipCpp->unused;

    return PyLong_FromUnsignedLong(sipVal);
}


extern "C" {static int varset_QStyleOptionFrameV3_unused(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionFrameV3_unused(void *sipSelf, PyObject *sipPy, PyObject *)
{
    uint sipVal;
    QStyleOptionFrameV3 *sipCpp = reinterpret_cast<QStyleOptionFrameV3 *>(sipSelf);

    sipVal = (uint)sipLong_AsUnsignedLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->unused = sipVal;

    return 0;
}

sipVariableDef variables_QStyleOptionFrameV3[] = {
    {InstanceVariable, sipName_frameShape, (PyMethodDef *)varget_QStyleOptionFrameV3_frameShape, (PyMethodDef *)varset_QStyleOptionFrameV3_frameShape, NULL, NULL},
    {InstanceVariable, sipName_unused, (PyMethodDef *)varget_QStyleOptionFrameV3_unused, (PyMethodDef *)varset_QStyleOptionFrameV3_unused, NULL, NULL},
};

PyDoc_STRVAR(doc_QStyleOptionFrameV3, "\1QStyleOptionFrameV3()\n"
    "QStyleOptionFrameV3(QStyleOptionFrameV3)\n"
    "QStyleOptionFrameV3(QStyleOptionFrame)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QStyleOptionFrameV3 = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionFrameV3,
        {0}
    },
    {
        sipNameNr_QStyleOptionFrameV3,
        {0, 0, 1},
        0, 0,
        1, enummembers_QStyleOptionFrameV3,
        2, variables_QStyleOptionFrameV3,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionFrameV3,
    -1,
    -1,
    supers_QStyleOptionFrameV3,
    0,
    init_type_QStyleOptionFrameV3,
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
    dealloc_QStyleOptionFrameV3,
    assign_QStyleOptionFrameV3,
    array_QStyleOptionFrameV3,
    copy_QStyleOptionFrameV3,
    release_QStyleOptionFrameV3,
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