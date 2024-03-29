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
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQtAlignment.cpp"

#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQtAlignment.cpp"


extern "C" {static int slot_Qt_Alignment___bool__(PyObject *);}
static int slot_Qt_Alignment___bool__(PyObject *sipSelf)
{
    Qt::Alignment *sipCpp = reinterpret_cast<Qt::Alignment *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_Alignment));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 389 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator Qt::Alignment::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 55 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQtAlignment.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_Alignment___ne__(PyObject *,PyObject *);}
static PyObject *slot_Qt_Alignment___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    Qt::Alignment *sipCpp = reinterpret_cast<Qt::Alignment *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_Alignment));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const Qt::Alignment* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_Alignment, &a0, &a0State))
        {
            bool sipRes = 0;

#line 380 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator Qt::Alignment::Int() != a0->operator Qt::Alignment::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 89 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQtAlignment.cpp"
            sipReleaseType(const_cast<Qt::Alignment *>(a0),sipType_Qt_Alignment,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_Qt_Alignment,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Qt_Alignment___eq__(PyObject *,PyObject *);}
static PyObject *slot_Qt_Alignment___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    Qt::Alignment *sipCpp = reinterpret_cast<Qt::Alignment *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_Alignment));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const Qt::Alignment* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_Alignment, &a0, &a0State))
        {
            bool sipRes = 0;

#line 371 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator Qt::Alignment::Int() == a0->operator Qt::Alignment::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 129 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQtAlignment.cpp"
            sipReleaseType(const_cast<Qt::Alignment *>(a0),sipType_Qt_Alignment,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_Qt_Alignment,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Qt_Alignment___invert__(PyObject *);}
static PyObject *slot_Qt_Alignment___invert__(PyObject *sipSelf)
{
    Qt::Alignment *sipCpp = reinterpret_cast<Qt::Alignment *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_Alignment));

    if (!sipCpp)
        return 0;


    {
        {
            Qt::Alignment*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::Alignment(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Qt_Alignment,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_Alignment___and__(PyObject *,PyObject *);}
static PyObject *slot_Qt_Alignment___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::Alignment* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_Alignment, &a0, &a0State, &a1))
        {
            Qt::Alignment*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::Alignment((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_Alignment,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_Alignment,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Qt_Alignment___xor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_Alignment___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::Alignment* a0;
        int a0State = 0;
        Qt::Alignment* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_Qt_Alignment, &a0, &a0State, sipType_Qt_Alignment, &a1, &a1State))
        {
            Qt::Alignment*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::Alignment((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_Alignment,a0State);
            sipReleaseType(a1,sipType_Qt_Alignment,a1State);

            return sipConvertFromNewType(sipRes,sipType_Qt_Alignment,NULL);
        }
    }

    {
        Qt::Alignment* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_Alignment, &a0, &a0State, &a1))
        {
            Qt::Alignment*sipRes = 0;

#line 365 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qglobal.sip"
        sipRes = new Qt::Alignment(*a0 ^ a1);
#line 238 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQtAlignment.cpp"
            sipReleaseType(a0,sipType_Qt_Alignment,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_Alignment,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Qt_Alignment___or__(PyObject *,PyObject *);}
static PyObject *slot_Qt_Alignment___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::Alignment* a0;
        int a0State = 0;
        Qt::Alignment* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_Qt_Alignment, &a0, &a0State, sipType_Qt_Alignment, &a1, &a1State))
        {
            Qt::Alignment*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::Alignment((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_Alignment,a0State);
            sipReleaseType(a1,sipType_Qt_Alignment,a1State);

            return sipConvertFromNewType(sipRes,sipType_Qt_Alignment,NULL);
        }
    }

    {
        Qt::Alignment* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_Alignment, &a0, &a0State, &a1))
        {
            Qt::Alignment*sipRes = 0;

#line 360 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qglobal.sip"
        sipRes = new Qt::Alignment(*a0 | a1);
#line 290 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQtAlignment.cpp"
            sipReleaseType(a0,sipType_Qt_Alignment,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_Alignment,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Qt_Alignment___int__(PyObject *);}
static PyObject *slot_Qt_Alignment___int__(PyObject *sipSelf)
{
    Qt::Alignment *sipCpp = reinterpret_cast<Qt::Alignment *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_Alignment));

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


