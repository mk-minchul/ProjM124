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

#line 94 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtNetwork/qhttp.sip"
#include <qhttp.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQHttpRequestHeader.cpp"

#line 31 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQHttpRequestHeader.cpp"
#line 31 "sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 36 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQHttpRequestHeader.cpp"
#line 196 "sip/QtCore/qlist.sip"
#include <qlist.h>
#include <qpair.h>
#line 40 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQHttpRequestHeader.cpp"
#line 72 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 43 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQHttpRequestHeader.cpp"


class sipQHttpRequestHeader : public QHttpRequestHeader
{
public:
    sipQHttpRequestHeader();
    sipQHttpRequestHeader(const QString&,const QString&,int,int);
    sipQHttpRequestHeader(const QHttpRequestHeader&);
    sipQHttpRequestHeader(const QString&);
    virtual ~sipQHttpRequestHeader();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool parseLine(const QString&,int);
    QString toString() const;
    int minorVersion() const;
    int majorVersion() const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQHttpRequestHeader(const sipQHttpRequestHeader &);
    sipQHttpRequestHeader &operator = (const sipQHttpRequestHeader &);

    char sipPyMethods[4];
};

sipQHttpRequestHeader::sipQHttpRequestHeader(): QHttpRequestHeader(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQHttpRequestHeader::sipQHttpRequestHeader(const QString& a0,const QString& a1,int a2,int a3): QHttpRequestHeader(a0,a1,a2,a3), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQHttpRequestHeader::sipQHttpRequestHeader(const QHttpRequestHeader& a0): QHttpRequestHeader(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQHttpRequestHeader::sipQHttpRequestHeader(const QString& a0): QHttpRequestHeader(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQHttpRequestHeader::~sipQHttpRequestHeader()
{
    sipCommonDtor(sipPySelf);
}

bool sipQHttpRequestHeader::parseLine(const QString& a0,int a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_parseLine);

    if (!sipMeth)
        return QHttpRequestHeader::parseLine(a0,a1);

    extern bool sipVH_QtNetwork_16(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QString&,int);

    return sipVH_QtNetwork_16(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

QString sipQHttpRequestHeader::toString() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_toString);

    if (!sipMeth)
        return QHttpRequestHeader::toString();

    typedef QString (*sipVH_QtCore_62)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_62)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[62]))(sipGILState, 0, sipPySelf, sipMeth);
}

int sipQHttpRequestHeader::minorVersion() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,NULL,sipName_minorVersion);

    if (!sipMeth)
        return QHttpRequestHeader::minorVersion();

    typedef int (*sipVH_QtCore_6)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_6)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[6]))(sipGILState, 0, sipPySelf, sipMeth);
}

int sipQHttpRequestHeader::majorVersion() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[3]),sipPySelf,NULL,sipName_majorVersion);

    if (!sipMeth)
        return QHttpRequestHeader::majorVersion();

    typedef int (*sipVH_QtCore_6)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_6)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[6]))(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_QHttpRequestHeader_setRequest, "setRequest(self, QString, QString, major: int = 1, minor: int = 1)");

extern "C" {static PyObject *meth_QHttpRequestHeader_setRequest(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QHttpRequestHeader_setRequest(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QString* a1;
        int a1State = 0;
        int a2 = 1;
        int a3 = 1;
        QHttpRequestHeader *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_major,
            sipName_minor,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1J1|ii", &sipSelf, sipType_QHttpRequestHeader, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, &a2, &a3))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setRequest(*a0,*a1,a2,a3);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHttpRequestHeader, sipName_setRequest, doc_QHttpRequestHeader_setRequest);

    return NULL;
}


PyDoc_STRVAR(doc_QHttpRequestHeader_method, "method(self) -> QString");

extern "C" {static PyObject *meth_QHttpRequestHeader_method(PyObject *, PyObject *);}
static PyObject *meth_QHttpRequestHeader_method(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QHttpRequestHeader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHttpRequestHeader, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->method());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHttpRequestHeader, sipName_method, doc_QHttpRequestHeader_method);

    return NULL;
}


PyDoc_STRVAR(doc_QHttpRequestHeader_path, "path(self) -> QString");

extern "C" {static PyObject *meth_QHttpRequestHeader_path(PyObject *, PyObject *);}
static PyObject *meth_QHttpRequestHeader_path(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QHttpRequestHeader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHttpRequestHeader, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->path());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHttpRequestHeader, sipName_path, doc_QHttpRequestHeader_path);

    return NULL;
}


PyDoc_STRVAR(doc_QHttpRequestHeader_majorVersion, "majorVersion(self) -> int");

extern "C" {static PyObject *meth_QHttpRequestHeader_majorVersion(PyObject *, PyObject *);}
static PyObject *meth_QHttpRequestHeader_majorVersion(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QHttpRequestHeader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHttpRequestHeader, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QHttpRequestHeader::majorVersion() : sipCpp->majorVersion());
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHttpRequestHeader, sipName_majorVersion, doc_QHttpRequestHeader_majorVersion);

    return NULL;
}


PyDoc_STRVAR(doc_QHttpRequestHeader_minorVersion, "minorVersion(self) -> int");

extern "C" {static PyObject *meth_QHttpRequestHeader_minorVersion(PyObject *, PyObject *);}
static PyObject *meth_QHttpRequestHeader_minorVersion(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QHttpRequestHeader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHttpRequestHeader, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QHttpRequestHeader::minorVersion() : sipCpp->minorVersion());
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHttpRequestHeader, sipName_minorVersion, doc_QHttpRequestHeader_minorVersion);

    return NULL;
}


