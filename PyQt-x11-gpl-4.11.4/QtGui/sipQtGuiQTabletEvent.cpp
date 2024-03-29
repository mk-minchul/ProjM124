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

#line 407 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTabletEvent.cpp"

#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTabletEvent.cpp"
#line 30 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 36 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTabletEvent.cpp"
#line 114 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 39 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTabletEvent.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 42 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTabletEvent.cpp"


class sipQTabletEvent : public QTabletEvent
{
public:
    sipQTabletEvent(QEvent::Type,const QPoint&,const QPoint&,const QPointF&,int,int,qreal,int,int,qreal,qreal,int,Qt::KeyboardModifiers,qint64);
    sipQTabletEvent(const QTabletEvent&);
    ~sipQTabletEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQTabletEvent(const sipQTabletEvent &);
    sipQTabletEvent &operator = (const sipQTabletEvent &);
};

sipQTabletEvent::sipQTabletEvent(QEvent::Type a0,const QPoint& a1,const QPoint& a2,const QPointF& a3,int a4,int a5,qreal a6,int a7,int a8,qreal a9,qreal a10,int a11,Qt::KeyboardModifiers a12,qint64 a13): QTabletEvent(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13), sipPySelf(0)
{
}

sipQTabletEvent::sipQTabletEvent(const QTabletEvent& a0): QTabletEvent(a0), sipPySelf(0)
{
}

sipQTabletEvent::~sipQTabletEvent()
{
    sipCommonDtor(sipPySelf);
}


PyDoc_STRVAR(doc_QTabletEvent_pos, "pos(self) -> QPoint");

extern "C" {static PyObject *meth_QTabletEvent_pos(PyObject *, PyObject *);}
static PyObject *meth_QTabletEvent_pos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTabletEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTabletEvent, &sipCpp))
        {
            QPoint*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPoint(sipCpp->pos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTabletEvent, sipName_pos, doc_QTabletEvent_pos);

    return NULL;
}


PyDoc_STRVAR(doc_QTabletEvent_globalPos, "globalPos(self) -> QPoint");

extern "C" {static PyObject *meth_QTabletEvent_globalPos(PyObject *, PyObject *);}
static PyObject *meth_QTabletEvent_globalPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTabletEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTabletEvent, &sipCpp))
        {
            QPoint*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPoint(sipCpp->globalPos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTabletEvent, sipName_globalPos, doc_QTabletEvent_globalPos);

    return NULL;
}


PyDoc_STRVAR(doc_QTabletEvent_hiResGlobalPos, "hiResGlobalPos(self) -> QPointF");

extern "C" {static PyObject *meth_QTabletEvent_hiResGlobalPos(PyObject *, PyObject *);}
static PyObject *meth_QTabletEvent_hiResGlobalPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTabletEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTabletEvent, &sipCpp))
        {
            QPointF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->hiResGlobalPos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTabletEvent, sipName_hiResGlobalPos, doc_QTabletEvent_hiResGlobalPos);

    return NULL;
}


PyDoc_STRVAR(doc_QTabletEvent_x, "x(self) -> int");

extern "C" {static PyObject *meth_QTabletEvent_x(PyObject *, PyObject *);}
static PyObject *meth_QTabletEvent_x(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTabletEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTabletEvent, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->x();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTabletEvent, sipName_x, doc_QTabletEvent_x);

    return NULL;
}


PyDoc_STRVAR(doc_QTabletEvent_y, "y(self) -> int");

extern "C" {static PyObject *meth_QTabletEvent_y(PyObject *, PyObject *);}
static PyObject *meth_QTabletEvent_y(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTabletEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTabletEvent, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->y();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTabletEvent, sipName_y, doc_QTabletEvent_y);

    return NULL;
}


PyDoc_STRVAR(doc_QTabletEvent_globalX, "globalX(self) -> int");

extern "C" {static PyObject *meth_QTabletEvent_globalX(PyObject *, PyObject *);}
static PyObject *meth_QTabletEvent_globalX(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTabletEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTabletEvent, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->globalX();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTabletEvent, sipName_globalX, doc_QTabletEvent_globalX);

    return NULL;
}


