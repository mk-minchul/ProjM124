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

#line 706 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQLatin1String_0.cpp"

#line 31 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQLatin1String_0.cpp"
#line 796 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQLatin1String_0.cpp"


PyDoc_STRVAR(doc_QLatin1String_0_latin1, "latin1(self) -> str");

extern "C" {static PyObject *meth_QLatin1String_0_latin1(PyObject *, PyObject *);}
static PyObject *meth_QLatin1String_0_latin1(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QLatin1String *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLatin1String, &sipCpp))
        {
            const char*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->latin1();
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
    sipNoMethod(sipParseErr, sipName_QLatin1String, sipName_latin1, doc_QLatin1String_0_latin1);

    return NULL;
}


extern "C" {static PyObject *slot_QLatin1String_0___le__(PyObject *,PyObject *);}
static PyObject *slot_QLatin1String_0___le__(PyObject *sipSelf,PyObject *sipArg)
{
    QLatin1String *sipCpp = reinterpret_cast<QLatin1String *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLatin1String));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QLatin1String::operator<=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const QLatin1String* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QLatin1String, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = operator<=((*sipCpp), *a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,le_slot,sipType_QLatin1String,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QLatin1String_0___ge__(PyObject *,PyObject *);}
static PyObject *slot_QLatin1String_0___ge__(PyObject *sipSelf,PyObject *sipArg)
{
    QLatin1String *sipCpp = reinterpret_cast<QLatin1String *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLatin1String));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QLatin1String::operator>=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const QLatin1String* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QLatin1String, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = operator>=((*sipCpp), *a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ge_slot,sipType_QLatin1String,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QLatin1String_0___lt__(PyObject *,PyObject *);}
static PyObject *slot_QLatin1String_0___lt__(PyObject *sipSelf,PyObject *sipArg)
{
    QLatin1String *sipCpp = reinterpret_cast<QLatin1String *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLatin1String));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QLatin1String::operator<(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const QLatin1String* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QLatin1String, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = operator<((*sipCpp), *a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,lt_slot,sipType_QLatin1String,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QLatin1String_0___gt__(PyObject *,PyObject *);}
static PyObject *slot_QLatin1String_0___gt__(PyObject *sipSelf,PyObject *sipArg)
{
    QLatin1String *sipCpp = reinterpret_cast<QLatin1String *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLatin1String));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QLatin1String::operator>(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const QLatin1String* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QLatin1String, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = operator>((*sipCpp), *a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,gt_slot,sipType_QLatin1String,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QLatin1String_0___ne__(PyObject *,PyObject *);}
static PyObject *slot_QLatin1String_0___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QLatin1String *sipCpp = reinterpret_cast<QLatin1String *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLatin1String));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QLatin1String::operator!=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const QLatin1String* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QLatin1String, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = operator!=((*sipCpp), *a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const QStringRef* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStringRef,&a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = operator!=((*sipCpp), *a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QStringRef *>(a0),sipType_QStringRef,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QLatin1String,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QLatin1String_0___eq__(PyObject *,PyObject *);}
static PyObject *slot_QLatin1String_0___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QLatin1String *sipCpp = reinterpret_cast<QLatin1String *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLatin1String));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QLatin1String::operator==(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const QLatin1String* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QLatin1String, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = operator==((*sipCpp), *a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const QStringRef* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStringRef,&a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = operator==((*sipCpp), *a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QStringRef *>(a0),sipType_QStringRef,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QLatin1String,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QLatin1String_0___repr__(PyObject *);}
static PyObject *slot_QLatin1String_0___repr__(PyObject *sipSelf)
{
    QLatin1String *sipCpp = reinterpret_cast<QLatin1String *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLatin1String));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 717 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qstring.sip"
        PyObject *str = SIPBytes_FromString(sipCpp->latin1());
        
        if (str)
        {
        #if PY_MAJOR_VERSION >= 3
            sipRes = PyUnicode_FromFormat("PyQt4.QtCore.QLatin1String(%R)", str);
        #else
            sipRes = PyString_FromString("PyQt4.QtCore.QLatin1String(");
            PyString_ConcatAndDel(&sipRes, PyObject_Repr(str));
            PyString_ConcatAndDel(&sipRes, PyString_FromString(")"));
        #endif
        
            Py_DECREF(str);
        }
#line 443 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQLatin1String_0.cpp"

            return sipRes;
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_QLatin1String_0(void *, int);}
static void release_QLatin1String_0(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QLatin1String *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static PyObject *pickle_QLatin1String(void *);}
static PyObject *pickle_QLatin1String(void *sipCppV)
{
    QLatin1String *sipCpp = reinterpret_cast<QLatin1String *>(sipCppV);
    PyObject *sipRes;

#line 710 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qstring.sip"
    sipRes = Py_BuildValue((char *)"(s)", sipCpp->latin1());
#line 473 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQLatin1String_0.cpp"

    return sipRes;
}


extern "C" {static void dealloc_QLatin1String_0(sipSimpleWrapper *);}
static void dealloc_QLatin1String_0(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QLatin1String_0(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QLatin1String_0(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QLatin1String_0(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QLatin1String *sipCpp = 0;

    {
        const char* a0;
        PyObject *a0Keep;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "AL", &a0Keep, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QLatin1String(a0);
            Py_END_ALLOW_THREADS

            sipKeepReference((PyObject *)sipSelf, -5, a0Keep);
            Py_DECREF(a0Keep);

            return sipCpp;
        }
    }

    {
        const QLatin1String* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QLatin1String, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QLatin1String(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QLatin1String_0[] = {
    {(void *)slot_QLatin1String_0___le__, le_slot},
    {(void *)slot_QLatin1String_0___ge__, ge_slot},
    {(void *)slot_QLatin1String_0___lt__, lt_slot},
    {(void *)slot_QLatin1String_0___gt__, gt_slot},
    {(void *)slot_QLatin1String_0___ne__, ne_slot},
    {(void *)slot_QLatin1String_0___eq__, eq_slot},
    {(void *)slot_QLatin1String_0___repr__, repr_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QLatin1String_0[] = {
    {SIP_MLNAME_CAST(sipName_latin1), meth_QLatin1String_0_latin1, METH_VARARGS, SIP_MLDOC_CAST(doc_QLatin1String_0_latin1)}
};

PyDoc_STRVAR(doc_QLatin1String_0, "\1QLatin1String(str)\n"
    "QLatin1String(QLatin1String)");


pyqt4ClassTypeDef sipTypeDef_QtCore_QLatin1String_0 = {
{
    {
        0,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QLatin1String,
        {0}
    },
    {
        sipNameNr_QLatin1String,
        {0, 0, 1},
        1, methods_QLatin1String_0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QLatin1String_0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QLatin1String_0,
    init_type_QLatin1String_0,
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
    dealloc_QLatin1String_0,
    0,
    0,
    0,
    release_QLatin1String_0,
    0,
    0,
    0,
    0,
    pickle_QLatin1String,
    0,
    0
},
    0,
    0,
    0
};
