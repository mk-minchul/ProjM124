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

#include "sipAPIQtWebKit.h"

#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtWebKit/qwebhistoryinterface.sip"
#include <qwebhistoryinterface.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtWebKit/sipQtWebKitQWebHistoryInterface.cpp"

#line 29 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtWebKit/sipQtWebKitQWebHistoryInterface.cpp"
#line 31 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtWebKit/sipQtWebKitQWebHistoryInterface.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 39 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtWebKit/sipQtWebKitQWebHistoryInterface.cpp"
#line 368 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtWebKit/sipQtWebKitQWebHistoryInterface.cpp"
#line 351 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtWebKit/sipQtWebKitQWebHistoryInterface.cpp"
#line 269 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 48 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtWebKit/sipQtWebKitQWebHistoryInterface.cpp"
#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 51 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtWebKit/sipQtWebKitQWebHistoryInterface.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 54 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtWebKit/sipQtWebKitQWebHistoryInterface.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 57 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtWebKit/sipQtWebKitQWebHistoryInterface.cpp"
#line 115 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 60 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtWebKit/sipQtWebKitQWebHistoryInterface.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 63 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtWebKit/sipQtWebKitQWebHistoryInterface.cpp"
#line 30 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 66 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtWebKit/sipQtWebKitQWebHistoryInterface.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 69 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtWebKit/sipQtWebKitQWebHistoryInterface.cpp"


class sipQWebHistoryInterface : public QWebHistoryInterface
{
public:
    sipQWebHistoryInterface(QObject*);
    virtual ~sipQWebHistoryInterface();

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
    void addHistoryEntry(const QString&);
    bool historyContains(const QString&) const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQWebHistoryInterface(const sipQWebHistoryInterface &);
    sipQWebHistoryInterface &operator = (const sipQWebHistoryInterface &);

    char sipPyMethods[9];
};

sipQWebHistoryInterface::sipQWebHistoryInterface(QObject*a0): QWebHistoryInterface(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQWebHistoryInterface::~sipQWebHistoryInterface()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQWebHistoryInterface::metaObject() const
{
    return sip_QtWebKit_qt_metaobject(sipPySelf,sipType_QWebHistoryInterface);
}

int sipQWebHistoryInterface::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QWebHistoryInterface::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtWebKit_qt_metacall(sipPySelf,sipType_QWebHistoryInterface,_c,_id,_a);

    return _id;
}

void *sipQWebHistoryInterface::qt_metacast(const char *_clname)
{
    return (sip_QtWebKit_qt_metacast(sipPySelf, sipType_QWebHistoryInterface, _clname)) ? this : QWebHistoryInterface::qt_metacast(_clname);
}

