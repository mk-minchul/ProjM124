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

#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qabstractspinbox.sip"
#include <qabstractspinbox.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQAbstractSpinBoxStepEnabled.cpp"

#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qabstractspinbox.sip"
#include <qabstractspinbox.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQAbstractSpinBoxStepEnabled.cpp"


extern "C" {static int slot_QAbstractSpinBox_StepEnabled___bool__(PyObject *);}
static int slot_QAbstractSpinBox_StepEnabled___bool__(PyObject *sipSelf)
{
    QAbstractSpinBox::StepEnabled *sipCpp = reinterpret_cast<QAbstractSpinBox::StepEnabled *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractSpinBox_StepEnabled));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 389 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QAbstractSpinBox::StepEnabled::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 55 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQAbstractSpinBoxStepEnabled.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QAbstractSpinBox_StepEnabled___ne__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractSpinBox_StepEnabled___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QAbstractSpinBox::StepEnabled *sipCpp = reinterpret_cast<QAbstractSpinBox::StepEnabled *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractSpinBox_StepEnabled));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QAbstractSpinBox::StepEnabled* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QAbstractSpinBox_StepEnabled, &a0, &a0State))
        {
            bool sipRes = 0;

#line 380 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QAbstractSpinBox::StepEnabled::Int() != a0->operator QAbstractSpinBox::StepEnabled::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 89 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQAbstractSpinBoxStepEnabled.cpp"
            sipReleaseType(const_cast<QAbstractSpinBox::StepEnabled *>(a0),sipType_QAbstractSpinBox_StepEnabled,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QAbstractSpinBox_StepEnabled,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QAbstractSpinBox_StepEnabled___eq__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractSpinBox_StepEnabled___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QAbstractSpinBox::StepEnabled *sipCpp = reinterpret_cast<QAbstractSpinBox::StepEnabled *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractSpinBox_StepEnabled));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QAbstractSpinBox::StepEnabled* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QAbstractSpinBox_StepEnabled, &a0, &a0State))
        {
            bool sipRes = 0;

#line 371 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QAbstractSpinBox::StepEnabled::Int() == a0->operator QAbstractSpinBox::StepEnabled::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 129 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQAbstractSpinBoxStepEnabled.cpp"
            sipReleaseType(const_cast<QAbstractSpinBox::StepEnabled *>(a0),sipType_QAbstractSpinBox_StepEnabled,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QAbstractSpinBox_StepEnabled,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QAbstractSpinBox_StepEnabled___invert__(PyObject *);}
static PyObject *slot_QAbstractSpinBox_StepEnabled___invert__(PyObject *sipSelf)
{
    QAbstractSpinBox::StepEnabled *sipCpp = reinterpret_cast<QAbstractSpinBox::StepEnabled *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractSpinBox_StepEnabled));

    if (!sipCpp)
        return 0;


    {
        {
            QAbstractSpinBox::StepEnabled*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QAbstractSpinBox::StepEnabled(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QAbstractSpinBox_StepEnabled,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QAbstractSpinBox_StepEnabled___and__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractSpinBox_StepEnabled___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QAbstractSpinBox::StepEnabled* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QAbstractSpinBox_StepEnabled, &a0, &a0State, &a1))
        {
            QAbstractSpinBox::StepEnabled*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QAbstractSpinBox::StepEnabled((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QAbstractSpinBox_StepEnabled,a0State);

            return sipConvertFromNewType(sipRes,sipType_QAbstractSpinBox_StepEnabled,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QAbstractSpinBox_StepEnabled___xor__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractSpinBox_StepEnabled___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QAbstractSpinBox::StepEnabled* a0;
        int a0State = 0;
        QAbstractSpinBox::StepEnabled* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QAbstractSpinBox_StepEnabled, &a0, &a0State, sipType_QAbstractSpinBox_StepEnabled, &a1, &a1State))
        {
            QAbstractSpinBox::StepEnabled*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QAbstractSpinBox::StepEnabled((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QAbstractSpinBox_StepEnabled,a0State);
            sipReleaseType(a1,sipType_QAbstractSpinBox_StepEnabled,a1State);

            return sipConvertFromNewType(sipRes,sipType_QAbstractSpinBox_StepEnabled,NULL);
        }
    }

    {
        QAbstractSpinBox::StepEnabled* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QAbstractSpinBox_StepEnabled, &a0, &a0State, &a1))
        {
            QAbstractSpinBox::StepEnabled*sipRes = 0;

#line 365 "sip/QtCore/qglobal.sip"
        sipRes = new QAbstractSpinBox::StepEnabled(*a0 ^ a1);
#line 238 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQAbstractSpinBoxStepEnabled.cpp"
            sipReleaseType(a0,sipType_QAbstractSpinBox_StepEnabled,a0State);

            return sipConvertFromNewType(sipRes,sipType_QAbstractSpinBox_StepEnabled,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QAbstractSpinBox_StepEnabled___or__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractSpinBox_StepEnabled___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QAbstractSpinBox::StepEnabled* a0;
        int a0State = 0;
        QAbstractSpinBox::StepEnabled* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QAbstractSpinBox_StepEnabled, &a0, &a0State, sipType_QAbstractSpinBox_StepEnabled, &a1, &a1State))
        {
            QAbstractSpinBox::StepEnabled*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QAbstractSpinBox::StepEnabled((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QAbstractSpinBox_StepEnabled,a0State);
            sipReleaseType(a1,sipType_QAbstractSpinBox_StepEnabled,a1State);

            return sipConvertFromNewType(sipRes,sipType_QAbstractSpinBox_StepEnabled,NULL);
        }
    }

    {
        QAbstractSpinBox::StepEnabled* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QAbstractSpinBox_StepEnabled, &a0, &a0State, &a1))
        {
            QAbstractSpinBox::StepEnabled*sipRes = 0;

#line 360 "sip/QtCore/qglobal.sip"
        sipRes = new QAbstractSpinBox::StepEnabled(*a0 | a1);
#line 290 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQAbstractSpinBoxStepEnabled.cpp"
            sipReleaseType(a0,sipType_QAbstractSpinBox_StepEnabled,a0State);

            return sipConvertFromNewType(sipRes,sipType_QAbstractSpinBox_StepEnabled,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QAbstractSpinBox_StepEnabled___int__(PyObject *);}
static PyObject *slot_QAbstractSpinBox_StepEnabled___int__(PyObject *sipSelf)
{
    QAbstractSpinBox::StepEnabled *sipCpp = reinterpret_cast<QAbstractSpinBox::StepEnabled *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractSpinBox_StepEnabled));

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


