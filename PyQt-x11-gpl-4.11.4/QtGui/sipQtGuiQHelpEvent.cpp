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

#line 807 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQHelpEvent.cpp"

#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQHelpEvent.cpp"
#line 30 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 36 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQHelpEvent.cpp"


class sipQHelpEvent : public QHelpEvent
{
public:
    sipQHelpEvent(QEvent::Type,const QPoint&,const QPoint&);
    sipQHelpEvent(const QHelpEvent&);
    ~sipQHelpEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQHelpEvent(const sipQHelpEvent &);
    sipQHelpEvent &operator = (const sipQHelpEvent &);
};

sipQHelpEvent::sipQHelpEvent(QEvent::Type a0,const QPoint& a1,const QPoint& a2): QHelpEvent(a0,a1,a2), sipPySelf(0)
{
}

sipQHelpEvent::sipQHelpEvent(const QHelpEvent& a0): QHelpEvent(a0), sipPySelf(0)
{
}

sipQHelpEvent::~sipQHelpEvent()
{
    sipCommonDtor(sipPySelf);
}


PyDoc_STRVAR(doc_QHelpEvent_x, "x(self) -> int");

extern "C" {static PyObject *meth_QHelpEvent_x(PyObject *, PyObject *);}
static PyObject *meth_QHelpEvent_x(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QHelpEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHelpEvent, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->x();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHelpEvent, sipName_x, doc_QHelpEvent_x);

    return NULL;
}


PyDoc_STRVAR(doc_QHelpEvent_y, "y(self) -> int");

extern "C" {static PyObject *meth_QHelpEvent_y(PyObject *, PyObject *);}
static PyObject *meth_QHelpEvent_y(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QHelpEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHelpEvent, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->y();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHelpEvent, sipName_y, doc_QHelpEvent_y);

    return NULL;
}


PyDoc_STRVAR(doc_QHelpEvent_globalX, "globalX(self) -> int");

extern "C" {static PyObject *meth_QHelpEvent_globalX(PyObject *, PyObject *);}
static PyObject *meth_QHelpEvent_globalX(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QHelpEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHelpEvent, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->globalX();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHelpEvent, sipName_globalX, doc_QHelpEvent_globalX);

    return NULL;
}


PyDoc_STRVAR(doc_QHelpEvent_globalY, "globalY(self) -> int");

extern "C" {static PyObject *meth_QHelpEvent_globalY(PyObject *, PyObject *);}
static PyObject *meth_QHelpEvent_globalY(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QHelpEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHelpEvent, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->globalY();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHelpEvent, sipName_globalY, doc_QHelpEvent_globalY);

    return NULL;
}


PyDoc_STRVAR(doc_QHelpEvent_pos, "pos(self) -> QPoint");

extern "C" {static PyObject *meth_QHelpEvent_pos(PyObject *, PyObject *);}
static PyObject *meth_QHelpEvent_pos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QHelpEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHelpEvent, &sipCpp))
        {
            QPoint*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPoint(sipCpp->pos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHelpEvent, sipName_pos, doc_QHelpEvent_pos);

    return NULL;
}


PyDoc_STRVAR(doc_QHelpEvent_globalPos, "globalPos(self) -> QPoint");

extern "C" {static PyObject *meth_QHelpEvent_globalPos(PyObject *, PyObject *);}
static PyObject *meth_QHelpEvent_globalPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QHelpEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHelpEvent, &sipCpp))
        {
            QPoint*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPoint(sipCpp->globalPos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHelpEvent, sipName_globalPos, doc_QHelpEvent_globalPos);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QHelpEvent(void *, int);}
static void release_QHelpEvent(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQHelpEvent *>(sipCppV);
    else
        delete reinterpret_cast<QHelpEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QHelpEvent(sipSimpleWrapper *);}
static void dealloc_QHelpEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQHelpEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QHelpEvent(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QHelpEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QHelpEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQHelpEvent *sipCpp = 0;

    {
        QEvent::Type a0;
        const QPoint* a1;
        const QPoint* a2;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "EJ9J9", sipType_QEvent_Type, &a0, sipType_QPoint, &a1, sipType_QPoint, &a2))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQHelpEvent(a0,*a1,*a2);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QHelpEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QHelpEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQHelpEvent(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QHelpEvent[] = {{58, 0, 1}};


static PyMethodDef methods_QHelpEvent[] = {
    {SIP_MLNAME_CAST(sipName_globalPos), meth_QHelpEvent_globalPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QHelpEvent_globalPos)},
    {SIP_MLNAME_CAST(sipName_globalX), meth_QHelpEvent_globalX, METH_VARARGS, SIP_MLDOC_CAST(doc_QHelpEvent_globalX)},
    {SIP_MLNAME_CAST(sipName_globalY), meth_QHelpEvent_globalY, METH_VARARGS, SIP_MLDOC_CAST(doc_QHelpEvent_globalY)},
    {SIP_MLNAME_CAST(sipName_pos), meth_QHelpEvent_pos, METH_VARARGS, SIP_MLDOC_CAST(doc_QHelpEvent_pos)},
    {SIP_MLNAME_CAST(sipName_x), meth_QHelpEvent_x, METH_VARARGS, SIP_MLDOC_CAST(doc_QHelpEvent_x)},
    {SIP_MLNAME_CAST(sipName_y), meth_QHelpEvent_y, METH_VARARGS, SIP_MLDOC_CAST(doc_QHelpEvent_y)}
};

PyDoc_STRVAR(doc_QHelpEvent, "\1QHelpEvent(QEvent.Type, QPoint, QPoint)\n"
    "QHelpEvent(QHelpEvent)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QHelpEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QHelpEvent,
        {0}
    },
    {
        sipNameNr_QHelpEvent,
        {0, 0, 1},
        6, methods_QHelpEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QHelpEvent,
    -1,
    -1,
    supers_QHelpEvent,
    0,
    init_type_QHelpEvent,
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
    dealloc_QHelpEvent,
    0,
    0,
    0,
    release_QHelpEvent,
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
