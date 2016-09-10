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

#include "sipAPIQtOpenGL.h"

#line 229 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtOpenGL/qgl.sip"
#include <qgl.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtOpenGL/sipQtOpenGLQGLContextBindOptions.cpp"

#line 229 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtOpenGL/qgl.sip"
#include <qgl.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtOpenGL/sipQtOpenGLQGLContextBindOptions.cpp"


extern "C" {static int slot_QGLContext_BindOptions___bool__(PyObject *);}
static int slot_QGLContext_BindOptions___bool__(PyObject *sipSelf)
{
    QGLContext::BindOptions *sipCpp = reinterpret_cast<QGLContext::BindOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGLContext_BindOptions));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 389 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QGLContext::BindOptions::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 55 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtOpenGL/sipQtOpenGLQGLContextBindOptions.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QGLContext_BindOptions___ne__(PyObject *,PyObject *);}
static PyObject *slot_QGLContext_BindOptions___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QGLContext::BindOptions *sipCpp = reinterpret_cast<QGLContext::BindOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGLContext_BindOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGLContext::BindOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGLContext_BindOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 380 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QGLContext::BindOptions::Int() != a0->operator QGLContext::BindOptions::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 89 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtOpenGL/sipQtOpenGLQGLContextBindOptions.cpp"
            sipReleaseType(const_cast<QGLContext::BindOptions *>(a0),sipType_QGLContext_BindOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtOpenGL,ne_slot,sipType_QGLContext_BindOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGLContext_BindOptions___eq__(PyObject *,PyObject *);}
static PyObject *slot_QGLContext_BindOptions___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QGLContext::BindOptions *sipCpp = reinterpret_cast<QGLContext::BindOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGLContext_BindOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGLContext::BindOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGLContext_BindOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 371 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QGLContext::BindOptions::Int() == a0->operator QGLContext::BindOptions::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 129 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtOpenGL/sipQtOpenGLQGLContextBindOptions.cpp"
            sipReleaseType(const_cast<QGLContext::BindOptions *>(a0),sipType_QGLContext_BindOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtOpenGL,eq_slot,sipType_QGLContext_BindOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGLContext_BindOptions___invert__(PyObject *);}
static PyObject *slot_QGLContext_BindOptions___invert__(PyObject *sipSelf)
{
    QGLContext::BindOptions *sipCpp = reinterpret_cast<QGLContext::BindOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGLContext_BindOptions));

    if (!sipCpp)
        return 0;


    {
        {
            QGLContext::BindOptions*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGLContext::BindOptions(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QGLContext_BindOptions,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QGLContext_BindOptions___and__(PyObject *,PyObject *);}
static PyObject *slot_QGLContext_BindOptions___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGLContext::BindOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGLContext_BindOptions, &a0, &a0State, &a1))
        {
            QGLContext::BindOptions*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGLContext::BindOptions((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGLContext_BindOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGLContext_BindOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtOpenGL,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGLContext_BindOptions___xor__(PyObject *,PyObject *);}
static PyObject *slot_QGLContext_BindOptions___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGLContext::BindOptions* a0;
        int a0State = 0;
        QGLContext::BindOptions* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QGLContext_BindOptions, &a0, &a0State, sipType_QGLContext_BindOptions, &a1, &a1State))
        {
            QGLContext::BindOptions*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGLContext::BindOptions((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGLContext_BindOptions,a0State);
            sipReleaseType(a1,sipType_QGLContext_BindOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QGLContext_BindOptions,NULL);
        }
    }

    {
        QGLContext::BindOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGLContext_BindOptions, &a0, &a0State, &a1))
        {
            QGLContext::BindOptions*sipRes = 0;

#line 365 "sip/QtCore/qglobal.sip"
        sipRes = new QGLContext::BindOptions(*a0 ^ a1);
#line 238 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtOpenGL/sipQtOpenGLQGLContextBindOptions.cpp"
            sipReleaseType(a0,sipType_QGLContext_BindOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGLContext_BindOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtOpenGL,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGLContext_BindOptions___or__(PyObject *,PyObject *);}
static PyObject *slot_QGLContext_BindOptions___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGLContext::BindOptions* a0;
        int a0State = 0;
        QGLContext::BindOptions* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QGLContext_BindOptions, &a0, &a0State, sipType_QGLContext_BindOptions, &a1, &a1State))
        {
            QGLContext::BindOptions*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGLContext::BindOptions((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGLContext_BindOptions,a0State);
            sipReleaseType(a1,sipType_QGLContext_BindOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QGLContext_BindOptions,NULL);
        }
    }

    {
        QGLContext::BindOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGLContext_BindOptions, &a0, &a0State, &a1))
        {
            QGLContext::BindOptions*sipRes = 0;

#line 360 "sip/QtCore/qglobal.sip"
        sipRes = new QGLContext::BindOptions(*a0 | a1);
#line 290 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtOpenGL/sipQtOpenGLQGLContextBindOptions.cpp"
            sipReleaseType(a0,sipType_QGLContext_BindOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGLContext_BindOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtOpenGL,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGLContext_BindOptions___int__(PyObject *);}
static PyObject *slot_QGLContext_BindOptions___int__(PyObject *sipSelf)
{
    QGLContext::BindOptions *sipCpp = reinterpret_cast<QGLContext::BindOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGLContext_BindOptions));

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


