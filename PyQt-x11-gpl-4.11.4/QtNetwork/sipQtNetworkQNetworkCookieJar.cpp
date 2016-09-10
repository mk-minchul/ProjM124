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

#include "sipAPIQtNetwork.h"

#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtNetwork/qnetworkcookiejar.sip"
#include <qnetworkcookiejar.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQNetworkCookieJar.cpp"

#line 29 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQNetworkCookieJar.cpp"
#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 36 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQNetworkCookieJar.cpp"
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtNetwork/qnetworkcookie.sip"
#include <qnetworkcookie.h>
#line 39 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQNetworkCookieJar.cpp"
#line 102 "sip/QtCore/qurl.sip"
#include <qurl.h>
#line 42 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQNetworkCookieJar.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQNetworkCookieJar.cpp"
#line 368 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 48 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQNetworkCookieJar.cpp"
#line 351 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 51 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQNetworkCookieJar.cpp"
#line 269 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 54 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQNetworkCookieJar.cpp"
#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 57 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQNetworkCookieJar.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 60 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQNetworkCookieJar.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 63 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQNetworkCookieJar.cpp"
#line 115 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 66 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQNetworkCookieJar.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 69 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQNetworkCookieJar.cpp"
#line 31 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 72 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQNetworkCookieJar.cpp"
#line 30 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 75 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQNetworkCookieJar.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 78 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQNetworkCookieJar.cpp"


class sipQNetworkCookieJar : public QNetworkCookieJar
{
public:
    sipQNetworkCookieJar(QObject*);
    virtual ~sipQNetworkCookieJar();

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
    bool setCookiesFromUrl(const QList<QNetworkCookie>&,const QUrl&);
    QList<QNetworkCookie> cookiesForUrl(const QUrl&) const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQNetworkCookieJar(const sipQNetworkCookieJar &);
    sipQNetworkCookieJar &operator = (const sipQNetworkCookieJar &);

    char sipPyMethods[9];
};

sipQNetworkCookieJar::sipQNetworkCookieJar(QObject*a0): QNetworkCookieJar(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQNetworkCookieJar::~sipQNetworkCookieJar()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQNetworkCookieJar::metaObject() const
{
    return sip_QtNetwork_qt_metaobject(sipPySelf,sipType_QNetworkCookieJar);
}

int sipQNetworkCookieJar::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QNetworkCookieJar::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtNetwork_qt_metacall(sipPySelf,sipType_QNetworkCookieJar,_c,_id,_a);

    return _id;
}

void *sipQNetworkCookieJar::qt_metacast(const char *_clname)
{
    return (sip_QtNetwork_qt_metacast(sipPySelf, sipType_QNetworkCookieJar, _clname)) ? this : QNetworkCookieJar::qt_metacast(_clname);
}

