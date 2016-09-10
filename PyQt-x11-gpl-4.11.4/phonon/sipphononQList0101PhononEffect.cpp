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

#line 115 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/phonon/sipphononQList0101PhononEffect.cpp"

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
#line 34 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/effect.sip"
#include <effect.h>
#line 43 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/phonon/sipphononQList0101PhononEffect.cpp"


extern "C" {static void assign_QList_0101Phonon_Effect(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0101Phonon_Effect(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<Phonon::Effect*> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<Phonon::Effect*> *>(sipSrc);
}


extern "C" {static void *array_QList_0101Phonon_Effect(SIP_SSIZE_T);}
static void *array_QList_0101Phonon_Effect(SIP_SSIZE_T sipNrElem)
{
    return new QList<Phonon::Effect*>[sipNrElem];
}


extern "C" {static void *copy_QList_0101Phonon_Effect(const void *, SIP_SSIZE_T);}
static void *copy_QList_0101Phonon_Effect(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<Phonon::Effect*>(reinterpret_cast<const QList<Phonon::Effect*> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0101Phonon_Effect(void *, int);}
static void release_QList_0101Phonon_Effect(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QList<Phonon::Effect*> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QList_0101Phonon_Effect(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0101Phonon_Effect(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<Phonon::Effect*> **sipCppPtr = reinterpret_cast<QList<Phonon::Effect*> **>(sipCppPtrV);

#line 145 "sip/QtCore/qlist.sip"
    SIP_SSIZE_T len;

    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PySequence_Check(sipPy) || (len = PySequence_Size(sipPy)) < 0)
            return 0;

        for (SIP_SSIZE_T i = 0; i < len; ++i)
        {
            PyObject *itm = PySequence_ITEM(sipPy, i);
            bool ok = (itm && sipCanConvertToType(itm, sipType_Phonon_Effect, 0));

            Py_XDECREF(itm);

            if (!ok)
                return 0;
        }

        return 1;
    }

    QList<Phonon::Effect *> *ql = new QList<Phonon::Effect *>;
    len = PySequence_Size(sipPy);
 
    for (SIP_SSIZE_T i = 0; i < len; ++i)
    {
        PyObject *itm = PySequence_ITEM(sipPy, i);
        Phonon::Effect *t = reinterpret_cast<Phonon::Effect *>(sipConvertToType(itm, sipType_Phonon_Effect, sipTransferObj, 0, 0, sipIsErr));

        Py_DECREF(itm);
 
        if (*sipIsErr)
        {
            delete ql;
            return 0;
        }

        ql->append(t);
    }
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 128 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/phonon/sipphononQList0101PhononEffect.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0101Phonon_Effect(void *, PyObject *);}
static PyObject *convertFrom_QList_0101Phonon_Effect(void *sipCppV, PyObject *sipTransferObj)
{
   QList<Phonon::Effect*> *sipCpp = reinterpret_cast<QList<Phonon::Effect*> *>(sipCppV);

#line 119 "sip/QtCore/qlist.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        Phonon::Effect *t = sipCpp->at(i);
        PyObject *tobj;

        // The explicit (void *) cast allows Phonon::Effect to be const.
        if ((tobj = sipConvertFromType((void *)t, sipType_Phonon_Effect, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            return NULL;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 161 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/phonon/sipphononQList0101PhononEffect.cpp"
}


sipMappedTypeDef sipTypeDef_phonon_QList_0101Phonon_Effect = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_1222,
        {0}
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QList_0101Phonon_Effect,
    array_QList_0101Phonon_Effect,
    copy_QList_0101Phonon_Effect,
    release_QList_0101Phonon_Effect,
    convertTo_QList_0101Phonon_Effect,
    convertFrom_QList_0101Phonon_Effect
};
