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

#line 888 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQShortcutEvent.cpp"

#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qkeysequence.sip"
#include <qkeysequence.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQShortcutEvent.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 36 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQShortcutEvent.cpp"


class sipQShortcutEvent : public QShortcutEvent
{
public:
    sipQShortcutEvent(const QKeySequence&,int,bool);
    sipQShortcutEvent(const QShortcutEvent&);
    ~sipQShortcutEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQShortcutEvent(const sipQShortcutEvent &);
    sipQShortcutEvent &operator = (const sipQShortcutEvent &);
};

sipQShortcutEvent::sipQShortcutEvent(const QKeySequence& a0,int a1,bool a2): QShortcutEvent(a0,a1,a2), sipPySelf(0)
{
}

sipQShortcutEvent::sipQShortcutEvent(const QShortcutEvent& a0): QShortcutEvent(a0), sipPySelf(0)
{
}

sipQShortcutEvent::~sipQShortcutEvent()
{
    sipCommonDtor(sipPySelf);
}


PyDoc_STRVAR(doc_QShortcutEvent_isAmbiguous, "isAmbiguous(self) -> bool");

extern "C" {static PyObject *meth_QShortcutEvent_isAmbiguous(PyObject *, PyObject *);}
static PyObject *meth_QShortcutEvent_isAmbiguous(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QShortcutEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QShortcutEvent, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isAmbiguous();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QShortcutEvent, sipName_isAmbiguous, doc_QShortcutEvent_isAmbiguous);

    return NULL;
}


PyDoc_STRVAR(doc_QShortcutEvent_key, "key(self) -> QKeySequence");

extern "C" {static PyObject *meth_QShortcutEvent_key(PyObject *, PyObject *);}
static PyObject *meth_QShortcutEvent_key(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QShortcutEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QShortcutEvent, &sipCpp))
        {
            QKeySequence*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QKeySequence(sipCpp->key());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QKeySequence,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QShortcutEvent, sipName_key, doc_QShortcutEvent_key);

    return NULL;
}


PyDoc_STRVAR(doc_QShortcutEvent_shortcutId, "shortcutId(self) -> int");

extern "C" {static PyObject *meth_QShortcutEvent_shortcutId(PyObject *, PyObject *);}
static PyObject *meth_QShortcutEvent_shortcutId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QShortcutEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QShortcutEvent, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->shortcutId();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QShortcutEvent, sipName_shortcutId, doc_QShortcutEvent_shortcutId);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QShortcutEvent(void *, int);}
static void release_QShortcutEvent(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQShortcutEvent *>(sipCppV);
    else
        delete reinterpret_cast<QShortcutEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QShortcutEvent(sipSimpleWrapper *);}
static void dealloc_QShortcutEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQShortcutEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QShortcutEvent(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QShortcutEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QShortcutEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQShortcutEvent *sipCpp = 0;

    {
        const QKeySequence* a0;
        int a0State = 0;
        int a1;
        bool a2 = 0;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_ambiguous,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1i|b", sipType_QKeySequence, &a0, &a0State, &a1, &a2))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQShortcutEvent(*a0,a1,a2);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QKeySequence *>(a0),sipType_QKeySequence,a0State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QShortcutEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QShortcutEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQShortcutEvent(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QShortcutEvent[] = {{58, 0, 1}};


static PyMethodDef methods_QShortcutEvent[] = {
    {SIP_MLNAME_CAST(sipName_isAmbiguous), meth_QShortcutEvent_isAmbiguous, METH_VARARGS, SIP_MLDOC_CAST(doc_QShortcutEvent_isAmbiguous)},
    {SIP_MLNAME_CAST(sipName_key), meth_QShortcutEvent_key, METH_VARARGS, SIP_MLDOC_CAST(doc_QShortcutEvent_key)},
    {SIP_MLNAME_CAST(sipName_shortcutId), meth_QShortcutEvent_shortcutId, METH_VARARGS, SIP_MLDOC_CAST(doc_QShortcutEvent_shortcutId)}
};

PyDoc_STRVAR(doc_QShortcutEvent, "\1QShortcutEvent(QKeySequence, int, ambiguous: bool = False)\n"
    "QShortcutEvent(QShortcutEvent)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QShortcutEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QShortcutEvent,
        {0}
    },
    {
        sipNameNr_QShortcutEvent,
        {0, 0, 1},
        3, methods_QShortcutEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QShortcutEvent,
    -1,
    -1,
    supers_QShortcutEvent,
    0,
    init_type_QShortcutEvent,
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
    dealloc_QShortcutEvent,
    0,
    0,
    0,
    release_QShortcutEvent,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    0,
    0,
    0
};
