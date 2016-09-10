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

#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qthreadpool.sip"
#include <qthreadpool.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQThreadPool.cpp"

#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQThreadPool.cpp"
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qrunnable.sip"
#include <qrunnable.h>
#line 36 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQThreadPool.cpp"
#line 26 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 39 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQThreadPool.cpp"
#line 368 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQThreadPool.cpp"
#line 351 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQThreadPool.cpp"
#line 269 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 48 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQThreadPool.cpp"
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 51 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQThreadPool.cpp"
#line 32 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 54 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQThreadPool.cpp"
#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 57 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQThreadPool.cpp"
#line 115 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 60 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQThreadPool.cpp"
#line 26 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qthread.sip"
#include <qthread.h>
#line 63 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQThreadPool.cpp"
#line 31 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 66 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQThreadPool.cpp"
#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 69 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQThreadPool.cpp"
#line 26 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 72 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQThreadPool.cpp"


class sipQThreadPool : public QThreadPool
{
public:
    sipQThreadPool(QObject*);
    virtual ~sipQThreadPool();

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
    sipQThreadPool(const sipQThreadPool &);
    sipQThreadPool &operator = (const sipQThreadPool &);

    char sipPyMethods[7];
};

sipQThreadPool::sipQThreadPool(QObject*a0): QThreadPool(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQThreadPool::~sipQThreadPool()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQThreadPool::metaObject() const
{
    return sip_QtCore_qt_metaobject(sipPySelf,sipType_QThreadPool);
}

int sipQThreadPool::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QThreadPool::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtCore_qt_metacall(sipPySelf,sipType_QThreadPool,_c,_id,_a);

    return _id;
}

void *sipQThreadPool::qt_metacast(const char *_clname)
{
    return (sip_QtCore_qt_metacast(sipPySelf, sipType_QThreadPool, _clname)) ? this : QThreadPool::qt_metacast(_clname);
}