PyDoc_STRVAR(doc_QTabletEvent_globalY, "globalY(self) -> int");

extern "C" {static PyObject *meth_QTabletEvent_globalY(PyObject *, PyObject *);}
static PyObject *meth_QTabletEvent_globalY(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTabletEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTabletEvent, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->globalY();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTabletEvent, sipName_globalY, doc_QTabletEvent_globalY);

    return NULL;
}


PyDoc_STRVAR(doc_QTabletEvent_hiResGlobalX, "hiResGlobalX(self) -> float");

extern "C" {static PyObject *meth_QTabletEvent_hiResGlobalX(PyObject *, PyObject *);}
static PyObject *meth_QTabletEvent_hiResGlobalX(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTabletEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTabletEvent, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->hiResGlobalX();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTabletEvent, sipName_hiResGlobalX, doc_QTabletEvent_hiResGlobalX);

    return NULL;
}


PyDoc_STRVAR(doc_QTabletEvent_hiResGlobalY, "hiResGlobalY(self) -> float");

extern "C" {static PyObject *meth_QTabletEvent_hiResGlobalY(PyObject *, PyObject *);}
static PyObject *meth_QTabletEvent_hiResGlobalY(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTabletEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTabletEvent, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->hiResGlobalY();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTabletEvent, sipName_hiResGlobalY, doc_QTabletEvent_hiResGlobalY);

    return NULL;
}


PyDoc_STRVAR(doc_QTabletEvent_device, "device(self) -> QTabletEvent.TabletDevice");

extern "C" {static PyObject *meth_QTabletEvent_device(PyObject *, PyObject *);}
static PyObject *meth_QTabletEvent_device(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTabletEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTabletEvent, &sipCpp))
        {
            QTabletEvent::TabletDevice sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->device();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QTabletEvent_TabletDevice);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTabletEvent, sipName_device, doc_QTabletEvent_device);

    return NULL;
}


PyDoc_STRVAR(doc_QTabletEvent_pointerType, "pointerType(self) -> QTabletEvent.PointerType");

extern "C" {static PyObject *meth_QTabletEvent_pointerType(PyObject *, PyObject *);}
static PyObject *meth_QTabletEvent_pointerType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTabletEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTabletEvent, &sipCpp))
        {
            QTabletEvent::PointerType sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->pointerType();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QTabletEvent_PointerType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTabletEvent, sipName_pointerType, doc_QTabletEvent_pointerType);

    return NULL;
}


PyDoc_STRVAR(doc_QTabletEvent_uniqueId, "uniqueId(self) -> int");

extern "C" {static PyObject *meth_QTabletEvent_uniqueId(PyObject *, PyObject *);}
static PyObject *meth_QTabletEvent_uniqueId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTabletEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTabletEvent, &sipCpp))
        {
            qint64 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->uniqueId();
            Py_END_ALLOW_THREADS

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTabletEvent, sipName_uniqueId, doc_QTabletEvent_uniqueId);

    return NULL;
}


PyDoc_STRVAR(doc_QTabletEvent_pressure, "pressure(self) -> float");

extern "C" {static PyObject *meth_QTabletEvent_pressure(PyObject *, PyObject *);}
static PyObject *meth_QTabletEvent_pressure(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTabletEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTabletEvent, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->pressure();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTabletEvent, sipName_pressure, doc_QTabletEvent_pressure);

    return NULL;
}


PyDoc_STRVAR(doc_QTabletEvent_z, "z(self) -> int");

extern "C" {static PyObject *meth_QTabletEvent_z(PyObject *, PyObject *);}
static PyObject *meth_QTabletEvent_z(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTabletEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTabletEvent, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->z();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTabletEvent, sipName_z, doc_QTabletEvent_z);

    return NULL;
}


PyDoc_STRVAR(doc_QTabletEvent_tangentialPressure, "tangentialPressure(self) -> float");

extern "C" {static PyObject *meth_QTabletEvent_tangentialPressure(PyObject *, PyObject *);}
static PyObject *meth_QTabletEvent_tangentialPressure(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTabletEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTabletEvent, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->tangentialPressure();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTabletEvent, sipName_tangentialPressure, doc_QTabletEvent_tangentialPressure);

    return NULL;
}


