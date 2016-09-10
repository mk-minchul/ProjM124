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
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQtWindowStates.cpp"

#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQtWindowStates.cpp"


extern "C" {static int slot_Qt_WindowStates___bool__(PyObject *);}
static int slot_Qt_WindowStates___bool__(PyObject *sipSelf)
{
    Qt::WindowStates *sipCpp = reinterpret_cast<Qt::WindowStates *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_WindowStates));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 389 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator Qt::WindowStates::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 55 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQtWindowStates.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_WindowStates___ne__(PyObject *,PyObject *);}
static PyObject *slot_Qt_WindowStates___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    Qt::WindowStates *sipCpp = reinterpret_cast<Qt::WindowStates *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_WindowStates));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const Qt::WindowStates* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_WindowStates, &a0, &a0State))
        {
            bool sipRes = 0;

#line 380 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator Qt::WindowStates::Int() != a0->operator Qt::WindowStates::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 89 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQtWindowStates.cpp"
            sipReleaseType(const_cast<Qt::WindowStates *>(a0),sipType_Qt_WindowStates,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_Qt_WindowStates,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Qt_WindowStates___eq__(PyObject *,PyObject *);}
static PyObject *slot_Qt_WindowStates___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    Qt::WindowStates *sipCpp = reinterpret_cast<Qt::WindowStates *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_WindowStates));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const Qt::WindowStates* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_WindowStates, &a0, &a0State))
        {
            bool sipRes = 0;

#line 371 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator Qt::WindowStates::Int() == a0->operator Qt::WindowStates::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 129 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQtWindowStates.cpp"
            sipReleaseType(const_cast<Qt::WindowStates *>(a0),sipType_Qt_WindowStates,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_Qt_WindowStates,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Qt_WindowStates___invert__(PyObject *);}
static PyObject *slot_Qt_WindowStates___invert__(PyObject *sipSelf)
{
    Qt::WindowStates *sipCpp = reinterpret_cast<Qt::WindowStates *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_WindowStates));

    if (!sipCpp)
        return 0;


    {
        {
            Qt::WindowStates*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::WindowStates(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Qt_WindowStates,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_WindowStates___and__(PyObject *,PyObject *);}
static PyObject *slot_Qt_WindowStates___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::WindowStates* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_WindowStates, &a0, &a0State, &a1))
        {
            Qt::WindowStates*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::WindowStates((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_WindowStates,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_WindowStates,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Qt_WindowStates___xor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_WindowStates___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::WindowStates* a0;
        int a0State = 0;
        Qt::WindowStates* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_Qt_WindowStates, &a0, &a0State, sipType_Qt_WindowStates, &a1, &a1State))
        {
            Qt::WindowStates*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::WindowStates((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_WindowStates,a0State);
            sipReleaseType(a1,sipType_Qt_WindowStates,a1State);

            return sipConvertFromNewType(sipRes,sipType_Qt_WindowStates,NULL);
        }
    }

    {
        Qt::WindowStates* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_WindowStates, &a0, &a0State, &a1))
        {
            Qt::WindowStates*sipRes = 0;

#line 365 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qglobal.sip"
        sipRes = new Qt::WindowStates(*a0 ^ a1);
#line 238 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQtWindowStates.cpp"
            sipReleaseType(a0,sipType_Qt_WindowStates,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_WindowStates,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Qt_WindowStates___or__(PyObject *,PyObject *);}
static PyObject *slot_Qt_WindowStates___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::WindowStates* a0;
        int a0State = 0;
        Qt::WindowStates* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_Qt_WindowStates, &a0, &a0State, sipType_Qt_WindowStates, &a1, &a1State))
        {
            Qt::WindowStates*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::WindowStates((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_WindowStates,a0State);
            sipReleaseType(a1,sipType_Qt_WindowStates,a1State);

            return sipConvertFromNewType(sipRes,sipType_Qt_WindowStates,NULL);
        }
    }

    {
        Qt::WindowStates* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_WindowStates, &a0, &a0State, &a1))
        {
            Qt::WindowStates*sipRes = 0;

#line 360 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qglobal.sip"
        sipRes = new Qt::WindowStates(*a0 | a1);
#line 290 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQtWindowStates.cpp"
            sipReleaseType(a0,sipType_Qt_WindowStates,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_WindowStates,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Qt_WindowStates___int__(PyObject *);}
static PyObject *slot_Qt_WindowStates___int__(PyObject *sipSelf)
{
    Qt::WindowStates *sipCpp = reinterpret_cast<Qt::WindowStates *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_WindowStates));

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


