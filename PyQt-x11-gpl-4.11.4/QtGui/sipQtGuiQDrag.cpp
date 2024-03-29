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

#line 26 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qdrag.sip"
#include <qdrag.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQDrag.cpp"

#line 32 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQDrag.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 36 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQDrag.cpp"
#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qpixmap.sip"
#include <qpixmap.h>
#line 39 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQDrag.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 42 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQDrag.cpp"
#line 30 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 45 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQDrag.cpp"
#line 26 "sip/QtCore/qmimedata.sip"
#include <qmimedata.h>
#line 48 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQDrag.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 51 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQDrag.cpp"
#line 368 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 54 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQDrag.cpp"
#line 351 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 57 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQDrag.cpp"
#line 29 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 60 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQDrag.cpp"
#line 269 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 63 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQDrag.cpp"
#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 66 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQDrag.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 69 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQDrag.cpp"
#line 115 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 72 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQDrag.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 75 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQDrag.cpp"
#line 31 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 78 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQDrag.cpp"
#line 30 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 81 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQDrag.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 84 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQDrag.cpp"


class sipQDrag : public QDrag
{
public:
    sipQDrag(QWidget*);
    virtual ~sipQDrag();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void disconnectNotify(const char*);
    void connectNotify(const char*);
    void customEvent(QEvent*);
    void childEvent(QChildEvent*);
    void timerEvent(QTimerEvent*);
    bool eventFilter(QObject*,QEvent*);
    bool event(QEvent*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQDrag(const sipQDrag &);
    sipQDrag &operator = (const sipQDrag &);

    char sipPyMethods[7];
};

sipQDrag::sipQDrag(QWidget*a0): QDrag(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQDrag::~sipQDrag()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQDrag::metaObject() const
{
    return sip_QtGui_qt_metaobject(sipPySelf,sipType_QDrag);
}

int sipQDrag::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QDrag::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtGui_qt_metacall(sipPySelf,sipType_QDrag,_c,_id,_a);

    return _id;
}

void *sipQDrag::qt_metacast(const char *_clname)
{
    return (sip_QtGui_qt_metacast(sipPySelf, sipType_QDrag, _clname)) ? this : QDrag::qt_metacast(_clname);
}

void sipQDrag::disconnectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QDrag::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    ((sipVH_QtCore_24)(sipModuleAPI_QtGui_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQDrag::connectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QDrag::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    ((sipVH_QtCore_24)(sipModuleAPI_QtGui_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQDrag::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QDrag::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_17)(sipModuleAPI_QtGui_QtCore->em_virthandlers[17]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQDrag::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QDrag::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtGui_QtCore->em_virthandlers[25]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQDrag::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QDrag::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtGui_QtCore->em_virthandlers[9]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQDrag::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QDrag::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_18)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_18)(sipModuleAPI_QtGui_QtCore->em_virthandlers[18]))(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQDrag::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QDrag::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtGui_QtCore->em_virthandlers[5]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QDrag_exec_, "exec_(self, supportedActions: Qt.DropActions = Qt.MoveAction) -> Qt.DropAction\n"
    "exec_(self, Qt.DropActions, Qt.DropAction) -> Qt.DropAction");

extern "C" {static PyObject *meth_QDrag_exec_(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QDrag_exec_(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::DropActions a0def = Qt::MoveAction;
        Qt::DropActions* a0 = &a0def;
        int a0State = 0;
        QDrag *sipCpp;

        static const char *sipKwdList[] = {
            sipName_supportedActions,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|J1", &sipSelf, sipType_QDrag, &sipCpp, sipType_Qt_DropActions, &a0, &a0State))
        {
            Qt::DropAction sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->exec(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_DropActions,a0State);

            return sipConvertFromEnum(sipRes,sipType_Qt_DropAction);
        }
    }

    {
        Qt::DropActions* a0;
        int a0State = 0;
        Qt::DropAction a1;
        QDrag *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ1E", &sipSelf, sipType_QDrag, &sipCpp, sipType_Qt_DropActions, &a0, &a0State, sipType_Qt_DropAction, &a1))
        {
            Qt::DropAction sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->exec(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_DropActions,a0State);

            return sipConvertFromEnum(sipRes,sipType_Qt_DropAction);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_exec_, doc_QDrag_exec_);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_exec, "exec(self, Qt.DropActions, Qt.DropAction) -> Qt.DropAction");

extern "C" {static PyObject *meth_QDrag_exec(PyObject *, PyObject *);}
static PyObject *meth_QDrag_exec(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::DropActions* a0;
        int a0State = 0;
        Qt::DropAction a1;
        QDrag *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1E", &sipSelf, sipType_QDrag, &sipCpp, sipType_Qt_DropActions, &a0, &a0State, sipType_Qt_DropAction, &a1))
        {
            Qt::DropAction sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->exec(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_DropActions,a0State);

            return sipConvertFromEnum(sipRes,sipType_Qt_DropAction);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_exec, doc_QDrag_exec);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_setMimeData, "setMimeData(self, QMimeData)");

extern "C" {static PyObject *meth_QDrag_setMimeData(PyObject *, PyObject *);}
static PyObject *meth_QDrag_setMimeData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMimeData* a0;
        QDrag *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ:", &sipSelf, sipType_QDrag, &sipCpp, sipType_QMimeData, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setMimeData(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_setMimeData, doc_QDrag_setMimeData);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_mimeData, "mimeData(self) -> QMimeData");

extern "C" {static PyObject *meth_QDrag_mimeData(PyObject *, PyObject *);}
static PyObject *meth_QDrag_mimeData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDrag *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDrag, &sipCpp))
        {
            QMimeData*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->mimeData();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QMimeData,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_mimeData, doc_QDrag_mimeData);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_setPixmap, "setPixmap(self, QPixmap)");

extern "C" {static PyObject *meth_QDrag_setPixmap(PyObject *, PyObject *);}
static PyObject *meth_QDrag_setPixmap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPixmap* a0;
        QDrag *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QDrag, &sipCpp, sipType_QPixmap, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setPixmap(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_setPixmap, doc_QDrag_setPixmap);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_pixmap, "pixmap(self) -> QPixmap");

extern "C" {static PyObject *meth_QDrag_pixmap(PyObject *, PyObject *);}
static PyObject *meth_QDrag_pixmap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDrag *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDrag, &sipCpp))
        {
            QPixmap*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPixmap(sipCpp->pixmap());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPixmap,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_pixmap, doc_QDrag_pixmap);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_setHotSpot, "setHotSpot(self, QPoint)");