void sipQThreadPool::disconnectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QThreadPool::disconnectNotify(a0);
        return;
    }

    extern void sipVH_QtCore_24(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtCore_24(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQThreadPool::connectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QThreadPool::connectNotify(a0);
        return;
    }

    extern void sipVH_QtCore_24(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtCore_24(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQThreadPool::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QThreadPool::customEvent(a0);
        return;
    }

    extern void sipVH_QtCore_17(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    sipVH_QtCore_17(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQThreadPool::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QThreadPool::childEvent(a0);
        return;
    }

    extern void sipVH_QtCore_25(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    sipVH_QtCore_25(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQThreadPool::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QThreadPool::timerEvent(a0);
        return;
    }

    extern void sipVH_QtCore_9(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    sipVH_QtCore_9(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQThreadPool::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QThreadPool::eventFilter(a0,a1);

    extern bool sipVH_QtCore_18(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return sipVH_QtCore_18(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQThreadPool::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QThreadPool::event(a0);

    extern bool sipVH_QtCore_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return sipVH_QtCore_5(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QThreadPool_globalInstance, "globalInstance() -> QThreadPool");

extern "C" {static PyObject *meth_QThreadPool_globalInstance(PyObject *, PyObject *);}
static PyObject *meth_QThreadPool_globalInstance(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QThreadPool*sipRes;
            PyObject *sipResObj;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QThreadPool::globalInstance();
            Py_END_ALLOW_THREADS

            sipResObj = sipConvertFromType(sipRes,sipType_QThreadPool,NULL);

            sipKeepReference(NULL, -10, sipResObj);

            return sipResObj;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QThreadPool, sipName_globalInstance, doc_QThreadPool_globalInstance);

    return NULL;
}


PyDoc_STRVAR(doc_QThreadPool_start, "start(self, QRunnable, priority: int = 0)");

extern "C" {static PyObject *meth_QThreadPool_start(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QThreadPool_start(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QRunnable* a0;
        PyObject *a0Wrapper;
        int a1 = 0;
        QThreadPool *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_priority,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B@J8|i", &sipSelf, sipType_QThreadPool, &sipCpp, &a0Wrapper, sipType_QRunnable, &a0, &a1))
        {
#line 37 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qthreadpool.sip"
        // We have to handle the object ownership manually.
        if (a0->autoDelete())
            sipTransferTo(a0Wrapper, sipSelf);
        
        Py_BEGIN_ALLOW_THREADS
        sipCpp->start(a0, a1);
        Py_END_ALLOW_THREADS
#line 321 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQThreadPool.cpp"

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QThreadPool, sipName_start, doc_QThreadPool_start);

    return NULL;
}


PyDoc_STRVAR(doc_QThreadPool_tryStart, "tryStart(self, QRunnable) -> bool");

extern "C" {static PyObject *meth_QThreadPool_tryStart(PyObject *, PyObject *);}
static PyObject *meth_QThreadPool_tryStart(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QRunnable* a0;
        PyObject *a0Wrapper;
        QThreadPool *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8", &sipSelf, sipType_QThreadPool, &sipCpp, &a0Wrapper, sipType_QRunnable, &a0))
        {
            bool sipRes = 0;

#line 48 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qthreadpool.sip"
        // We have to handle the object ownership manually.
        if (a0->autoDelete())
            sipTransferTo(a0Wrapper, sipSelf);
        
        Py_BEGIN_ALLOW_THREADS
        sipRes = sipCpp->tryStart(a0);
        Py_END_ALLOW_THREADS
#line 360 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQThreadPool.cpp"

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QThreadPool, sipName_tryStart, doc_QThreadPool_tryStart);

    return NULL;
}


PyDoc_STRVAR(doc_QThreadPool_expiryTimeout, "expiryTimeout(self) -> int");

extern "C" {static PyObject *meth_QThreadPool_expiryTimeout(PyObject *, PyObject *);}
static PyObject *meth_QThreadPool_expiryTimeout(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QThreadPool *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QThreadPool, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->expiryTimeout();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QThreadPool, sipName_expiryTimeout, doc_QThreadPool_expiryTimeout);

    return NULL;
}


PyDoc_STRVAR(doc_QThreadPool_setExpiryTimeout, "setExpiryTimeout(self, int)");

extern "C" {static PyObject *meth_QThreadPool_setExpiryTimeout(PyObject *, PyObject *);}
static PyObject *meth_QThreadPool_setExpiryTimeout(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QThreadPool *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QThreadPool, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setExpiryTimeout(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QThreadPool, sipName_setExpiryTimeout, doc_QThreadPool_setExpiryTimeout);

    return NULL;
}


PyDoc_STRVAR(doc_QThreadPool_maxThreadCount, "maxThreadCount(self) -> int");

extern "C" {static PyObject *meth_QThreadPool_maxThreadCount(PyObject *, PyObject *);}
static PyObject *meth_QThreadPool_maxThreadCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QThreadPool *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QThreadPool, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->maxThreadCount();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QThreadPool, sipName_maxThreadCount, doc_QThreadPool_maxThreadCount);

    return NULL;
}


PyDoc_STRVAR(doc_QThreadPool_setMaxThreadCount, "setMaxThreadCount(self, int)");

extern "C" {static PyObject *meth_QThreadPool_setMaxThreadCount(PyObject *, PyObject *);}
static PyObject *meth_QThreadPool_setMaxThreadCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QThreadPool *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QThreadPool, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setMaxThreadCount(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QThreadPool, sipName_setMaxThreadCount, doc_QThreadPool_setMaxThreadCount);

    return NULL;
}


PyDoc_STRVAR(doc_QThreadPool_activeThreadCount, "activeThreadCount(self) -> int");

extern "C" {static PyObject *meth_QThreadPool_activeThreadCount(PyObject *, PyObject *);}
static PyObject *meth_QThreadPool_activeThreadCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QThreadPool *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QThreadPool, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->activeThreadCount();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QThreadPool, sipName_activeThreadCount, doc_QThreadPool_activeThreadCount);

    return NULL;
}


PyDoc_STRVAR(doc_QThreadPool_reserveThread, "reserveThread(self)");

extern "C" {static PyObject *meth_QThreadPool_reserveThread(PyObject *, PyObject *);}
static PyObject *meth_QThreadPool_reserveThread(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QThreadPool *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QThreadPool, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->reserveThread();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QThreadPool, sipName_reserveThread, doc_QThreadPool_reserveThread);

    return NULL;
}


PyDoc_STRVAR(doc_QThreadPool_releaseThread, "releaseThread(self)");

extern "C" {static PyObject *meth_QThreadPool_releaseThread(PyObject *, PyObject *);}
static PyObject *meth_QThreadPool_releaseThread(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QThreadPool *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QThreadPool, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->releaseThread();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QThreadPool, sipName_releaseThread, doc_QThreadPool_releaseThread);

    return NULL;
}


PyDoc_STRVAR(doc_QThreadPool_waitForDone, "waitForDone(self)\n"
    "waitForDone(self, int) -> bool");

extern "C" {static PyObject *meth_QThreadPool_waitForDone(PyObject *, PyObject *);}
static PyObject *meth_QThreadPool_waitForDone(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QThreadPool *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QThreadPool, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->waitForDone();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        int a0;
        QThreadPool *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QThreadPool, &sipCpp, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->waitForDone(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QThreadPool, sipName_waitForDone, doc_QThreadPool_waitForDone);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QThreadPool(void *, int);}
static void release_QThreadPool(void *sipCppV,int)
{
    QThreadPool *sipCpp = reinterpret_cast<QThreadPool *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QThreadPool(sipSimpleWrapper *);}
static void dealloc_QThreadPool(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQThreadPool *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QThreadPool(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QThreadPool(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QThreadPool(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQThreadPool *sipCpp = 0;

    {
        QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQThreadPool(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QThreadPool[] = {{141, 255, 1}};


static PyMethodDef methods_QThreadPool[] = {
    {SIP_MLNAME_CAST(sipName_activeThreadCount), meth_QThreadPool_activeThreadCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QThreadPool_activeThreadCount)},
    {SIP_MLNAME_CAST(sipName_expiryTimeout), meth_QThreadPool_expiryTimeout, METH_VARARGS, SIP_MLDOC_CAST(doc_QThreadPool_expiryTimeout)},
    {SIP_MLNAME_CAST(sipName_globalInstance), meth_QThreadPool_globalInstance, METH_VARARGS, SIP_MLDOC_CAST(doc_QThreadPool_globalInstance)},
    {SIP_MLNAME_CAST(sipName_maxThreadCount), meth_QThreadPool_maxThreadCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QThreadPool_maxThreadCount)},
    {SIP_MLNAME_CAST(sipName_releaseThread), meth_QThreadPool_releaseThread, METH_VARARGS, SIP_MLDOC_CAST(doc_QThreadPool_releaseThread)},
    {SIP_MLNAME_CAST(sipName_reserveThread), meth_QThreadPool_reserveThread, METH_VARARGS, SIP_MLDOC_CAST(doc_QThreadPool_reserveThread)},
    {SIP_MLNAME_CAST(sipName_setExpiryTimeout), meth_QThreadPool_setExpiryTimeout, METH_VARARGS, SIP_MLDOC_CAST(doc_QThreadPool_setExpiryTimeout)},
    {SIP_MLNAME_CAST(sipName_setMaxThreadCount), meth_QThreadPool_setMaxThreadCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QThreadPool_setMaxThreadCount)},
    {SIP_MLNAME_CAST(sipName_start), (PyCFunction)meth_QThreadPool_start, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QThreadPool_start)},
    {SIP_MLNAME_CAST(sipName_tryStart), meth_QThreadPool_tryStart, METH_VARARGS, SIP_MLDOC_CAST(doc_QThreadPool_tryStart)},
    {SIP_MLNAME_CAST(sipName_waitForDone), meth_QThreadPool_waitForDone, METH_VARARGS, SIP_MLDOC_CAST(doc_QThreadPool_waitForDone)}
};

PyDoc_STRVAR(doc_QThreadPool, "\1QThreadPool(parent: QObject = None)");


pyqt4ClassTypeDef sipTypeDef_QtCore_QThreadPool = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QThreadPool,
        {0}
    },
    {
        sipNameNr_QThreadPool,
        {0, 0, 1},
        11, methods_QThreadPool,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QThreadPool,
    -1,
    -1,
    supers_QThreadPool,
    0,
    init_type_QThreadPool,
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
    dealloc_QThreadPool,
    0,
    0,
    0,
    release_QThreadPool,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QThreadPool::staticMetaObject,
    0,
    0
};
