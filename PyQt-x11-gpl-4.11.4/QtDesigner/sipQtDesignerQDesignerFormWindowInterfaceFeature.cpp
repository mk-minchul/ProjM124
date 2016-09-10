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

#include "sipAPIQtDesigner.h"

#line 26 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtDesigner/abstractformwindow.sip"
#include <abstractformwindow.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtDesigner/sipQtDesignerQDesignerFormWindowInterfaceFeature.cpp"

#line 26 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtDesigner/abstractformwindow.sip"
#include <abstractformwindow.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtDesigner/sipQtDesignerQDesignerFormWindowInterfaceFeature.cpp"


extern "C" {static int slot_QDesignerFormWindowInterface_Feature___bool__(PyObject *);}
static int slot_QDesignerFormWindowInterface_Feature___bool__(PyObject *sipSelf)
{
    QDesignerFormWindowInterface::Feature *sipCpp = reinterpret_cast<QDesignerFormWindowInterface::Feature *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDesignerFormWindowInterface_Feature));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 389 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QDesignerFormWindowInterface::Feature::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 55 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtDesigner/sipQtDesignerQDesignerFormWindowInterfaceFeature.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QDesignerFormWindowInterface_Feature___ne__(PyObject *,PyObject *);}
static PyObject *slot_QDesignerFormWindowInterface_Feature___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QDesignerFormWindowInterface::Feature *sipCpp = reinterpret_cast<QDesignerFormWindowInterface::Feature *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDesignerFormWindowInterface_Feature));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QDesignerFormWindowInterface::Feature* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QDesignerFormWindowInterface_Feature, &a0, &a0State))
        {
            bool sipRes = 0;

#line 380 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QDesignerFormWindowInterface::Feature::Int() != a0->operator QDesignerFormWindowInterface::Feature::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 89 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtDesigner/sipQtDesignerQDesignerFormWindowInterfaceFeature.cpp"
            sipReleaseType(const_cast<QDesignerFormWindowInterface::Feature *>(a0),sipType_QDesignerFormWindowInterface_Feature,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtDesigner,ne_slot,sipType_QDesignerFormWindowInterface_Feature,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QDesignerFormWindowInterface_Feature___eq__(PyObject *,PyObject *);}
static PyObject *slot_QDesignerFormWindowInterface_Feature___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QDesignerFormWindowInterface::Feature *sipCpp = reinterpret_cast<QDesignerFormWindowInterface::Feature *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDesignerFormWindowInterface_Feature));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QDesignerFormWindowInterface::Feature* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QDesignerFormWindowInterface_Feature, &a0, &a0State))
        {
            bool sipRes = 0;

#line 371 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QDesignerFormWindowInterface::Feature::Int() == a0->operator QDesignerFormWindowInterface::Feature::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 129 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtDesigner/sipQtDesignerQDesignerFormWindowInterfaceFeature.cpp"
            sipReleaseType(const_cast<QDesignerFormWindowInterface::Feature *>(a0),sipType_QDesignerFormWindowInterface_Feature,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtDesigner,eq_slot,sipType_QDesignerFormWindowInterface_Feature,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QDesignerFormWindowInterface_Feature___invert__(PyObject *);}
static PyObject *slot_QDesignerFormWindowInterface_Feature___invert__(PyObject *sipSelf)
{
    QDesignerFormWindowInterface::Feature *sipCpp = reinterpret_cast<QDesignerFormWindowInterface::Feature *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDesignerFormWindowInterface_Feature));

    if (!sipCpp)
        return 0;


    {
        {
            QDesignerFormWindowInterface::Feature*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QDesignerFormWindowInterface::Feature(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QDesignerFormWindowInterface_Feature,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QDesignerFormWindowInterface_Feature___and__(PyObject *,PyObject *);}
static PyObject *slot_QDesignerFormWindowInterface_Feature___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QDesignerFormWindowInterface::Feature* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QDesignerFormWindowInterface_Feature, &a0, &a0State, &a1))
        {
            QDesignerFormWindowInterface::Feature*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QDesignerFormWindowInterface::Feature((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QDesignerFormWindowInterface_Feature,a0State);

            return sipConvertFromNewType(sipRes,sipType_QDesignerFormWindowInterface_Feature,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtDesigner,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QDesignerFormWindowInterface_Feature___xor__(PyObject *,PyObject *);}
static PyObject *slot_QDesignerFormWindowInterface_Feature___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QDesignerFormWindowInterface::Feature* a0;
        int a0State = 0;
        QDesignerFormWindowInterface::Feature* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QDesignerFormWindowInterface_Feature, &a0, &a0State, sipType_QDesignerFormWindowInterface_Feature, &a1, &a1State))
        {
            QDesignerFormWindowInterface::Feature*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QDesignerFormWindowInterface::Feature((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QDesignerFormWindowInterface_Feature,a0State);
            sipReleaseType(a1,sipType_QDesignerFormWindowInterface_Feature,a1State);

            return sipConvertFromNewType(sipRes,sipType_QDesignerFormWindowInterface_Feature,NULL);
        }
    }

    {
        QDesignerFormWindowInterface::Feature* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QDesignerFormWindowInterface_Feature, &a0, &a0State, &a1))
        {
            QDesignerFormWindowInterface::Feature*sipRes = 0;

#line 365 "sip/QtCore/qglobal.sip"
        sipRes = new QDesignerFormWindowInterface::Feature(*a0 ^ a1);
#line 238 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtDesigner/sipQtDesignerQDesignerFormWindowInterfaceFeature.cpp"
            sipReleaseType(a0,sipType_QDesignerFormWindowInterface_Feature,a0State);

            return sipConvertFromNewType(sipRes,sipType_QDesignerFormWindowInterface_Feature,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtDesigner,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QDesignerFormWindowInterface_Feature___or__(PyObject *,PyObject *);}
static PyObject *slot_QDesignerFormWindowInterface_Feature___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QDesignerFormWindowInterface::Feature* a0;
        int a0State = 0;
        QDesignerFormWindowInterface::Feature* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QDesignerFormWindowInterface_Feature, &a0, &a0State, sipType_QDesignerFormWindowInterface_Feature, &a1, &a1State))
        {
            QDesignerFormWindowInterface::Feature*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QDesignerFormWindowInterface::Feature((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QDesignerFormWindowInterface_Feature,a0State);
            sipReleaseType(a1,sipType_QDesignerFormWindowInterface_Feature,a1State);

            return sipConvertFromNewType(sipRes,sipType_QDesignerFormWindowInterface_Feature,NULL);
        }
    }

    {
        QDesignerFormWindowInterface::Feature* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QDesignerFormWindowInterface_Feature, &a0, &a0State, &a1))
        {
            QDesignerFormWindowInterface::Feature*sipRes = 0;

#line 360 "sip/QtCore/qglobal.sip"
        sipRes = new QDesignerFormWindowInterface::Feature(*a0 | a1);
#line 290 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtDesigner/sipQtDesignerQDesignerFormWindowInterfaceFeature.cpp"
            sipReleaseType(a0,sipType_QDesignerFormWindowInterface_Feature,a0State);

            return sipConvertFromNewType(sipRes,sipType_QDesignerFormWindowInterface_Feature,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtDesigner,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QDesignerFormWindowInterface_Feature___int__(PyObject *);}
static PyObject *slot_QDesignerFormWindowInterface_Feature___int__(PyObject *sipSelf)
{
    QDesignerFormWindowInterface::Feature *sipCpp = reinterpret_cast<QDesignerFormWindowInterface::Feature *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDesignerFormWindowInterface_Feature));

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


