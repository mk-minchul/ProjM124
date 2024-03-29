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

#line 26 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qbuffer.sip"
#include <qbuffer.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQBuffer.cpp"

#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQBuffer.cpp"
#line 32 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 36 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQBuffer.cpp"
#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qiodevice.sip"
#include <qiodevice.h>
#line 39 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQBuffer.cpp"
#line 31 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 42 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQBuffer.cpp"
#line 26 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQBuffer.cpp"
#line 368 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 48 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQBuffer.cpp"
#line 351 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 51 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQBuffer.cpp"
#line 269 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 54 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQBuffer.cpp"
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 57 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQBuffer.cpp"
#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 60 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQBuffer.cpp"
#line 115 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 63 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQBuffer.cpp"
#line 26 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qthread.sip"
#include <qthread.h>
#line 66 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQBuffer.cpp"
#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 69 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQBuffer.cpp"
#line 26 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 72 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQBuffer.cpp"


class sipQBuffer : public QBuffer
{
public:
    sipQBuffer(QObject*);
    sipQBuffer(QByteArray*,QObject*);
    virtual ~sipQBuffer();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void customEvent(QEvent*);
    void childEvent(QChildEvent*);
    void timerEvent(QTimerEvent*);
    bool eventFilter(QObject*,QEvent*);
    bool event(QEvent*);
    qint64 readLineData(char*,qint64);
    bool waitForBytesWritten(int);
    bool waitForReadyRead(int);
    qint64 bytesToWrite() const;
    qint64 bytesAvailable() const;
    bool reset();
    bool isSequential() const;
    void disconnectNotify(const char*);
    void connectNotify(const char*);
    qint64 writeData(const char*,PY_LONG_LONG);
    qint64 readData(char*,qint64);
    bool canReadLine() const;
    bool atEnd() const;
    bool seek(qint64);
    qint64 pos() const;
    qint64 size() const;
    void close();
    bool open(QIODevice::OpenMode);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQBuffer(const sipQBuffer &);
    sipQBuffer &operator = (const sipQBuffer &);

    char sipPyMethods[23];
};