extern "C" {static PyObject *meth_QDrag_setHotSpot(PyObject *, PyObject *);}
static PyObject *meth_QDrag_setHotSpot(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPoint* a0;
        QDrag *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QDrag, &sipCpp, sipType_QPoint, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setHotSpot(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_setHotSpot, doc_QDrag_setHotSpot);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_hotSpot, "hotSpot(self) -> QPoint");

extern "C" {static PyObject *meth_QDrag_hotSpot(PyObject *, PyObject *);}
static PyObject *meth_QDrag_hotSpot(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDrag *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDrag, &sipCpp))
        {
            QPoint*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPoint(sipCpp->hotSpot());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_hotSpot, doc_QDrag_hotSpot);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_source, "source(self) -> QWidget");

extern "C" {static PyObject *meth_QDrag_source(PyObject *, PyObject *);}
static PyObject *meth_QDrag_source(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDrag *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDrag, &sipCpp))
        {
            QWidget*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->source();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QWidget,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_source, doc_QDrag_source);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_target, "target(self) -> QWidget");

extern "C" {static PyObject *meth_QDrag_target(PyObject *, PyObject *);}
static PyObject *meth_QDrag_target(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDrag *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDrag, &sipCpp))
        {
            QWidget*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->target();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QWidget,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_target, doc_QDrag_target);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_start, "start(self, supportedActions: Qt.DropActions = Qt.CopyAction) -> Qt.DropAction");

