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

#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qtextoption.sip"
#include <qtextoption.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextOptionFlags.cpp"

#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qtextoption.sip"
#include <qtextoption.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextOptionFlags.cpp"


extern "C" {static int slot_QTextOption_Flags___bool__(PyObject *);}
static int slot_QTextOption_Flags___bool__(PyObject *sipSelf)
{
    QTextOption::Flags *sipCpp = reinterpret_cast<QTextOption::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextOption_Flags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 389 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QTextOption::Flags::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 55 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextOptionFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QTextOption_Flags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QTextOption_Flags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextOption::Flags *sipCpp = reinterpret_cast<QTextOption::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextOption_Flags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTextOption::Flags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTextOption_Flags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 380 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QTextOption::Flags::Int() != a0->operator QTextOption::Flags::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 89 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextOptionFlags.cpp"
            sipReleaseType(const_cast<QTextOption::Flags *>(a0),sipType_QTextOption_Flags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QTextOption_Flags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTextOption_Flags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QTextOption_Flags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextOption::Flags *sipCpp = reinterpret_cast<QTextOption::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextOption_Flags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTextOption::Flags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTextOption_Flags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 371 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QTextOption::Flags::Int() == a0->operator QTextOption::Flags::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 129 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextOptionFlags.cpp"
            sipReleaseType(const_cast<QTextOption::Flags *>(a0),sipType_QTextOption_Flags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QTextOption_Flags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTextOption_Flags___invert__(PyObject *);}
static PyObject *slot_QTextOption_Flags___invert__(PyObject *sipSelf)
{
    QTextOption::Flags *sipCpp = reinterpret_cast<QTextOption::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextOption_Flags));

    if (!sipCpp)
        return 0;


    {
        {
            QTextOption::Flags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextOption::Flags(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextOption_Flags,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QTextOption_Flags___and__(PyObject *,PyObject *);}
static PyObject *slot_QTextOption_Flags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QTextOption::Flags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTextOption_Flags, &a0, &a0State, &a1))
        {
            QTextOption::Flags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextOption::Flags((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QTextOption_Flags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextOption_Flags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QTextOption_Flags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QTextOption_Flags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QTextOption::Flags* a0;
        int a0State = 0;
        QTextOption::Flags* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QTextOption_Flags, &a0, &a0State, sipType_QTextOption_Flags, &a1, &a1State))
        {
            QTextOption::Flags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextOption::Flags((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QTextOption_Flags,a0State);
            sipReleaseType(a1,sipType_QTextOption_Flags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QTextOption_Flags,NULL);
        }
    }

    {
        QTextOption::Flags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTextOption_Flags, &a0, &a0State, &a1))
        {
            QTextOption::Flags*sipRes = 0;

#line 365 "sip/QtCore/qglobal.sip"
        sipRes = new QTextOption::Flags(*a0 ^ a1);
#line 238 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextOptionFlags.cpp"
            sipReleaseType(a0,sipType_QTextOption_Flags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextOption_Flags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QTextOption_Flags___or__(PyObject *,PyObject *);}
static PyObject *slot_QTextOption_Flags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QTextOption::Flags* a0;
        int a0State = 0;
        QTextOption::Flags* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QTextOption_Flags, &a0, &a0State, sipType_QTextOption_Flags, &a1, &a1State))
        {
            QTextOption::Flags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextOption::Flags((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QTextOption_Flags,a0State);
            sipReleaseType(a1,sipType_QTextOption_Flags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QTextOption_Flags,NULL);
        }
    }

    {
        QTextOption::Flags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTextOption_Flags, &a0, &a0State, &a1))
        {
            QTextOption::Flags*sipRes = 0;

#line 360 "sip/QtCore/qglobal.sip"
        sipRes = new QTextOption::Flags(*a0 | a1);
#line 290 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextOptionFlags.cpp"
            sipReleaseType(a0,sipType_QTextOption_Flags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextOption_Flags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QTextOption_Flags___int__(PyObject *);}
static PyObject *slot_QTextOption_Flags___int__(PyObject *sipSelf)
{
    QTextOption::Flags *sipCpp = reinterpret_cast<QTextOption::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextOption_Flags));

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


