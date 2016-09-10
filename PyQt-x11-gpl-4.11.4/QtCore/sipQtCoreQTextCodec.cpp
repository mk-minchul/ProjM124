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

#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qtextcodec.sip"
#include <qtextcodec.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQTextCodec.cpp"

#line 31 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQTextCodec.cpp"
#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qtextcodec.sip"
#include <qtextcodec.h>
#line 86 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qtextcodec.sip"
#include <qtextcodec.h>
#line 38 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQTextCodec.cpp"
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 41 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQTextCodec.cpp"
#line 32 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 44 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQTextCodec.cpp"
#line 129 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qtextcodec.sip"
#include <qtextcodec.h>
#line 47 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQTextCodec.cpp"
#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qtextcodec.sip"
#include <qtextcodec.h>
#line 50 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQTextCodec.cpp"
#line 147 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qtextcodec.sip"
#include <qtextcodec.h>
#line 53 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQTextCodec.cpp"
#line 623 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 56 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQTextCodec.cpp"


PyDoc_STRVAR(doc_QTextCodec_codecForName, "codecForName(QByteArray) -> QTextCodec\n"
    "codecForName(str) -> QTextCodec");

extern "C" {static PyObject *meth_QTextCodec_codecForName(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_codecForName(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QByteArray* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QByteArray, &a0, &a0State))
        {
            QTextCodec*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QTextCodec::codecForName(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            return sipConvertFromType(sipRes,sipType_QTextCodec,NULL);
        }
    }

    {
        const char* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "s", &a0))
        {
            QTextCodec*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QTextCodec::codecForName(a0);
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QTextCodec,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_codecForName, doc_QTextCodec_codecForName);

    return NULL;
}


PyDoc_STRVAR(doc_QTextCodec_codecForMib, "codecForMib(int) -> QTextCodec");

extern "C" {static PyObject *meth_QTextCodec_codecForMib(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_codecForMib(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "i", &a0))
        {
            QTextCodec*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QTextCodec::codecForMib(a0);
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QTextCodec,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_codecForMib, doc_QTextCodec_codecForMib);

    return NULL;
}


PyDoc_STRVAR(doc_QTextCodec_codecForHtml, "codecForHtml(QByteArray) -> QTextCodec\n"
    "codecForHtml(QByteArray, QTextCodec) -> QTextCodec");

