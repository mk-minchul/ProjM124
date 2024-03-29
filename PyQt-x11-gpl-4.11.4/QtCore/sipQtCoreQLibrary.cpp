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

#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qlibrary.sip"
#include <qlibrary.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQLibrary.cpp"

#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQLibrary.cpp"
#line 31 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQLibrary.cpp"
#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qlibrary.sip"
#include <qlibrary.h>
#line 39 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQLibrary.cpp"
#line 26 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQLibrary.cpp"
#line 368 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQLibrary.cpp"
#line 351 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 48 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQLibrary.cpp"
#line 269 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 51 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQLibrary.cpp"
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 54 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQLibrary.cpp"
#line 32 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 57 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQLibrary.cpp"
#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 60 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQLibrary.cpp"
#line 115 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 63 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQLibrary.cpp"
#line 26 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qthread.sip"
#include <qthread.h>
#line 66 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQLibrary.cpp"
#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 69 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQLibrary.cpp"
#line 26 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 72 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQLibrary.cpp"


class sipQLibrary : public QLibrary
{
public:
    sipQLibrary(QObject*);
    sipQLibrary(const QString&,QObject*);
    sipQLibrary(const QString&,int,QObject*);
    sipQLibrary(const QString&,const QString&,QObject*);
    virtual ~sipQLibrary();

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
    sipQLibrary(const sipQLibrary &);
    sipQLibrary &operator = (const sipQLibrary &);

    char sipPyMethods[7];
};

sipQLibrary::sipQLibrary(QObject*a0): QLibrary(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQLibrary::sipQLibrary(const QString& a0,QObject*a1): QLibrary(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQLibrary::sipQLibrary(const QString& a0,int a1,QObject*a2): QLibrary(a0,a1,a2), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQLibrary::sipQLibrary(const QString& a0,const QString& a1,QObject*a2): QLibrary(a0,a1,a2), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQLibrary::~sipQLibrary()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQLibrary::metaObject() const
{
    return sip_QtCore_qt_metaobject(sipPySelf,sipType_QLibrary);
}

int sipQLibrary::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QLibrary::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtCore_qt_metacall(sipPySelf,sipType_QLibrary,_c,_id,_a);

    return _id;
}

void *sipQLibrary::qt_metacast(const char *_clname)
{
    return (sip_QtCore_qt_metacast(sipPySelf, sipType_QLibrary, _clname)) ? this : QLibrary::qt_metacast(_clname);
}

void sipQLibrary::disconnectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QLibrary::disconnectNotify(a0);
        return;
    }

    extern void sipVH_QtCore_24(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtCore_24(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQLibrary::connectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QLibrary::connectNotify(a0);
        return;
    }

    extern void sipVH_QtCore_24(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtCore_24(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQLibrary::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QLibrary::customEvent(a0);
        return;
    }

    extern void sipVH_QtCore_17(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    sipVH_QtCore_17(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQLibrary::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QLibrary::childEvent(a0);
        return;
    }

    extern void sipVH_QtCore_25(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    sipVH_QtCore_25(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQLibrary::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QLibrary::timerEvent(a0);
        return;
    }

    extern void sipVH_QtCore_9(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    sipVH_QtCore_9(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQLibrary::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QLibrary::eventFilter(a0,a1);

    extern bool sipVH_QtCore_18(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return sipVH_QtCore_18(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQLibrary::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QLibrary::event(a0);

    extern bool sipVH_QtCore_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return sipVH_QtCore_5(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QLibrary_errorString, "errorString(self) -> QString");

extern "C" {static PyObject *meth_QLibrary_errorString(PyObject *, PyObject *);}
static PyObject *meth_QLibrary_errorString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QLibrary *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLibrary, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->errorString());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLibrary, sipName_errorString, doc_QLibrary_errorString);

    return NULL;
}


PyDoc_STRVAR(doc_QLibrary_fileName, "fileName(self) -> QString");

extern "C" {static PyObject *meth_QLibrary_fileName(PyObject *, PyObject *);}
static PyObject *meth_QLibrary_fileName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QLibrary *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLibrary, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->fileName());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLibrary, sipName_fileName, doc_QLibrary_fileName);

    return NULL;
}


PyDoc_STRVAR(doc_QLibrary_isLoaded, "isLoaded(self) -> bool");

extern "C" {static PyObject *meth_QLibrary_isLoaded(PyObject *, PyObject *);}
static PyObject *meth_QLibrary_isLoaded(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QLibrary *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLibrary, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isLoaded();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLibrary, sipName_isLoaded, doc_QLibrary_isLoaded);

    return NULL;
}


PyDoc_STRVAR(doc_QLibrary_load, "load(self) -> bool");

extern "C" {static PyObject *meth_QLibrary_load(PyObject *, PyObject *);}
static PyObject *meth_QLibrary_load(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QLibrary *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLibrary, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->load();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLibrary, sipName_load, doc_QLibrary_load);

    return NULL;
}


