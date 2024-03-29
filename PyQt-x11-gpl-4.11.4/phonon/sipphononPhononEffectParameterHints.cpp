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

#include "sipAPIphonon.h"

#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/abstractaudiooutput.sip"
#include <abstractaudiooutput.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/abstractvideooutput.sip"
#include <abstractvideooutput.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/audiooutput.sip"
#include <audiooutput.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/backendcapabilities.sip"
#include <backendcapabilities.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/effect.sip"
#include <effect.h>
#line 34 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/effectparameter.sip"
#include <effectparameter.h>
#line 40 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/effectparameter.sip"
#include <effectparameter.h>
#line 41 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/phonon/sipphononPhononEffectParameterHints.cpp"

#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/abstractaudiooutput.sip"
#include <abstractaudiooutput.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/abstractvideooutput.sip"
#include <abstractvideooutput.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/audiooutput.sip"
#include <audiooutput.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/backendcapabilities.sip"
#include <backendcapabilities.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/effect.sip"
#include <effect.h>
#line 34 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/effectparameter.sip"
#include <effectparameter.h>
#line 40 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/effectparameter.sip"
#include <effectparameter.h>
#line 57 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/phonon/sipphononPhononEffectParameterHints.cpp"


extern "C" {static int slot_Phonon_EffectParameter_Hints___bool__(PyObject *);}
static int slot_Phonon_EffectParameter_Hints___bool__(PyObject *sipSelf)
{
    Phonon::EffectParameter::Hints *sipCpp = reinterpret_cast<Phonon::EffectParameter::Hints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Phonon_EffectParameter_Hints));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 389 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator Phonon::EffectParameter::Hints::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 79 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/phonon/sipphononPhononEffectParameterHints.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Phonon_EffectParameter_Hints___ne__(PyObject *,PyObject *);}
