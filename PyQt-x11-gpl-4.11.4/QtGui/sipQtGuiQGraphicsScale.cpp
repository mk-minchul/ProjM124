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

#line 46 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qgraphicstransform.sip"
#include <qgraphicstransform.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsScale.cpp"

#line 29 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsScale.cpp"
#line 34 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qmatrix4x4.sip"
#include <qmatrix4x4.h>
#line 36 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsScale.cpp"
#line 34 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qvector3d.sip"
#include <qvector3d.h>
#line 39 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsScale.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsScale.cpp"
#line 368 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsScale.cpp"
#line 351 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 48 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsScale.cpp"
#line 269 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 51 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsScale.cpp"
#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 54 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsScale.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 57 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsScale.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 60 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsScale.cpp"
#line 115 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 63 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsScale.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 66 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsScale.cpp"
#line 31 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 69 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsScale.cpp"
#line 30 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 72 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsScale.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 75 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQGraphicsScale.cpp"


class sipQGraphicsScale : public QGraphicsScale
{
public:
    sipQGraphicsScale(QObject*);
    virtual ~sipQGraphicsScale();

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
    void applyTo(QMatrix4x4*) const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQGraphicsScale(const sipQGraphicsScale &);
    sipQGraphicsScale &operator = (const sipQGraphicsScale &);

    char sipPyMethods[8];
};

sipQGraphicsScale::sipQGraphicsScale(QObject*a0): QGraphicsScale(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQGraphicsScale::~sipQGraphicsScale()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQGraphicsScale::metaObject() const
{
    return sip_QtGui_qt_metaobject(sipPySelf,sipType_QGraphicsScale);
}

int sipQGraphicsScale::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QGraphicsScale::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtGui_qt_metacall(sipPySelf,sipType_QGraphicsScale,_c,_id,_a);

    return _id;
}

void *sipQGraphicsScale::qt_metacast(const char *_clname)
{
    return (sip_QtGui_qt_metacast(sipPySelf, sipType_QGraphicsScale, _clname)) ? this : QGraphicsScale::qt_metacast(_clname);
}