PyDoc_STRVAR(doc_QTabletEvent_rotation, "rotation(self) -> float");

extern "C" {static PyObject *meth_QTabletEvent_rotation(PyObject *, PyObject *);}
static PyObject *meth_QTabletEvent_rotation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTabletEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTabletEvent, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->rotation();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTabletEvent, sipName_rotation, doc_QTabletEvent_rotation);

    return NULL;
}


PyDoc_STRVAR(doc_QTabletEvent_xTilt, "xTilt(self) -> int");

extern "C" {static PyObject *meth_QTabletEvent_xTilt(PyObject *, PyObject *);}
static PyObject *meth_QTabletEvent_xTilt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTabletEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTabletEvent, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->xTilt();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTabletEvent, sipName_xTilt, doc_QTabletEvent_xTilt);

    return NULL;
}


PyDoc_STRVAR(doc_QTabletEvent_yTilt, "yTilt(self) -> int");

extern "C" {static PyObject *meth_QTabletEvent_yTilt(PyObject *, PyObject *);}
static PyObject *meth_QTabletEvent_yTilt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTabletEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTabletEvent, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->yTilt();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTabletEvent, sipName_yTilt, doc_QTabletEvent_yTilt);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTabletEvent(void *, int);}
static void release_QTabletEvent(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQTabletEvent *>(sipCppV);
    else
        delete reinterpret_cast<QTabletEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QTabletEvent(sipSimpleWrapper *);}
static void dealloc_QTabletEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQTabletEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QTabletEvent(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QTabletEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTabletEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQTabletEvent *sipCpp = 0;

    {
        QEvent::Type a0;
        const QPoint* a1;
        const QPoint* a2;
        const QPointF* a3;
        int a3State = 0;
        int a4;
        int a5;
        qreal a6;
        int a7;
        int a8;
        qreal a9;
        qreal a10;
        int a11;
        Qt::KeyboardModifiers* a12;
        int a12State = 0;
        qint64 a13;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "EJ9J9J1iifiiffiJ1n", sipType_QEvent_Type, &a0, sipType_QPoint, &a1, sipType_QPoint, &a2, sipType_QPointF, &a3, &a3State, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, sipType_Qt_KeyboardModifiers, &a12, &a12State, &a13))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQTabletEvent(a0,*a1,*a2,*a3,a4,a5,a6,a7,a8,a9,a10,a11,*a12,a13);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QPointF *>(a3),sipType_QPointF,a3State);
            sipReleaseType(a12,sipType_Qt_KeyboardModifiers,a12State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QTabletEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QTabletEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQTabletEvent(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QTabletEvent[] = {{252, 255, 1}};


static PyMethodDef methods_QTabletEvent[] = {
    {SIP_MLNAME_CAST(sipName_device), meth_QTabletEvent_device, METH_VARARGS, SIP_MLDOC_CAST(doc_QTabletEvent_device)},
    {SIP_MLNAME_CAST(sipName_globalPos), meth_QTabletEvent_globalPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QTabletEvent_globalPos)},
    {SIP_MLNAME_CAST(sipName_globalX), meth_QTabletEvent_globalX, METH_VARARGS, SIP_MLDOC_CAST(doc_QTabletEvent_globalX)},
    {SIP_MLNAME_CAST(sipName_globalY), meth_QTabletEvent_globalY, METH_VARARGS, SIP_MLDOC_CAST(doc_QTabletEvent_globalY)},
    {SIP_MLNAME_CAST(sipName_hiResGlobalPos), meth_QTabletEvent_hiResGlobalPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QTabletEvent_hiResGlobalPos)},
    {SIP_MLNAME_CAST(sipName_hiResGlobalX), meth_QTabletEvent_hiResGlobalX, METH_VARARGS, SIP_MLDOC_CAST(doc_QTabletEvent_hiResGlobalX)},
    {SIP_MLNAME_CAST(sipName_hiResGlobalY), meth_QTabletEvent_hiResGlobalY, METH_VARARGS, SIP_MLDOC_CAST(doc_QTabletEvent_hiResGlobalY)},
    {SIP_MLNAME_CAST(sipName_pointerType), meth_QTabletEvent_pointerType, METH_VARARGS, SIP_MLDOC_CAST(doc_QTabletEvent_pointerType)},
    {SIP_MLNAME_CAST(sipName_pos), meth_QTabletEvent_pos, METH_VARARGS, SIP_MLDOC_CAST(doc_QTabletEvent_pos)},
    {SIP_MLNAME_CAST(sipName_pressure), meth_QTabletEvent_pressure, METH_VARARGS, SIP_MLDOC_CAST(doc_QTabletEvent_pressure)},
    {SIP_MLNAME_CAST(sipName_rotation), meth_QTabletEvent_rotation, METH_VARARGS, SIP_MLDOC_CAST(doc_QTabletEvent_rotation)},
    {SIP_MLNAME_CAST(sipName_tangentialPressure), meth_QTabletEvent_tangentialPressure, METH_VARARGS, SIP_MLDOC_CAST(doc_QTabletEvent_tangentialPressure)},
    {SIP_MLNAME_CAST(sipName_uniqueId), meth_QTabletEvent_uniqueId, METH_VARARGS, SIP_MLDOC_CAST(doc_QTabletEvent_uniqueId)},
    {SIP_MLNAME_CAST(sipName_x), meth_QTabletEvent_x, METH_VARARGS, SIP_MLDOC_CAST(doc_QTabletEvent_x)},
    {SIP_MLNAME_CAST(sipName_xTilt), meth_QTabletEvent_xTilt, METH_VARARGS, SIP_MLDOC_CAST(doc_QTabletEvent_xTilt)},
    {SIP_MLNAME_CAST(sipName_y), meth_QTabletEvent_y, METH_VARARGS, SIP_MLDOC_CAST(doc_QTabletEvent_y)},
    {SIP_MLNAME_CAST(sipName_yTilt), meth_QTabletEvent_yTilt, METH_VARARGS, SIP_MLDOC_CAST(doc_QTabletEvent_yTilt)},
    {SIP_MLNAME_CAST(sipName_z), meth_QTabletEvent_z, METH_VARARGS, SIP_MLDOC_CAST(doc_QTabletEvent_z)}
};

