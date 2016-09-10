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

#include "sipAPIQtXmlPatterns.h"

#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtXmlPatterns/qabstractmessagehandler.sip"
#include <qabstractmessagehandler.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtXmlPatterns/sipQtXmlPatternsQAbstractMessageHandler.cpp"

#line 29 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtXmlPatterns/sipQtXmlPatternsQAbstractMessageHandler.cpp"
#line 31 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtXmlPatterns/sipQtXmlPatternsQAbstractMessageHandler.cpp"
#line 102 "sip/QtCore/qurl.sip"
#include <qurl.h>
#line 39 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtXmlPatterns/sipQtXmlPatternsQAbstractMessageHandler.cpp"
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtXmlPatterns/qsourcelocation.sip"
#include <qsourcelocation.h>
#line 42 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtXmlPatterns/sipQtXmlPatternsQAbstractMessageHandler.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtXmlPatterns/sipQtXmlPatternsQAbstractMessageHandler.cpp"
#line 368 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 48 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtXmlPatterns/sipQtXmlPatternsQAbstractMessageHandler.cpp"
#line 351 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 51 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtXmlPatterns/sipQtXmlPatternsQAbstractMessageHandler.cpp"
#line 269 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 54 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtXmlPatterns/sipQtXmlPatternsQAbstractMessageHandler.cpp"
#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 57 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtXmlPatterns/sipQtXmlPatternsQAbstractMessageHandler.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 60 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtXmlPatterns/sipQtXmlPatternsQAbstractMessageHandler.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 63 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtXmlPatterns/sipQtXmlPatternsQAbstractMessageHandler.cpp"
#line 115 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 66 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtXmlPatterns/sipQtXmlPatternsQAbstractMessageHandler.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 69 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtXmlPatterns/sipQtXmlPatternsQAbstractMessageHandler.cpp"
#line 30 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 72 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtXmlPatterns/sipQtXmlPatternsQAbstractMessageHandler.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 75 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtXmlPatterns/sipQtXmlPatternsQAbstractMessageHandler.cpp"


class sipQAbstractMessageHandler : public QAbstractMessageHandler
{
public:
    sipQAbstractMessageHandler(QObject*);
    virtual ~sipQAbstractMessageHandler();

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
    void handleMessage(QtMsgType,const QString&,const QUrl&,const QSourceLocation&);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQAbstractMessageHandler(const sipQAbstractMessageHandler &);
    sipQAbstractMessageHandler &operator = (const sipQAbstractMessageHandler &);

    char sipPyMethods[8];
};

sipQAbstractMessageHandler::sipQAbstractMessageHandler(QObject*a0): QAbstractMessageHandler(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQAbstractMessageHandler::~sipQAbstractMessageHandler()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQAbstractMessageHandler::metaObject() const
{
    return sip_QtXmlPatterns_qt_metaobject(sipPySelf,sipType_QAbstractMessageHandler);
}

int sipQAbstractMessageHandler::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QAbstractMessageHandler::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtXmlPatterns_qt_metacall(sipPySelf,sipType_QAbstractMessageHandler,_c,_id,_a);

    return _id;
}

void *sipQAbstractMessageHandler::qt_metacast(const char *_clname)
{
    return (sip_QtXmlPatterns_qt_metacast(sipPySelf, sipType_QAbstractMessageHandler, _clname)) ? this : QAbstractMessageHandler::qt_metacast(_clname);
}

void sipQAbstractMessageHandler::disconnectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QAbstractMessageHandler::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    ((sipVH_QtCore_24)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQAbstractMessageHandler::connectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QAbstractMessageHandler::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    ((sipVH_QtCore_24)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQAbstractMessageHandler::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QAbstractMessageHandler::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_17)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[17]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQAbstractMessageHandler::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QAbstractMessageHandler::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[25]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQAbstractMessageHandler::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QAbstractMessageHandler::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[9]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQAbstractMessageHandler::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QAbstractMessageHandler::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_18)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_18)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[18]))(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQAbstractMessageHandler::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QAbstractMessageHandler::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[5]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQAbstractMessageHandler::handleMessage(QtMsgType a0,const QString& a1,const QUrl& a2,const QSourceLocation& a3)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,sipName_QAbstractMessageHandler,sipName_handleMessage);

    if (!sipMeth)
        return;

    extern void sipVH_QtXmlPatterns_17(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QtMsgType,const QString&,const QUrl&,const QSourceLocation&);

    sipVH_QtXmlPatterns_17(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2, a3);
}


