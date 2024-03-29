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

#line 930 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 937 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 31 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTouchEventTouchPoint.cpp"

#line 163 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 35 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTouchEventTouchPoint.cpp"
#line 114 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 38 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTouchEventTouchPoint.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 41 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTouchEventTouchPoint.cpp"


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_id, "id(self) -> int");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_id(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_id(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->id();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_id, doc_QTouchEvent_TouchPoint_id);

    return NULL;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_state, "state(self) -> Qt.TouchPointState");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_state(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_state(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
            Qt::TouchPointState sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->state();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_Qt_TouchPointState);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_state, doc_QTouchEvent_TouchPoint_state);

    return NULL;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_isPrimary, "isPrimary(self) -> bool");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_isPrimary(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_isPrimary(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isPrimary();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_isPrimary, doc_QTouchEvent_TouchPoint_isPrimary);

    return NULL;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_pos, "pos(self) -> QPointF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_pos(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_pos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
            QPointF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->pos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_pos, doc_QTouchEvent_TouchPoint_pos);

    return NULL;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_startPos, "startPos(self) -> QPointF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_startPos(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_startPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
            QPointF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->startPos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_startPos, doc_QTouchEvent_TouchPoint_startPos);

    return NULL;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_lastPos, "lastPos(self) -> QPointF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_lastPos(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_lastPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
            QPointF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->lastPos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_lastPos, doc_QTouchEvent_TouchPoint_lastPos);

    return NULL;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_scenePos, "scenePos(self) -> QPointF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_scenePos(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_scenePos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
            QPointF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->scenePos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_scenePos, doc_QTouchEvent_TouchPoint_scenePos);

    return NULL;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_startScenePos, "startScenePos(self) -> QPointF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_startScenePos(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_startScenePos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
            QPointF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->startScenePos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_startScenePos, doc_QTouchEvent_TouchPoint_startScenePos);

    return NULL;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_lastScenePos, "lastScenePos(self) -> QPointF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_lastScenePos(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_lastScenePos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
            QPointF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->lastScenePos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_lastScenePos, doc_QTouchEvent_TouchPoint_lastScenePos);

    return NULL;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_screenPos, "screenPos(self) -> QPointF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_screenPos(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_screenPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
            QPointF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->screenPos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_screenPos, doc_QTouchEvent_TouchPoint_screenPos);

    return NULL;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_startScreenPos, "startScreenPos(self) -> QPointF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_startScreenPos(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_startScreenPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
            QPointF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->startScreenPos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_startScreenPos, doc_QTouchEvent_TouchPoint_startScreenPos);

    return NULL;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_lastScreenPos, "lastScreenPos(self) -> QPointF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_lastScreenPos(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_lastScreenPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
            QPointF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->lastScreenPos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_lastScreenPos, doc_QTouchEvent_TouchPoint_lastScreenPos);

    return NULL;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_normalizedPos, "normalizedPos(self) -> QPointF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_normalizedPos(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_normalizedPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
            QPointF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->normalizedPos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_normalizedPos, doc_QTouchEvent_TouchPoint_normalizedPos);

    return NULL;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_startNormalizedPos, "startNormalizedPos(self) -> QPointF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_startNormalizedPos(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_startNormalizedPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
            QPointF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->startNormalizedPos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_startNormalizedPos, doc_QTouchEvent_TouchPoint_startNormalizedPos);

    return NULL;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_lastNormalizedPos, "lastNormalizedPos(self) -> QPointF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_lastNormalizedPos(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_lastNormalizedPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
            QPointF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->lastNormalizedPos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_lastNormalizedPos, doc_QTouchEvent_TouchPoint_lastNormalizedPos);

    return NULL;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_rect, "rect(self) -> QRectF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_rect(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_rect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
            QRectF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QRectF(sipCpp->rect());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QRectF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_rect, doc_QTouchEvent_TouchPoint_rect);

    return NULL;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_sceneRect, "sceneRect(self) -> QRectF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_sceneRect(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_sceneRect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
            QRectF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QRectF(sipCpp->sceneRect());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QRectF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_sceneRect, doc_QTouchEvent_TouchPoint_sceneRect);

    return NULL;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_screenRect, "screenRect(self) -> QRectF");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_screenRect(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_screenRect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
            QRectF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QRectF(sipCpp->screenRect());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QRectF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_screenRect, doc_QTouchEvent_TouchPoint_screenRect);

    return NULL;
}


PyDoc_STRVAR(doc_QTouchEvent_TouchPoint_pressure, "pressure(self) -> float");