extern "C" {static PyObject *meth_QDrag_start(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QDrag_start(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::DropActions a0def = Qt::CopyAction;
        Qt::DropActions* a0 = &a0def;
        int a0State = 0;
        QDrag *sipCpp;

        static const char *sipKwdList[] = {
            sipName_supportedActions,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|J1", &sipSelf, sipType_QDrag, &sipCpp, sipType_Qt_DropActions, &a0, &a0State))
        {
            Qt::DropAction sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->start(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_DropActions,a0State);

            return sipConvertFromEnum(sipRes,sipType_Qt_DropAction);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_start, doc_QDrag_start);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_setDragCursor, "setDragCursor(self, QPixmap, Qt.DropAction)");

extern "C" {static PyObject *meth_QDrag_setDragCursor(PyObject *, PyObject *);}
static PyObject *meth_QDrag_setDragCursor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPixmap* a0;
        Qt::DropAction a1;
        QDrag *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9E", &sipSelf, sipType_QDrag, &sipCpp, sipType_QPixmap, &a0, sipType_Qt_DropAction, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setDragCursor(*a0,a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_setDragCursor, doc_QDrag_setDragCursor);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDrag(void *, int);}
static void release_QDrag(void *sipCppV,int)
{
    QDrag *sipCpp = reinterpret_cast<QDrag *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QDrag(sipSimpleWrapper *);}
static void dealloc_QDrag(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQDrag *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QDrag(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QDrag(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDrag(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQDrag *sipCpp = 0;

    {
        QWidget* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "JH", sipType_QWidget, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQDrag(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QDrag[] = {{141, 0, 1}};


static PyMethodDef methods_QDrag[] = {
    {SIP_MLNAME_CAST(sipName_exec), meth_QDrag_exec, METH_VARARGS, SIP_MLDOC_CAST(doc_QDrag_exec)},
    {SIP_MLNAME_CAST(sipName_exec_), (PyCFunction)meth_QDrag_exec_, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QDrag_exec_)},
    {SIP_MLNAME_CAST(sipName_hotSpot), meth_QDrag_hotSpot, METH_VARARGS, SIP_MLDOC_CAST(doc_QDrag_hotSpot)},
    {SIP_MLNAME_CAST(sipName_mimeData), meth_QDrag_mimeData, METH_VARARGS, SIP_MLDOC_CAST(doc_QDrag_mimeData)},
    {SIP_MLNAME_CAST(sipName_pixmap), meth_QDrag_pixmap, METH_VARARGS, SIP_MLDOC_CAST(doc_QDrag_pixmap)},
    {SIP_MLNAME_CAST(sipName_setDragCursor), meth_QDrag_setDragCursor, METH_VARARGS, SIP_MLDOC_CAST(doc_QDrag_setDragCursor)},
    {SIP_MLNAME_CAST(sipName_setHotSpot), meth_QDrag_setHotSpot, METH_VARARGS, SIP_MLDOC_CAST(doc_QDrag_setHotSpot)},
    {SIP_MLNAME_CAST(sipName_setMimeData), meth_QDrag_setMimeData, METH_VARARGS, SIP_MLDOC_CAST(doc_QDrag_setMimeData)},
    {SIP_MLNAME_CAST(sipName_setPixmap), meth_QDrag_setPixmap, METH_VARARGS, SIP_MLDOC_CAST(doc_QDrag_setPixmap)},
    {SIP_MLNAME_CAST(sipName_source), meth_QDrag_source, METH_VARARGS, SIP_MLDOC_CAST(doc_QDrag_source)},
    {SIP_MLNAME_CAST(sipName_start), (PyCFunction)meth_QDrag_start, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QDrag_start)},
    {SIP_MLNAME_CAST(sipName_target), meth_QDrag_target, METH_VARARGS, SIP_MLDOC_CAST(doc_QDrag_target)}
};


/* Define this type's signals. */
static const pyqt4QtSignal signals_QDrag[] = {
    {"targetChanged(QWidget*)", "\1targetChanged(self, QWidget)", 0, 0},
    {"actionChanged(Qt::DropAction)", "\1actionChanged(self, Qt.DropAction)", 0, 0},
    {0, 0, 0, 0}
};

PyDoc_STRVAR(doc_QDrag, "\1QDrag(QWidget)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QDrag = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QDrag,
        {0}
    },
    {
        sipNameNr_QDrag,
        {0, 0, 1},
        12, methods_QDrag,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDrag,
    -1,
    -1,
    supers_QDrag,
    0,
    init_type_QDrag,
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
    dealloc_QDrag,
    0,
    0,
    0,
    release_QDrag,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QDrag::staticMetaObject,
    0,
    signals_QDrag,
};
