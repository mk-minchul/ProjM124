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

#include "sipAPIQtCore.h"

#line 26 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qobjectcleanuphandler.sip"
#include <qobjectcleanuphandler.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQObjectCleanupHandler.cpp"

#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQObjectCleanupHandler.cpp"
#line 26 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 36 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQObjectCleanupHandler.cpp"
#line 368 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 39 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQObjectCleanupHandler.cpp"
#line 351 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQObjectCleanupHandler.cpp"
#line 269 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 45 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQObjectCleanupHandler.cpp"
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 48 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQObjectCleanupHandler.cpp"
#line 32 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 51 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQObjectCleanupHandler.cpp"
#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 54 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQObjectCleanupHandler.cpp"
#line 115 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 57 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQObjectCleanupHandler.cpp"
#line 26 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qthread.sip"
#include <qthread.h>
#line 60 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQObjectCleanupHandler.cpp"
#line 31 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 63 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQObjectCleanupHandler.cpp"
#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 66 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQObjectCleanupHandler.cpp"
#line 26 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 69 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQObjectCleanupHandler.cpp"


class sipQObjectCleanupHandler : public QObjectCleanupHandler
{
public:
    sipQObjectCleanupHandler();
    virtual ~sipQObjectCleanupHandler();

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
    sipQObjectCleanupHandler(const sipQObjectCleanupHandler &);
    sipQObjectCleanupHandler &operator = (const sipQObjectCleanupHandler &);

    char sipPyMethods[7];
};

sipQObjectCleanupHandler::sipQObjectCleanupHandler(): QObjectCleanupHandler(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQObjectCleanupHandler::~sipQObjectCleanupHandler()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQObjectCleanupHandler::metaObject() const
{
    return sip_QtCore_qt_metaobject(sipPySelf,sipType_QObjectCleanupHandler);
}

int sipQObjectCleanupHandler::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QObjectCleanupHandler::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtCore_qt_metacall(sipPySelf,sipType_QObjectCleanupHandler,_c,_id,_a);

    return _id;
}

void *sipQObjectCleanupHandler::qt_metacast(const char *_clname)
{
    return (sip_QtCore_qt_metacast(sipPySelf, sipType_QObjectCleanupHandler, _clname)) ? this : QObjectCleanupHandler::qt_metacast(_clname);
}