sipQBuffer::sipQBuffer(QObject*a0): QBuffer(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQBuffer::sipQBuffer(QByteArray*a0,QObject*a1): QBuffer(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQBuffer::~sipQBuffer()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQBuffer::metaObject() const
{
    return sip_QtCore_qt_metaobject(sipPySelf,sipType_QBuffer);
}

int sipQBuffer::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QBuffer::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtCore_qt_metacall(sipPySelf,sipType_QBuffer,_c,_id,_a);

    return _id;
}

void *sipQBuffer::qt_metacast(const char *_clname)
{
    return (sip_QtCore_qt_metacast(sipPySelf, sipType_QBuffer, _clname)) ? this : QBuffer::qt_metacast(_clname);
}

void sipQBuffer::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QBuffer::customEvent(a0);
        return;
    }

    extern void sipVH_QtCore_17(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    sipVH_QtCore_17(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQBuffer::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QBuffer::childEvent(a0);
        return;
    }

    extern void sipVH_QtCore_25(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    sipVH_QtCore_25(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQBuffer::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QBuffer::timerEvent(a0);
        return;
    }

    extern void sipVH_QtCore_9(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    sipVH_QtCore_9(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQBuffer::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QBuffer::eventFilter(a0,a1);

    extern bool sipVH_QtCore_18(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return sipVH_QtCore_18(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQBuffer::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QBuffer::event(a0);

    extern bool sipVH_QtCore_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return sipVH_QtCore_5(sipGILState, 0, sipPySelf, sipMeth, a0);
}

qint64 sipQBuffer::readLineData(char*a0,qint64 a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_readLineData);

    if (!sipMeth)
        return QBuffer::readLineData(a0,a1);

    extern PY_LONG_LONG sipVH_QtCore_21(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, char*,PY_LONG_LONG);

    return sipVH_QtCore_21(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQBuffer::waitForBytesWritten(int a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_waitForBytesWritten);

    if (!sipMeth)
        return QBuffer::waitForBytesWritten(a0);

    extern bool sipVH_QtCore_23(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_QtCore_23(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQBuffer::waitForReadyRead(int a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_waitForReadyRead);

    if (!sipMeth)
        return QBuffer::waitForReadyRead(a0);

    extern bool sipVH_QtCore_23(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_QtCore_23(sipGILState, 0, sipPySelf, sipMeth, a0);
}

qint64 sipQBuffer::bytesToWrite() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[8]),sipPySelf,NULL,sipName_bytesToWrite);

    if (!sipMeth)
        return QBuffer::bytesToWrite();

    extern PY_LONG_LONG sipVH_QtCore_22(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtCore_22(sipGILState, 0, sipPySelf, sipMeth);
}

qint64 sipQBuffer::bytesAvailable() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[9]),sipPySelf,NULL,sipName_bytesAvailable);

    if (!sipMeth)
        return QBuffer::bytesAvailable();

    extern PY_LONG_LONG sipVH_QtCore_22(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtCore_22(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipQBuffer::reset()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[10],sipPySelf,NULL,sipName_reset);

    if (!sipMeth)
        return QBuffer::reset();

    extern bool sipVH_QtCore_7(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtCore_7(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipQBuffer::isSequential() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[11]),sipPySelf,NULL,sipName_isSequential);

    if (!sipMeth)
        return QBuffer::isSequential();

    extern bool sipVH_QtCore_7(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtCore_7(sipGILState, 0, sipPySelf, sipMeth);
}

void sipQBuffer::disconnectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[12],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QBuffer::disconnectNotify(a0);
        return;
    }

    extern void sipVH_QtCore_24(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtCore_24(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQBuffer::connectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[13],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QBuffer::connectNotify(a0);
        return;
    }

    extern void sipVH_QtCore_24(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtCore_24(sipGILState, 0, sipPySelf, sipMeth, a0);
}

qint64 sipQBuffer::writeData(const char*a0,PY_LONG_LONG a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[14],sipPySelf,NULL,sipName_writeData);

    if (!sipMeth)
        return QBuffer::writeData(a0,a1);

    extern PY_LONG_LONG sipVH_QtCore_20(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*,PY_LONG_LONG);

    return sipVH_QtCore_20(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

qint64 sipQBuffer::readData(char*a0,qint64 a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[15],sipPySelf,NULL,sipName_readData);

    if (!sipMeth)
        return QBuffer::readData(a0,a1);

    extern PY_LONG_LONG sipVH_QtCore_21(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, char*,PY_LONG_LONG);

    return sipVH_QtCore_21(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQBuffer::canReadLine() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[16]),sipPySelf,NULL,sipName_canReadLine);

    if (!sipMeth)
        return QBuffer::canReadLine();

    extern bool sipVH_QtCore_7(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtCore_7(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipQBuffer::atEnd() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[17]),sipPySelf,NULL,sipName_atEnd);

    if (!sipMeth)
        return QBuffer::atEnd();

    extern bool sipVH_QtCore_7(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtCore_7(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipQBuffer::seek(qint64 a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[18],sipPySelf,NULL,sipName_seek);

    if (!sipMeth)
        return QBuffer::seek(a0);

    extern bool sipVH_QtCore_32(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, PY_LONG_LONG);

    return sipVH_QtCore_32(sipGILState, 0, sipPySelf, sipMeth, a0);
}

qint64 sipQBuffer::pos() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[19]),sipPySelf,NULL,sipName_pos);

    if (!sipMeth)
        return QBuffer::pos();

    extern PY_LONG_LONG sipVH_QtCore_22(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtCore_22(sipGILState, 0, sipPySelf, sipMeth);
}

qint64 sipQBuffer::size() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[20]),sipPySelf,NULL,sipName_size);

    if (!sipMeth)
        return QBuffer::size();

    extern PY_LONG_LONG sipVH_QtCore_22(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtCore_22(sipGILState, 0, sipPySelf, sipMeth);
}

void sipQBuffer::close()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[21],sipPySelf,NULL,sipName_close);

    if (!sipMeth)
    {
        QBuffer::close();
        return;
    }

    extern void sipVH_QtCore_11(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH_QtCore_11(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipQBuffer::open(QIODevice::OpenMode a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[22],sipPySelf,NULL,sipName_open);

    if (!sipMeth)
        return QBuffer::open(a0);

    extern bool sipVH_QtCore_15(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QIODevice::OpenMode);

    return sipVH_QtCore_15(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QBuffer_buffer, "buffer(self) -> QByteArray");

extern "C" {static PyObject *meth_QBuffer_buffer(PyObject *, PyObject *);}
static PyObject *meth_QBuffer_buffer(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBuffer, &sipCpp))
        {
            QByteArray*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = &sipCpp->buffer();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBuffer, sipName_buffer, doc_QBuffer_buffer);

    return NULL;
}


PyDoc_STRVAR(doc_QBuffer_data, "data(self) -> QByteArray");

extern "C" {static PyObject *meth_QBuffer_data(PyObject *, PyObject *);}
static PyObject *meth_QBuffer_data(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBuffer, &sipCpp))
        {
            QByteArray*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QByteArray(sipCpp->data());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBuffer, sipName_data, doc_QBuffer_data);

    return NULL;
}


