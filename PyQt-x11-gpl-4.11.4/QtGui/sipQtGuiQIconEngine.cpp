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

#line 26 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qiconengine.sip"
#include <qiconengine.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQIconEngine.cpp"

#line 31 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQIconEngine.cpp"
#line 30 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 36 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQIconEngine.cpp"
#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qicon.sip"
#include <qicon.h>
#line 39 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQIconEngine.cpp"
#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qpixmap.sip"
#include <qpixmap.h>
#line 42 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQIconEngine.cpp"
#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qpainter.sip"
#include <qpainter.h>
#line 45 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQIconEngine.cpp"
#line 30 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 48 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQIconEngine.cpp"


class sipQIconEngine : public QIconEngine
{
public:
    sipQIconEngine();
    sipQIconEngine(const QIconEngine&);
    virtual ~sipQIconEngine();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void addFile(const QString&,const QSize&,QIcon::Mode,QIcon::State);
    void addPixmap(const QPixmap&,QIcon::Mode,QIcon::State);
    QPixmap pixmap(const QSize&,QIcon::Mode,QIcon::State);
    QSize actualSize(const QSize&,QIcon::Mode,QIcon::State);
    void paint(QPainter*,const QRect&,QIcon::Mode,QIcon::State);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQIconEngine(const sipQIconEngine &);
    sipQIconEngine &operator = (const sipQIconEngine &);

    char sipPyMethods[5];
};

sipQIconEngine::sipQIconEngine(): QIconEngine(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQIconEngine::sipQIconEngine(const QIconEngine& a0): QIconEngine(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQIconEngine::~sipQIconEngine()
{
    sipCommonDtor(sipPySelf);
}

void sipQIconEngine::addFile(const QString& a0,const QSize& a1,QIcon::Mode a2,QIcon::State a3)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_addFile);

    if (!sipMeth)
    {
        QIconEngine::addFile(a0,a1,a2,a3);
        return;
    }

    extern void sipVH_QtGui_178(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QString&,const QSize&,QIcon::Mode,QIcon::State);

    sipVH_QtGui_178(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2, a3);
}

void sipQIconEngine::addPixmap(const QPixmap& a0,QIcon::Mode a1,QIcon::State a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_addPixmap);

    if (!sipMeth)
    {
        QIconEngine::addPixmap(a0,a1,a2);
        return;
    }

    extern void sipVH_QtGui_179(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QPixmap&,QIcon::Mode,QIcon::State);

    sipVH_QtGui_179(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2);
}

QPixmap sipQIconEngine::pixmap(const QSize& a0,QIcon::Mode a1,QIcon::State a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_pixmap);

    if (!sipMeth)
        return QIconEngine::pixmap(a0,a1,a2);

    extern QPixmap sipVH_QtGui_180(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QSize&,QIcon::Mode,QIcon::State);

    return sipVH_QtGui_180(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2);
}

QSize sipQIconEngine::actualSize(const QSize& a0,QIcon::Mode a1,QIcon::State a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_actualSize);

    if (!sipMeth)
        return QIconEngine::actualSize(a0,a1,a2);

    extern QSize sipVH_QtGui_181(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QSize&,QIcon::Mode,QIcon::State);

    return sipVH_QtGui_181(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2);
}

void sipQIconEngine::paint(QPainter*a0,const QRect& a1,QIcon::Mode a2,QIcon::State a3)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,sipName_QIconEngine,sipName_paint);

    if (!sipMeth)
        return;

    extern void sipVH_QtGui_182(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QPainter*,const QRect&,QIcon::Mode,QIcon::State);

    sipVH_QtGui_182(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2, a3);
}


PyDoc_STRVAR(doc_QIconEngine_paint, "paint(self, QPainter, QRect, QIcon.Mode, QIcon.State)");

extern "C" {static PyObject *meth_QIconEngine_paint(PyObject *, PyObject *);}
static PyObject *meth_QIconEngine_paint(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QPainter* a0;
        const QRect* a1;
        QIcon::Mode a2;
        QIcon::State a3;
        QIconEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J9EE", &sipSelf, sipType_QIconEngine, &sipCpp, sipType_QPainter, &a0, sipType_QRect, &a1, sipType_QIcon_Mode, &a2, sipType_QIcon_State, &a3))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QIconEngine, sipName_paint);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->paint(a0,*a1,a2,a3);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIconEngine, sipName_paint, doc_QIconEngine_paint);

    return NULL;
}


PyDoc_STRVAR(doc_QIconEngine_actualSize, "actualSize(self, QSize, QIcon.Mode, QIcon.State) -> QSize");