extern "C" {static PyObject *meth_QTextCodec_codecForHtml(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_codecForHtml(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QByteArray* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QByteArray, &a0, &a0State))
        {
            QTextCodec*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QTextCodec::codecForHtml(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            return sipConvertFromType(sipRes,sipType_QTextCodec,NULL);
        }
    }

    {
        const QByteArray* a0;
        int a0State = 0;
        QTextCodec* a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1J8", sipType_QByteArray, &a0, &a0State, sipType_QTextCodec, &a1))
        {
            QTextCodec*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QTextCodec::codecForHtml(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            return sipConvertFromType(sipRes,sipType_QTextCodec,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_codecForHtml, doc_QTextCodec_codecForHtml);

    return NULL;
}


PyDoc_STRVAR(doc_QTextCodec_codecForUtfText, "codecForUtfText(QByteArray) -> QTextCodec\n"
    "codecForUtfText(QByteArray, QTextCodec) -> QTextCodec");

extern "C" {static PyObject *meth_QTextCodec_codecForUtfText(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_codecForUtfText(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QByteArray* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QByteArray, &a0, &a0State))
        {
            QTextCodec*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QTextCodec::codecForUtfText(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            return sipConvertFromType(sipRes,sipType_QTextCodec,NULL);
        }
    }

    {
        const QByteArray* a0;
        int a0State = 0;
        QTextCodec* a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1J8", sipType_QByteArray, &a0, &a0State, sipType_QTextCodec, &a1))
        {
            QTextCodec*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QTextCodec::codecForUtfText(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            return sipConvertFromType(sipRes,sipType_QTextCodec,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_codecForUtfText, doc_QTextCodec_codecForUtfText);

    return NULL;
}


PyDoc_STRVAR(doc_QTextCodec_availableCodecs, "availableCodecs() -> object");

extern "C" {static PyObject *meth_QTextCodec_availableCodecs(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_availableCodecs(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QList<QByteArray>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QByteArray>(QTextCodec::availableCodecs());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_availableCodecs, doc_QTextCodec_availableCodecs);

    return NULL;
}


PyDoc_STRVAR(doc_QTextCodec_availableMibs, "availableMibs() -> object");

extern "C" {static PyObject *meth_QTextCodec_availableMibs(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_availableMibs(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QList<int>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<int>(QTextCodec::availableMibs());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_1800,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_availableMibs, doc_QTextCodec_availableMibs);

    return NULL;
}


PyDoc_STRVAR(doc_QTextCodec_codecForLocale, "codecForLocale() -> QTextCodec");

extern "C" {static PyObject *meth_QTextCodec_codecForLocale(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_codecForLocale(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QTextCodec*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QTextCodec::codecForLocale();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QTextCodec,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_codecForLocale, doc_QTextCodec_codecForLocale);

    return NULL;
}


PyDoc_STRVAR(doc_QTextCodec_setCodecForLocale, "setCodecForLocale(QTextCodec)");

extern "C" {static PyObject *meth_QTextCodec_setCodecForLocale(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_setCodecForLocale(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextCodec* a0;
        PyObject *a0Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "@J8", &a0Keep, sipType_QTextCodec, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            QTextCodec::setCodecForLocale(a0);
            Py_END_ALLOW_THREADS

            sipKeepReference(NULL, -6, a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_setCodecForLocale, doc_QTextCodec_setCodecForLocale);

    return NULL;
}


PyDoc_STRVAR(doc_QTextCodec_makeDecoder, "makeDecoder(self) -> QTextDecoder\n"
    "makeDecoder(self, QTextCodec.ConversionFlags) -> QTextDecoder");

extern "C" {static PyObject *meth_QTextCodec_makeDecoder(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_makeDecoder(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextCodec *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextCodec, &sipCpp))
        {
            QTextDecoder*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->makeDecoder();
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextDecoder,NULL);
        }
    }

    {
        QTextCodec::ConversionFlags* a0;
        int a0State = 0;
        const QTextCodec *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QTextCodec, &sipCpp, sipType_QTextCodec_ConversionFlags, &a0, &a0State))
        {
            QTextDecoder*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->makeDecoder(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QTextCodec_ConversionFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextDecoder,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_makeDecoder, doc_QTextCodec_makeDecoder);

    return NULL;
}


PyDoc_STRVAR(doc_QTextCodec_makeEncoder, "makeEncoder(self) -> QTextEncoder\n"
    "makeEncoder(self, QTextCodec.ConversionFlags) -> QTextEncoder");

extern "C" {static PyObject *meth_QTextCodec_makeEncoder(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_makeEncoder(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextCodec *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextCodec, &sipCpp))
        {
            QTextEncoder*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->makeEncoder();
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextEncoder,NULL);
        }
    }

    {
        QTextCodec::ConversionFlags* a0;
        int a0State = 0;
        const QTextCodec *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QTextCodec, &sipCpp, sipType_QTextCodec_ConversionFlags, &a0, &a0State))
        {
            QTextEncoder*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->makeEncoder(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QTextCodec_ConversionFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextEncoder,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_makeEncoder, doc_QTextCodec_makeEncoder);

    return NULL;
}


PyDoc_STRVAR(doc_QTextCodec_canEncode, "canEncode(self, QString) -> bool");

extern "C" {static PyObject *meth_QTextCodec_canEncode(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_canEncode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QTextCodec *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QTextCodec, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->canEncode(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_canEncode, doc_QTextCodec_canEncode);

    return NULL;
}


PyDoc_STRVAR(doc_QTextCodec_toUnicode, "toUnicode(self, QByteArray) -> QString\n"
    "toUnicode(self, str) -> QString\n"
    "toUnicode(self, bytes, state: QTextCodec.ConverterState = None) -> QString");

extern "C" {static PyObject *meth_QTextCodec_toUnicode(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_toUnicode(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QByteArray* a0;
        int a0State = 0;
        const QTextCodec *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ1", &sipSelf, sipType_QTextCodec, &sipCpp, sipType_QByteArray, &a0, &a0State))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->toUnicode(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    {
        const char* a0;
        const QTextCodec *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "Bs", &sipSelf, sipType_QTextCodec, &sipCpp, &a0))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->toUnicode(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    {
        const char* a0;
        SIP_SSIZE_T a1;
        QTextCodec::ConverterState* a2 = 0;
        const QTextCodec *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_state,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "Bk|J8", &sipSelf, sipType_QTextCodec, &sipCpp, &a0, &a1, sipType_QTextCodec_ConverterState, &a2))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->toUnicode(a0,(int)a1,a2));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_toUnicode, doc_QTextCodec_toUnicode);

    return NULL;
}


PyDoc_STRVAR(doc_QTextCodec_fromUnicode, "fromUnicode(self, QString) -> QByteArray");

extern "C" {static PyObject *meth_QTextCodec_fromUnicode(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_fromUnicode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QTextCodec *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QTextCodec, &sipCpp, sipType_QString,&a0, &a0State))
        {
            QByteArray*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QByteArray(sipCpp->fromUnicode(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_fromUnicode, doc_QTextCodec_fromUnicode);

    return NULL;
}


PyDoc_STRVAR(doc_QTextCodec_name, "name(self) -> QByteArray");

extern "C" {static PyObject *meth_QTextCodec_name(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QTextCodec *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextCodec, &sipCpp))
        {
            QByteArray*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QTextCodec, sipName_name);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QByteArray(sipCpp->name());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_name, doc_QTextCodec_name);

    return NULL;
}


PyDoc_STRVAR(doc_QTextCodec_aliases, "aliases(self) -> object");

extern "C" {static PyObject *meth_QTextCodec_aliases(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_aliases(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QTextCodec *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextCodec, &sipCpp))
        {
            QList<QByteArray>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QByteArray>((sipSelfWasArg ? sipCpp->QTextCodec::aliases() : sipCpp->aliases()));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_aliases, doc_QTextCodec_aliases);

    return NULL;
}


PyDoc_STRVAR(doc_QTextCodec_mibEnum, "mibEnum(self) -> int");

extern "C" {static PyObject *meth_QTextCodec_mibEnum(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_mibEnum(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QTextCodec *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextCodec, &sipCpp))
        {
            int sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QTextCodec, sipName_mibEnum);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->mibEnum();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_mibEnum, doc_QTextCodec_mibEnum);

    return NULL;
}


PyDoc_STRVAR(doc_QTextCodec_convertToUnicode, "convertToUnicode(self, bytes, QTextCodec.ConverterState) -> QString");

extern "C" {static PyObject *meth_QTextCodec_convertToUnicode(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_convertToUnicode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const char* a0;
        SIP_SSIZE_T a1;
        QTextCodec::ConverterState* a2;
        const QTextCodec *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pkJ8", &sipSelf, sipType_QTextCodec, &sipCpp, &a0, &a1, sipType_QTextCodec_ConverterState, &a2))
        {
            QString*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QTextCodec, sipName_convertToUnicode);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->convertToUnicode(a0,(int)a1,a2));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_convertToUnicode, doc_QTextCodec_convertToUnicode);

    return NULL;
}


PyDoc_STRVAR(doc_QTextCodec_codecForTr, "codecForTr() -> QTextCodec");

extern "C" {static PyObject *meth_QTextCodec_codecForTr(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_codecForTr(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QTextCodec*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QTextCodec::codecForTr();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QTextCodec,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_codecForTr, doc_QTextCodec_codecForTr);

    return NULL;
}


PyDoc_STRVAR(doc_QTextCodec_setCodecForTr, "setCodecForTr(QTextCodec)");

extern "C" {static PyObject *meth_QTextCodec_setCodecForTr(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_setCodecForTr(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextCodec* a0;
        PyObject *a0Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "@J8", &a0Keep, sipType_QTextCodec, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            QTextCodec::setCodecForTr(a0);
            Py_END_ALLOW_THREADS

            sipKeepReference(NULL, -7, a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_setCodecForTr, doc_QTextCodec_setCodecForTr);

    return NULL;
}


PyDoc_STRVAR(doc_QTextCodec_codecForCStrings, "codecForCStrings() -> QTextCodec");

extern "C" {static PyObject *meth_QTextCodec_codecForCStrings(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_codecForCStrings(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QTextCodec*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QTextCodec::codecForCStrings();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QTextCodec,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_codecForCStrings, doc_QTextCodec_codecForCStrings);

    return NULL;
}


PyDoc_STRVAR(doc_QTextCodec_setCodecForCStrings, "setCodecForCStrings(QTextCodec)");

extern "C" {static PyObject *meth_QTextCodec_setCodecForCStrings(PyObject *, PyObject *);}
static PyObject *meth_QTextCodec_setCodecForCStrings(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextCodec* a0;
        PyObject *a0Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "@J8", &a0Keep, sipType_QTextCodec, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            QTextCodec::setCodecForCStrings(a0);
            Py_END_ALLOW_THREADS

            sipKeepReference(NULL, -8, a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextCodec, sipName_setCodecForCStrings, doc_QTextCodec_setCodecForCStrings);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextCodec(void *, int);}
static void release_QTextCodec(void *,int)
{
}


static PyMethodDef methods_QTextCodec[] = {
    {SIP_MLNAME_CAST(sipName_aliases), meth_QTextCodec_aliases, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextCodec_aliases)},
    {SIP_MLNAME_CAST(sipName_availableCodecs), meth_QTextCodec_availableCodecs, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextCodec_availableCodecs)},
    {SIP_MLNAME_CAST(sipName_availableMibs), meth_QTextCodec_availableMibs, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextCodec_availableMibs)},
    {SIP_MLNAME_CAST(sipName_canEncode), meth_QTextCodec_canEncode, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextCodec_canEncode)},
    {SIP_MLNAME_CAST(sipName_codecForCStrings), meth_QTextCodec_codecForCStrings, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextCodec_codecForCStrings)},
    {SIP_MLNAME_CAST(sipName_codecForHtml), meth_QTextCodec_codecForHtml, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextCodec_codecForHtml)},
    {SIP_MLNAME_CAST(sipName_codecForLocale), meth_QTextCodec_codecForLocale, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextCodec_codecForLocale)},
    {SIP_MLNAME_CAST(sipName_codecForMib), meth_QTextCodec_codecForMib, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextCodec_codecForMib)},
    {SIP_MLNAME_CAST(sipName_codecForName), meth_QTextCodec_codecForName, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextCodec_codecForName)},
    {SIP_MLNAME_CAST(sipName_codecForTr), meth_QTextCodec_codecForTr, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextCodec_codecForTr)},
    {SIP_MLNAME_CAST(sipName_codecForUtfText), meth_QTextCodec_codecForUtfText, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextCodec_codecForUtfText)},
    {SIP_MLNAME_CAST(sipName_convertToUnicode), meth_QTextCodec_convertToUnicode, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextCodec_convertToUnicode)},
    {SIP_MLNAME_CAST(sipName_fromUnicode), meth_QTextCodec_fromUnicode, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextCodec_fromUnicode)},
    {SIP_MLNAME_CAST(sipName_makeDecoder), meth_QTextCodec_makeDecoder, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextCodec_makeDecoder)},
    {SIP_MLNAME_CAST(sipName_makeEncoder), meth_QTextCodec_makeEncoder, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextCodec_makeEncoder)},
    {SIP_MLNAME_CAST(sipName_mibEnum), meth_QTextCodec_mibEnum, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextCodec_mibEnum)},
    {SIP_MLNAME_CAST(sipName_name), meth_QTextCodec_name, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextCodec_name)},
    {SIP_MLNAME_CAST(sipName_setCodecForCStrings), meth_QTextCodec_setCodecForCStrings, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextCodec_setCodecForCStrings)},
    {SIP_MLNAME_CAST(sipName_setCodecForLocale), meth_QTextCodec_setCodecForLocale, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextCodec_setCodecForLocale)},
    {SIP_MLNAME_CAST(sipName_setCodecForTr), meth_QTextCodec_setCodecForTr, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextCodec_setCodecForTr)},
    {SIP_MLNAME_CAST(sipName_toUnicode), (PyCFunction)meth_QTextCodec_toUnicode, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QTextCodec_toUnicode)}
};

static sipEnumMemberDef enummembers_QTextCodec[] = {
    {sipName_ConvertInvalidToNull, static_cast<int>(QTextCodec::ConvertInvalidToNull), 219},
    {sipName_DefaultConversion, static_cast<int>(QTextCodec::DefaultConversion), 219},
    {sipName_IgnoreHeader, static_cast<int>(QTextCodec::IgnoreHeader), 219},
};


pyqt4ClassTypeDef sipTypeDef_QtCore_QTextCodec = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QTextCodec,
        {0}
    },
    {
        sipNameNr_QTextCodec,
        {0, 0, 1},
        21, methods_QTextCodec,
        3, enummembers_QTextCodec,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    -1,
    0,
    0,
    0,
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
    0,
    0,
    0,
    0,
    release_QTextCodec,
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