PyDoc_STRVAR(doc_QAbstractMessageHandler_message, "message(self, QtMsgType, QString, identifier: QUrl = QUrl(), sourceLocation: QSourceLocation = QSourceLocation())");

extern "C" {static PyObject *meth_QAbstractMessageHandler_message(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QAbstractMessageHandler_message(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QtMsgType a0;
        const QString* a1;
        int a1State = 0;
        const QUrl& a2def = QUrl();
        const QUrl* a2 = &a2def;
        const QSourceLocation& a3def = QSourceLocation();
        const QSourceLocation* a3 = &a3def;
        QAbstractMessageHandler *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_identifier,
            sipName_sourceLocation,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BEJ1|J9J9", &sipSelf, sipType_QAbstractMessageHandler, &sipCpp, sipType_QtMsgType, &a0, sipType_QString,&a1, &a1State, sipType_QUrl, &a2, sipType_QSourceLocation, &a3))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->message(a0,*a1,*a2,*a3);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractMessageHandler, sipName_message, doc_QAbstractMessageHandler_message);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractMessageHandler_handleMessage, "handleMessage(self, QtMsgType, QString, QUrl, QSourceLocation)");

extern "C" {static PyObject *meth_QAbstractMessageHandler_handleMessage(PyObject *, PyObject *);}
static PyObject *meth_QAbstractMessageHandler_handleMessage(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QtMsgType a0;
        const QString* a1;
        int a1State = 0;
        const QUrl* a2;
        const QSourceLocation* a3;
        QAbstractMessageHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pEJ1J9J9", &sipSelf, sipType_QAbstractMessageHandler, &sipCpp, sipType_QtMsgType, &a0, sipType_QString,&a1, &a1State, sipType_QUrl, &a2, sipType_QSourceLocation, &a3))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractMessageHandler, sipName_handleMessage);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->handleMessage(a0,*a1,*a2,*a3);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractMessageHandler, sipName_handleMessage, doc_QAbstractMessageHandler_handleMessage);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QAbstractMessageHandler(void *, int);}
static void release_QAbstractMessageHandler(void *sipCppV,int)
{
    QAbstractMessageHandler *sipCpp = reinterpret_cast<QAbstractMessageHandler *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QAbstractMessageHandler(sipSimpleWrapper *);}
static void dealloc_QAbstractMessageHandler(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQAbstractMessageHandler *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QAbstractMessageHandler(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QAbstractMessageHandler(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QAbstractMessageHandler(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQAbstractMessageHandler *sipCpp = 0;

    {
        QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQAbstractMessageHandler(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QAbstractMessageHandler[] = {{141, 0, 1}};


static PyMethodDef methods_QAbstractMessageHandler[] = {
    {SIP_MLNAME_CAST(sipName_handleMessage), meth_QAbstractMessageHandler_handleMessage, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractMessageHandler_handleMessage)},
    {SIP_MLNAME_CAST(sipName_message), (PyCFunction)meth_QAbstractMessageHandler_message, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QAbstractMessageHandler_message)}
};

PyDoc_STRVAR(doc_QAbstractMessageHandler, "\1QAbstractMessageHandler(parent: QObject = None)");


pyqt4ClassTypeDef sipTypeDef_QtXmlPatterns_QAbstractMessageHandler = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QAbstractMessageHandler,
        {0}
    },
    {
        sipNameNr_QAbstractMessageHandler,
        {0, 0, 1},
        2, methods_QAbstractMessageHandler,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QAbstractMessageHandler,
    -1,
    -1,
    supers_QAbstractMessageHandler,
    0,
    init_type_QAbstractMessageHandler,
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
    dealloc_QAbstractMessageHandler,
    0,
    0,
    0,
    release_QAbstractMessageHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QAbstractMessageHandler::staticMetaObject,
    0,
    0
};
