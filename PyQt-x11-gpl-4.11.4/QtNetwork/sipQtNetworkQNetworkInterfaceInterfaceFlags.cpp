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

#include "sipAPIQtNetwork.h"

#line 70 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtNetwork/qnetworkinterface.sip"
#include <qnetworkinterface.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQNetworkInterfaceInterfaceFlags.cpp"

#line 70 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtNetwork/qnetworkinterface.sip"
#include <qnetworkinterface.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQNetworkInterfaceInterfaceFlags.cpp"


extern "C" {static int slot_QNetworkInterface_InterfaceFlags___bool__(PyObject *);}
static int slot_QNetworkInterface_InterfaceFlags___bool__(PyObject *sipSelf)
{
    QNetworkInterface::InterfaceFlags *sipCpp = reinterpret_cast<QNetworkInterface::InterfaceFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkInterface_InterfaceFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 389 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QNetworkInterface::InterfaceFlags::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 55 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQNetworkInterfaceInterfaceFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QNetworkInterface_InterfaceFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkInterface_InterfaceFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QNetworkInterface::InterfaceFlags *sipCpp = reinterpret_cast<QNetworkInterface::InterfaceFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkInterface_InterfaceFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QNetworkInterface::InterfaceFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QNetworkInterface_InterfaceFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 380 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QNetworkInterface::InterfaceFlags::Int() != a0->operator QNetworkInterface::InterfaceFlags::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 89 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQNetworkInterfaceInterfaceFlags.cpp"
            sipReleaseType(const_cast<QNetworkInterface::InterfaceFlags *>(a0),sipType_QNetworkInterface_InterfaceFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,ne_slot,sipType_QNetworkInterface_InterfaceFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QNetworkInterface_InterfaceFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkInterface_InterfaceFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QNetworkInterface::InterfaceFlags *sipCpp = reinterpret_cast<QNetworkInterface::InterfaceFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkInterface_InterfaceFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QNetworkInterface::InterfaceFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QNetworkInterface_InterfaceFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 371 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QNetworkInterface::InterfaceFlags::Int() == a0->operator QNetworkInterface::InterfaceFlags::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 129 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQNetworkInterfaceInterfaceFlags.cpp"
            sipReleaseType(const_cast<QNetworkInterface::InterfaceFlags *>(a0),sipType_QNetworkInterface_InterfaceFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,eq_slot,sipType_QNetworkInterface_InterfaceFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QNetworkInterface_InterfaceFlags___invert__(PyObject *);}
static PyObject *slot_QNetworkInterface_InterfaceFlags___invert__(PyObject *sipSelf)
{
    QNetworkInterface::InterfaceFlags *sipCpp = reinterpret_cast<QNetworkInterface::InterfaceFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkInterface_InterfaceFlags));

    if (!sipCpp)
        return 0;


    {
        {
            QNetworkInterface::InterfaceFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QNetworkInterface::InterfaceFlags(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QNetworkInterface_InterfaceFlags,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QNetworkInterface_InterfaceFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkInterface_InterfaceFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkInterface::InterfaceFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QNetworkInterface_InterfaceFlags, &a0, &a0State, &a1))
        {
            QNetworkInterface::InterfaceFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QNetworkInterface::InterfaceFlags((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QNetworkInterface_InterfaceFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QNetworkInterface_InterfaceFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QNetworkInterface_InterfaceFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkInterface_InterfaceFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkInterface::InterfaceFlags* a0;
        int a0State = 0;
        QNetworkInterface::InterfaceFlags* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QNetworkInterface_InterfaceFlags, &a0, &a0State, sipType_QNetworkInterface_InterfaceFlags, &a1, &a1State))
        {
            QNetworkInterface::InterfaceFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QNetworkInterface::InterfaceFlags((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QNetworkInterface_InterfaceFlags,a0State);
            sipReleaseType(a1,sipType_QNetworkInterface_InterfaceFlags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QNetworkInterface_InterfaceFlags,NULL);
        }
    }

    {
        QNetworkInterface::InterfaceFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QNetworkInterface_InterfaceFlags, &a0, &a0State, &a1))
        {
            QNetworkInterface::InterfaceFlags*sipRes = 0;

#line 365 "sip/QtCore/qglobal.sip"
        sipRes = new QNetworkInterface::InterfaceFlags(*a0 ^ a1);
#line 238 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQNetworkInterfaceInterfaceFlags.cpp"
            sipReleaseType(a0,sipType_QNetworkInterface_InterfaceFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QNetworkInterface_InterfaceFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QNetworkInterface_InterfaceFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkInterface_InterfaceFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkInterface::InterfaceFlags* a0;
        int a0State = 0;
        QNetworkInterface::InterfaceFlags* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QNetworkInterface_InterfaceFlags, &a0, &a0State, sipType_QNetworkInterface_InterfaceFlags, &a1, &a1State))
        {
            QNetworkInterface::InterfaceFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QNetworkInterface::InterfaceFlags((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QNetworkInterface_InterfaceFlags,a0State);
            sipReleaseType(a1,sipType_QNetworkInterface_InterfaceFlags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QNetworkInterface_InterfaceFlags,NULL);
        }
    }

    {
        QNetworkInterface::InterfaceFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QNetworkInterface_InterfaceFlags, &a0, &a0State, &a1))
        {
            QNetworkInterface::InterfaceFlags*sipRes = 0;

#line 360 "sip/QtCore/qglobal.sip"
        sipRes = new QNetworkInterface::InterfaceFlags(*a0 | a1);
#line 290 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQNetworkInterfaceInterfaceFlags.cpp"
            sipReleaseType(a0,sipType_QNetworkInterface_InterfaceFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QNetworkInterface_InterfaceFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QNetworkInterface_InterfaceFlags___int__(PyObject *);}
static PyObject *slot_QNetworkInterface_InterfaceFlags___int__(PyObject *sipSelf)
{
    QNetworkInterface::InterfaceFlags *sipCpp = reinterpret_cast<QNetworkInterface::InterfaceFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkInterface_InterfaceFlags));

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


extern "C" {static PyObject *slot_QNetworkInterface_InterfaceFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkInterface_InterfaceFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QNetworkInterface_InterfaceFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QNetworkInterface::InterfaceFlags *sipCpp = reinterpret_cast<QNetworkInterface::InterfaceFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkInterface_InterfaceFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QNetworkInterface::InterfaceFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QNetworkInterface_InterfaceFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QNetworkInterface::InterfaceFlags::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QNetworkInterface_InterfaceFlags,a0State);

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


extern "C" {static PyObject *slot_QNetworkInterface_InterfaceFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkInterface_InterfaceFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QNetworkInterface_InterfaceFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QNetworkInterface::InterfaceFlags *sipCpp = reinterpret_cast<QNetworkInterface::InterfaceFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkInterface_InterfaceFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QNetworkInterface::InterfaceFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QNetworkInterface_InterfaceFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QNetworkInterface::InterfaceFlags::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QNetworkInterface_InterfaceFlags,a0State);

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


extern "C" {static PyObject *slot_QNetworkInterface_InterfaceFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkInterface_InterfaceFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QNetworkInterface_InterfaceFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QNetworkInterface::InterfaceFlags *sipCpp = reinterpret_cast<QNetworkInterface::InterfaceFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkInterface_InterfaceFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QNetworkInterface::InterfaceFlags::operator&=(a0);
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
extern "C" {static void release_QNetworkInterface_InterfaceFlags(void *, int);}
static void release_QNetworkInterface_InterfaceFlags(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QNetworkInterface::InterfaceFlags *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QNetworkInterface_InterfaceFlags(void *, SIP_SSIZE_T, const void *);}
static void assign_QNetworkInterface_InterfaceFlags(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QNetworkInterface::InterfaceFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QNetworkInterface::InterfaceFlags *>(sipSrc);
}


extern "C" {static void *array_QNetworkInterface_InterfaceFlags(SIP_SSIZE_T);}
static void *array_QNetworkInterface_InterfaceFlags(SIP_SSIZE_T sipNrElem)
{
    return new QNetworkInterface::InterfaceFlags[sipNrElem];
}


extern "C" {static void *copy_QNetworkInterface_InterfaceFlags(const void *, SIP_SSIZE_T);}
static void *copy_QNetworkInterface_InterfaceFlags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QNetworkInterface::InterfaceFlags(reinterpret_cast<const QNetworkInterface::InterfaceFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QNetworkInterface_InterfaceFlags(sipSimpleWrapper *);}
static void dealloc_QNetworkInterface_InterfaceFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QNetworkInterface_InterfaceFlags(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QNetworkInterface_InterfaceFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QNetworkInterface_InterfaceFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QNetworkInterface::InterfaceFlags *sipCpp = 0;

    {
        const QNetworkInterface::InterfaceFlags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QNetworkInterface_InterfaceFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QNetworkInterface::InterfaceFlags(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QNetworkInterface::InterfaceFlags *>(a0),sipType_QNetworkInterface_InterfaceFlags,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QNetworkInterface::InterfaceFlags(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QNetworkInterface::InterfaceFlags();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QNetworkInterface_InterfaceFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QNetworkInterface_InterfaceFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QNetworkInterface::InterfaceFlags **sipCppPtr = reinterpret_cast<QNetworkInterface::InterfaceFlags **>(sipCppPtrV);

#line 398 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QNetworkInterface::InterfaceFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QNetworkInterface_InterfaceFlag)) ||
            sipCanConvertToType(sipPy, sipType_QNetworkInterface_InterfaceFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QNetworkInterface_InterfaceFlag)))
{
    *sipCppPtr = new QNetworkInterface::InterfaceFlags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QNetworkInterface::InterfaceFlags *>(sipConvertToType(sipPy, sipType_QNetworkInterface_InterfaceFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 574 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQNetworkInterfaceInterfaceFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QNetworkInterface_InterfaceFlags[] = {
    {(void *)slot_QNetworkInterface_InterfaceFlags___bool__, bool_slot},
    {(void *)slot_QNetworkInterface_InterfaceFlags___ne__, ne_slot},
    {(void *)slot_QNetworkInterface_InterfaceFlags___eq__, eq_slot},
    {(void *)slot_QNetworkInterface_InterfaceFlags___invert__, invert_slot},
    {(void *)slot_QNetworkInterface_InterfaceFlags___and__, and_slot},
    {(void *)slot_QNetworkInterface_InterfaceFlags___xor__, xor_slot},
    {(void *)slot_QNetworkInterface_InterfaceFlags___or__, or_slot},
    {(void *)slot_QNetworkInterface_InterfaceFlags___int__, int_slot},
    {(void *)slot_QNetworkInterface_InterfaceFlags___ixor__, ixor_slot},
    {(void *)slot_QNetworkInterface_InterfaceFlags___ior__, ior_slot},
    {(void *)slot_QNetworkInterface_InterfaceFlags___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QNetworkInterface_InterfaceFlags, "\1QNetworkInterface.InterfaceFlags(QNetworkInterface.InterfaceFlags)\n"
    "QNetworkInterface.InterfaceFlags(int)\n"
    "QNetworkInterface.InterfaceFlags()");


pyqt4ClassTypeDef sipTypeDef_QtNetwork_QNetworkInterface_InterfaceFlags = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QNetworkInterface__InterfaceFlags,
        {0}
    },
    {
        sipNameNr_InterfaceFlags,
        {61, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QNetworkInterface_InterfaceFlags,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QNetworkInterface_InterfaceFlags,
    init_type_QNetworkInterface_InterfaceFlags,
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
    dealloc_QNetworkInterface_InterfaceFlags,
    assign_QNetworkInterface_InterfaceFlags,
    array_QNetworkInterface_InterfaceFlags,
    copy_QNetworkInterface_InterfaceFlags,
    release_QNetworkInterface_InterfaceFlags,
    0,
    convertTo_QNetworkInterface_InterfaceFlags,
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