extern "C" {static PyObject *slot_Qt_Alignment___ixor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_Alignment___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_Alignment)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Qt::Alignment *sipCpp = reinterpret_cast<Qt::Alignment *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_Alignment));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        Qt::Alignment* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_Alignment, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->Qt::Alignment::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_Alignment,a0State);

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


extern "C" {static PyObject *slot_Qt_Alignment___ior__(PyObject *,PyObject *);}
static PyObject *slot_Qt_Alignment___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_Alignment)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Qt::Alignment *sipCpp = reinterpret_cast<Qt::Alignment *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_Alignment));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        Qt::Alignment* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_Alignment, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->Qt::Alignment::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_Alignment,a0State);

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


extern "C" {static PyObject *slot_Qt_Alignment___iand__(PyObject *,PyObject *);}
static PyObject *slot_Qt_Alignment___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_Alignment)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Qt::Alignment *sipCpp = reinterpret_cast<Qt::Alignment *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_Alignment));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->Qt::Alignment::operator&=(a0);
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
extern "C" {static void release_Qt_Alignment(void *, int);}
static void release_Qt_Alignment(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<Qt::Alignment *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_Qt_Alignment(void *, SIP_SSIZE_T, const void *);}
static void assign_Qt_Alignment(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<Qt::Alignment *>(sipDst)[sipDstIdx] = *reinterpret_cast<const Qt::Alignment *>(sipSrc);
}


extern "C" {static void *array_Qt_Alignment(SIP_SSIZE_T);}
static void *array_Qt_Alignment(SIP_SSIZE_T sipNrElem)
{
    return new Qt::Alignment[sipNrElem];
}


extern "C" {static void *copy_Qt_Alignment(const void *, SIP_SSIZE_T);}
static void *copy_Qt_Alignment(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new Qt::Alignment(reinterpret_cast<const Qt::Alignment *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_Qt_Alignment(sipSimpleWrapper *);}
static void dealloc_Qt_Alignment(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Qt_Alignment(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_Qt_Alignment(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_Qt_Alignment(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    Qt::Alignment *sipCpp = 0;

    {
        const Qt::Alignment* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_Qt_Alignment, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new Qt::Alignment(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<Qt::Alignment *>(a0),sipType_Qt_Alignment,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new Qt::Alignment(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new Qt::Alignment();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_Qt_Alignment(PyObject *, void **, int *, PyObject *);}
static int convertTo_Qt_Alignment(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    Qt::Alignment **sipCppPtr = reinterpret_cast<Qt::Alignment **>(sipCppPtrV);

#line 398 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a Qt::Alignment is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_AlignmentFlag)) ||
            sipCanConvertToType(sipPy, sipType_Qt_Alignment, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_AlignmentFlag)))
{
    *sipCppPtr = new Qt::Alignment(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<Qt::Alignment *>(sipConvertToType(sipPy, sipType_Qt_Alignment, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 574 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQtAlignment.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Qt_Alignment[] = {
    {(void *)slot_Qt_Alignment___bool__, bool_slot},
    {(void *)slot_Qt_Alignment___ne__, ne_slot},
    {(void *)slot_Qt_Alignment___eq__, eq_slot},
    {(void *)slot_Qt_Alignment___invert__, invert_slot},
    {(void *)slot_Qt_Alignment___and__, and_slot},
    {(void *)slot_Qt_Alignment___xor__, xor_slot},
    {(void *)slot_Qt_Alignment___or__, or_slot},
    {(void *)slot_Qt_Alignment___int__, int_slot},
    {(void *)slot_Qt_Alignment___ixor__, ixor_slot},
    {(void *)slot_Qt_Alignment___ior__, ior_slot},
    {(void *)slot_Qt_Alignment___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_Qt_Alignment, "\1Qt.Alignment(Qt.Alignment)\n"
    "Qt.Alignment(int)\n"
    "Qt.Alignment()");


pyqt4ClassTypeDef sipTypeDef_QtCore_Qt_Alignment = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_Qt__Alignment,
        {0}
    },
    {
        sipNameNr_Alignment,
        {273, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_Qt_Alignment,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_Qt_Alignment,
    init_type_Qt_Alignment,
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
    dealloc_Qt_Alignment,
    assign_Qt_Alignment,
    array_Qt_Alignment,
    copy_Qt_Alignment,
    release_Qt_Alignment,
    0,
    convertTo_Qt_Alignment,
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