static PyObject *slot_Phonon_EffectParameter_Hints___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    Phonon::EffectParameter::Hints *sipCpp = reinterpret_cast<Phonon::EffectParameter::Hints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Phonon_EffectParameter_Hints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const Phonon::EffectParameter::Hints* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Phonon_EffectParameter_Hints, &a0, &a0State))
        {
            bool sipRes = 0;

#line 380 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator Phonon::EffectParameter::Hints::Int() != a0->operator Phonon::EffectParameter::Hints::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 113 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/phonon/sipphononPhononEffectParameterHints.cpp"
            sipReleaseType(const_cast<Phonon::EffectParameter::Hints *>(a0),sipType_Phonon_EffectParameter_Hints,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_phonon,ne_slot,sipType_Phonon_EffectParameter_Hints,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Phonon_EffectParameter_Hints___eq__(PyObject *,PyObject *);}
static PyObject *slot_Phonon_EffectParameter_Hints___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    Phonon::EffectParameter::Hints *sipCpp = reinterpret_cast<Phonon::EffectParameter::Hints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Phonon_EffectParameter_Hints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const Phonon::EffectParameter::Hints* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Phonon_EffectParameter_Hints, &a0, &a0State))
        {
            bool sipRes = 0;

#line 371 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator Phonon::EffectParameter::Hints::Int() == a0->operator Phonon::EffectParameter::Hints::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 153 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/phonon/sipphononPhononEffectParameterHints.cpp"
            sipReleaseType(const_cast<Phonon::EffectParameter::Hints *>(a0),sipType_Phonon_EffectParameter_Hints,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_phonon,eq_slot,sipType_Phonon_EffectParameter_Hints,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Phonon_EffectParameter_Hints___invert__(PyObject *);}
static PyObject *slot_Phonon_EffectParameter_Hints___invert__(PyObject *sipSelf)
{
    Phonon::EffectParameter::Hints *sipCpp = reinterpret_cast<Phonon::EffectParameter::Hints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Phonon_EffectParameter_Hints));

    if (!sipCpp)
        return 0;


    {
        {
            Phonon::EffectParameter::Hints*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Phonon::EffectParameter::Hints(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Phonon_EffectParameter_Hints,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Phonon_EffectParameter_Hints___and__(PyObject *,PyObject *);}
static PyObject *slot_Phonon_EffectParameter_Hints___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        Phonon::EffectParameter::Hints* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Phonon_EffectParameter_Hints, &a0, &a0State, &a1))
        {
            Phonon::EffectParameter::Hints*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Phonon::EffectParameter::Hints((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Phonon_EffectParameter_Hints,a0State);

            return sipConvertFromNewType(sipRes,sipType_Phonon_EffectParameter_Hints,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_phonon,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Phonon_EffectParameter_Hints___xor__(PyObject *,PyObject *);}
static PyObject *slot_Phonon_EffectParameter_Hints___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        Phonon::EffectParameter::Hints* a0;
        int a0State = 0;
        Phonon::EffectParameter::Hints* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_Phonon_EffectParameter_Hints, &a0, &a0State, sipType_Phonon_EffectParameter_Hints, &a1, &a1State))
        {
            Phonon::EffectParameter::Hints*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Phonon::EffectParameter::Hints((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Phonon_EffectParameter_Hints,a0State);
            sipReleaseType(a1,sipType_Phonon_EffectParameter_Hints,a1State);

            return sipConvertFromNewType(sipRes,sipType_Phonon_EffectParameter_Hints,NULL);
        }
    }

    {
        Phonon::EffectParameter::Hints* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Phonon_EffectParameter_Hints, &a0, &a0State, &a1))
        {
            Phonon::EffectParameter::Hints*sipRes = 0;

#line 365 "sip/QtCore/qglobal.sip"
        sipRes = new Phonon::EffectParameter::Hints(*a0 ^ a1);
#line 262 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/phonon/sipphononPhononEffectParameterHints.cpp"
            sipReleaseType(a0,sipType_Phonon_EffectParameter_Hints,a0State);

            return sipConvertFromNewType(sipRes,sipType_Phonon_EffectParameter_Hints,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_phonon,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Phonon_EffectParameter_Hints___or__(PyObject *,PyObject *);}
static PyObject *slot_Phonon_EffectParameter_Hints___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        Phonon::EffectParameter::Hints* a0;
        int a0State = 0;
        Phonon::EffectParameter::Hints* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_Phonon_EffectParameter_Hints, &a0, &a0State, sipType_Phonon_EffectParameter_Hints, &a1, &a1State))
        {
            Phonon::EffectParameter::Hints*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Phonon::EffectParameter::Hints((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Phonon_EffectParameter_Hints,a0State);
            sipReleaseType(a1,sipType_Phonon_EffectParameter_Hints,a1State);

            return sipConvertFromNewType(sipRes,sipType_Phonon_EffectParameter_Hints,NULL);
        }
    }

    {
        Phonon::EffectParameter::Hints* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Phonon_EffectParameter_Hints, &a0, &a0State, &a1))
        {
            Phonon::EffectParameter::Hints*sipRes = 0;

#line 360 "sip/QtCore/qglobal.sip"
        sipRes = new Phonon::EffectParameter::Hints(*a0 | a1);
#line 314 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/phonon/sipphononPhononEffectParameterHints.cpp"
            sipReleaseType(a0,sipType_Phonon_EffectParameter_Hints,a0State);

            return sipConvertFromNewType(sipRes,sipType_Phonon_EffectParameter_Hints,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_phonon,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Phonon_EffectParameter_Hints___int__(PyObject *);}
static PyObject *slot_Phonon_EffectParameter_Hints___int__(PyObject *sipSelf)
{
    Phonon::EffectParameter::Hints *sipCpp = reinterpret_cast<Phonon::EffectParameter::Hints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Phonon_EffectParameter_Hints));

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


extern "C" {static PyObject *slot_Phonon_EffectParameter_Hints___ixor__(PyObject *,PyObject *);}
static PyObject *slot_Phonon_EffectParameter_Hints___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Phonon_EffectParameter_Hints)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Phonon::EffectParameter::Hints *sipCpp = reinterpret_cast<Phonon::EffectParameter::Hints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Phonon_EffectParameter_Hints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        Phonon::EffectParameter::Hints* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Phonon_EffectParameter_Hints, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->Phonon::EffectParameter::Hints::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Phonon_EffectParameter_Hints,a0State);

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


extern "C" {static PyObject *slot_Phonon_EffectParameter_Hints___ior__(PyObject *,PyObject *);}
static PyObject *slot_Phonon_EffectParameter_Hints___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Phonon_EffectParameter_Hints)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Phonon::EffectParameter::Hints *sipCpp = reinterpret_cast<Phonon::EffectParameter::Hints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Phonon_EffectParameter_Hints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        Phonon::EffectParameter::Hints* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Phonon_EffectParameter_Hints, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->Phonon::EffectParameter::Hints::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Phonon_EffectParameter_Hints,a0State);

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


