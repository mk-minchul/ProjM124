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

#line 34 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qgraphicseffect.sip"
#include <qgraphicseffect.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsEffectChangeFlags.cpp"

#line 34 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qgraphicseffect.sip"
#include <qgraphicseffect.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsEffectChangeFlags.cpp"


extern "C" {static int slot_QGraphicsEffect_ChangeFlags___bool__(PyObject *);}
static int slot_QGraphicsEffect_ChangeFlags___bool__(PyObject *sipSelf)
{
    QGraphicsEffect::ChangeFlags *sipCpp = reinterpret_cast<QGraphicsEffect::ChangeFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsEffect_ChangeFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 389 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QGraphicsEffect::ChangeFlags::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 55 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsEffectChangeFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QGraphicsEffect_ChangeFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsEffect_ChangeFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QGraphicsEffect::ChangeFlags *sipCpp = reinterpret_cast<QGraphicsEffect::ChangeFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsEffect_ChangeFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGraphicsEffect::ChangeFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGraphicsEffect_ChangeFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 380 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QGraphicsEffect::ChangeFlags::Int() != a0->operator QGraphicsEffect::ChangeFlags::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 89 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsEffectChangeFlags.cpp"
            sipReleaseType(const_cast<QGraphicsEffect::ChangeFlags *>(a0),sipType_QGraphicsEffect_ChangeFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QGraphicsEffect_ChangeFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGraphicsEffect_ChangeFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsEffect_ChangeFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QGraphicsEffect::ChangeFlags *sipCpp = reinterpret_cast<QGraphicsEffect::ChangeFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsEffect_ChangeFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGraphicsEffect::ChangeFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGraphicsEffect_ChangeFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 371 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QGraphicsEffect::ChangeFlags::Int() == a0->operator QGraphicsEffect::ChangeFlags::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 129 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsEffectChangeFlags.cpp"
            sipReleaseType(const_cast<QGraphicsEffect::ChangeFlags *>(a0),sipType_QGraphicsEffect_ChangeFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QGraphicsEffect_ChangeFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGraphicsEffect_ChangeFlags___invert__(PyObject *);}
static PyObject *slot_QGraphicsEffect_ChangeFlags___invert__(PyObject *sipSelf)
{
    QGraphicsEffect::ChangeFlags *sipCpp = reinterpret_cast<QGraphicsEffect::ChangeFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsEffect_ChangeFlags));

    if (!sipCpp)
        return 0;


    {
        {
            QGraphicsEffect::ChangeFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGraphicsEffect::ChangeFlags(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QGraphicsEffect_ChangeFlags,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QGraphicsEffect_ChangeFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsEffect_ChangeFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsEffect::ChangeFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGraphicsEffect_ChangeFlags, &a0, &a0State, &a1))
        {
            QGraphicsEffect::ChangeFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGraphicsEffect::ChangeFlags((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGraphicsEffect_ChangeFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsEffect_ChangeFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGraphicsEffect_ChangeFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsEffect_ChangeFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsEffect::ChangeFlags* a0;
        int a0State = 0;
        QGraphicsEffect::ChangeFlags* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QGraphicsEffect_ChangeFlags, &a0, &a0State, sipType_QGraphicsEffect_ChangeFlags, &a1, &a1State))
        {
            QGraphicsEffect::ChangeFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGraphicsEffect::ChangeFlags((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGraphicsEffect_ChangeFlags,a0State);
            sipReleaseType(a1,sipType_QGraphicsEffect_ChangeFlags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsEffect_ChangeFlags,NULL);
        }
    }

    {
        QGraphicsEffect::ChangeFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGraphicsEffect_ChangeFlags, &a0, &a0State, &a1))
        {
            QGraphicsEffect::ChangeFlags*sipRes = 0;

#line 365 "sip/QtCore/qglobal.sip"
        sipRes = new QGraphicsEffect::ChangeFlags(*a0 ^ a1);
#line 238 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsEffectChangeFlags.cpp"
            sipReleaseType(a0,sipType_QGraphicsEffect_ChangeFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsEffect_ChangeFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGraphicsEffect_ChangeFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsEffect_ChangeFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsEffect::ChangeFlags* a0;
        int a0State = 0;
        QGraphicsEffect::ChangeFlags* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QGraphicsEffect_ChangeFlags, &a0, &a0State, sipType_QGraphicsEffect_ChangeFlags, &a1, &a1State))
        {
            QGraphicsEffect::ChangeFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGraphicsEffect::ChangeFlags((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGraphicsEffect_ChangeFlags,a0State);
            sipReleaseType(a1,sipType_QGraphicsEffect_ChangeFlags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsEffect_ChangeFlags,NULL);
        }
    }

    {
        QGraphicsEffect::ChangeFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGraphicsEffect_ChangeFlags, &a0, &a0State, &a1))
        {
            QGraphicsEffect::ChangeFlags*sipRes = 0;

#line 360 "sip/QtCore/qglobal.sip"
        sipRes = new QGraphicsEffect::ChangeFlags(*a0 | a1);
#line 290 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsEffectChangeFlags.cpp"
            sipReleaseType(a0,sipType_QGraphicsEffect_ChangeFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsEffect_ChangeFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGraphicsEffect_ChangeFlags___int__(PyObject *);}
static PyObject *slot_QGraphicsEffect_ChangeFlags___int__(PyObject *sipSelf)
{
    QGraphicsEffect::ChangeFlags *sipCpp = reinterpret_cast<QGraphicsEffect::ChangeFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsEffect_ChangeFlags));

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


extern "C" {static PyObject *slot_QGraphicsEffect_ChangeFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsEffect_ChangeFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGraphicsEffect_ChangeFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGraphicsEffect::ChangeFlags *sipCpp = reinterpret_cast<QGraphicsEffect::ChangeFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsEffect_ChangeFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QGraphicsEffect::ChangeFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGraphicsEffect_ChangeFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QGraphicsEffect::ChangeFlags::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGraphicsEffect_ChangeFlags,a0State);

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


extern "C" {static PyObject *slot_QGraphicsEffect_ChangeFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsEffect_ChangeFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGraphicsEffect_ChangeFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGraphicsEffect::ChangeFlags *sipCpp = reinterpret_cast<QGraphicsEffect::ChangeFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsEffect_ChangeFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QGraphicsEffect::ChangeFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGraphicsEffect_ChangeFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QGraphicsEffect::ChangeFlags::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGraphicsEffect_ChangeFlags,a0State);

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


extern "C" {static PyObject *slot_QGraphicsEffect_ChangeFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsEffect_ChangeFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGraphicsEffect_ChangeFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGraphicsEffect::ChangeFlags *sipCpp = reinterpret_cast<QGraphicsEffect::ChangeFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsEffect_ChangeFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QGraphicsEffect::ChangeFlags::operator&=(a0);
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
extern "C" {static void release_QGraphicsEffect_ChangeFlags(void *, int);}
static void release_QGraphicsEffect_ChangeFlags(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QGraphicsEffect::ChangeFlags *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QGraphicsEffect_ChangeFlags(void *, SIP_SSIZE_T, const void *);}
static void assign_QGraphicsEffect_ChangeFlags(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QGraphicsEffect::ChangeFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QGraphicsEffect::ChangeFlags *>(sipSrc);
}


extern "C" {static void *array_QGraphicsEffect_ChangeFlags(SIP_SSIZE_T);}
static void *array_QGraphicsEffect_ChangeFlags(SIP_SSIZE_T sipNrElem)
{
    return new QGraphicsEffect::ChangeFlags[sipNrElem];
}


extern "C" {static void *copy_QGraphicsEffect_ChangeFlags(const void *, SIP_SSIZE_T);}
static void *copy_QGraphicsEffect_ChangeFlags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QGraphicsEffect::ChangeFlags(reinterpret_cast<const QGraphicsEffect::ChangeFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QGraphicsEffect_ChangeFlags(sipSimpleWrapper *);}
static void dealloc_QGraphicsEffect_ChangeFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QGraphicsEffect_ChangeFlags(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QGraphicsEffect_ChangeFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGraphicsEffect_ChangeFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QGraphicsEffect::ChangeFlags *sipCpp = 0;

    {
        const QGraphicsEffect::ChangeFlags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QGraphicsEffect_ChangeFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QGraphicsEffect::ChangeFlags(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QGraphicsEffect::ChangeFlags *>(a0),sipType_QGraphicsEffect_ChangeFlags,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QGraphicsEffect::ChangeFlags(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QGraphicsEffect::ChangeFlags();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QGraphicsEffect_ChangeFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QGraphicsEffect_ChangeFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QGraphicsEffect::ChangeFlags **sipCppPtr = reinterpret_cast<QGraphicsEffect::ChangeFlags **>(sipCppPtrV);

#line 398 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QGraphicsEffect::ChangeFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QGraphicsEffect_ChangeFlag)) ||
            sipCanConvertToType(sipPy, sipType_QGraphicsEffect_ChangeFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QGraphicsEffect_ChangeFlag)))
{
    *sipCppPtr = new QGraphicsEffect::ChangeFlags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QGraphicsEffect::ChangeFlags *>(sipConvertToType(sipPy, sipType_QGraphicsEffect_ChangeFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 574 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsEffectChangeFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QGraphicsEffect_ChangeFlags[] = {
    {(void *)slot_QGraphicsEffect_ChangeFlags___bool__, bool_slot},
    {(void *)slot_QGraphicsEffect_ChangeFlags___ne__, ne_slot},
    {(void *)slot_QGraphicsEffect_ChangeFlags___eq__, eq_slot},
    {(void *)slot_QGraphicsEffect_ChangeFlags___invert__, invert_slot},
    {(void *)slot_QGraphicsEffect_ChangeFlags___and__, and_slot},
    {(void *)slot_QGraphicsEffect_ChangeFlags___xor__, xor_slot},
    {(void *)slot_QGraphicsEffect_ChangeFlags___or__, or_slot},
    {(void *)slot_QGraphicsEffect_ChangeFlags___int__, int_slot},
    {(void *)slot_QGraphicsEffect_ChangeFlags___ixor__, ixor_slot},
    {(void *)slot_QGraphicsEffect_ChangeFlags___ior__, ior_slot},
    {(void *)slot_QGraphicsEffect_ChangeFlags___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QGraphicsEffect_ChangeFlags, "\1QGraphicsEffect.ChangeFlags(QGraphicsEffect.ChangeFlags)\n"
    "QGraphicsEffect.ChangeFlags(int)\n"
    "QGraphicsEffect.ChangeFlags()");


pyqt4ClassTypeDef sipTypeDef_QtGui_QGraphicsEffect_ChangeFlags = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QGraphicsEffect__ChangeFlags,
        {0}
    },
    {
        sipNameNr_ChangeFlags,
        {165, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGraphicsEffect_ChangeFlags,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QGraphicsEffect_ChangeFlags,
    init_type_QGraphicsEffect_ChangeFlags,
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
    dealloc_QGraphicsEffect_ChangeFlags,
    assign_QGraphicsEffect_ChangeFlags,
    array_QGraphicsEffect_ChangeFlags,
    copy_QGraphicsEffect_ChangeFlags,
    release_QGraphicsEffect_ChangeFlags,
    0,
    convertTo_QGraphicsEffect_ChangeFlags,
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
