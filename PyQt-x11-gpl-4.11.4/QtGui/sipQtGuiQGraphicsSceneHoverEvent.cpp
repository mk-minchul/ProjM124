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

#line 135 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qgraphicssceneevent.sip"
#include <qgraphicssceneevent.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsSceneHoverEvent.cpp"

#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsSceneHoverEvent.cpp"
#line 30 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 36 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsSceneHoverEvent.cpp"
#line 114 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 39 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsSceneHoverEvent.cpp"
#line 32 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 42 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsSceneHoverEvent.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsSceneHoverEvent.cpp"


PyDoc_STRVAR(doc_QGraphicsSceneHoverEvent_pos, "pos(self) -> QPointF");

extern "C" {static PyObject *meth_QGraphicsSceneHoverEvent_pos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneHoverEvent_pos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneHoverEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneHoverEvent, &sipCpp))
        {
            QPointF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->pos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneHoverEvent, sipName_pos, doc_QGraphicsSceneHoverEvent_pos);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneHoverEvent_scenePos, "scenePos(self) -> QPointF");

extern "C" {static PyObject *meth_QGraphicsSceneHoverEvent_scenePos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneHoverEvent_scenePos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneHoverEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneHoverEvent, &sipCpp))
        {
            QPointF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->scenePos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneHoverEvent, sipName_scenePos, doc_QGraphicsSceneHoverEvent_scenePos);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneHoverEvent_screenPos, "screenPos(self) -> QPoint");

extern "C" {static PyObject *meth_QGraphicsSceneHoverEvent_screenPos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneHoverEvent_screenPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneHoverEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneHoverEvent, &sipCpp))
        {
            QPoint*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPoint(sipCpp->screenPos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneHoverEvent, sipName_screenPos, doc_QGraphicsSceneHoverEvent_screenPos);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneHoverEvent_lastPos, "lastPos(self) -> QPointF");

extern "C" {static PyObject *meth_QGraphicsSceneHoverEvent_lastPos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneHoverEvent_lastPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneHoverEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneHoverEvent, &sipCpp))
        {
            QPointF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->lastPos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneHoverEvent, sipName_lastPos, doc_QGraphicsSceneHoverEvent_lastPos);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneHoverEvent_lastScenePos, "lastScenePos(self) -> QPointF");

extern "C" {static PyObject *meth_QGraphicsSceneHoverEvent_lastScenePos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneHoverEvent_lastScenePos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneHoverEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneHoverEvent, &sipCpp))
        {
            QPointF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->lastScenePos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneHoverEvent, sipName_lastScenePos, doc_QGraphicsSceneHoverEvent_lastScenePos);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneHoverEvent_lastScreenPos, "lastScreenPos(self) -> QPoint");

extern "C" {static PyObject *meth_QGraphicsSceneHoverEvent_lastScreenPos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneHoverEvent_lastScreenPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneHoverEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneHoverEvent, &sipCpp))
        {
            QPoint*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPoint(sipCpp->lastScreenPos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneHoverEvent, sipName_lastScreenPos, doc_QGraphicsSceneHoverEvent_lastScreenPos);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneHoverEvent_modifiers, "modifiers(self) -> Qt.KeyboardModifiers");

extern "C" {static PyObject *meth_QGraphicsSceneHoverEvent_modifiers(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneHoverEvent_modifiers(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneHoverEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneHoverEvent, &sipCpp))
        {
            Qt::KeyboardModifiers*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::KeyboardModifiers(sipCpp->modifiers());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Qt_KeyboardModifiers,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneHoverEvent, sipName_modifiers, doc_QGraphicsSceneHoverEvent_modifiers);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGraphicsSceneHoverEvent(void *, int);}
static void release_QGraphicsSceneHoverEvent(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QGraphicsSceneHoverEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QGraphicsSceneHoverEvent(sipSimpleWrapper *);}
static void dealloc_QGraphicsSceneHoverEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QGraphicsSceneHoverEvent(sipGetAddress(sipSelf),0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QGraphicsSceneHoverEvent[] = {{200, 255, 1}};


static PyMethodDef methods_QGraphicsSceneHoverEvent[] = {
    {SIP_MLNAME_CAST(sipName_lastPos), meth_QGraphicsSceneHoverEvent_lastPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneHoverEvent_lastPos)},
    {SIP_MLNAME_CAST(sipName_lastScenePos), meth_QGraphicsSceneHoverEvent_lastScenePos, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneHoverEvent_lastScenePos)},
    {SIP_MLNAME_CAST(sipName_lastScreenPos), meth_QGraphicsSceneHoverEvent_lastScreenPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneHoverEvent_lastScreenPos)},
    {SIP_MLNAME_CAST(sipName_modifiers), meth_QGraphicsSceneHoverEvent_modifiers, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneHoverEvent_modifiers)},
    {SIP_MLNAME_CAST(sipName_pos), meth_QGraphicsSceneHoverEvent_pos, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneHoverEvent_pos)},
    {SIP_MLNAME_CAST(sipName_scenePos), meth_QGraphicsSceneHoverEvent_scenePos, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneHoverEvent_scenePos)},
    {SIP_MLNAME_CAST(sipName_screenPos), meth_QGraphicsSceneHoverEvent_screenPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneHoverEvent_screenPos)}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QGraphicsSceneHoverEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QGraphicsSceneHoverEvent,
        {0}
    },
    {
        sipNameNr_QGraphicsSceneHoverEvent,
        {0, 0, 1},
        7, methods_QGraphicsSceneHoverEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QGraphicsSceneHoverEvent,
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
    dealloc_QGraphicsSceneHoverEvent,
    0,
    0,
    0,
    release_QGraphicsSceneHoverEvent,
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