extern "C" {static PyObject *slot_QAbstractSpinBox_StepEnabled___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractSpinBox_StepEnabled___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QAbstractSpinBox_StepEnabled)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QAbstractSpinBox::StepEnabled *sipCpp = reinterpret_cast<QAbstractSpinBox::StepEnabled *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractSpinBox_StepEnabled));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QAbstractSpinBox::StepEnabled* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QAbstractSpinBox_StepEnabled, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QAbstractSpinBox::StepEnabled::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QAbstractSpinBox_StepEnabled,a0State);

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


extern "C" {static PyObject *slot_QAbstractSpinBox_StepEnabled___ior__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractSpinBox_StepEnabled___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QAbstractSpinBox_StepEnabled)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QAbstractSpinBox::StepEnabled *sipCpp = reinterpret_cast<QAbstractSpinBox::StepEnabled *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractSpinBox_StepEnabled));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QAbstractSpinBox::StepEnabled* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QAbstractSpinBox_StepEnabled, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QAbstractSpinBox::StepEnabled::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QAbstractSpinBox_StepEnabled,a0State);

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


extern "C" {static PyObject *slot_QAbstractSpinBox_StepEnabled___iand__(PyObject *,PyObject *);}
static PyObject *slot_QAbstractSpinBox_StepEnabled___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QAbstractSpinBox_StepEnabled)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QAbstractSpinBox::StepEnabled *sipCpp = reinterpret_cast<QAbstractSpinBox::StepEnabled *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAbstractSpinBox_StepEnabled));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QAbstractSpinBox::StepEnabled::operator&=(a0);
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
extern "C" {static void release_QAbstractSpinBox_StepEnabled(void *, int);}
static void release_QAbstractSpinBox_StepEnabled(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QAbstractSpinBox::StepEnabled *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QAbstractSpinBox_StepEnabled(void *, SIP_SSIZE_T, const void *);}
static void assign_QAbstractSpinBox_StepEnabled(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QAbstractSpinBox::StepEnabled *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QAbstractSpinBox::StepEnabled *>(sipSrc);
}