PyDoc_STRVAR(doc_QBuffer_setBuffer, "setBuffer(self, QByteArray)");

extern "C" {static PyObject *meth_QBuffer_setBuffer(PyObject *, PyObject *);}
static PyObject *meth_QBuffer_setBuffer(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QByteArray* a0;
        int a0State = 0;
        QBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ0", &sipSelf, sipType_QBuffer, &sipCpp, sipType_QByteArray, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setBuffer(a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QByteArray,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBuffer, sipName_setBuffer, doc_QBuffer_setBuffer);

    return NULL;
}


PyDoc_STRVAR(doc_QBuffer_setData, "setData(self, QByteArray)\n"
    "setData(self, bytes)");

extern "C" {static PyObject *meth_QBuffer_setData(PyObject *, PyObject *);}
static PyObject *meth_QBuffer_setData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QByteArray* a0;
        int a0State = 0;
        QBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QBuffer, &sipCpp, sipType_QByteArray, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setData(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const char* a0;
        SIP_SSIZE_T a1;
        QBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bk", &sipSelf, sipType_QBuffer, &sipCpp, &a0, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setData(a0,(int)a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBuffer, sipName_setData, doc_QBuffer_setData);

    return NULL;
}


PyDoc_STRVAR(doc_QBuffer_open, "open(self, QIODevice.OpenMode) -> bool");

extern "C" {static PyObject *meth_QBuffer_open(PyObject *, PyObject *);}
static PyObject *meth_QBuffer_open(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QIODevice::OpenMode* a0;
        int a0State = 0;
        QBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QBuffer, &sipCpp, sipType_QIODevice_OpenMode, &a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QBuffer::open(*a0) : sipCpp->open(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QIODevice_OpenMode,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBuffer, sipName_open, doc_QBuffer_open);

    return NULL;
}


PyDoc_STRVAR(doc_QBuffer_close, "close(self)");

extern "C" {static PyObject *meth_QBuffer_close(PyObject *, PyObject *);}
static PyObject *meth_QBuffer_close(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBuffer, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QBuffer::close() : sipCpp->close());
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBuffer, sipName_close, doc_QBuffer_close);

    return NULL;
}


PyDoc_STRVAR(doc_QBuffer_size, "size(self) -> int");

extern "C" {static PyObject *meth_QBuffer_size(PyObject *, PyObject *);}
static PyObject *meth_QBuffer_size(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBuffer, &sipCpp))
        {
            qint64 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QBuffer::size() : sipCpp->size());
            Py_END_ALLOW_THREADS

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBuffer, sipName_size, doc_QBuffer_size);

    return NULL;
}


PyDoc_STRVAR(doc_QBuffer_pos, "pos(self) -> int");

extern "C" {static PyObject *meth_QBuffer_pos(PyObject *, PyObject *);}
static PyObject *meth_QBuffer_pos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBuffer, &sipCpp))
        {
            qint64 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QBuffer::pos() : sipCpp->pos());
            Py_END_ALLOW_THREADS

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBuffer, sipName_pos, doc_QBuffer_pos);

    return NULL;
}


PyDoc_STRVAR(doc_QBuffer_seek, "seek(self, int) -> bool");

extern "C" {static PyObject *meth_QBuffer_seek(PyObject *, PyObject *);}
static PyObject *meth_QBuffer_seek(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        qint64 a0;
        QBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bn", &sipSelf, sipType_QBuffer, &sipCpp, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QBuffer::seek(a0) : sipCpp->seek(a0));
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBuffer, sipName_seek, doc_QBuffer_seek);

    return NULL;
}


