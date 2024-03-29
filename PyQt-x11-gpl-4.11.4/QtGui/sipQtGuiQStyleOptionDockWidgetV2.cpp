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

#line 2000 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQStyleOptionDockWidgetV2.cpp"

#line 1080 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQStyleOptionDockWidgetV2.cpp"
#line 32 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 36 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQStyleOptionDockWidgetV2.cpp"


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionDockWidgetV2(void *, int);}
static void release_QStyleOptionDockWidgetV2(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStyleOptionDockWidgetV2 *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStyleOptionDockWidgetV2(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionDockWidgetV2(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionDockWidgetV2 *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionDockWidgetV2 *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionDockWidgetV2(SIP_SSIZE_T);}
static void *array_QStyleOptionDockWidgetV2(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionDockWidgetV2[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionDockWidgetV2(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionDockWidgetV2(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionDockWidgetV2(reinterpret_cast<const QStyleOptionDockWidgetV2 *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionDockWidgetV2(sipSimpleWrapper *);}
static void dealloc_QStyleOptionDockWidgetV2(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionDockWidgetV2(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStyleOptionDockWidgetV2(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionDockWidgetV2(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionDockWidgetV2 *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionDockWidgetV2();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QStyleOptionDockWidgetV2* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionDockWidgetV2, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionDockWidgetV2(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QStyleOptionDockWidget* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionDockWidget, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionDockWidgetV2(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionDockWidgetV2[] = {{513, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionDockWidgetV2[] = {
    {sipName_Version, static_cast<int>(QStyleOptionDockWidgetV2::Version), 517},
};


extern "C" {static PyObject *varget_QStyleOptionDockWidgetV2_verticalTitleBar(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionDockWidgetV2_verticalTitleBar(void *sipSelf, PyObject *, PyObject *)
{
    bool sipVal;
    QStyleOptionDockWidgetV2 *sipCpp = reinterpret_cast<QStyleOptionDockWidgetV2 *>(sipSelf);

    sipVal = sipCpp->verticalTitleBar;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionDockWidgetV2_verticalTitleBar(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionDockWidgetV2_verticalTitleBar(void *sipSelf, PyObject *sipPy, PyObject *)
{
    bool sipVal;
    QStyleOptionDockWidgetV2 *sipCpp = reinterpret_cast<QStyleOptionDockWidgetV2 *>(sipSelf);

    sipVal = (bool)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->verticalTitleBar = sipVal;

    return 0;
}

sipVariableDef variables_QStyleOptionDockWidgetV2[] = {
    {InstanceVariable, sipName_verticalTitleBar, (PyMethodDef *)varget_QStyleOptionDockWidgetV2_verticalTitleBar, (PyMethodDef *)varset_QStyleOptionDockWidgetV2_verticalTitleBar, NULL, NULL},
};

PyDoc_STRVAR(doc_QStyleOptionDockWidgetV2, "\1QStyleOptionDockWidgetV2()\n"
    "QStyleOptionDockWidgetV2(QStyleOptionDockWidgetV2)\n"
    "QStyleOptionDockWidgetV2(QStyleOptionDockWidget)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QStyleOptionDockWidgetV2 = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionDockWidgetV2,
        {0}
    },
    {
        sipNameNr_QStyleOptionDockWidgetV2,
        {0, 0, 1},
        0, 0,
        1, enummembers_QStyleOptionDockWidgetV2,
        1, variables_QStyleOptionDockWidgetV2,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionDockWidgetV2,
    -1,
    -1,
    supers_QStyleOptionDockWidgetV2,
    0,
    init_type_QStyleOptionDockWidgetV2,
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
    dealloc_QStyleOptionDockWidgetV2,
    assign_QStyleOptionDockWidgetV2,
    array_QStyleOptionDockWidgetV2,
    copy_QStyleOptionDockWidgetV2,
    release_QStyleOptionDockWidgetV2,
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