extern "C" {static PyObject *slot_QDesignerFormWindowInterface_Feature___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QDesignerFormWindowInterface_Feature___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QDesignerFormWindowInterface_Feature)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QDesignerFormWindowInterface::Feature *sipCpp = reinterpret_cast<QDesignerFormWindowInterface::Feature *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDesignerFormWindowInterface_Feature));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QDesignerFormWindowInterface::Feature* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QDesignerFormWindowInterface_Feature, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QDesignerFormWindowInterface::Feature::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QDesignerFormWindowInterface_Feature,a0State);

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


extern "C" {static PyObject *slot_QDesignerFormWindowInterface_Feature___ior__(PyObject *,PyObject *);}
static PyObject *slot_QDesignerFormWindowInterface_Feature___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QDesignerFormWindowInterface_Feature)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QDesignerFormWindowInterface::Feature *sipCpp = reinterpret_cast<QDesignerFormWindowInterface::Feature *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDesignerFormWindowInterface_Feature));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QDesignerFormWindowInterface::Feature* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QDesignerFormWindowInterface_Feature, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QDesignerFormWindowInterface::Feature::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QDesignerFormWindowInterface_Feature,a0State);

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


extern "C" {static PyObject *slot_QDesignerFormWindowInterface_Feature___iand__(PyObject *,PyObject *);}
static PyObject *slot_QDesignerFormWindowInterface_Feature___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QDesignerFormWindowInterface_Feature)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QDesignerFormWindowInterface::Feature *sipCpp = reinterpret_cast<QDesignerFormWindowInterface::Feature *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDesignerFormWindowInterface_Feature));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QDesignerFormWindowInterface::Feature::operator&=(a0);
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
extern "C" {static void release_QDesignerFormWindowInterface_Feature(void *, int);}
static void release_QDesignerFormWindowInterface_Feature(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QDesignerFormWindowInterface::Feature *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QDesignerFormWindowInterface_Feature(void *, SIP_SSIZE_T, const void *);}
static void assign_QDesignerFormWindowInterface_Feature(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QDesignerFormWindowInterface::Feature *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QDesignerFormWindowInterface::Feature *>(sipSrc);
}


