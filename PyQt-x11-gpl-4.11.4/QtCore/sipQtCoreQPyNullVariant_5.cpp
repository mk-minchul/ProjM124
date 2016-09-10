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

#include "sipAPIQtCore.h"

#line 24 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qpynullvariant.sip"
#include <qvariant.h>

typedef QVariant QPyNullVariant;
#line 31 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQPyNullVariant_5.cpp"

#line 269 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 35 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQPyNullVariant_5.cpp"


extern "C" {static PyObject *meth_QPyNullVariant_5_type(PyObject *, PyObject *);}
static PyObject *meth_QPyNullVariant_5_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPyNullVariant *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPyNullVariant, &sipCpp))
        {
            QVariant::Type sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->type();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QVariant_Type);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPyNullVariant, sipName_type, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPyNullVariant_5_userType(PyObject *, PyObject *);}
static PyObject *meth_QPyNullVariant_5_userType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPyNullVariant *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPyNullVariant, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->userType();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPyNullVariant, sipName_userType, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPyNullVariant_5_typeName(PyObject *, PyObject *);}
static PyObject *meth_QPyNullVariant_5_typeName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QPyNullVariant *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPyNullVariant, &sipCpp))
        {
            const char*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->typeName();
            Py_END_ALLOW_THREADS

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return SIPBytes_FromString(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPyNullVariant, sipName_typeName, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QPyNullVariant_5_isNull(PyObject *, PyObject *);}
static PyObject *meth_QPyNullVariant_5_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPyNullVariant *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPyNullVariant, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isNull();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPyNullVariant, sipName_isNull, NULL);

    return NULL;
}


extern "C" {static int slot_QPyNullVariant_5___bool__(PyObject *);}
static int slot_QPyNullVariant_5___bool__(PyObject *sipSelf)
{
    QPyNullVariant *sipCpp = reinterpret_cast<QPyNullVariant *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPyNullVariant));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 42 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qpynullvariant.sip"
        // This makes QPyNullVariant behave like None when truth testing.
        sipRes = 0;
#line 168 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQPyNullVariant_5.cpp"

            return sipRes;
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPyNullVariant_5(void *, int);}
static void release_QPyNullVariant_5(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QPyNullVariant *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QPyNullVariant_5(sipSimpleWrapper *);}
static void dealloc_QPyNullVariant_5(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QPyNullVariant_5(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QPyNullVariant_5(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPyNullVariant_5(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QPyNullVariant *sipCpp = 0;

    {
        PyObject * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "P0", &a0))
        {
#line 32 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qpynullvariant.sip"
        sipCpp = qpycore_qpynullvariant(a0);
#line 212 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQPyNullVariant_5.cpp"

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QPyNullVariant_5[] = {
    {(void *)slot_QPyNullVariant_5___bool__, bool_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QPyNullVariant_5[] = {
    {SIP_MLNAME_CAST(sipName_isNull), meth_QPyNullVariant_5_isNull, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_type), meth_QPyNullVariant_5_type, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_typeName), meth_QPyNullVariant_5_typeName, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_userType), meth_QPyNullVariant_5_userType, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtCore_QPyNullVariant_5 = {
{
    {
        5,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QPyNullVariant,
        {0}
    },
    {
        sipNameNr_QPyNullVariant,
        {0, 0, 1},
        4, methods_QPyNullVariant_5,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QPyNullVariant_5,
    init_type_QPyNullVariant_5,
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
    dealloc_QPyNullVariant_5,
    0,
    0,
    0,
    release_QPyNullVariant_5,
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
