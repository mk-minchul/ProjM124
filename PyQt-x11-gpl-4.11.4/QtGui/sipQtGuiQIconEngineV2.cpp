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

#line 84 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qiconengine.sip"
#include <qiconengine.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQIconEngineV2.cpp"

#line 31 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQIconEngineV2.cpp"
#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 36 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQIconEngineV2.cpp"
#line 30 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 39 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQIconEngineV2.cpp"
#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qicon.sip"
#include <qicon.h>
#line 42 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQIconEngineV2.cpp"
#line 26 "sip/QtCore/qdatastream.sip"
#include <qdatastream.h>
#line 45 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQIconEngineV2.cpp"
#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qpixmap.sip"
#include <qpixmap.h>
#line 48 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQIconEngineV2.cpp"
#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qpainter.sip"
#include <qpainter.h>
#line 51 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQIconEngineV2.cpp"
#line 30 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 54 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQIconEngineV2.cpp"


class sipQIconEngineV2 : public QIconEngineV2
{
public:
    sipQIconEngineV2();
    sipQIconEngineV2(const QIconEngineV2&);
    virtual ~sipQIconEngineV2();

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
    bool write(QDataStream&) const;
    bool read(QDataStream&);
    QIconEngineV2* clone() const;
    QString key() const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQIconEngineV2(const sipQIconEngineV2 &);
    sipQIconEngineV2 &operator = (const sipQIconEngineV2 &);

    char sipPyMethods[9];
};

sipQIconEngineV2::sipQIconEngineV2(): QIconEngineV2(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQIconEngineV2::sipQIconEngineV2(const QIconEngineV2& a0): QIconEngineV2(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQIconEngineV2::~sipQIconEngineV2()
{
    sipCommonDtor(sipPySelf);
}

void sipQIconEngineV2::addFile(const QString& a0,const QSize& a1,QIcon::Mode a2,QIcon::State a3)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_addFile);

    if (!sipMeth)
    {
        QIconEngineV2::addFile(a0,a1,a2,a3);
        return;
    }

    extern void sipVH_QtGui_178(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QString&,const QSize&,QIcon::Mode,QIcon::State);

    sipVH_QtGui_178(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2, a3);
}

void sipQIconEngineV2::addPixmap(const QPixmap& a0,QIcon::Mode a1,QIcon::State a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_addPixmap);

    if (!sipMeth)
    {
        QIconEngineV2::addPixmap(a0,a1,a2);
        return;
    }

    extern void sipVH_QtGui_179(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QPixmap&,QIcon::Mode,QIcon::State);

    sipVH_QtGui_179(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2);
}

QPixmap sipQIconEngineV2::pixmap(const QSize& a0,QIcon::Mode a1,QIcon::State a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_pixmap);

    if (!sipMeth)
        return QIconEngineV2::pixmap(a0,a1,a2);

    extern QPixmap sipVH_QtGui_180(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QSize&,QIcon::Mode,QIcon::State);

    return sipVH_QtGui_180(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2);
}

QSize sipQIconEngineV2::actualSize(const QSize& a0,QIcon::Mode a1,QIcon::State a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_actualSize);

    if (!sipMeth)
        return QIconEngineV2::actualSize(a0,a1,a2);

    extern QSize sipVH_QtGui_181(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QSize&,QIcon::Mode,QIcon::State);

    return sipVH_QtGui_181(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2);
}

void sipQIconEngineV2::paint(QPainter*a0,const QRect& a1,QIcon::Mode a2,QIcon::State a3)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,sipName_QIconEngineV2,sipName_paint);

    if (!sipMeth)
        return;

    extern void sipVH_QtGui_182(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QPainter*,const QRect&,QIcon::Mode,QIcon::State);

    sipVH_QtGui_182(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2, a3);
}

bool sipQIconEngineV2::write(QDataStream& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[5]),sipPySelf,NULL,sipName_write);

    if (!sipMeth)
        return QIconEngineV2::write(a0);

    extern bool sipVH_QtGui_176(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QDataStream&);

    return sipVH_QtGui_176(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQIconEngineV2::read(QDataStream& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_read);

    if (!sipMeth)
        return QIconEngineV2::read(a0);

    extern bool sipVH_QtGui_176(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QDataStream&);

    return sipVH_QtGui_176(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QIconEngineV2* sipQIconEngineV2::clone() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[7]),sipPySelf,NULL,sipName_clone);

    if (!sipMeth)
        return QIconEngineV2::clone();

    extern QIconEngineV2* sipVH_QtGui_177(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtGui_177(sipGILState, 0, sipPySelf, sipMeth);
}

QString sipQIconEngineV2::key() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[8]),sipPySelf,NULL,sipName_key);

    if (!sipMeth)
        return QIconEngineV2::key();

    typedef QString (*sipVH_QtCore_62)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_62)(sipModuleAPI_QtGui_QtCore->em_virthandlers[62]))(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_QIconEngineV2_key, "key(self) -> QString");

extern "C" {static PyObject *meth_QIconEngineV2_key(PyObject *, PyObject *);}
static PyObject *meth_QIconEngineV2_key(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QIconEngineV2 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QIconEngineV2, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString((sipSelfWasArg ? sipCpp->QIconEngineV2::key() : sipCpp->key()));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIconEngineV2, sipName_key, doc_QIconEngineV2_key);

    return NULL;
}


PyDoc_STRVAR(doc_QIconEngineV2_clone, "clone(self) -> QIconEngineV2");