extern "C" {static PyObject *slot_Qt_WindowStates___ixor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_WindowStates___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_WindowStates)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Qt::WindowStates *sipCpp = reinterpret_cast<Qt::WindowStates *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_WindowStates));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        Qt::WindowStates* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_WindowStates, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->Qt::WindowStates::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_WindowStates,a0State);

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


extern "C" {static PyObject *slot_Qt_WindowStates___ior__(PyObject *,PyObject *);}
static PyObject *slot_Qt_WindowStates___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_WindowStates)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Qt::WindowStates *sipCpp = reinterpret_cast<Qt::WindowStates *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_WindowStates));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        Qt::WindowStates* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_WindowStates, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->Qt::WindowStates::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_WindowStates,a0State);

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


extern "C" {static PyObject *slot_Qt_WindowStates___iand__(PyObject *,PyObject *);}
static PyObject *slot_Qt_WindowStates___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_WindowStates)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Qt::WindowStates *sipCpp = reinterpret_cast<Qt::WindowStates *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_WindowStates));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->Qt::WindowStates::operator&=(a0);
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
extern "C" {static void release_Qt_WindowStates(void *, int);}
static void release_Qt_WindowStates(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<Qt::WindowStates *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_Qt_WindowStates(void *, SIP_SSIZE_T, const void *);}
static void assign_Qt_WindowStates(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<Qt::WindowStates *>(sipDst)[sipDstIdx] = *reinterpret_cast<const Qt::WindowStates *>(sipSrc);
}


extern "C" {static void *array_Qt_WindowStates(SIP_SSIZE_T);}
static void *array_Qt_WindowStates(SIP_SSIZE_T sipNrElem)
{
    return new Qt::WindowStates[sipNrElem];
}


extern "C" {static void *copy_Qt_WindowStates(const void *, SIP_SSIZE_T);}
static void *copy_Qt_WindowStates(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new Qt::WindowStates(reinterpret_cast<const Qt::WindowStates *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_Qt_WindowStates(sipSimpleWrapper *);}
static void dealloc_Qt_WindowStates(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Qt_WindowStates(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_Qt_WindowStates(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_Qt_WindowStates(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    Qt::WindowStates *sipCpp = 0;

    {
        const Qt::WindowStates* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_Qt_WindowStates, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new Qt::WindowStates(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<Qt::WindowStates *>(a0),sipType_Qt_WindowStates,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new Qt::WindowStates(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new Qt::WindowStates();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_Qt_WindowStates(PyObject *, void **, int *, PyObject *);}
static int convertTo_Qt_WindowStates(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    Qt::WindowStates **sipCppPtr = reinterpret_cast<Qt::WindowStates **>(sipCppPtrV);

#line 398 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a Qt::WindowStates is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_WindowState)) ||
            sipCanConvertToType(sipPy, sipType_Qt_WindowStates, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_WindowState)))
{
    *sipCppPtr = new Qt::WindowStates(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<Qt::WindowStates *>(sipConvertToType(sipPy, sipType_Qt_WindowStates, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 574 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQtWindowStates.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Qt_WindowStates[] = {
    {(void *)slot_Qt_WindowStates___bool__, bool_slot},
    {(void *)slot_Qt_WindowStates___ne__, ne_slot},
    {(void *)slot_Qt_WindowStates___eq__, eq_slot},
    {(void *)slot_Qt_WindowStates___invert__, invert_slot},
    {(void *)slot_Qt_WindowStates___and__, and_slot},
    {(void *)slot_Qt_WindowStates___xor__, xor_slot},
    {(void *)slot_Qt_WindowStates___or__, or_slot},
    {(void *)slot_Qt_WindowStates___int__, int_slot},
    {(void *)slot_Qt_WindowStates___ixor__, ixor_slot},
    {(void *)slot_Qt_WindowStates___ior__, ior_slot},
    {(void *)slot_Qt_WindowStates___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_Qt_WindowStates, "\1Qt.WindowStates(Qt.WindowStates)\n"
    "Qt.WindowStates(int)\n"
    "Qt.WindowStates()");


pyqt4ClassTypeDef sipTypeDef_QtCore_Qt_WindowStates = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_Qt__WindowStates,
        {0}
    },
    {
        sipNameNr_WindowStates,
        {273, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_Qt_WindowStates,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_Qt_WindowStates,
    init_type_Qt_WindowStates,
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
    dealloc_Qt_WindowStates,
    assign_Qt_WindowStates,
    array_Qt_WindowStates,
    copy_Qt_WindowStates,
    release_Qt_WindowStates,
    0,
    convertTo_Qt_WindowStates,
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
