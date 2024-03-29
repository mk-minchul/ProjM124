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

#line 34 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qgraphicsitem.sip"
#include <qgraphicsitem.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsItemGraphicsItemFlags.cpp"

#line 34 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qgraphicsitem.sip"
#include <qgraphicsitem.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsItemGraphicsItemFlags.cpp"


extern "C" {static int slot_QGraphicsItem_GraphicsItemFlags___bool__(PyObject *);}
static int slot_QGraphicsItem_GraphicsItemFlags___bool__(PyObject *sipSelf)
{
    QGraphicsItem::GraphicsItemFlags *sipCpp = reinterpret_cast<QGraphicsItem::GraphicsItemFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsItem_GraphicsItemFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 389 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QGraphicsItem::GraphicsItemFlags::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 55 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsItemGraphicsItemFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QGraphicsItem_GraphicsItemFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsItem_GraphicsItemFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QGraphicsItem::GraphicsItemFlags *sipCpp = reinterpret_cast<QGraphicsItem::GraphicsItemFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsItem_GraphicsItemFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGraphicsItem::GraphicsItemFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGraphicsItem_GraphicsItemFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 380 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QGraphicsItem::GraphicsItemFlags::Int() != a0->operator QGraphicsItem::GraphicsItemFlags::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 89 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsItemGraphicsItemFlags.cpp"
            sipReleaseType(const_cast<QGraphicsItem::GraphicsItemFlags *>(a0),sipType_QGraphicsItem_GraphicsItemFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QGraphicsItem_GraphicsItemFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGraphicsItem_GraphicsItemFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsItem_GraphicsItemFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QGraphicsItem::GraphicsItemFlags *sipCpp = reinterpret_cast<QGraphicsItem::GraphicsItemFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsItem_GraphicsItemFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGraphicsItem::GraphicsItemFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGraphicsItem_GraphicsItemFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 371 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QGraphicsItem::GraphicsItemFlags::Int() == a0->operator QGraphicsItem::GraphicsItemFlags::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 129 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsItemGraphicsItemFlags.cpp"
            sipReleaseType(const_cast<QGraphicsItem::GraphicsItemFlags *>(a0),sipType_QGraphicsItem_GraphicsItemFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QGraphicsItem_GraphicsItemFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGraphicsItem_GraphicsItemFlags___invert__(PyObject *);}
static PyObject *slot_QGraphicsItem_GraphicsItemFlags___invert__(PyObject *sipSelf)
{
    QGraphicsItem::GraphicsItemFlags *sipCpp = reinterpret_cast<QGraphicsItem::GraphicsItemFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsItem_GraphicsItemFlags));

    if (!sipCpp)
        return 0;


    {
        {
            QGraphicsItem::GraphicsItemFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGraphicsItem::GraphicsItemFlags(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QGraphicsItem_GraphicsItemFlags,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QGraphicsItem_GraphicsItemFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsItem_GraphicsItemFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsItem::GraphicsItemFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGraphicsItem_GraphicsItemFlags, &a0, &a0State, &a1))
        {
            QGraphicsItem::GraphicsItemFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGraphicsItem::GraphicsItemFlags((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGraphicsItem_GraphicsItemFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsItem_GraphicsItemFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGraphicsItem_GraphicsItemFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsItem_GraphicsItemFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsItem::GraphicsItemFlags* a0;
        int a0State = 0;
        QGraphicsItem::GraphicsItemFlags* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QGraphicsItem_GraphicsItemFlags, &a0, &a0State, sipType_QGraphicsItem_GraphicsItemFlags, &a1, &a1State))
        {
            QGraphicsItem::GraphicsItemFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGraphicsItem::GraphicsItemFlags((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGraphicsItem_GraphicsItemFlags,a0State);
            sipReleaseType(a1,sipType_QGraphicsItem_GraphicsItemFlags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsItem_GraphicsItemFlags,NULL);
        }
    }

    {
        QGraphicsItem::GraphicsItemFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGraphicsItem_GraphicsItemFlags, &a0, &a0State, &a1))
        {
            QGraphicsItem::GraphicsItemFlags*sipRes = 0;

#line 365 "sip/QtCore/qglobal.sip"
        sipRes = new QGraphicsItem::GraphicsItemFlags(*a0 ^ a1);
#line 238 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsItemGraphicsItemFlags.cpp"
            sipReleaseType(a0,sipType_QGraphicsItem_GraphicsItemFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsItem_GraphicsItemFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGraphicsItem_GraphicsItemFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsItem_GraphicsItemFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsItem::GraphicsItemFlags* a0;
        int a0State = 0;
        QGraphicsItem::GraphicsItemFlags* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QGraphicsItem_GraphicsItemFlags, &a0, &a0State, sipType_QGraphicsItem_GraphicsItemFlags, &a1, &a1State))
        {
            QGraphicsItem::GraphicsItemFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGraphicsItem::GraphicsItemFlags((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGraphicsItem_GraphicsItemFlags,a0State);
            sipReleaseType(a1,sipType_QGraphicsItem_GraphicsItemFlags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsItem_GraphicsItemFlags,NULL);
        }
    }

    {
        QGraphicsItem::GraphicsItemFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGraphicsItem_GraphicsItemFlags, &a0, &a0State, &a1))
        {
            QGraphicsItem::GraphicsItemFlags*sipRes = 0;

#line 360 "sip/QtCore/qglobal.sip"
        sipRes = new QGraphicsItem::GraphicsItemFlags(*a0 | a1);
#line 290 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsItemGraphicsItemFlags.cpp"
            sipReleaseType(a0,sipType_QGraphicsItem_GraphicsItemFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsItem_GraphicsItemFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGraphicsItem_GraphicsItemFlags___int__(PyObject *);}
static PyObject *slot_QGraphicsItem_GraphicsItemFlags___int__(PyObject *sipSelf)
{
    QGraphicsItem::GraphicsItemFlags *sipCpp = reinterpret_cast<QGraphicsItem::GraphicsItemFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsItem_GraphicsItemFlags));

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


extern "C" {static PyObject *slot_QGraphicsItem_GraphicsItemFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsItem_GraphicsItemFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGraphicsItem_GraphicsItemFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGraphicsItem::GraphicsItemFlags *sipCpp = reinterpret_cast<QGraphicsItem::GraphicsItemFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsItem_GraphicsItemFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QGraphicsItem::GraphicsItemFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGraphicsItem_GraphicsItemFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QGraphicsItem::GraphicsItemFlags::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGraphicsItem_GraphicsItemFlags,a0State);

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


extern "C" {static PyObject *slot_QGraphicsItem_GraphicsItemFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsItem_GraphicsItemFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGraphicsItem_GraphicsItemFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGraphicsItem::GraphicsItemFlags *sipCpp = reinterpret_cast<QGraphicsItem::GraphicsItemFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsItem_GraphicsItemFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QGraphicsItem::GraphicsItemFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGraphicsItem_GraphicsItemFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QGraphicsItem::GraphicsItemFlags::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGraphicsItem_GraphicsItemFlags,a0State);

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


extern "C" {static PyObject *slot_QGraphicsItem_GraphicsItemFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsItem_GraphicsItemFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGraphicsItem_GraphicsItemFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGraphicsItem::GraphicsItemFlags *sipCpp = reinterpret_cast<QGraphicsItem::GraphicsItemFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsItem_GraphicsItemFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QGraphicsItem::GraphicsItemFlags::operator&=(a0);
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
extern "C" {static void release_QGraphicsItem_GraphicsItemFlags(void *, int);}
static void release_QGraphicsItem_GraphicsItemFlags(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QGraphicsItem::GraphicsItemFlags *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QGraphicsItem_GraphicsItemFlags(void *, SIP_SSIZE_T, const void *);}
static void assign_QGraphicsItem_GraphicsItemFlags(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QGraphicsItem::GraphicsItemFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QGraphicsItem::GraphicsItemFlags *>(sipSrc);
}


extern "C" {static void *array_QGraphicsItem_GraphicsItemFlags(SIP_SSIZE_T);}
static void *array_QGraphicsItem_GraphicsItemFlags(SIP_SSIZE_T sipNrElem)
{
    return new QGraphicsItem::GraphicsItemFlags[sipNrElem];
}


extern "C" {static void *copy_QGraphicsItem_GraphicsItemFlags(const void *, SIP_SSIZE_T);}
static void *copy_QGraphicsItem_GraphicsItemFlags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QGraphicsItem::GraphicsItemFlags(reinterpret_cast<const QGraphicsItem::GraphicsItemFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QGraphicsItem_GraphicsItemFlags(sipSimpleWrapper *);}
static void dealloc_QGraphicsItem_GraphicsItemFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QGraphicsItem_GraphicsItemFlags(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QGraphicsItem_GraphicsItemFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGraphicsItem_GraphicsItemFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QGraphicsItem::GraphicsItemFlags *sipCpp = 0;

    {
        const QGraphicsItem::GraphicsItemFlags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QGraphicsItem_GraphicsItemFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QGraphicsItem::GraphicsItemFlags(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QGraphicsItem::GraphicsItemFlags *>(a0),sipType_QGraphicsItem_GraphicsItemFlags,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QGraphicsItem::GraphicsItemFlags(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QGraphicsItem::GraphicsItemFlags();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QGraphicsItem_GraphicsItemFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QGraphicsItem_GraphicsItemFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QGraphicsItem::GraphicsItemFlags **sipCppPtr = reinterpret_cast<QGraphicsItem::GraphicsItemFlags **>(sipCppPtrV);

#line 398 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QGraphicsItem::GraphicsItemFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QGraphicsItem_GraphicsItemFlag)) ||
            sipCanConvertToType(sipPy, sipType_QGraphicsItem_GraphicsItemFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QGraphicsItem_GraphicsItemFlag)))
{
    *sipCppPtr = new QGraphicsItem::GraphicsItemFlags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QGraphicsItem::GraphicsItemFlags *>(sipConvertToType(sipPy, sipType_QGraphicsItem_GraphicsItemFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 574 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsItemGraphicsItemFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QGraphicsItem_GraphicsItemFlags[] = {
    {(void *)slot_QGraphicsItem_GraphicsItemFlags___bool__, bool_slot},
    {(void *)slot_QGraphicsItem_GraphicsItemFlags___ne__, ne_slot},
    {(void *)slot_QGraphicsItem_GraphicsItemFlags___eq__, eq_slot},
    {(void *)slot_QGraphicsItem_GraphicsItemFlags___invert__, invert_slot},
    {(void *)slot_QGraphicsItem_GraphicsItemFlags___and__, and_slot},
    {(void *)slot_QGraphicsItem_GraphicsItemFlags___xor__, xor_slot},
    {(void *)slot_QGraphicsItem_GraphicsItemFlags___or__, or_slot},
    {(void *)slot_QGraphicsItem_GraphicsItemFlags___int__, int_slot},
    {(void *)slot_QGraphicsItem_GraphicsItemFlags___ixor__, ixor_slot},
    {(void *)slot_QGraphicsItem_GraphicsItemFlags___ior__, ior_slot},
    {(void *)slot_QGraphicsItem_GraphicsItemFlags___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QGraphicsItem_GraphicsItemFlags, "\1QGraphicsItem.GraphicsItemFlags(QGraphicsItem.GraphicsItemFlags)\n"
    "QGraphicsItem.GraphicsItemFlags(int)\n"
    "QGraphicsItem.GraphicsItemFlags()");


pyqt4ClassTypeDef sipTypeDef_QtGui_QGraphicsItem_GraphicsItemFlags = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QGraphicsItem__GraphicsItemFlags,
        {0}
    },
    {
        sipNameNr_GraphicsItemFlags,
        {171, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGraphicsItem_GraphicsItemFlags,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QGraphicsItem_GraphicsItemFlags,
    init_type_QGraphicsItem_GraphicsItemFlags,
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
    dealloc_QGraphicsItem_GraphicsItemFlags,
    assign_QGraphicsItem_GraphicsItemFlags,
    array_QGraphicsItem_GraphicsItemFlags,
    copy_QGraphicsItem_GraphicsItemFlags,
    release_QGraphicsItem_GraphicsItemFlags,
    0,
    convertTo_QGraphicsItem_GraphicsItemFlags,
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