PyDoc_STRVAR(doc_QHttpRequestHeader_toString, "toString(self) -> QString");

extern "C" {static PyObject *meth_QHttpRequestHeader_toString(PyObject *, PyObject *);}
static PyObject *meth_QHttpRequestHeader_toString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QHttpRequestHeader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHttpRequestHeader, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString((sipSelfWasArg ? sipCpp->QHttpRequestHeader::toString() : sipCpp->toString()));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHttpRequestHeader, sipName_toString, doc_QHttpRequestHeader_toString);

    return NULL;
}


PyDoc_STRVAR(doc_QHttpRequestHeader_parseLine, "parseLine(self, QString, int) -> bool");

extern "C" {static PyObject *meth_QHttpRequestHeader_parseLine(PyObject *, PyObject *);}
static PyObject *meth_QHttpRequestHeader_parseLine(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QString* a0;
        int a0State = 0;
        int a1;
        QHttpRequestHeader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pJ1i", &sipSelf, sipType_QHttpRequestHeader, &sipCpp, sipType_QString,&a0, &a0State, &a1))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QHttpRequestHeader::parseLine(*a0,a1) : sipCpp->parseLine(*a0,a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHttpRequestHeader, sipName_parseLine, doc_QHttpRequestHeader_parseLine);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QHttpRequestHeader(void *, int);}
static void release_QHttpRequestHeader(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQHttpRequestHeader *>(sipCppV);
    else
        delete reinterpret_cast<QHttpRequestHeader *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QHttpRequestHeader(void *, SIP_SSIZE_T, const void *);}
static void assign_QHttpRequestHeader(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QHttpRequestHeader *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QHttpRequestHeader *>(sipSrc);
}


extern "C" {static void *array_QHttpRequestHeader(SIP_SSIZE_T);}
static void *array_QHttpRequestHeader(SIP_SSIZE_T sipNrElem)
{
    return new QHttpRequestHeader[sipNrElem];
}


extern "C" {static void *copy_QHttpRequestHeader(const void *, SIP_SSIZE_T);}
static void *copy_QHttpRequestHeader(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QHttpRequestHeader(reinterpret_cast<const QHttpRequestHeader *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QHttpRequestHeader(sipSimpleWrapper *);}
static void dealloc_QHttpRequestHeader(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQHttpRequestHeader *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QHttpRequestHeader(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QHttpRequestHeader(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QHttpRequestHeader(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQHttpRequestHeader *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQHttpRequestHeader();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        const QString* a1;
        int a1State = 0;
        int a2 = 1;
        int a3 = 1;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_major,
            sipName_minor,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1J1|ii", sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, &a2, &a3))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQHttpRequestHeader(*a0,*a1,a2,a3);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QHttpRequestHeader* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QHttpRequestHeader, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQHttpRequestHeader(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QString* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQHttpRequestHeader(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QHttpRequestHeader[] = {{23, 255, 1}};


static PyMethodDef methods_QHttpRequestHeader[] = {
    {SIP_MLNAME_CAST(sipName_majorVersion), meth_QHttpRequestHeader_majorVersion, METH_VARARGS, SIP_MLDOC_CAST(doc_QHttpRequestHeader_majorVersion)},
    {SIP_MLNAME_CAST(sipName_method), meth_QHttpRequestHeader_method, METH_VARARGS, SIP_MLDOC_CAST(doc_QHttpRequestHeader_method)},
    {SIP_MLNAME_CAST(sipName_minorVersion), meth_QHttpRequestHeader_minorVersion, METH_VARARGS, SIP_MLDOC_CAST(doc_QHttpRequestHeader_minorVersion)},
    {SIP_MLNAME_CAST(sipName_parseLine), meth_QHttpRequestHeader_parseLine, METH_VARARGS, SIP_MLDOC_CAST(doc_QHttpRequestHeader_parseLine)},
    {SIP_MLNAME_CAST(sipName_path), meth_QHttpRequestHeader_path, METH_VARARGS, SIP_MLDOC_CAST(doc_QHttpRequestHeader_path)},
    {SIP_MLNAME_CAST(sipName_setRequest), (PyCFunction)meth_QHttpRequestHeader_setRequest, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QHttpRequestHeader_setRequest)},
    {SIP_MLNAME_CAST(sipName_toString), meth_QHttpRequestHeader_toString, METH_VARARGS, SIP_MLDOC_CAST(doc_QHttpRequestHeader_toString)}
};

PyDoc_STRVAR(doc_QHttpRequestHeader, "\1QHttpRequestHeader()\n"
    "QHttpRequestHeader(QString, QString, major: int = 1, minor: int = 1)\n"
    "QHttpRequestHeader(QHttpRequestHeader)\n"
    "QHttpRequestHeader(QString)");


pyqt4ClassTypeDef sipTypeDef_QtNetwork_QHttpRequestHeader = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QHttpRequestHeader,
        {0}
    },
    {
        sipNameNr_QHttpRequestHeader,
        {0, 0, 1},
        7, methods_QHttpRequestHeader,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QHttpRequestHeader,
    -1,
    -1,
    supers_QHttpRequestHeader,
    0,
    init_type_QHttpRequestHeader,
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
    dealloc_QHttpRequestHeader,
    assign_QHttpRequestHeader,
    array_QHttpRequestHeader,
    copy_QHttpRequestHeader,
    release_QHttpRequestHeader,
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