extern "C" {static void *array_QDesignerFormWindowInterface_Feature(SIP_SSIZE_T);}
static void *array_QDesignerFormWindowInterface_Feature(SIP_SSIZE_T sipNrElem)
{
    return new QDesignerFormWindowInterface::Feature[sipNrElem];
}


extern "C" {static void *copy_QDesignerFormWindowInterface_Feature(const void *, SIP_SSIZE_T);}
static void *copy_QDesignerFormWindowInterface_Feature(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QDesignerFormWindowInterface::Feature(reinterpret_cast<const QDesignerFormWindowInterface::Feature *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDesignerFormWindowInterface_Feature(sipSimpleWrapper *);}
static void dealloc_QDesignerFormWindowInterface_Feature(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QDesignerFormWindowInterface_Feature(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QDesignerFormWindowInterface_Feature(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDesignerFormWindowInterface_Feature(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QDesignerFormWindowInterface::Feature *sipCpp = 0;

    {
        const QDesignerFormWindowInterface::Feature* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QDesignerFormWindowInterface_Feature, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QDesignerFormWindowInterface::Feature(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QDesignerFormWindowInterface::Feature *>(a0),sipType_QDesignerFormWindowInterface_Feature,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QDesignerFormWindowInterface::Feature(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QDesignerFormWindowInterface::Feature();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QDesignerFormWindowInterface_Feature(PyObject *, void **, int *, PyObject *);}
static int convertTo_QDesignerFormWindowInterface_Feature(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QDesignerFormWindowInterface::Feature **sipCppPtr = reinterpret_cast<QDesignerFormWindowInterface::Feature **>(sipCppPtrV);

#line 398 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QDesignerFormWindowInterface::Feature is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QDesignerFormWindowInterface_FeatureFlag)) ||
            sipCanConvertToType(sipPy, sipType_QDesignerFormWindowInterface_Feature, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QDesignerFormWindowInterface_FeatureFlag)))
{
    *sipCppPtr = new QDesignerFormWindowInterface::Feature(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QDesignerFormWindowInterface::Feature *>(sipConvertToType(sipPy, sipType_QDesignerFormWindowInterface_Feature, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 574 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtDesigner/sipQtDesignerQDesignerFormWindowInterfaceFeature.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QDesignerFormWindowInterface_Feature[] = {
    {(void *)slot_QDesignerFormWindowInterface_Feature___bool__, bool_slot},
    {(void *)slot_QDesignerFormWindowInterface_Feature___ne__, ne_slot},
    {(void *)slot_QDesignerFormWindowInterface_Feature___eq__, eq_slot},
    {(void *)slot_QDesignerFormWindowInterface_Feature___invert__, invert_slot},
    {(void *)slot_QDesignerFormWindowInterface_Feature___and__, and_slot},
    {(void *)slot_QDesignerFormWindowInterface_Feature___xor__, xor_slot},
    {(void *)slot_QDesignerFormWindowInterface_Feature___or__, or_slot},
    {(void *)slot_QDesignerFormWindowInterface_Feature___int__, int_slot},
    {(void *)slot_QDesignerFormWindowInterface_Feature___ixor__, ixor_slot},
    {(void *)slot_QDesignerFormWindowInterface_Feature___ior__, ior_slot},
    {(void *)slot_QDesignerFormWindowInterface_Feature___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QDesignerFormWindowInterface_Feature, "\1QDesignerFormWindowInterface.Feature(QDesignerFormWindowInterface.Feature)\n"
    "QDesignerFormWindowInterface.Feature(int)\n"
    "QDesignerFormWindowInterface.Feature()");


pyqt4ClassTypeDef sipTypeDef_QtDesigner_QDesignerFormWindowInterface_Feature = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QDesignerFormWindowInterface__Feature,
        {0}
    },
    {
        sipNameNr_Feature,
        {11, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDesignerFormWindowInterface_Feature,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QDesignerFormWindowInterface_Feature,
    init_type_QDesignerFormWindowInterface_Feature,
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
    dealloc_QDesignerFormWindowInterface_Feature,
    assign_QDesignerFormWindowInterface_Feature,
    array_QDesignerFormWindowInterface_Feature,
    copy_QDesignerFormWindowInterface_Feature,
    release_QDesignerFormWindowInterface_Feature,
    0,
    convertTo_QDesignerFormWindowInterface_Feature,
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