PyDoc_STRVAR(doc_QBuffer_atEnd, "atEnd(self) -> bool");

extern "C" {static PyObject *meth_QBuffer_atEnd(PyObject *, PyObject *);}
static PyObject *meth_QBuffer_atEnd(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBuffer, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QBuffer::atEnd() : sipCpp->atEnd());
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBuffer, sipName_atEnd, doc_QBuffer_atEnd);

    return NULL;
}


PyDoc_STRVAR(doc_QBuffer_canReadLine, "canReadLine(self) -> bool");

extern "C" {static PyObject *meth_QBuffer_canReadLine(PyObject *, PyObject *);}
static PyObject *meth_QBuffer_canReadLine(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBuffer, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QBuffer::canReadLine() : sipCpp->canReadLine());
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBuffer, sipName_canReadLine, doc_QBuffer_canReadLine);

    return NULL;
}


PyDoc_STRVAR(doc_QBuffer_readData, "readData(self, int) -> object");

extern "C" {static PyObject *meth_QBuffer_readData(PyObject *, PyObject *);}
static PyObject *meth_QBuffer_readData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        qint64 a0;
        QBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pn", &sipSelf, sipType_QBuffer, &sipCpp, &a0))
        {
            PyObject * sipRes = 0;
            int sipIsErr = 0;

#line 49 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qbuffer.sip"
        // Return the data read or None if there was an error.
        if (a0 < 0)
        {
            PyErr_SetString(PyExc_ValueError, "maximum length of data to be read cannot be negative");
            sipIsErr = 1;
        }
        else
        {
            char *s = new char[a0];
            qint64 len;
        
            Py_BEGIN_ALLOW_THREADS
        #if defined(SIP_PROTECTED_IS_PUBLIC)
            len = sipSelfWasArg ? sipCpp->QBuffer::readData(s, a0) : sipCpp->readData(s, a0);
        #else
            len = sipCpp->sipProtectVirt_readData(sipSelfWasArg, s, a0);
        #endif
            Py_END_ALLOW_THREADS
        
            if (len < 0)
            {
                Py_INCREF(Py_None);
                sipRes = Py_None;
            }
            else
            {
                sipRes = SIPBytes_FromStringAndSize(s, len);
        
                if (!sipRes)
                    sipIsErr = 1;
            }
        
            delete[] s;
        }
#line 939 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQBuffer.cpp"

            if (sipIsErr)
                return 0;

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBuffer, sipName_readData, doc_QBuffer_readData);

    return NULL;
}


PyDoc_STRVAR(doc_QBuffer_writeData, "writeData(self, bytes) -> int");

extern "C" {static PyObject *meth_QBuffer_writeData(PyObject *, PyObject *);}
static PyObject *meth_QBuffer_writeData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const char* a0;
        SIP_SSIZE_T a1;
        QBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pk", &sipSelf, sipType_QBuffer, &sipCpp, &a0, &a1))
        {
            qint64 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QBuffer::writeData(a0,(PY_LONG_LONG)a1) : sipCpp->writeData(a0,(PY_LONG_LONG)a1));
            Py_END_ALLOW_THREADS

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBuffer, sipName_writeData, doc_QBuffer_writeData);

    return NULL;
}


PyDoc_STRVAR(doc_QBuffer_connectNotify, "connectNotify(self, QT_SIGNAL)");

extern "C" {static PyObject *meth_QBuffer_connectNotify(PyObject *, PyObject *);}
static PyObject *meth_QBuffer_connectNotify(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        char* a0;
        QBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pG", &sipSelf, sipType_QBuffer, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QBuffer::connectNotify(a0) : sipCpp->connectNotify(a0));
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBuffer, sipName_connectNotify, doc_QBuffer_connectNotify);

    return NULL;
}


PyDoc_STRVAR(doc_QBuffer_disconnectNotify, "disconnectNotify(self, QT_SIGNAL)");

extern "C" {static PyObject *meth_QBuffer_disconnectNotify(PyObject *, PyObject *);}
static PyObject *meth_QBuffer_disconnectNotify(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        char* a0;
        QBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pG", &sipSelf, sipType_QBuffer, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QBuffer::disconnectNotify(a0) : sipCpp->disconnectNotify(a0));
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBuffer, sipName_disconnectNotify, doc_QBuffer_disconnectNotify);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QBuffer(void *, int);}
static void release_QBuffer(void *sipCppV,int)
{
    QBuffer *sipCpp = reinterpret_cast<QBuffer *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QBuffer(sipSimpleWrapper *);}