static sipEnumMemberDef enummembers_QTabletEvent[] = {
    {sipName_Airbrush, static_cast<int>(QTabletEvent::Airbrush), 642},
    {sipName_Cursor, static_cast<int>(QTabletEvent::Cursor), 641},
    {sipName_Eraser, static_cast<int>(QTabletEvent::Eraser), 641},
    {sipName_FourDMouse, static_cast<int>(QTabletEvent::FourDMouse), 642},
    {sipName_NoDevice, static_cast<int>(QTabletEvent::NoDevice), 642},
    {sipName_Pen, static_cast<int>(QTabletEvent::Pen), 641},
    {sipName_Puck, static_cast<int>(QTabletEvent::Puck), 642},
    {sipName_RotationStylus, static_cast<int>(QTabletEvent::RotationStylus), 642},
    {sipName_Stylus, static_cast<int>(QTabletEvent::Stylus), 642},
    {sipName_UnknownPointer, static_cast<int>(QTabletEvent::UnknownPointer), 641},
    {sipName_XFreeEraser, static_cast<int>(QTabletEvent::XFreeEraser), 642},
};

PyDoc_STRVAR(doc_QTabletEvent, "\1QTabletEvent(QEvent.Type, QPoint, QPoint, QPointF, int, int, float, int, int, float, float, int, Qt.KeyboardModifiers, int)\n"
    "QTabletEvent(QTabletEvent)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QTabletEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QTabletEvent,
        {0}
    },
    {
        sipNameNr_QTabletEvent,
        {0, 0, 1},
        18, methods_QTabletEvent,
        11, enummembers_QTabletEvent,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTabletEvent,
    -1,
    -1,
    supers_QTabletEvent,
    0,
    init_type_QTabletEvent,
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
    dealloc_QTabletEvent,
    0,
    0,
    0,
    release_QTabletEvent,
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
