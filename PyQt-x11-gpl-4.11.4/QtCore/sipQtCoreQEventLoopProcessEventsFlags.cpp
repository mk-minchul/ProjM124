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

#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qeventloop.sip"
#include <qeventloop.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQEventLoopProcessEventsFlags.cpp"

#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qeventloop.sip"
#include <qeventloop.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQEventLoopProcessEventsFlags.cpp"


extern "C" {static int slot_QEventLoop_ProcessEventsFlags___bool__(PyObject *);}
static int slot_QEventLoop_ProcessEventsFlags___bool__(PyObject *sipSelf)
{
    QEventLoop::ProcessEventsFlags *sipCpp = reinterpret_cast<QEventLoop::ProcessEventsFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QEventLoop_ProcessEventsFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 389 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QEventLoop::ProcessEventsFlags::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 55 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQEventLoopProcessEventsFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QEventLoop_ProcessEventsFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QEventLoop_ProcessEventsFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QEventLoop::ProcessEventsFlags *sipCpp = reinterpret_cast<QEventLoop::ProcessEventsFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QEventLoop_ProcessEventsFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QEventLoop::ProcessEventsFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QEventLoop_ProcessEventsFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 380 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QEventLoop::ProcessEventsFlags::Int() != a0->operator QEventLoop::ProcessEventsFlags::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 89 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQEventLoopProcessEventsFlags.cpp"
            sipReleaseType(const_cast<QEventLoop::ProcessEventsFlags *>(a0),sipType_QEventLoop_ProcessEventsFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QEventLoop_ProcessEventsFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QEventLoop_ProcessEventsFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QEventLoop_ProcessEventsFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QEventLoop::ProcessEventsFlags *sipCpp = reinterpret_cast<QEventLoop::ProcessEventsFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QEventLoop_ProcessEventsFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QEventLoop::ProcessEventsFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QEventLoop_ProcessEventsFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 371 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QEventLoop::ProcessEventsFlags::Int() == a0->operator QEventLoop::ProcessEventsFlags::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 129 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQEventLoopProcessEventsFlags.cpp"
            sipReleaseType(const_cast<QEventLoop::ProcessEventsFlags *>(a0),sipType_QEventLoop_ProcessEventsFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QEventLoop_ProcessEventsFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QEventLoop_ProcessEventsFlags___invert__(PyObject *);}
static PyObject *slot_QEventLoop_ProcessEventsFlags___invert__(PyObject *sipSelf)
{
    QEventLoop::ProcessEventsFlags *sipCpp = reinterpret_cast<QEventLoop::ProcessEventsFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QEventLoop_ProcessEventsFlags));

    if (!sipCpp)
        return 0;


    {
        {
            QEventLoop::ProcessEventsFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QEventLoop::ProcessEventsFlags(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QEventLoop_ProcessEventsFlags,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QEventLoop_ProcessEventsFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_QEventLoop_ProcessEventsFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QEventLoop::ProcessEventsFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QEventLoop_ProcessEventsFlags, &a0, &a0State, &a1))
        {
            QEventLoop::ProcessEventsFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QEventLoop::ProcessEventsFlags((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QEventLoop_ProcessEventsFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QEventLoop_ProcessEventsFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QEventLoop_ProcessEventsFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QEventLoop_ProcessEventsFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QEventLoop::ProcessEventsFlags* a0;
        int a0State = 0;
        QEventLoop::ProcessEventsFlags* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QEventLoop_ProcessEventsFlags, &a0, &a0State, sipType_QEventLoop_ProcessEventsFlags, &a1, &a1State))
        {
            QEventLoop::ProcessEventsFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QEventLoop::ProcessEventsFlags((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QEventLoop_ProcessEventsFlags,a0State);
            sipReleaseType(a1,sipType_QEventLoop_ProcessEventsFlags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QEventLoop_ProcessEventsFlags,NULL);
        }
    }

    {
        QEventLoop::ProcessEventsFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QEventLoop_ProcessEventsFlags, &a0, &a0State, &a1))
        {
            QEventLoop::ProcessEventsFlags*sipRes = 0;

#line 365 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qglobal.sip"
        sipRes = new QEventLoop::ProcessEventsFlags(*a0 ^ a1);
#line 238 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQEventLoopProcessEventsFlags.cpp"
            sipReleaseType(a0,sipType_QEventLoop_ProcessEventsFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QEventLoop_ProcessEventsFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QEventLoop_ProcessEventsFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_QEventLoop_ProcessEventsFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QEventLoop::ProcessEventsFlags* a0;
        int a0State = 0;
        QEventLoop::ProcessEventsFlags* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QEventLoop_ProcessEventsFlags, &a0, &a0State, sipType_QEventLoop_ProcessEventsFlags, &a1, &a1State))
        {
            QEventLoop::ProcessEventsFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QEventLoop::ProcessEventsFlags((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QEventLoop_ProcessEventsFlags,a0State);
            sipReleaseType(a1,sipType_QEventLoop_ProcessEventsFlags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QEventLoop_ProcessEventsFlags,NULL);
        }
    }

    {
        QEventLoop::ProcessEventsFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QEventLoop_ProcessEventsFlags, &a0, &a0State, &a1))
        {
            QEventLoop::ProcessEventsFlags*sipRes = 0;

#line 360 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qglobal.sip"
        sipRes = new QEventLoop::ProcessEventsFlags(*a0 | a1);
#line 290 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQEventLoopProcessEventsFlags.cpp"
            sipReleaseType(a0,sipType_QEventLoop_ProcessEventsFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QEventLoop_ProcessEventsFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QEventLoop_ProcessEventsFlags___int__(PyObject *);}
static PyObject *slot_QEventLoop_ProcessEventsFlags___int__(PyObject *sipSelf)
{
    QEventLoop::ProcessEventsFlags *sipCpp = reinterpret_cast<QEventLoop::ProcessEventsFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QEventLoop_ProcessEventsFlags));

    if (!sipCpp)
        return 0;


    {
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = *sipCpp;
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QEventLoop_ProcessEventsFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QEventLoop_ProcessEventsFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QEventLoop_ProcessEventsFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QEventLoop::ProcessEventsFlags *sipCpp = reinterpret_cast<QEventLoop::ProcessEventsFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QEventLoop_ProcessEventsFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QEventLoop::ProcessEventsFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QEventLoop_ProcessEventsFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QEventLoop::ProcessEventsFlags::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QEventLoop_ProcessEventsFlags,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QEventLoop_ProcessEventsFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QEventLoop_ProcessEventsFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QEventLoop_ProcessEventsFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QEventLoop::ProcessEventsFlags *sipCpp = reinterpret_cast<QEventLoop::ProcessEventsFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QEventLoop_ProcessEventsFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QEventLoop::ProcessEventsFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QEventLoop_ProcessEventsFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QEventLoop::ProcessEventsFlags::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QEventLoop_ProcessEventsFlags,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QEventLoop_ProcessEventsFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QEventLoop_ProcessEventsFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QEventLoop_ProcessEventsFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QEventLoop::ProcessEventsFlags *sipCpp = reinterpret_cast<QEventLoop::ProcessEventsFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QEventLoop_ProcessEventsFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QEventLoop::ProcessEventsFlags::operator&=(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


/* Call the instance's destructor. */
extern "C" {static void release_QEventLoop_ProcessEventsFlags(void *, int);}
static void release_QEventLoop_ProcessEventsFlags(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QEventLoop::ProcessEventsFlags *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QEventLoop_ProcessEventsFlags(void *, SIP_SSIZE_T, const void *);}
static void assign_QEventLoop_ProcessEventsFlags(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QEventLoop::ProcessEventsFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QEventLoop::ProcessEventsFlags *>(sipSrc);
}


extern "C" {static void *array_QEventLoop_ProcessEventsFlags(SIP_SSIZE_T);}
static void *array_QEventLoop_ProcessEventsFlags(SIP_SSIZE_T sipNrElem)
{
    return new QEventLoop::ProcessEventsFlags[sipNrElem];
}


extern "C" {static void *copy_QEventLoop_ProcessEventsFlags(const void *, SIP_SSIZE_T);}
static void *copy_QEventLoop_ProcessEventsFlags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QEventLoop::ProcessEventsFlags(reinterpret_cast<const QEventLoop::ProcessEventsFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QEventLoop_ProcessEventsFlags(sipSimpleWrapper *);}
static void dealloc_QEventLoop_ProcessEventsFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QEventLoop_ProcessEventsFlags(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QEventLoop_ProcessEventsFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QEventLoop_ProcessEventsFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QEventLoop::ProcessEventsFlags *sipCpp = 0;

    {
        const QEventLoop::ProcessEventsFlags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QEventLoop_ProcessEventsFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QEventLoop::ProcessEventsFlags(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QEventLoop::ProcessEventsFlags *>(a0),sipType_QEventLoop_ProcessEventsFlags,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QEventLoop::ProcessEventsFlags(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QEventLoop::ProcessEventsFlags();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QEventLoop_ProcessEventsFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QEventLoop_ProcessEventsFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QEventLoop::ProcessEventsFlags **sipCppPtr = reinterpret_cast<QEventLoop::ProcessEventsFlags **>(sipCppPtrV);

#line 398 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QEventLoop::ProcessEventsFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QEventLoop_ProcessEventsFlag)) ||
            sipCanConvertToType(sipPy, sipType_QEventLoop_ProcessEventsFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QEventLoop_ProcessEventsFlag)))
{
    *sipCppPtr = new QEventLoop::ProcessEventsFlags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QEventLoop::ProcessEventsFlags *>(sipConvertToType(sipPy, sipType_QEventLoop_ProcessEventsFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 574 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQEventLoopProcessEventsFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QEventLoop_ProcessEventsFlags[] = {
    {(void *)slot_QEventLoop_ProcessEventsFlags___bool__, bool_slot},
    {(void *)slot_QEventLoop_ProcessEventsFlags___ne__, ne_slot},
    {(void *)slot_QEventLoop_ProcessEventsFlags___eq__, eq_slot},
    {(void *)slot_QEventLoop_ProcessEventsFlags___invert__, invert_slot},
    {(void *)slot_QEventLoop_ProcessEventsFlags___and__, and_slot},
    {(void *)slot_QEventLoop_ProcessEventsFlags___xor__, xor_slot},
    {(void *)slot_QEventLoop_ProcessEventsFlags___or__, or_slot},
    {(void *)slot_QEventLoop_ProcessEventsFlags___int__, int_slot},
    {(void *)slot_QEventLoop_ProcessEventsFlags___ixor__, ixor_slot},
    {(void *)slot_QEventLoop_ProcessEventsFlags___ior__, ior_slot},
    {(void *)slot_QEventLoop_ProcessEventsFlags___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QEventLoop_ProcessEventsFlags, "\1QEventLoop.ProcessEventsFlags(QEventLoop.ProcessEventsFlags)\n"
    "QEventLoop.ProcessEventsFlags(int)\n"
    "QEventLoop.ProcessEventsFlags()");


pyqt4ClassTypeDef sipTypeDef_QtCore_QEventLoop_ProcessEventsFlags = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QEventLoop__ProcessEventsFlags,
        {0}
    },
    {
        sipNameNr_ProcessEventsFlags,
        {60, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QEventLoop_ProcessEventsFlags,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QEventLoop_ProcessEventsFlags,
    init_type_QEventLoop_ProcessEventsFlags,
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
    dealloc_QEventLoop_ProcessEventsFlags,
    assign_QEventLoop_ProcessEventsFlags,
    array_QEventLoop_ProcessEventsFlags,
    copy_QEventLoop_ProcessEventsFlags,
    release_QEventLoop_ProcessEventsFlags,
    0,
    convertTo_QEventLoop_ProcessEventsFlags,
    0,
    0,
    0,
    0,
    0
},
    0,
    1,
    0
};