extern "C" {static PyObject *slot_QTextOption_Flags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QTextOption_Flags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextOption_Flags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QTextOption::Flags *sipCpp = reinterpret_cast<QTextOption::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextOption_Flags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QTextOption::Flags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTextOption_Flags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QTextOption::Flags::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QTextOption_Flags,a0State);

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


extern "C" {static PyObject *slot_QTextOption_Flags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QTextOption_Flags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextOption_Flags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QTextOption::Flags *sipCpp = reinterpret_cast<QTextOption::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextOption_Flags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QTextOption::Flags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTextOption_Flags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QTextOption::Flags::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QTextOption_Flags,a0State);

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


extern "C" {static PyObject *slot_QTextOption_Flags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QTextOption_Flags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextOption_Flags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QTextOption::Flags *sipCpp = reinterpret_cast<QTextOption::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextOption_Flags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QTextOption::Flags::operator&=(a0);
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
extern "C" {static void release_QTextOption_Flags(void *, int);}
static void release_QTextOption_Flags(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QTextOption::Flags *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QTextOption_Flags(void *, SIP_SSIZE_T, const void *);}
static void assign_QTextOption_Flags(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QTextOption::Flags *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QTextOption::Flags *>(sipSrc);
}


extern "C" {static void *array_QTextOption_Flags(SIP_SSIZE_T);}
static void *array_QTextOption_Flags(SIP_SSIZE_T sipNrElem)
{
    return new QTextOption::Flags[sipNrElem];
}


extern "C" {static void *copy_QTextOption_Flags(const void *, SIP_SSIZE_T);}
static void *copy_QTextOption_Flags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QTextOption::Flags(reinterpret_cast<const QTextOption::Flags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTextOption_Flags(sipSimpleWrapper *);}
static void dealloc_QTextOption_Flags(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTextOption_Flags(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QTextOption_Flags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTextOption_Flags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QTextOption::Flags *sipCpp = 0;

    {
        const QTextOption::Flags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QTextOption_Flags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextOption::Flags(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QTextOption::Flags *>(a0),sipType_QTextOption_Flags,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextOption::Flags(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextOption::Flags();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QTextOption_Flags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QTextOption_Flags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QTextOption::Flags **sipCppPtr = reinterpret_cast<QTextOption::Flags **>(sipCppPtrV);

#line 398 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QTextOption::Flags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QTextOption_Flag)) ||
            sipCanConvertToType(sipPy, sipType_QTextOption_Flags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QTextOption_Flag)))
{
    *sipCppPtr = new QTextOption::Flags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QTextOption::Flags *>(sipConvertToType(sipPy, sipType_QTextOption_Flags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 574 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextOptionFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QTextOption_Flags[] = {
    {(void *)slot_QTextOption_Flags___bool__, bool_slot},
    {(void *)slot_QTextOption_Flags___ne__, ne_slot},
    {(void *)slot_QTextOption_Flags___eq__, eq_slot},
    {(void *)slot_QTextOption_Flags___invert__, invert_slot},
    {(void *)slot_QTextOption_Flags___and__, and_slot},
    {(void *)slot_QTextOption_Flags___xor__, xor_slot},
    {(void *)slot_QTextOption_Flags___or__, or_slot},
    {(void *)slot_QTextOption_Flags___int__, int_slot},
    {(void *)slot_QTextOption_Flags___ixor__, ixor_slot},
    {(void *)slot_QTextOption_Flags___ior__, ior_slot},
    {(void *)slot_QTextOption_Flags___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QTextOption_Flags, "\1QTextOption.Flags(QTextOption.Flags)\n"
    "QTextOption.Flags(int)\n"
    "QTextOption.Flags()");


pyqt4ClassTypeDef sipTypeDef_QtGui_QTextOption_Flags = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QTextOption__Flags,
        {0}
    },
    {
        sipNameNr_Flags,
        {702, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTextOption_Flags,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QTextOption_Flags,
    init_type_QTextOption_Flags,
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
    dealloc_QTextOption_Flags,
    assign_QTextOption_Flags,
    array_QTextOption_Flags,
    copy_QTextOption_Flags,
    release_QTextOption_Flags,
    0,
    convertTo_QTextOption_Flags,
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