void sipQObjectCleanupHandler::disconnectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QObjectCleanupHandler::disconnectNotify(a0);
        return;
    }

    extern void sipVH_QtCore_24(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtCore_24(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQObjectCleanupHandler::connectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QObjectCleanupHandler::connectNotify(a0);
        return;
    }

    extern void sipVH_QtCore_24(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtCore_24(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQObjectCleanupHandler::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QObjectCleanupHandler::customEvent(a0);
        return;
    }

    extern void sipVH_QtCore_17(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    sipVH_QtCore_17(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQObjectCleanupHandler::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QObjectCleanupHandler::childEvent(a0);
        return;
    }

    extern void sipVH_QtCore_25(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    sipVH_QtCore_25(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQObjectCleanupHandler::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QObjectCleanupHandler::timerEvent(a0);
        return;
    }

    extern void sipVH_QtCore_9(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    sipVH_QtCore_9(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQObjectCleanupHandler::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QObjectCleanupHandler::eventFilter(a0,a1);

    extern bool sipVH_QtCore_18(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return sipVH_QtCore_18(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQObjectCleanupHandler::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QObjectCleanupHandler::event(a0);

    extern bool sipVH_QtCore_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return sipVH_QtCore_5(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QObjectCleanupHandler_add, "add(self, QObject) -> QObject");

extern "C" {static PyObject *meth_QObjectCleanupHandler_add(PyObject *, PyObject *);}
static PyObject *meth_QObjectCleanupHandler_add(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QObject* a0;
        QObjectCleanupHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QObjectCleanupHandler, &sipCpp, sipType_QObject, &a0))
        {
            QObject*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->add(a0);
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QObjectCleanupHandler, sipName_add, doc_QObjectCleanupHandler_add);

    return NULL;
}


PyDoc_STRVAR(doc_QObjectCleanupHandler_remove, "remove(self, QObject)");

extern "C" {static PyObject *meth_QObjectCleanupHandler_remove(PyObject *, PyObject *);}
static PyObject *meth_QObjectCleanupHandler_remove(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QObject* a0;
        QObjectCleanupHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QObjectCleanupHandler, &sipCpp, sipType_QObject, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->remove(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QObjectCleanupHandler, sipName_remove, doc_QObjectCleanupHandler_remove);

    return NULL;
}


PyDoc_STRVAR(doc_QObjectCleanupHandler_isEmpty, "isEmpty(self) -> bool");

extern "C" {static PyObject *meth_QObjectCleanupHandler_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_QObjectCleanupHandler_isEmpty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QObjectCleanupHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QObjectCleanupHandler, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isEmpty();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QObjectCleanupHandler, sipName_isEmpty, doc_QObjectCleanupHandler_isEmpty);

    return NULL;
}


PyDoc_STRVAR(doc_QObjectCleanupHandler_clear, "clear(self)");

extern "C" {static PyObject *meth_QObjectCleanupHandler_clear(PyObject *, PyObject *);}
static PyObject *meth_QObjectCleanupHandler_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QObjectCleanupHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QObjectCleanupHandler, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->clear();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QObjectCleanupHandler, sipName_clear, doc_QObjectCleanupHandler_clear);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QObjectCleanupHandler(void *, int);}
static void release_QObjectCleanupHandler(void *sipCppV,int)
{
    QObjectCleanupHandler *sipCpp = reinterpret_cast<QObjectCleanupHandler *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QObjectCleanupHandler(sipSimpleWrapper *);}
static void dealloc_QObjectCleanupHandler(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQObjectCleanupHandler *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QObjectCleanupHandler(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QObjectCleanupHandler(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QObjectCleanupHandler(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQObjectCleanupHandler *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQObjectCleanupHandler();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QObjectCleanupHandler[] = {{141, 255, 1}};


static PyMethodDef methods_QObjectCleanupHandler[] = {
    {SIP_MLNAME_CAST(sipName_add), meth_QObjectCleanupHandler_add, METH_VARARGS, SIP_MLDOC_CAST(doc_QObjectCleanupHandler_add)},
    {SIP_MLNAME_CAST(sipName_clear), meth_QObjectCleanupHandler_clear, METH_VARARGS, SIP_MLDOC_CAST(doc_QObjectCleanupHandler_clear)},
    {SIP_MLNAME_CAST(sipName_isEmpty), meth_QObjectCleanupHandler_isEmpty, METH_VARARGS, SIP_MLDOC_CAST(doc_QObjectCleanupHandler_isEmpty)},
    {SIP_MLNAME_CAST(sipName_remove), meth_QObjectCleanupHandler_remove, METH_VARARGS, SIP_MLDOC_CAST(doc_QObjectCleanupHandler_remove)}
};

PyDoc_STRVAR(doc_QObjectCleanupHandler, "\1QObjectCleanupHandler()");


pyqt4ClassTypeDef sipTypeDef_QtCore_QObjectCleanupHandler = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QObjectCleanupHandler,
        {0}
    },
    {
        sipNameNr_QObjectCleanupHandler,
        {0, 0, 1},
        4, methods_QObjectCleanupHandler,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QObjectCleanupHandler,
    -1,
    -1,
    supers_QObjectCleanupHandler,
    0,
    init_type_QObjectCleanupHandler,
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
    dealloc_QObjectCleanupHandler,
    0,
    0,
    0,
    release_QObjectCleanupHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QObjectCleanupHandler::staticMetaObject,
    0,
    0
};
