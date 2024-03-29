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

#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQtImageConversionFlags.cpp"

#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQtImageConversionFlags.cpp"


extern "C" {static int slot_Qt_ImageConversionFlags___bool__(PyObject *);}
static int slot_Qt_ImageConversionFlags___bool__(PyObject *sipSelf)
{
    Qt::ImageConversionFlags *sipCpp = reinterpret_cast<Qt::ImageConversionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ImageConversionFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 389 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator Qt::ImageConversionFlags::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 55 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQtImageConversionFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_ImageConversionFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ImageConversionFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    Qt::ImageConversionFlags *sipCpp = reinterpret_cast<Qt::ImageConversionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ImageConversionFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const Qt::ImageConversionFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_ImageConversionFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 380 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator Qt::ImageConversionFlags::Int() != a0->operator Qt::ImageConversionFlags::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 89 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQtImageConversionFlags.cpp"
            sipReleaseType(const_cast<Qt::ImageConversionFlags *>(a0),sipType_Qt_ImageConversionFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_Qt_ImageConversionFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Qt_ImageConversionFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ImageConversionFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    Qt::ImageConversionFlags *sipCpp = reinterpret_cast<Qt::ImageConversionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ImageConversionFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const Qt::ImageConversionFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_ImageConversionFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 371 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator Qt::ImageConversionFlags::Int() == a0->operator Qt::ImageConversionFlags::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 129 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQtImageConversionFlags.cpp"
            sipReleaseType(const_cast<Qt::ImageConversionFlags *>(a0),sipType_Qt_ImageConversionFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_Qt_ImageConversionFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Qt_ImageConversionFlags___invert__(PyObject *);}
static PyObject *slot_Qt_ImageConversionFlags___invert__(PyObject *sipSelf)
{
    Qt::ImageConversionFlags *sipCpp = reinterpret_cast<Qt::ImageConversionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ImageConversionFlags));

    if (!sipCpp)
        return 0;


    {
        {
            Qt::ImageConversionFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::ImageConversionFlags(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Qt_ImageConversionFlags,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_ImageConversionFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ImageConversionFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::ImageConversionFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_ImageConversionFlags, &a0, &a0State, &a1))
        {
            Qt::ImageConversionFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::ImageConversionFlags((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_ImageConversionFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_ImageConversionFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Qt_ImageConversionFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ImageConversionFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::ImageConversionFlags* a0;
        int a0State = 0;
        Qt::ImageConversionFlags* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_Qt_ImageConversionFlags, &a0, &a0State, sipType_Qt_ImageConversionFlags, &a1, &a1State))
        {
            Qt::ImageConversionFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::ImageConversionFlags((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_ImageConversionFlags,a0State);
            sipReleaseType(a1,sipType_Qt_ImageConversionFlags,a1State);

            return sipConvertFromNewType(sipRes,sipType_Qt_ImageConversionFlags,NULL);
        }
    }

    {
        Qt::ImageConversionFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_ImageConversionFlags, &a0, &a0State, &a1))
        {
            Qt::ImageConversionFlags*sipRes = 0;

#line 365 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qglobal.sip"
        sipRes = new Qt::ImageConversionFlags(*a0 ^ a1);
#line 238 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQtImageConversionFlags.cpp"
            sipReleaseType(a0,sipType_Qt_ImageConversionFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_ImageConversionFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Qt_ImageConversionFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ImageConversionFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::ImageConversionFlags* a0;
        int a0State = 0;
        Qt::ImageConversionFlags* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_Qt_ImageConversionFlags, &a0, &a0State, sipType_Qt_ImageConversionFlags, &a1, &a1State))
        {
            Qt::ImageConversionFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::ImageConversionFlags((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_ImageConversionFlags,a0State);
            sipReleaseType(a1,sipType_Qt_ImageConversionFlags,a1State);

            return sipConvertFromNewType(sipRes,sipType_Qt_ImageConversionFlags,NULL);
        }
    }

    {
        Qt::ImageConversionFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_ImageConversionFlags, &a0, &a0State, &a1))
        {
            Qt::ImageConversionFlags*sipRes = 0;

#line 360 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qglobal.sip"
        sipRes = new Qt::ImageConversionFlags(*a0 | a1);
#line 290 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQtImageConversionFlags.cpp"
            sipReleaseType(a0,sipType_Qt_ImageConversionFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_ImageConversionFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Qt_ImageConversionFlags___int__(PyObject *);}
static PyObject *slot_Qt_ImageConversionFlags___int__(PyObject *sipSelf)
{
    Qt::ImageConversionFlags *sipCpp = reinterpret_cast<Qt::ImageConversionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ImageConversionFlags));

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


extern "C" {static PyObject *slot_Qt_ImageConversionFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ImageConversionFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_ImageConversionFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Qt::ImageConversionFlags *sipCpp = reinterpret_cast<Qt::ImageConversionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ImageConversionFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        Qt::ImageConversionFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_ImageConversionFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->Qt::ImageConversionFlags::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_ImageConversionFlags,a0State);

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


extern "C" {static PyObject *slot_Qt_ImageConversionFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ImageConversionFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_ImageConversionFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Qt::ImageConversionFlags *sipCpp = reinterpret_cast<Qt::ImageConversionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ImageConversionFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        Qt::ImageConversionFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_ImageConversionFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->Qt::ImageConversionFlags::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_ImageConversionFlags,a0State);

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


extern "C" {static PyObject *slot_Qt_ImageConversionFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ImageConversionFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_ImageConversionFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Qt::ImageConversionFlags *sipCpp = reinterpret_cast<Qt::ImageConversionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ImageConversionFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->Qt::ImageConversionFlags::operator&=(a0);
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
extern "C" {static void release_Qt_ImageConversionFlags(void *, int);}
static void release_Qt_ImageConversionFlags(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<Qt::ImageConversionFlags *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_Qt_ImageConversionFlags(void *, SIP_SSIZE_T, const void *);}
static void assign_Qt_ImageConversionFlags(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<Qt::ImageConversionFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast<const Qt::ImageConversionFlags *>(sipSrc);
}


extern "C" {static void *array_Qt_ImageConversionFlags(SIP_SSIZE_T);}
static void *array_Qt_ImageConversionFlags(SIP_SSIZE_T sipNrElem)
{
    return new Qt::ImageConversionFlags[sipNrElem];
}


extern "C" {static void *copy_Qt_ImageConversionFlags(const void *, SIP_SSIZE_T);}
static void *copy_Qt_ImageConversionFlags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new Qt::ImageConversionFlags(reinterpret_cast<const Qt::ImageConversionFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_Qt_ImageConversionFlags(sipSimpleWrapper *);}
static void dealloc_Qt_ImageConversionFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Qt_ImageConversionFlags(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_Qt_ImageConversionFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_Qt_ImageConversionFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    Qt::ImageConversionFlags *sipCpp = 0;

    {
        const Qt::ImageConversionFlags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_Qt_ImageConversionFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new Qt::ImageConversionFlags(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<Qt::ImageConversionFlags *>(a0),sipType_Qt_ImageConversionFlags,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new Qt::ImageConversionFlags(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new Qt::ImageConversionFlags();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_Qt_ImageConversionFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_Qt_ImageConversionFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    Qt::ImageConversionFlags **sipCppPtr = reinterpret_cast<Qt::ImageConversionFlags **>(sipCppPtrV);

#line 398 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a Qt::ImageConversionFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_ImageConversionFlag)) ||
            sipCanConvertToType(sipPy, sipType_Qt_ImageConversionFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_ImageConversionFlag)))
{
    *sipCppPtr = new Qt::ImageConversionFlags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<Qt::ImageConversionFlags *>(sipConvertToType(sipPy, sipType_Qt_ImageConversionFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 574 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQtImageConversionFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Qt_ImageConversionFlags[] = {
    {(void *)slot_Qt_ImageConversionFlags___bool__, bool_slot},
    {(void *)slot_Qt_ImageConversionFlags___ne__, ne_slot},
    {(void *)slot_Qt_ImageConversionFlags___eq__, eq_slot},
    {(void *)slot_Qt_ImageConversionFlags___invert__, invert_slot},
    {(void *)slot_Qt_ImageConversionFlags___and__, and_slot},
    {(void *)slot_Qt_ImageConversionFlags___xor__, xor_slot},
    {(void *)slot_Qt_ImageConversionFlags___or__, or_slot},
    {(void *)slot_Qt_ImageConversionFlags___int__, int_slot},
    {(void *)slot_Qt_ImageConversionFlags___ixor__, ixor_slot},
    {(void *)slot_Qt_ImageConversionFlags___ior__, ior_slot},
    {(void *)slot_Qt_ImageConversionFlags___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_Qt_ImageConversionFlags, "\1Qt.ImageConversionFlags(Qt.ImageConversionFlags)\n"
    "Qt.ImageConversionFlags(int)\n"
    "Qt.ImageConversionFlags()");


pyqt4ClassTypeDef sipTypeDef_QtCore_Qt_ImageConversionFlags = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_Qt__ImageConversionFlags,
        {0}
    },
    {
        sipNameNr_ImageConversionFlags,
        {273, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_Qt_ImageConversionFlags,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_Qt_ImageConversionFlags,
    init_type_Qt_ImageConversionFlags,
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
    dealloc_Qt_ImageConversionFlags,
    assign_Qt_ImageConversionFlags,
    array_Qt_ImageConversionFlags,
    copy_Qt_ImageConversionFlags,
    release_Qt_ImageConversionFlags,
    0,
    convertTo_Qt_ImageConversionFlags,
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
