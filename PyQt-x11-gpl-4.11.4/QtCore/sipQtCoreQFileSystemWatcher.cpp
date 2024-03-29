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

#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qfilesystemwatcher.sip"
#include <qfilesystemwatcher.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQFileSystemWatcher.cpp"

#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQFileSystemWatcher.cpp"
#line 31 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 36 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQFileSystemWatcher.cpp"
#line 31 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 39 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQFileSystemWatcher.cpp"
#line 26 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQFileSystemWatcher.cpp"
#line 368 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQFileSystemWatcher.cpp"
#line 351 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 48 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQFileSystemWatcher.cpp"
#line 269 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 51 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQFileSystemWatcher.cpp"
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 54 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQFileSystemWatcher.cpp"
#line 32 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 57 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQFileSystemWatcher.cpp"
#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 60 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQFileSystemWatcher.cpp"
#line 115 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 63 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQFileSystemWatcher.cpp"
#line 26 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qthread.sip"
#include <qthread.h>
#line 66 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQFileSystemWatcher.cpp"
#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 69 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQFileSystemWatcher.cpp"
#line 26 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 72 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQFileSystemWatcher.cpp"


class sipQFileSystemWatcher : public QFileSystemWatcher
{
public:
    sipQFileSystemWatcher(QObject*);
    sipQFileSystemWatcher(const QStringList&,QObject*);
    virtual ~sipQFileSystemWatcher();

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
    sipQFileSystemWatcher(const sipQFileSystemWatcher &);
    sipQFileSystemWatcher &operator = (const sipQFileSystemWatcher &);

    char sipPyMethods[7];
};