static void dealloc_QBuffer(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQBuffer *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QBuffer(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QBuffer(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QBuffer(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQBuffer *sipCpp = 0;

    {
        QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQBuffer(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        QByteArray* a0;
        int a0State = 0;
        QObject* a1 = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J0|JH", sipType_QByteArray, &a0, &a0State, sipType_QObject, &a1, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQBuffer(a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QByteArray,a0State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QBuffer[] = {{81, 255, 1}};


static PyMethodDef methods_QBuffer[] = {
    {SIP_MLNAME_CAST(sipName_atEnd), meth_QBuffer_atEnd, METH_VARARGS, SIP_MLDOC_CAST(doc_QBuffer_atEnd)},
    {SIP_MLNAME_CAST(sipName_buffer), meth_QBuffer_buffer, METH_VARARGS, SIP_MLDOC_CAST(doc_QBuffer_buffer)},
    {SIP_MLNAME_CAST(sipName_canReadLine), meth_QBuffer_canReadLine, METH_VARARGS, SIP_MLDOC_CAST(doc_QBuffer_canReadLine)},
    {SIP_MLNAME_CAST(sipName_close), meth_QBuffer_close, METH_VARARGS, SIP_MLDOC_CAST(doc_QBuffer_close)},
    {SIP_MLNAME_CAST(sipName_connectNotify), meth_QBuffer_connectNotify, METH_VARARGS, SIP_MLDOC_CAST(doc_QBuffer_connectNotify)},
    {SIP_MLNAME_CAST(sipName_data), meth_QBuffer_data, METH_VARARGS, SIP_MLDOC_CAST(doc_QBuffer_data)},
    {SIP_MLNAME_CAST(sipName_disconnectNotify), meth_QBuffer_disconnectNotify, METH_VARARGS, SIP_MLDOC_CAST(doc_QBuffer_disconnectNotify)},
    {SIP_MLNAME_CAST(sipName_open), meth_QBuffer_open, METH_VARARGS, SIP_MLDOC_CAST(doc_QBuffer_open)},
    {SIP_MLNAME_CAST(sipName_pos), meth_QBuffer_pos, METH_VARARGS, SIP_MLDOC_CAST(doc_QBuffer_pos)},
    {SIP_MLNAME_CAST(sipName_readData), meth_QBuffer_readData, METH_VARARGS, SIP_MLDOC_CAST(doc_QBuffer_readData)},
    {SIP_MLNAME_CAST(sipName_seek), meth_QBuffer_seek, METH_VARARGS, SIP_MLDOC_CAST(doc_QBuffer_seek)},
    {SIP_MLNAME_CAST(sipName_setBuffer), meth_QBuffer_setBuffer, METH_VARARGS, SIP_MLDOC_CAST(doc_QBuffer_setBuffer)},
    {SIP_MLNAME_CAST(sipName_setData), meth_QBuffer_setData, METH_VARARGS, SIP_MLDOC_CAST(doc_QBuffer_setData)},
    {SIP_MLNAME_CAST(sipName_size), meth_QBuffer_size, METH_VARARGS, SIP_MLDOC_CAST(doc_QBuffer_size)},
    {SIP_MLNAME_CAST(sipName_writeData), meth_QBuffer_writeData, METH_VARARGS, SIP_MLDOC_CAST(doc_QBuffer_writeData)}
};

PyDoc_STRVAR(doc_QBuffer, "\1QBuffer(parent: QObject = None)\n"
    "QBuffer(QByteArray, parent: QObject = None)");


pyqt4ClassTypeDef sipTypeDef_QtCore_QBuffer = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QBuffer,
        {0}
    },
    {
        sipNameNr_QBuffer,
        {0, 0, 1},
        15, methods_QBuffer,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QBuffer,
    -1,
    -1,
    supers_QBuffer,
    0,
    init_type_QBuffer,
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
    dealloc_QBuffer,
    0,
    0,
    0,
    release_QBuffer,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QBuffer::staticMetaObject,
    0,
    0
};