extern "C" {static void *array_QAbstractSpinBox_StepEnabled(SIP_SSIZE_T);}
static void *array_QAbstractSpinBox_StepEnabled(SIP_SSIZE_T sipNrElem)
{
    return new QAbstractSpinBox::StepEnabled[sipNrElem];
}


extern "C" {static void *copy_QAbstractSpinBox_StepEnabled(const void *, SIP_SSIZE_T);}
static void *copy_QAbstractSpinBox_StepEnabled(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QAbstractSpinBox::StepEnabled(reinterpret_cast<const QAbstractSpinBox::StepEnabled *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QAbstractSpinBox_StepEnabled(sipSimpleWrapper *);}
static void dealloc_QAbstractSpinBox_StepEnabled(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QAbstractSpinBox_StepEnabled(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QAbstractSpinBox_StepEnabled(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QAbstractSpinBox_StepEnabled(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QAbstractSpinBox::StepEnabled *sipCpp = 0;

    {
        const QAbstractSpinBox::StepEnabled* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QAbstractSpinBox_StepEnabled, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QAbstractSpinBox::StepEnabled(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QAbstractSpinBox::StepEnabled *>(a0),sipType_QAbstractSpinBox_StepEnabled,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QAbstractSpinBox::StepEnabled(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QAbstractSpinBox::StepEnabled();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QAbstractSpinBox_StepEnabled(PyObject *, void **, int *, PyObject *);}
static int convertTo_QAbstractSpinBox_StepEnabled(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QAbstractSpinBox::StepEnabled **sipCppPtr = reinterpret_cast<QAbstractSpinBox::StepEnabled **>(sipCppPtrV);

#line 398 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QAbstractSpinBox::StepEnabled is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QAbstractSpinBox_StepEnabledFlag)) ||
            sipCanConvertToType(sipPy, sipType_QAbstractSpinBox_StepEnabled, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QAbstractSpinBox_StepEnabledFlag)))
{
    *sipCppPtr = new QAbstractSpinBox::StepEnabled(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QAbstractSpinBox::StepEnabled *>(sipConvertToType(sipPy, sipType_QAbstractSpinBox_StepEnabled, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 574 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQAbstractSpinBoxStepEnabled.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QAbstractSpinBox_StepEnabled[] = {
    {(void *)slot_QAbstractSpinBox_StepEnabled___bool__, bool_slot},
    {(void *)slot_QAbstractSpinBox_StepEnabled___ne__, ne_slot},
    {(void *)slot_QAbstractSpinBox_StepEnabled___eq__, eq_slot},
    {(void *)slot_QAbstractSpinBox_StepEnabled___invert__, invert_slot},
    {(void *)slot_QAbstractSpinBox_StepEnabled___and__, and_slot},
    {(void *)slot_QAbstractSpinBox_StepEnabled___xor__, xor_slot},
    {(void *)slot_QAbstractSpinBox_StepEnabled___or__, or_slot},
    {(void *)slot_QAbstractSpinBox_StepEnabled___int__, int_slot},
    {(void *)slot_QAbstractSpinBox_StepEnabled___ixor__, ixor_slot},
    {(void *)slot_QAbstractSpinBox_StepEnabled___ior__, ior_slot},
    {(void *)slot_QAbstractSpinBox_StepEnabled___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QAbstractSpinBox_StepEnabled, "\1QAbstractSpinBox.StepEnabled(QAbstractSpinBox.StepEnabled)\n"
    "QAbstractSpinBox.StepEnabled(int)\n"
    "QAbstractSpinBox.StepEnabled()");


pyqt4ClassTypeDef sipTypeDef_QtGui_QAbstractSpinBox_StepEnabled = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QAbstractSpinBox__StepEnabled,
        {0}
    },
    {
        sipNameNr_StepEnabled,
        {25, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QAbstractSpinBox_StepEnabled,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QAbstractSpinBox_StepEnabled,
    init_type_QAbstractSpinBox_StepEnabled,
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
    dealloc_QAbstractSpinBox_StepEnabled,
    assign_QAbstractSpinBox_StepEnabled,
    array_QAbstractSpinBox_StepEnabled,
    copy_QAbstractSpinBox_StepEnabled,
    release_QAbstractSpinBox_StepEnabled,
    0,
    convertTo_QAbstractSpinBox_StepEnabled,
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