sipQFileSystemWatcher::sipQFileSystemWatcher(QObject*a0): QFileSystemWatcher(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQFileSystemWatcher::sipQFileSystemWatcher(const QStringList& a0,QObject*a1): QFileSystemWatcher(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQFileSystemWatcher::~sipQFileSystemWatcher()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQFileSystemWatcher::metaObject() const
{
    return sip_QtCore_qt_metaobject(sipPySelf,sipType_QFileSystemWatcher);
}

int sipQFileSystemWatcher::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QFileSystemWatcher::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtCore_qt_metacall(sipPySelf,sipType_QFileSystemWatcher,_c,_id,_a);

    return _id;
}

void *sipQFileSystemWatcher::qt_metacast(const char *_clname)
{
    return (sip_QtCore_qt_metacast(sipPySelf, sipType_QFileSystemWatcher, _clname)) ? this : QFileSystemWatcher::qt_metacast(_clname);
}

void sipQFileSystemWatcher::disconnectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QFileSystemWatcher::disconnectNotify(a0);
        return;
    }

    extern void sipVH_QtCore_24(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtCore_24(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQFileSystemWatcher::connectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QFileSystemWatcher::connectNotify(a0);
        return;
    }

    extern void sipVH_QtCore_24(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtCore_24(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQFileSystemWatcher::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QFileSystemWatcher::customEvent(a0);
        return;
    }

    extern void sipVH_QtCore_17(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    sipVH_QtCore_17(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQFileSystemWatcher::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QFileSystemWatcher::childEvent(a0);
        return;
    }

    extern void sipVH_QtCore_25(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    sipVH_QtCore_25(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQFileSystemWatcher::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QFileSystemWatcher::timerEvent(a0);
        return;
    }

    extern void sipVH_QtCore_9(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    sipVH_QtCore_9(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQFileSystemWatcher::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QFileSystemWatcher::eventFilter(a0,a1);

    extern bool sipVH_QtCore_18(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return sipVH_QtCore_18(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQFileSystemWatcher::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QFileSystemWatcher::event(a0);

    extern bool sipVH_QtCore_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return sipVH_QtCore_5(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QFileSystemWatcher_addPath, "addPath(self, QString)");

extern "C" {static PyObject *meth_QFileSystemWatcher_addPath(PyObject *, PyObject *);}
static PyObject *meth_QFileSystemWatcher_addPath(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QFileSystemWatcher *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QFileSystemWatcher, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->addPath(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileSystemWatcher, sipName_addPath, doc_QFileSystemWatcher_addPath);

    return NULL;
}


PyDoc_STRVAR(doc_QFileSystemWatcher_addPaths, "addPaths(self, QStringList)");

extern "C" {static PyObject *meth_QFileSystemWatcher_addPaths(PyObject *, PyObject *);}
static PyObject *meth_QFileSystemWatcher_addPaths(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QStringList* a0;
        int a0State = 0;
        QFileSystemWatcher *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QFileSystemWatcher, &sipCpp, sipType_QStringList,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->addPaths(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QStringList *>(a0),sipType_QStringList,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileSystemWatcher, sipName_addPaths, doc_QFileSystemWatcher_addPaths);

    return NULL;
}


PyDoc_STRVAR(doc_QFileSystemWatcher_directories, "directories(self) -> QStringList");

extern "C" {static PyObject *meth_QFileSystemWatcher_directories(PyObject *, PyObject *);}
static PyObject *meth_QFileSystemWatcher_directories(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QFileSystemWatcher *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFileSystemWatcher, &sipCpp))
        {
            QStringList*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStringList(sipCpp->directories());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileSystemWatcher, sipName_directories, doc_QFileSystemWatcher_directories);

    return NULL;
}


PyDoc_STRVAR(doc_QFileSystemWatcher_files, "files(self) -> QStringList");

extern "C" {static PyObject *meth_QFileSystemWatcher_files(PyObject *, PyObject *);}
static PyObject *meth_QFileSystemWatcher_files(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QFileSystemWatcher *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFileSystemWatcher, &sipCpp))
        {
            QStringList*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStringList(sipCpp->files());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileSystemWatcher, sipName_files, doc_QFileSystemWatcher_files);

    return NULL;
}


PyDoc_STRVAR(doc_QFileSystemWatcher_removePath, "removePath(self, QString)");

extern "C" {static PyObject *meth_QFileSystemWatcher_removePath(PyObject *, PyObject *);}
static PyObject *meth_QFileSystemWatcher_removePath(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QFileSystemWatcher *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QFileSystemWatcher, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->removePath(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileSystemWatcher, sipName_removePath, doc_QFileSystemWatcher_removePath);

    return NULL;
}


PyDoc_STRVAR(doc_QFileSystemWatcher_removePaths, "removePaths(self, QStringList)");

extern "C" {static PyObject *meth_QFileSystemWatcher_removePaths(PyObject *, PyObject *);}
static PyObject *meth_QFileSystemWatcher_removePaths(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QStringList* a0;
        int a0State = 0;
        QFileSystemWatcher *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QFileSystemWatcher, &sipCpp, sipType_QStringList,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->removePaths(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QStringList *>(a0),sipType_QStringList,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileSystemWatcher, sipName_removePaths, doc_QFileSystemWatcher_removePaths);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QFileSystemWatcher(void *, int);}
static void release_QFileSystemWatcher(void *sipCppV,int)
{
    QFileSystemWatcher *sipCpp = reinterpret_cast<QFileSystemWatcher *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QFileSystemWatcher(sipSimpleWrapper *);}
static void dealloc_QFileSystemWatcher(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQFileSystemWatcher *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QFileSystemWatcher(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QFileSystemWatcher(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QFileSystemWatcher(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQFileSystemWatcher *sipCpp = 0;

    {
        QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQFileSystemWatcher(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QStringList* a0;
        int a0State = 0;
        QObject* a1 = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1|JH", sipType_QStringList,&a0, &a0State, sipType_QObject, &a1, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQFileSystemWatcher(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QStringList *>(a0),sipType_QStringList,a0State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QFileSystemWatcher[] = {{141, 255, 1}};


static PyMethodDef methods_QFileSystemWatcher[] = {
    {SIP_MLNAME_CAST(sipName_addPath), meth_QFileSystemWatcher_addPath, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileSystemWatcher_addPath)},
    {SIP_MLNAME_CAST(sipName_addPaths), meth_QFileSystemWatcher_addPaths, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileSystemWatcher_addPaths)},
    {SIP_MLNAME_CAST(sipName_directories), meth_QFileSystemWatcher_directories, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileSystemWatcher_directories)},
    {SIP_MLNAME_CAST(sipName_files), meth_QFileSystemWatcher_files, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileSystemWatcher_files)},
    {SIP_MLNAME_CAST(sipName_removePath), meth_QFileSystemWatcher_removePath, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileSystemWatcher_removePath)},
    {SIP_MLNAME_CAST(sipName_removePaths), meth_QFileSystemWatcher_removePaths, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileSystemWatcher_removePaths)}
};


/* Define this type's signals. */
static const pyqt4QtSignal signals_QFileSystemWatcher[] = {
    {"fileChanged(QString)", "\1fileChanged(self, QString)", 0, 0},
    {"directoryChanged(QString)", "\1directoryChanged(self, QString)", 0, 0},
    {0, 0, 0, 0}
};

PyDoc_STRVAR(doc_QFileSystemWatcher, "\1QFileSystemWatcher(parent: QObject = None)\n"
    "QFileSystemWatcher(QStringList, parent: QObject = None)");


pyqt4ClassTypeDef sipTypeDef_QtCore_QFileSystemWatcher = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QFileSystemWatcher,
        {0}
    },
    {
        sipNameNr_QFileSystemWatcher,
        {0, 0, 1},
        6, methods_QFileSystemWatcher,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QFileSystemWatcher,
    -1,
    -1,
    supers_QFileSystemWatcher,
    0,
    init_type_QFileSystemWatcher,
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
    dealloc_QFileSystemWatcher,
    0,
    0,
    0,
    release_QFileSystemWatcher,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QFileSystemWatcher::staticMetaObject,
    0,
    signals_QFileSystemWatcher,
};