void sipQNetworkCookieJar::disconnectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QNetworkCookieJar::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    ((sipVH_QtCore_24)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQNetworkCookieJar::connectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QNetworkCookieJar::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    ((sipVH_QtCore_24)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQNetworkCookieJar::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QNetworkCookieJar::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_17)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[17]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQNetworkCookieJar::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QNetworkCookieJar::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[25]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQNetworkCookieJar::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QNetworkCookieJar::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[9]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQNetworkCookieJar::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QNetworkCookieJar::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_18)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_18)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[18]))(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQNetworkCookieJar::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QNetworkCookieJar::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[5]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQNetworkCookieJar::setCookiesFromUrl(const QList<QNetworkCookie>& a0,const QUrl& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_setCookiesFromUrl);

    if (!sipMeth)
        return QNetworkCookieJar::setCookiesFromUrl(a0,a1);

    extern bool sipVH_QtNetwork_11(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QList<QNetworkCookie>&,const QUrl&);

    return sipVH_QtNetwork_11(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

QList<QNetworkCookie> sipQNetworkCookieJar::cookiesForUrl(const QUrl& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[8]),sipPySelf,NULL,sipName_cookiesForUrl);

    if (!sipMeth)
        return QNetworkCookieJar::cookiesForUrl(a0);

    extern QList<QNetworkCookie> sipVH_QtNetwork_12(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QUrl&);

    return sipVH_QtNetwork_12(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QNetworkCookieJar_cookiesForUrl, "cookiesForUrl(self, QUrl) -> object");

extern "C" {static PyObject *meth_QNetworkCookieJar_cookiesForUrl(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCookieJar_cookiesForUrl(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QUrl* a0;
        const QNetworkCookieJar *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QNetworkCookieJar, &sipCpp, sipType_QUrl, &a0))
        {
            QList<QNetworkCookie>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QNetworkCookie>((sipSelfWasArg ? sipCpp->QNetworkCookieJar::cookiesForUrl(*a0) : sipCpp->cookiesForUrl(*a0)));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QNetworkCookie,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCookieJar, sipName_cookiesForUrl, doc_QNetworkCookieJar_cookiesForUrl);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkCookieJar_setCookiesFromUrl, "setCookiesFromUrl(self, object, QUrl) -> bool");

extern "C" {static PyObject *meth_QNetworkCookieJar_setCookiesFromUrl(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCookieJar_setCookiesFromUrl(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QList<QNetworkCookie>* a0;
        int a0State = 0;
        const QUrl* a1;
        QNetworkCookieJar *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J9", &sipSelf, sipType_QNetworkCookieJar, &sipCpp, sipType_QList_0100QNetworkCookie,&a0, &a0State, sipType_QUrl, &a1))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QNetworkCookieJar::setCookiesFromUrl(*a0,*a1) : sipCpp->setCookiesFromUrl(*a0,*a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QList<QNetworkCookie> *>(a0),sipType_QList_0100QNetworkCookie,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCookieJar, sipName_setCookiesFromUrl, doc_QNetworkCookieJar_setCookiesFromUrl);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkCookieJar_setAllCookies, "setAllCookies(self, object)");

extern "C" {static PyObject *meth_QNetworkCookieJar_setAllCookies(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCookieJar_setAllCookies(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QList<QNetworkCookie>* a0;
        int a0State = 0;
        QNetworkCookieJar *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pJ1", &sipSelf, sipType_QNetworkCookieJar, &sipCpp, sipType_QList_0100QNetworkCookie,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setAllCookies(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QList<QNetworkCookie> *>(a0),sipType_QList_0100QNetworkCookie,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCookieJar, sipName_setAllCookies, doc_QNetworkCookieJar_setAllCookies);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkCookieJar_allCookies, "allCookies(self) -> object");

extern "C" {static PyObject *meth_QNetworkCookieJar_allCookies(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCookieJar_allCookies(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkCookieJar *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "p", &sipSelf, sipType_QNetworkCookieJar, &sipCpp))
        {
            QList<QNetworkCookie>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QNetworkCookie>(sipCpp->allCookies());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QNetworkCookie,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCookieJar, sipName_allCookies, doc_QNetworkCookieJar_allCookies);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QNetworkCookieJar(void *, int);}
static void release_QNetworkCookieJar(void *sipCppV,int)
{
    QNetworkCookieJar *sipCpp = reinterpret_cast<QNetworkCookieJar *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QNetworkCookieJar(sipSimpleWrapper *);}
static void dealloc_QNetworkCookieJar(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQNetworkCookieJar *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QNetworkCookieJar(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QNetworkCookieJar(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QNetworkCookieJar(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQNetworkCookieJar *sipCpp = 0;

    {
        QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQNetworkCookieJar(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QNetworkCookieJar[] = {{141, 0, 1}};


static PyMethodDef methods_QNetworkCookieJar[] = {
    {SIP_MLNAME_CAST(sipName_allCookies), meth_QNetworkCookieJar_allCookies, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkCookieJar_allCookies)},
    {SIP_MLNAME_CAST(sipName_cookiesForUrl), meth_QNetworkCookieJar_cookiesForUrl, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkCookieJar_cookiesForUrl)},
    {SIP_MLNAME_CAST(sipName_setAllCookies), meth_QNetworkCookieJar_setAllCookies, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkCookieJar_setAllCookies)},
    {SIP_MLNAME_CAST(sipName_setCookiesFromUrl), meth_QNetworkCookieJar_setCookiesFromUrl, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkCookieJar_setCookiesFromUrl)}
};

PyDoc_STRVAR(doc_QNetworkCookieJar, "\1QNetworkCookieJar(parent: QObject = None)");


pyqt4ClassTypeDef sipTypeDef_QtNetwork_QNetworkCookieJar = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QNetworkCookieJar,
        {0}
    },
    {
        sipNameNr_QNetworkCookieJar,
        {0, 0, 1},
        4, methods_QNetworkCookieJar,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QNetworkCookieJar,
    -1,
    -1,
    supers_QNetworkCookieJar,
    0,
    init_type_QNetworkCookieJar,
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
    dealloc_QNetworkCookieJar,
    0,
    0,
    0,
    release_QNetworkCookieJar,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QNetworkCookieJar::staticMetaObject,
    0,
    0
};