extern "C" {static PyObject *meth_QTouchEvent_TouchPoint_pressure(PyObject *, PyObject *);}
static PyObject *meth_QTouchEvent_TouchPoint_pressure(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTouchEvent::TouchPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchEvent_TouchPoint, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->pressure();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_TouchPoint, sipName_pressure, doc_QTouchEvent_TouchPoint_pressure);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTouchEvent_TouchPoint(void *, int);}
static void release_QTouchEvent_TouchPoint(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QTouchEvent::TouchPoint *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QTouchEvent_TouchPoint(sipSimpleWrapper *);}
static void dealloc_QTouchEvent_TouchPoint(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTouchEvent_TouchPoint(sipGetAddress(sipSelf),0);
    }
}


static PyMethodDef methods_QTouchEvent_TouchPoint[] = {
    {SIP_MLNAME_CAST(sipName_id), meth_QTouchEvent_TouchPoint_id, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchEvent_TouchPoint_id)},
    {SIP_MLNAME_CAST(sipName_isPrimary), meth_QTouchEvent_TouchPoint_isPrimary, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchEvent_TouchPoint_isPrimary)},
    {SIP_MLNAME_CAST(sipName_lastNormalizedPos), meth_QTouchEvent_TouchPoint_lastNormalizedPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchEvent_TouchPoint_lastNormalizedPos)},
    {SIP_MLNAME_CAST(sipName_lastPos), meth_QTouchEvent_TouchPoint_lastPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchEvent_TouchPoint_lastPos)},
    {SIP_MLNAME_CAST(sipName_lastScenePos), meth_QTouchEvent_TouchPoint_lastScenePos, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchEvent_TouchPoint_lastScenePos)},
    {SIP_MLNAME_CAST(sipName_lastScreenPos), meth_QTouchEvent_TouchPoint_lastScreenPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchEvent_TouchPoint_lastScreenPos)},
    {SIP_MLNAME_CAST(sipName_normalizedPos), meth_QTouchEvent_TouchPoint_normalizedPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchEvent_TouchPoint_normalizedPos)},
    {SIP_MLNAME_CAST(sipName_pos), meth_QTouchEvent_TouchPoint_pos, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchEvent_TouchPoint_pos)},
    {SIP_MLNAME_CAST(sipName_pressure), meth_QTouchEvent_TouchPoint_pressure, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchEvent_TouchPoint_pressure)},
    {SIP_MLNAME_CAST(sipName_rect), meth_QTouchEvent_TouchPoint_rect, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchEvent_TouchPoint_rect)},
    {SIP_MLNAME_CAST(sipName_scenePos), meth_QTouchEvent_TouchPoint_scenePos, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchEvent_TouchPoint_scenePos)},
    {SIP_MLNAME_CAST(sipName_sceneRect), meth_QTouchEvent_TouchPoint_sceneRect, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchEvent_TouchPoint_sceneRect)},
    {SIP_MLNAME_CAST(sipName_screenPos), meth_QTouchEvent_TouchPoint_screenPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchEvent_TouchPoint_screenPos)},
    {SIP_MLNAME_CAST(sipName_screenRect), meth_QTouchEvent_TouchPoint_screenRect, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchEvent_TouchPoint_screenRect)},
    {SIP_MLNAME_CAST(sipName_startNormalizedPos), meth_QTouchEvent_TouchPoint_startNormalizedPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchEvent_TouchPoint_startNormalizedPos)},
    {SIP_MLNAME_CAST(sipName_startPos), meth_QTouchEvent_TouchPoint_startPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchEvent_TouchPoint_startPos)},
    {SIP_MLNAME_CAST(sipName_startScenePos), meth_QTouchEvent_TouchPoint_startScenePos, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchEvent_TouchPoint_startScenePos)},
    {SIP_MLNAME_CAST(sipName_startScreenPos), meth_QTouchEvent_TouchPoint_startScreenPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchEvent_TouchPoint_startScreenPos)},
    {SIP_MLNAME_CAST(sipName_state), meth_QTouchEvent_TouchPoint_state, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchEvent_TouchPoint_state)}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QTouchEvent_TouchPoint = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QTouchEvent__TouchPoint,
        {0}
    },
    {
        sipNameNr_TouchPoint,
        {718, 255, 0},
        19, methods_QTouchEvent_TouchPoint,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    0,
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
    dealloc_QTouchEvent_TouchPoint,
    0,
    0,
    0,
    release_QTouchEvent_TouchPoint,
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