void sipQGraphicsScale::disconnectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QGraphicsScale::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    ((sipVH_QtCore_24)(sipModuleAPI_QtGui_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQGraphicsScale::connectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QGraphicsScale::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    ((sipVH_QtCore_24)(sipModuleAPI_QtGui_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQGraphicsScale::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QGraphicsScale::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_17)(sipModuleAPI_QtGui_QtCore->em_virthandlers[17]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQGraphicsScale::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QGraphicsScale::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtGui_QtCore->em_virthandlers[25]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQGraphicsScale::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QGraphicsScale::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtGui_QtCore->em_virthandlers[9]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQGraphicsScale::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QGraphicsScale::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_18)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_18)(sipModuleAPI_QtGui_QtCore->em_virthandlers[18]))(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQGraphicsScale::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QGraphicsScale::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtGui_QtCore->em_virthandlers[5]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQGraphicsScale::applyTo(QMatrix4x4*a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[7]),sipPySelf,NULL,sipName_applyTo);

    if (!sipMeth)
    {
        QGraphicsScale::applyTo(a0);
        return;
    }

    extern void sipVH_QtGui_186(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QMatrix4x4*);

    sipVH_QtGui_186(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QGraphicsScale_origin, "origin(self) -> QVector3D");

extern "C" {static PyObject *meth_QGraphicsScale_origin(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsScale_origin(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsScale *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsScale, &sipCpp))
        {
            QVector3D*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVector3D(sipCpp->origin());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVector3D,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsScale, sipName_origin, doc_QGraphicsScale_origin);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsScale_setOrigin, "setOrigin(self, QVector3D)");

extern "C" {static PyObject *meth_QGraphicsScale_setOrigin(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsScale_setOrigin(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector3D* a0;
        QGraphicsScale *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QGraphicsScale, &sipCpp, sipType_QVector3D, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setOrigin(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsScale, sipName_setOrigin, doc_QGraphicsScale_setOrigin);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsScale_xScale, "xScale(self) -> float");

extern "C" {static PyObject *meth_QGraphicsScale_xScale(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsScale_xScale(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsScale *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsScale, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->xScale();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsScale, sipName_xScale, doc_QGraphicsScale_xScale);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsScale_setXScale, "setXScale(self, float)");

extern "C" {static PyObject *meth_QGraphicsScale_setXScale(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsScale_setXScale(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QGraphicsScale *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bf", &sipSelf, sipType_QGraphicsScale, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setXScale(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsScale, sipName_setXScale, doc_QGraphicsScale_setXScale);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsScale_yScale, "yScale(self) -> float");

extern "C" {static PyObject *meth_QGraphicsScale_yScale(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsScale_yScale(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsScale *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsScale, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->yScale();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsScale, sipName_yScale, doc_QGraphicsScale_yScale);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsScale_setYScale, "setYScale(self, float)");

extern "C" {static PyObject *meth_QGraphicsScale_setYScale(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsScale_setYScale(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QGraphicsScale *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bf", &sipSelf, sipType_QGraphicsScale, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setYScale(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsScale, sipName_setYScale, doc_QGraphicsScale_setYScale);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsScale_zScale, "zScale(self) -> float");

extern "C" {static PyObject *meth_QGraphicsScale_zScale(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsScale_zScale(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsScale *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsScale, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->zScale();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsScale, sipName_zScale, doc_QGraphicsScale_zScale);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsScale_setZScale, "setZScale(self, float)");

extern "C" {static PyObject *meth_QGraphicsScale_setZScale(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsScale_setZScale(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QGraphicsScale *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bf", &sipSelf, sipType_QGraphicsScale, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setZScale(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsScale, sipName_setZScale, doc_QGraphicsScale_setZScale);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsScale_applyTo, "applyTo(self, QMatrix4x4)");

extern "C" {static PyObject *meth_QGraphicsScale_applyTo(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsScale_applyTo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QMatrix4x4* a0;
        const QGraphicsScale *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QGraphicsScale, &sipCpp, sipType_QMatrix4x4, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QGraphicsScale::applyTo(a0) : sipCpp->applyTo(a0));
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsScale, sipName_applyTo, doc_QGraphicsScale_applyTo);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGraphicsScale(void *, int);}
static void release_QGraphicsScale(void *sipCppV,int)
{
    QGraphicsScale *sipCpp = reinterpret_cast<QGraphicsScale *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QGraphicsScale(sipSimpleWrapper *);}
static void dealloc_QGraphicsScale(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQGraphicsScale *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QGraphicsScale(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QGraphicsScale(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGraphicsScale(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQGraphicsScale *sipCpp = 0;

    {
        QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQGraphicsScale(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QGraphicsScale[] = {{209, 255, 1}};


static PyMethodDef methods_QGraphicsScale[] = {
    {SIP_MLNAME_CAST(sipName_applyTo), meth_QGraphicsScale_applyTo, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsScale_applyTo)},
    {SIP_MLNAME_CAST(sipName_origin), meth_QGraphicsScale_origin, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsScale_origin)},
    {SIP_MLNAME_CAST(sipName_setOrigin), meth_QGraphicsScale_setOrigin, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsScale_setOrigin)},
    {SIP_MLNAME_CAST(sipName_setXScale), meth_QGraphicsScale_setXScale, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsScale_setXScale)},
    {SIP_MLNAME_CAST(sipName_setYScale), meth_QGraphicsScale_setYScale, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsScale_setYScale)},
    {SIP_MLNAME_CAST(sipName_setZScale), meth_QGraphicsScale_setZScale, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsScale_setZScale)},
    {SIP_MLNAME_CAST(sipName_xScale), meth_QGraphicsScale_xScale, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsScale_xScale)},
    {SIP_MLNAME_CAST(sipName_yScale), meth_QGraphicsScale_yScale, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsScale_yScale)},
    {SIP_MLNAME_CAST(sipName_zScale), meth_QGraphicsScale_zScale, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsScale_zScale)}
};


/* Define this type's signals. */
static const pyqt4QtSignal signals_QGraphicsScale[] = {
    {"zScaleChanged()", "\1zScaleChanged(self)", 0, 0},
    {"yScaleChanged()", "\1yScaleChanged(self)", 0, 0},
    {"xScaleChanged()", "\1xScaleChanged(self)", 0, 0},
    {"scaleChanged()", "\1scaleChanged(self)", 0, 0},
    {"originChanged()", "\1originChanged(self)", 0, 0},
    {0, 0, 0, 0}
};

PyDoc_STRVAR(doc_QGraphicsScale, "\1QGraphicsScale(parent: QObject = None)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QGraphicsScale = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QGraphicsScale,
        {0}
    },
    {
        sipNameNr_QGraphicsScale,
        {0, 0, 1},
        9, methods_QGraphicsScale,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGraphicsScale,
    -1,
    -1,
    supers_QGraphicsScale,
    0,
    init_type_QGraphicsScale,
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
    dealloc_QGraphicsScale,
    0,
    0,
    0,
    release_QGraphicsScale,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QGraphicsScale::staticMetaObject,
    0,
    signals_QGraphicsScale,
};