extern "C" {static PyObject *slot_Phonon_EffectParameter_Hints___iand__(PyObject *,PyObject *);}
static PyObject *slot_Phonon_EffectParameter_Hints___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Phonon_EffectParameter_Hints)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Phonon::EffectParameter::Hints *sipCpp = reinterpret_cast<Phonon::EffectParameter::Hints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Phonon_EffectParameter_Hints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->Phonon::EffectParameter::Hints::operator&=(a0);
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
extern "C" {static void release_Phonon_EffectParameter_Hints(void *, int);}
static void release_Phonon_EffectParameter_Hints(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<Phonon::EffectParameter::Hints *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_Phonon_EffectParameter_Hints(void *, SIP_SSIZE_T, const void *);}
static void assign_Phonon_EffectParameter_Hints(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<Phonon::EffectParameter::Hints *>(sipDst)[sipDstIdx] = *reinterpret_cast<const Phonon::EffectParameter::Hints *>(sipSrc);
}


extern "C" {static void *array_Phonon_EffectParameter_Hints(SIP_SSIZE_T);}
static void *array_Phonon_EffectParameter_Hints(SIP_SSIZE_T sipNrElem)
{
    return new Phonon::EffectParameter::Hints[sipNrElem];
}


extern "C" {static void *copy_Phonon_EffectParameter_Hints(const void *, SIP_SSIZE_T);}
static void *copy_Phonon_EffectParameter_Hints(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new Phonon::EffectParameter::Hints(reinterpret_cast<const Phonon::EffectParameter::Hints *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_Phonon_EffectParameter_Hints(sipSimpleWrapper *);}
static void dealloc_Phonon_EffectParameter_Hints(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Phonon_EffectParameter_Hints(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_Phonon_EffectParameter_Hints(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_Phonon_EffectParameter_Hints(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    Phonon::EffectParameter::Hints *sipCpp = 0;

    {
        const Phonon::EffectParameter::Hints* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_Phonon_EffectParameter_Hints, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new Phonon::EffectParameter::Hints(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<Phonon::EffectParameter::Hints *>(a0),sipType_Phonon_EffectParameter_Hints,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new Phonon::EffectParameter::Hints(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new Phonon::EffectParameter::Hints();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_Phonon_EffectParameter_Hints(PyObject *, void **, int *, PyObject *);}
static int convertTo_Phonon_EffectParameter_Hints(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    Phonon::EffectParameter::Hints **sipCppPtr = reinterpret_cast<Phonon::EffectParameter::Hints **>(sipCppPtrV);

#line 398 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a Phonon::EffectParameter::Hints is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Phonon_EffectParameter_Hint)) ||
            sipCanConvertToType(sipPy, sipType_Phonon_EffectParameter_Hints, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Phonon_EffectParameter_Hint)))
{
    *sipCppPtr = new Phonon::EffectParameter::Hints(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<Phonon::EffectParameter::Hints *>(sipConvertToType(sipPy, sipType_Phonon_EffectParameter_Hints, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 598 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/phonon/sipphononPhononEffectParameterHints.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Phonon_EffectParameter_Hints[] = {
    {(void *)slot_Phonon_EffectParameter_Hints___bool__, bool_slot},
    {(void *)slot_Phonon_EffectParameter_Hints___ne__, ne_slot},
    {(void *)slot_Phonon_EffectParameter_Hints___eq__, eq_slot},
    {(void *)slot_Phonon_EffectParameter_Hints___invert__, invert_slot},
    {(void *)slot_Phonon_EffectParameter_Hints___and__, and_slot},
    {(void *)slot_Phonon_EffectParameter_Hints___xor__, xor_slot},
    {(void *)slot_Phonon_EffectParameter_Hints___or__, or_slot},
    {(void *)slot_Phonon_EffectParameter_Hints___int__, int_slot},
    {(void *)slot_Phonon_EffectParameter_Hints___ixor__, ixor_slot},
    {(void *)slot_Phonon_EffectParameter_Hints___ior__, ior_slot},
    {(void *)slot_Phonon_EffectParameter_Hints___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_Phonon_EffectParameter_Hints, "\1Phonon.EffectParameter.Hints(Phonon.EffectParameter.Hints)\n"
    "Phonon.EffectParameter.Hints(int)\n"
    "Phonon.EffectParameter.Hints()");


pyqt4ClassTypeDef sipTypeDef_phonon_Phonon_EffectParameter_Hints = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_Phonon__EffectParameter__Hints,
        {0}
    },
    {
        sipNameNr_Hints,
        {15, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_Phonon_EffectParameter_Hints,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_Phonon_EffectParameter_Hints,
    init_type_Phonon_EffectParameter_Hints,
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
    dealloc_Phonon_EffectParameter_Hints,
    assign_Phonon_EffectParameter_Hints,
    array_Phonon_EffectParameter_Hints,
    copy_Phonon_EffectParameter_Hints,
    release_Phonon_EffectParameter_Hints,
    0,
    convertTo_Phonon_EffectParameter_Hints,
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