extern "C" {static PyObject *meth_QIconEngineV2_clone(PyObject *, PyObject *);}
static PyObject *meth_QIconEngineV2_clone(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QIconEngineV2 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QIconEngineV2, &sipCpp))
        {
            QIconEngineV2*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QIconEngineV2::clone() : sipCpp->clone());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QIconEngineV2,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIconEngineV2, sipName_clone, doc_QIconEngineV2_clone);

    return NULL;
}


PyDoc_STRVAR(doc_QIconEngineV2_read, "read(self, QDataStream) -> bool");

extern "C" {static PyObject *meth_QIconEngineV2_read(PyObject *, PyObject *);}
static PyObject *meth_QIconEngineV2_read(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QDataStream* a0;
        QIconEngineV2 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QIconEngineV2, &sipCpp, sipType_QDataStream, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QIconEngineV2::read(*a0) : sipCpp->read(*a0));
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIconEngineV2, sipName_read, doc_QIconEngineV2_read);

    return NULL;
}


PyDoc_STRVAR(doc_QIconEngineV2_write, "write(self, QDataStream) -> bool");

extern "C" {static PyObject *meth_QIconEngineV2_write(PyObject *, PyObject *);}
static PyObject *meth_QIconEngineV2_write(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QDataStream* a0;
        const QIconEngineV2 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QIconEngineV2, &sipCpp, sipType_QDataStream, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QIconEngineV2::write(*a0) : sipCpp->write(*a0));
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIconEngineV2, sipName_write, doc_QIconEngineV2_write);

    return NULL;
}


PyDoc_STRVAR(doc_QIconEngineV2_availableSizes, "availableSizes(self, mode: QIcon.Mode = QIcon.Normal, state: QIcon.State = QIcon.Off) -> object");

extern "C" {static PyObject *meth_QIconEngineV2_availableSizes(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QIconEngineV2_availableSizes(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QIcon::Mode a0 = QIcon::Normal;
        QIcon::State a1 = QIcon::Off;
        QIconEngineV2 *sipCpp;

        static const char *sipKwdList[] = {
            sipName_mode,
            sipName_state,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|EE", &sipSelf, sipType_QIconEngineV2, &sipCpp, sipType_QIcon_Mode, &a0, sipType_QIcon_State, &a1))
        {
            QList<QSize>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QSize>(sipCpp->availableSizes(a0,a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIconEngineV2, sipName_availableSizes, doc_QIconEngineV2_availableSizes);

    return NULL;
}


PyDoc_STRVAR(doc_QIconEngineV2_iconName, "iconName(self) -> QString");

extern "C" {static PyObject *meth_QIconEngineV2_iconName(PyObject *, PyObject *);}
static PyObject *meth_QIconEngineV2_iconName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QIconEngineV2 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QIconEngineV2, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->iconName());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIconEngineV2, sipName_iconName, doc_QIconEngineV2_iconName);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QIconEngineV2(void *, int);}
static void release_QIconEngineV2(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQIconEngineV2 *>(sipCppV);
    else
        delete reinterpret_cast<QIconEngineV2 *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QIconEngineV2(sipSimpleWrapper *);}
static void dealloc_QIconEngineV2(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQIconEngineV2 *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QIconEngineV2(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QIconEngineV2(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QIconEngineV2(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQIconEngineV2 *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQIconEngineV2();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QIconEngineV2* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QIconEngineV2, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQIconEngineV2(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QIconEngineV2[] = {{231, 255, 1}};


static PyMethodDef methods_QIconEngineV2[] = {
    {SIP_MLNAME_CAST(sipName_availableSizes), (PyCFunction)meth_QIconEngineV2_availableSizes, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QIconEngineV2_availableSizes)},
    {SIP_MLNAME_CAST(sipName_clone), meth_QIconEngineV2_clone, METH_VARARGS, SIP_MLDOC_CAST(doc_QIconEngineV2_clone)},
    {SIP_MLNAME_CAST(sipName_iconName), meth_QIconEngineV2_iconName, METH_VARARGS, SIP_MLDOC_CAST(doc_QIconEngineV2_iconName)},
    {SIP_MLNAME_CAST(sipName_key), meth_QIconEngineV2_key, METH_VARARGS, SIP_MLDOC_CAST(doc_QIconEngineV2_key)},
    {SIP_MLNAME_CAST(sipName_read), meth_QIconEngineV2_read, METH_VARARGS, SIP_MLDOC_CAST(doc_QIconEngineV2_read)},
    {SIP_MLNAME_CAST(sipName_write), meth_QIconEngineV2_write, METH_VARARGS, SIP_MLDOC_CAST(doc_QIconEngineV2_write)}
};

static sipEnumMemberDef enummembers_QIconEngineV2[] = {
    {sipName_AvailableSizesHook, static_cast<int>(QIconEngineV2::AvailableSizesHook), 234},
    {sipName_IconNameHook, static_cast<int>(QIconEngineV2::IconNameHook), 234},
};

PyDoc_STRVAR(doc_QIconEngineV2, "\1QIconEngineV2()\n"
    "QIconEngineV2(QIconEngineV2)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QIconEngineV2 = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QIconEngineV2,
        {0}
    },
    {
        sipNameNr_QIconEngineV2,
        {0, 0, 1},
        6, methods_QIconEngineV2,
        2, enummembers_QIconEngineV2,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QIconEngineV2,
    -1,
    -1,
    supers_QIconEngineV2,
    0,
    init_type_QIconEngineV2,
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
    dealloc_QIconEngineV2,
    0,
    0,
    0,
    release_QIconEngineV2,
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