PyDoc_STRVAR(doc_QLibrary_loadHints, "loadHints(self) -> QLibrary.LoadHints");

extern "C" {static PyObject *meth_QLibrary_loadHints(PyObject *, PyObject *);}
static PyObject *meth_QLibrary_loadHints(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QLibrary *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLibrary, &sipCpp))
        {
            QLibrary::LoadHints*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QLibrary::LoadHints(sipCpp->loadHints());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QLibrary_LoadHints,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLibrary, sipName_loadHints, doc_QLibrary_loadHints);

    return NULL;
}


PyDoc_STRVAR(doc_QLibrary_resolve, "resolve(self, str) -> sip.voidptr\n"
    "resolve(QString, str) -> sip.voidptr\n"
    "resolve(QString, int, str) -> sip.voidptr\n"
    "resolve(QString, QString, str) -> sip.voidptr");

extern "C" {static PyObject *meth_QLibrary_resolve(PyObject *, PyObject *);}
static PyObject *meth_QLibrary_resolve(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const char* a0;
        QLibrary *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bs", &sipSelf, sipType_QLibrary, &sipCpp, &a0))
        {
            void*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->resolve(a0);
            Py_END_ALLOW_THREADS

            return sipConvertFromVoidPtr(sipRes);
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        const char* a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1s", sipType_QString,&a0, &a0State, &a1))
        {
            void*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QLibrary::resolve(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromVoidPtr(sipRes);
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        int a1;
        const char* a2;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1is", sipType_QString,&a0, &a0State, &a1, &a2))
        {
            void*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QLibrary::resolve(*a0,a1,a2);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromVoidPtr(sipRes);
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        const QString* a1;
        int a1State = 0;
        const char* a2;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1J1s", sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, &a2))
        {
            void*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QLibrary::resolve(*a0,*a1,a2);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return sipConvertFromVoidPtr(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLibrary, sipName_resolve, doc_QLibrary_resolve);

    return NULL;
}


PyDoc_STRVAR(doc_QLibrary_unload, "unload(self) -> bool");

extern "C" {static PyObject *meth_QLibrary_unload(PyObject *, PyObject *);}
static PyObject *meth_QLibrary_unload(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QLibrary *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLibrary, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->unload();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLibrary, sipName_unload, doc_QLibrary_unload);

    return NULL;
}


PyDoc_STRVAR(doc_QLibrary_isLibrary, "isLibrary(QString) -> bool");

extern "C" {static PyObject *meth_QLibrary_isLibrary(PyObject *, PyObject *);}
static PyObject *meth_QLibrary_isLibrary(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QLibrary::isLibrary(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLibrary, sipName_isLibrary, doc_QLibrary_isLibrary);

    return NULL;
}


PyDoc_STRVAR(doc_QLibrary_setFileName, "setFileName(self, QString)");

extern "C" {static PyObject *meth_QLibrary_setFileName(PyObject *, PyObject *);}
static PyObject *meth_QLibrary_setFileName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QLibrary *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QLibrary, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setFileName(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLibrary, sipName_setFileName, doc_QLibrary_setFileName);

    return NULL;
}


PyDoc_STRVAR(doc_QLibrary_setFileNameAndVersion, "setFileNameAndVersion(self, QString, int)\n"
    "setFileNameAndVersion(self, QString, QString)");

extern "C" {static PyObject *meth_QLibrary_setFileNameAndVersion(PyObject *, PyObject *);}
static PyObject *meth_QLibrary_setFileNameAndVersion(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        int a1;
        QLibrary *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1i", &sipSelf, sipType_QLibrary, &sipCpp, sipType_QString,&a0, &a0State, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setFileNameAndVersion(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        const QString* a1;
        int a1State = 0;
        QLibrary *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QLibrary, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setFileNameAndVersion(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLibrary, sipName_setFileNameAndVersion, doc_QLibrary_setFileNameAndVersion);

    return NULL;
}


PyDoc_STRVAR(doc_QLibrary_setLoadHints, "setLoadHints(self, QLibrary.LoadHints)");

extern "C" {static PyObject *meth_QLibrary_setLoadHints(PyObject *, PyObject *);}
static PyObject *meth_QLibrary_setLoadHints(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QLibrary::LoadHints* a0;
        int a0State = 0;
        QLibrary *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QLibrary, &sipCpp, sipType_QLibrary_LoadHints, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setLoadHints(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QLibrary_LoadHints,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLibrary, sipName_setLoadHints, doc_QLibrary_setLoadHints);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QLibrary(void *, int);}
static void release_QLibrary(void *sipCppV,int)
{
    QLibrary *sipCpp = reinterpret_cast<QLibrary *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QLibrary(sipSimpleWrapper *);}
static void dealloc_QLibrary(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQLibrary *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QLibrary(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QLibrary(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QLibrary(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQLibrary *sipCpp = 0;

    {
        QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQLibrary(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        QObject* a1 = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1|JH", sipType_QString,&a0, &a0State, sipType_QObject, &a1, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQLibrary(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        int a1;
        QObject* a2 = 0;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1i|JH", sipType_QString,&a0, &a0State, &a1, sipType_QObject, &a2, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQLibrary(*a0,a1,a2);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        const QString* a1;
        int a1State = 0;
        QObject* a2 = 0;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1J1|JH", sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, sipType_QObject, &a2, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQLibrary(*a0,*a1,a2);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QLibrary[] = {{141, 255, 1}};


static PyMethodDef methods_QLibrary[] = {
    {SIP_MLNAME_CAST(sipName_errorString), meth_QLibrary_errorString, METH_VARARGS, SIP_MLDOC_CAST(doc_QLibrary_errorString)},
    {SIP_MLNAME_CAST(sipName_fileName), meth_QLibrary_fileName, METH_VARARGS, SIP_MLDOC_CAST(doc_QLibrary_fileName)},
    {SIP_MLNAME_CAST(sipName_isLibrary), meth_QLibrary_isLibrary, METH_VARARGS, SIP_MLDOC_CAST(doc_QLibrary_isLibrary)},
    {SIP_MLNAME_CAST(sipName_isLoaded), meth_QLibrary_isLoaded, METH_VARARGS, SIP_MLDOC_CAST(doc_QLibrary_isLoaded)},
    {SIP_MLNAME_CAST(sipName_load), meth_QLibrary_load, METH_VARARGS, SIP_MLDOC_CAST(doc_QLibrary_load)},
    {SIP_MLNAME_CAST(sipName_loadHints), meth_QLibrary_loadHints, METH_VARARGS, SIP_MLDOC_CAST(doc_QLibrary_loadHints)},
    {SIP_MLNAME_CAST(sipName_resolve), meth_QLibrary_resolve, METH_VARARGS, SIP_MLDOC_CAST(doc_QLibrary_resolve)},
    {SIP_MLNAME_CAST(sipName_setFileName), meth_QLibrary_setFileName, METH_VARARGS, SIP_MLDOC_CAST(doc_QLibrary_setFileName)},
    {SIP_MLNAME_CAST(sipName_setFileNameAndVersion), meth_QLibrary_setFileNameAndVersion, METH_VARARGS, SIP_MLDOC_CAST(doc_QLibrary_setFileNameAndVersion)},
    {SIP_MLNAME_CAST(sipName_setLoadHints), meth_QLibrary_setLoadHints, METH_VARARGS, SIP_MLDOC_CAST(doc_QLibrary_setLoadHints)},
    {SIP_MLNAME_CAST(sipName_unload), meth_QLibrary_unload, METH_VARARGS, SIP_MLDOC_CAST(doc_QLibrary_unload)}
};

static sipEnumMemberDef enummembers_QLibrary[] = {
    {sipName_ExportExternalSymbolsHint, static_cast<int>(QLibrary::ExportExternalSymbolsHint), 87},
    {sipName_LoadArchiveMemberHint, static_cast<int>(QLibrary::LoadArchiveMemberHint), 87},
    {sipName_ResolveAllSymbolsHint, static_cast<int>(QLibrary::ResolveAllSymbolsHint), 87},
};

PyDoc_STRVAR(doc_QLibrary, "\1QLibrary(parent: QObject = None)\n"
    "QLibrary(QString, parent: QObject = None)\n"
    "QLibrary(QString, int, parent: QObject = None)\n"
    "QLibrary(QString, QString, parent: QObject = None)");


pyqt4ClassTypeDef sipTypeDef_QtCore_QLibrary = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QLibrary,
        {0}
    },
    {
        sipNameNr_QLibrary,
        {0, 0, 1},
        11, methods_QLibrary,
        3, enummembers_QLibrary,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QLibrary,
    -1,
    -1,
    supers_QLibrary,
    0,
    init_type_QLibrary,
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
    dealloc_QLibrary,
    0,
    0,
    0,
    release_QLibrary,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QLibrary::staticMetaObject,
    0,
    0
};