extern "C" {static PyObject *slot_QGLContext_BindOptions___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QGLContext_BindOptions___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGLContext_BindOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGLContext::BindOptions *sipCpp = reinterpret_cast<QGLContext::BindOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGLContext_BindOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QGLContext::BindOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGLContext_BindOptions, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QGLContext::BindOptions::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGLContext_BindOptions,a0State);

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


extern "C" {static PyObject *slot_QGLContext_BindOptions___ior__(PyObject *,PyObject *);}
static PyObject *slot_QGLContext_BindOptions___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGLContext_BindOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGLContext::BindOptions *sipCpp = reinterpret_cast<QGLContext::BindOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGLContext_BindOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QGLContext::BindOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGLContext_BindOptions, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QGLContext::BindOptions::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGLContext_BindOptions,a0State);

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


extern "C" {static PyObject *slot_QGLContext_BindOptions___iand__(PyObject *,PyObject *);}
static PyObject *slot_QGLContext_BindOptions___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGLContext_BindOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGLContext::BindOptions *sipCpp = reinterpret_cast<QGLContext::BindOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGLContext_BindOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QGLContext::BindOptions::operator&=(a0);
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
extern "C" {static void release_QGLContext_BindOptions(void *, int);}
static void release_QGLContext_BindOptions(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QGLContext::BindOptions *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QGLContext_BindOptions(void *, SIP_SSIZE_T, const void *);}
static void assign_QGLContext_BindOptions(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QGLContext::BindOptions *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QGLContext::BindOptions *>(sipSrc);
}


extern "C" {static void *array_QGLContext_BindOptions(SIP_SSIZE_T);}
static void *array_QGLContext_BindOptions(SIP_SSIZE_T sipNrElem)
{
    return new QGLContext::BindOptions[sipNrElem];
}


extern "C" {static void *copy_QGLContext_BindOptions(const void *, SIP_SSIZE_T);}
static void *copy_QGLContext_BindOptions(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QGLContext::BindOptions(reinterpret_cast<const QGLContext::BindOptions *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QGLContext_BindOptions(sipSimpleWrapper *);}
static void dealloc_QGLContext_BindOptions(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QGLContext_BindOptions(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QGLContext_BindOptions(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGLContext_BindOptions(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QGLContext::BindOptions *sipCpp = 0;

    {
        const QGLContext::BindOptions* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QGLContext_BindOptions, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QGLContext::BindOptions(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QGLContext::BindOptions *>(a0),sipType_QGLContext_BindOptions,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QGLContext::BindOptions(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QGLContext::BindOptions();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QGLContext_BindOptions(PyObject *, void **, int *, PyObject *);}
static int convertTo_QGLContext_BindOptions(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QGLContext::BindOptions **sipCppPtr = reinterpret_cast<QGLContext::BindOptions **>(sipCppPtrV);

#line 398 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QGLContext::BindOptions is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QGLContext_BindOption)) ||
            sipCanConvertToType(sipPy, sipType_QGLContext_BindOptions, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QGLContext_BindOption)))
{
    *sipCppPtr = new QGLContext::BindOptions(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QGLContext::BindOptions *>(sipConvertToType(sipPy, sipType_QGLContext_BindOptions, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 574 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtOpenGL/sipQtOpenGLQGLContextBindOptions.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QGLContext_BindOptions[] = {
    {(void *)slot_QGLContext_BindOptions___bool__, bool_slot},
    {(void *)slot_QGLContext_BindOptions___ne__, ne_slot},
    {(void *)slot_QGLContext_BindOptions___eq__, eq_slot},
    {(void *)slot_QGLContext_BindOptions___invert__, invert_slot},
    {(void *)slot_QGLContext_BindOptions___and__, and_slot},
    {(void *)slot_QGLContext_BindOptions___xor__, xor_slot},
    {(void *)slot_QGLContext_BindOptions___or__, or_slot},
    {(void *)slot_QGLContext_BindOptions___int__, int_slot},
    {(void *)slot_QGLContext_BindOptions___ixor__, ixor_slot},
    {(void *)slot_QGLContext_BindOptions___ior__, ior_slot},
    {(void *)slot_QGLContext_BindOptions___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QGLContext_BindOptions, "\1QGLContext.BindOptions(QGLContext.BindOptions)\n"
    "QGLContext.BindOptions(int)\n"
    "QGLContext.BindOptions()");


pyqt4ClassTypeDef sipTypeDef_QtOpenGL_QGLContext_BindOptions = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QGLContext__BindOptions,
        {0}
    },
    {
        sipNameNr_BindOptions,
        {8, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGLContext_BindOptions,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QGLContext_BindOptions,
    init_type_QGLContext_BindOptions,
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
    dealloc_QGLContext_BindOptions,
    assign_QGLContext_BindOptions,
    array_QGLContext_BindOptions,
    copy_QGLContext_BindOptions,
    release_QGLContext_BindOptions,
    0,
    convertTo_QGLContext_BindOptions,
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