extern "C" {static PyObject *meth_QIconEngine_actualSize(PyObject *, PyObject *);}
static PyObject *meth_QIconEngine_actualSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QSize* a0;
        QIcon::Mode a1;
        QIcon::State a2;
        QIconEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9EE", &sipSelf, sipType_QIconEngine, &sipCpp, sipType_QSize, &a0, sipType_QIcon_Mode, &a1, sipType_QIcon_State, &a2))
        {
            QSize*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSize((sipSelfWasArg ? sipCpp->QIconEngine::actualSize(*a0,a1,a2) : sipCpp->actualSize(*a0,a1,a2)));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIconEngine, sipName_actualSize, doc_QIconEngine_actualSize);

    return NULL;
}


PyDoc_STRVAR(doc_QIconEngine_pixmap, "pixmap(self, QSize, QIcon.Mode, QIcon.State) -> QPixmap");

extern "C" {static PyObject *meth_QIconEngine_pixmap(PyObject *, PyObject *);}
static PyObject *meth_QIconEngine_pixmap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QSize* a0;
        QIcon::Mode a1;
        QIcon::State a2;
        QIconEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9EE", &sipSelf, sipType_QIconEngine, &sipCpp, sipType_QSize, &a0, sipType_QIcon_Mode, &a1, sipType_QIcon_State, &a2))
        {
            QPixmap*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPixmap((sipSelfWasArg ? sipCpp->QIconEngine::pixmap(*a0,a1,a2) : sipCpp->pixmap(*a0,a1,a2)));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPixmap,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIconEngine, sipName_pixmap, doc_QIconEngine_pixmap);

    return NULL;
}


PyDoc_STRVAR(doc_QIconEngine_addPixmap, "addPixmap(self, QPixmap, QIcon.Mode, QIcon.State)");

extern "C" {static PyObject *meth_QIconEngine_addPixmap(PyObject *, PyObject *);}
static PyObject *meth_QIconEngine_addPixmap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QPixmap* a0;
        QIcon::Mode a1;
        QIcon::State a2;
        QIconEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9EE", &sipSelf, sipType_QIconEngine, &sipCpp, sipType_QPixmap, &a0, sipType_QIcon_Mode, &a1, sipType_QIcon_State, &a2))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QIconEngine::addPixmap(*a0,a1,a2) : sipCpp->addPixmap(*a0,a1,a2));
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIconEngine, sipName_addPixmap, doc_QIconEngine_addPixmap);

    return NULL;
}


PyDoc_STRVAR(doc_QIconEngine_addFile, "addFile(self, QString, QSize, QIcon.Mode, QIcon.State)");

extern "C" {static PyObject *meth_QIconEngine_addFile(PyObject *, PyObject *);}
static PyObject *meth_QIconEngine_addFile(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QString* a0;
        int a0State = 0;
        const QSize* a1;
        QIcon::Mode a2;
        QIcon::State a3;
        QIconEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J9EE", &sipSelf, sipType_QIconEngine, &sipCpp, sipType_QString,&a0, &a0State, sipType_QSize, &a1, sipType_QIcon_Mode, &a2, sipType_QIcon_State, &a3))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QIconEngine::addFile(*a0,*a1,a2,a3) : sipCpp->addFile(*a0,*a1,a2,a3));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIconEngine, sipName_addFile, doc_QIconEngine_addFile);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QIconEngine(void *, int);}
static void release_QIconEngine(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQIconEngine *>(sipCppV);
    else
        delete reinterpret_cast<QIconEngine *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QIconEngine(sipSimpleWrapper *);}
static void dealloc_QIconEngine(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQIconEngine *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QIconEngine(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QIconEngine(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QIconEngine(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQIconEngine *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQIconEngine();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QIconEngine* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QIconEngine, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQIconEngine(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QIconEngine[] = {
    {SIP_MLNAME_CAST(sipName_actualSize), meth_QIconEngine_actualSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QIconEngine_actualSize)},
    {SIP_MLNAME_CAST(sipName_addFile), meth_QIconEngine_addFile, METH_VARARGS, SIP_MLDOC_CAST(doc_QIconEngine_addFile)},
    {SIP_MLNAME_CAST(sipName_addPixmap), meth_QIconEngine_addPixmap, METH_VARARGS, SIP_MLDOC_CAST(doc_QIconEngine_addPixmap)},
    {SIP_MLNAME_CAST(sipName_paint), meth_QIconEngine_paint, METH_VARARGS, SIP_MLDOC_CAST(doc_QIconEngine_paint)},
    {SIP_MLNAME_CAST(sipName_pixmap), meth_QIconEngine_pixmap, METH_VARARGS, SIP_MLDOC_CAST(doc_QIconEngine_pixmap)}
};

PyDoc_STRVAR(doc_QIconEngine, "\1QIconEngine()\n"
    "QIconEngine(QIconEngine)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QIconEngine = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QIconEngine,
        {0}
    },
    {
        sipNameNr_QIconEngine,
        {0, 0, 1},
        5, methods_QIconEngine,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QIconEngine,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    -1,
    0,
    0,
    init_type_QIconEngine,
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
    dealloc_QIconEngine,
    0,
    0,
    0,
    release_QIconEngine,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    0,
    0,
    0
};