void sipQWebHistoryInterface::disconnectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QWebHistoryInterface::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    ((sipVH_QtCore_24)(sipModuleAPI_QtWebKit_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQWebHistoryInterface::connectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QWebHistoryInterface::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    ((sipVH_QtCore_24)(sipModuleAPI_QtWebKit_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQWebHistoryInterface::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QWebHistoryInterface::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_17)(sipModuleAPI_QtWebKit_QtCore->em_virthandlers[17]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQWebHistoryInterface::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QWebHistoryInterface::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtWebKit_QtCore->em_virthandlers[25]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQWebHistoryInterface::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QWebHistoryInterface::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtWebKit_QtCore->em_virthandlers[9]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQWebHistoryInterface::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QWebHistoryInterface::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_18)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_18)(sipModuleAPI_QtWebKit_QtCore->em_virthandlers[18]))(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQWebHistoryInterface::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QWebHistoryInterface::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtWebKit_QtCore->em_virthandlers[5]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQWebHistoryInterface::addHistoryEntry(const QString& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,sipName_QWebHistoryInterface,sipName_addHistoryEntry);

    if (!sipMeth)
        return;

    typedef void (*sipVH_QtCore_33)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QString&);

    ((sipVH_QtCore_33)(sipModuleAPI_QtWebKit_QtCore->em_virthandlers[33]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQWebHistoryInterface::historyContains(const QString& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[8]),sipPySelf,sipName_QWebHistoryInterface,sipName_historyContains);

    if (!sipMeth)
        return 0;

    typedef bool (*sipVH_QtCore_28)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QString&);

    return ((sipVH_QtCore_28)(sipModuleAPI_QtWebKit_QtCore->em_virthandlers[28]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QWebHistoryInterface_setDefaultInterface, "setDefaultInterface(QWebHistoryInterface)");

extern "C" {static PyObject *meth_QWebHistoryInterface_setDefaultInterface(PyObject *, PyObject *);}
static PyObject *meth_QWebHistoryInterface_setDefaultInterface(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWebHistoryInterface* a0;
        PyObject *a0Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "@J8", &a0Keep, sipType_QWebHistoryInterface, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            QWebHistoryInterface::setDefaultInterface(a0);
            Py_END_ALLOW_THREADS

            sipKeepReference(NULL, -2, a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistoryInterface, sipName_setDefaultInterface, doc_QWebHistoryInterface_setDefaultInterface);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistoryInterface_defaultInterface, "defaultInterface() -> QWebHistoryInterface");

extern "C" {static PyObject *meth_QWebHistoryInterface_defaultInterface(PyObject *, PyObject *);}
static PyObject *meth_QWebHistoryInterface_defaultInterface(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QWebHistoryInterface*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QWebHistoryInterface::defaultInterface();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QWebHistoryInterface,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistoryInterface, sipName_defaultInterface, doc_QWebHistoryInterface_defaultInterface);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistoryInterface_historyContains, "historyContains(self, QString) -> bool");

extern "C" {static PyObject *meth_QWebHistoryInterface_historyContains(PyObject *, PyObject *);}
static PyObject *meth_QWebHistoryInterface_historyContains(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QString* a0;
        int a0State = 0;
        const QWebHistoryInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QWebHistoryInterface, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QWebHistoryInterface, sipName_historyContains);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->historyContains(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistoryInterface, sipName_historyContains, doc_QWebHistoryInterface_historyContains);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistoryInterface_addHistoryEntry, "addHistoryEntry(self, QString)");

extern "C" {static PyObject *meth_QWebHistoryInterface_addHistoryEntry(PyObject *, PyObject *);}
static PyObject *meth_QWebHistoryInterface_addHistoryEntry(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QString* a0;
        int a0State = 0;
        QWebHistoryInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QWebHistoryInterface, &sipCpp, sipType_QString,&a0, &a0State))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QWebHistoryInterface, sipName_addHistoryEntry);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->addHistoryEntry(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistoryInterface, sipName_addHistoryEntry, doc_QWebHistoryInterface_addHistoryEntry);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QWebHistoryInterface(void *, int);}
static void release_QWebHistoryInterface(void *sipCppV,int)
{
    QWebHistoryInterface *sipCpp = reinterpret_cast<QWebHistoryInterface *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QWebHistoryInterface(sipSimpleWrapper *);}
static void dealloc_QWebHistoryInterface(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQWebHistoryInterface *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QWebHistoryInterface(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QWebHistoryInterface(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QWebHistoryInterface(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQWebHistoryInterface *sipCpp = 0;

    {
        QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQWebHistoryInterface(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QWebHistoryInterface[] = {{141, 0, 1}};


static PyMethodDef methods_QWebHistoryInterface[] = {
    {SIP_MLNAME_CAST(sipName_addHistoryEntry), meth_QWebHistoryInterface_addHistoryEntry, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistoryInterface_addHistoryEntry)},
    {SIP_MLNAME_CAST(sipName_defaultInterface), meth_QWebHistoryInterface_defaultInterface, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistoryInterface_defaultInterface)},
    {SIP_MLNAME_CAST(sipName_historyContains), meth_QWebHistoryInterface_historyContains, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistoryInterface_historyContains)},
    {SIP_MLNAME_CAST(sipName_setDefaultInterface), meth_QWebHistoryInterface_setDefaultInterface, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistoryInterface_setDefaultInterface)}
};

PyDoc_STRVAR(doc_QWebHistoryInterface, "\1QWebHistoryInterface(parent: QObject = None)");


pyqt4ClassTypeDef sipTypeDef_QtWebKit_QWebHistoryInterface = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QWebHistoryInterface,
        {0}
    },
    {
        sipNameNr_QWebHistoryInterface,
        {0, 0, 1},
        4, methods_QWebHistoryInterface,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QWebHistoryInterface,
    -1,
    -1,
    supers_QWebHistoryInterface,
    0,
    init_type_QWebHistoryInterface,
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
    dealloc_QWebHistoryInterface,
    0,
    0,
    0,
    release_QWebHistoryInterface,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QWebHistoryInterface::staticMetaObject,
    0,
    0
};
