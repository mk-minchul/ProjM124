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

#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qtextdocumentwriter.sip"
#include <qtextdocumentwriter.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextDocumentWriter.cpp"

#line 30 "sip/QtCore/qiodevice.sip"
#include <qiodevice.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextDocumentWriter.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 36 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextDocumentWriter.cpp"
#line 31 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 39 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextDocumentWriter.cpp"
#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 42 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextDocumentWriter.cpp"
#line 30 "sip/QtCore/qtextcodec.sip"
#include <qtextcodec.h>
#line 45 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextDocumentWriter.cpp"
#line 63 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qtextdocument.sip"
#include <qtextdocument.h>
#line 48 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextDocumentWriter.cpp"
#line 26 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qtextdocumentfragment.sip"
#include <qtextdocumentfragment.h>
#line 51 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextDocumentWriter.cpp"


PyDoc_STRVAR(doc_QTextDocumentWriter_setFormat, "setFormat(self, QByteArray)");

extern "C" {static PyObject *meth_QTextDocumentWriter_setFormat(PyObject *, PyObject *);}
static PyObject *meth_QTextDocumentWriter_setFormat(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QByteArray* a0;
        int a0State = 0;
        QTextDocumentWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QTextDocumentWriter, &sipCpp, sipType_QByteArray, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setFormat(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextDocumentWriter, sipName_setFormat, doc_QTextDocumentWriter_setFormat);

    return NULL;
}


PyDoc_STRVAR(doc_QTextDocumentWriter_format, "format(self) -> QByteArray");

extern "C" {static PyObject *meth_QTextDocumentWriter_format(PyObject *, PyObject *);}
static PyObject *meth_QTextDocumentWriter_format(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextDocumentWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextDocumentWriter, &sipCpp))
        {
            QByteArray*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QByteArray(sipCpp->format());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextDocumentWriter, sipName_format, doc_QTextDocumentWriter_format);

    return NULL;
}


PyDoc_STRVAR(doc_QTextDocumentWriter_setDevice, "setDevice(self, QIODevice)");

extern "C" {static PyObject *meth_QTextDocumentWriter_setDevice(PyObject *, PyObject *);}
static PyObject *meth_QTextDocumentWriter_setDevice(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QIODevice* a0;
        QTextDocumentWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QTextDocumentWriter, &sipCpp, sipType_QIODevice, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setDevice(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextDocumentWriter, sipName_setDevice, doc_QTextDocumentWriter_setDevice);

    return NULL;
}


PyDoc_STRVAR(doc_QTextDocumentWriter_device, "device(self) -> QIODevice");

extern "C" {static PyObject *meth_QTextDocumentWriter_device(PyObject *, PyObject *);}
static PyObject *meth_QTextDocumentWriter_device(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextDocumentWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextDocumentWriter, &sipCpp))
        {
            QIODevice*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->device();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QIODevice,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextDocumentWriter, sipName_device, doc_QTextDocumentWriter_device);

    return NULL;
}


PyDoc_STRVAR(doc_QTextDocumentWriter_setFileName, "setFileName(self, QString)");

extern "C" {static PyObject *meth_QTextDocumentWriter_setFileName(PyObject *, PyObject *);}
static PyObject *meth_QTextDocumentWriter_setFileName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QTextDocumentWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QTextDocumentWriter, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setFileName(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextDocumentWriter, sipName_setFileName, doc_QTextDocumentWriter_setFileName);

    return NULL;
}


PyDoc_STRVAR(doc_QTextDocumentWriter_fileName, "fileName(self) -> QString");

extern "C" {static PyObject *meth_QTextDocumentWriter_fileName(PyObject *, PyObject *);}
static PyObject *meth_QTextDocumentWriter_fileName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextDocumentWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextDocumentWriter, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->fileName());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextDocumentWriter, sipName_fileName, doc_QTextDocumentWriter_fileName);

    return NULL;
}


PyDoc_STRVAR(doc_QTextDocumentWriter_write, "write(self, QTextDocument) -> bool\n"
    "write(self, QTextDocumentFragment) -> bool");

extern "C" {static PyObject *meth_QTextDocumentWriter_write(PyObject *, PyObject *);}
static PyObject *meth_QTextDocumentWriter_write(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextDocument* a0;
        QTextDocumentWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QTextDocumentWriter, &sipCpp, sipType_QTextDocument, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->write(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const QTextDocumentFragment* a0;
        QTextDocumentWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QTextDocumentWriter, &sipCpp, sipType_QTextDocumentFragment, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->write(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextDocumentWriter, sipName_write, doc_QTextDocumentWriter_write);

    return NULL;
}


PyDoc_STRVAR(doc_QTextDocumentWriter_setCodec, "setCodec(self, QTextCodec)");

extern "C" {static PyObject *meth_QTextDocumentWriter_setCodec(PyObject *, PyObject *);}
static PyObject *meth_QTextDocumentWriter_setCodec(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextCodec* a0;
        PyObject *a0Keep;
        QTextDocumentWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8", &sipSelf, sipType_QTextDocumentWriter, &sipCpp, &a0Keep, sipType_QTextCodec, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setCodec(a0);
            Py_END_ALLOW_THREADS

            sipKeepReference(sipSelf, -64, a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextDocumentWriter, sipName_setCodec, doc_QTextDocumentWriter_setCodec);

    return NULL;
}


PyDoc_STRVAR(doc_QTextDocumentWriter_codec, "codec(self) -> QTextCodec");

extern "C" {static PyObject *meth_QTextDocumentWriter_codec(PyObject *, PyObject *);}
static PyObject *meth_QTextDocumentWriter_codec(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextDocumentWriter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextDocumentWriter, &sipCpp))
        {
            QTextCodec*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->codec();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QTextCodec,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextDocumentWriter, sipName_codec, doc_QTextDocumentWriter_codec);

    return NULL;
}


PyDoc_STRVAR(doc_QTextDocumentWriter_supportedDocumentFormats, "supportedDocumentFormats() -> object");

extern "C" {static PyObject *meth_QTextDocumentWriter_supportedDocumentFormats(PyObject *, PyObject *);}
static PyObject *meth_QTextDocumentWriter_supportedDocumentFormats(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QList<QByteArray>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QByteArray>(QTextDocumentWriter::supportedDocumentFormats());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextDocumentWriter, sipName_supportedDocumentFormats, doc_QTextDocumentWriter_supportedDocumentFormats);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextDocumentWriter(void *, int);}
static void release_QTextDocumentWriter(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QTextDocumentWriter *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QTextDocumentWriter(sipSimpleWrapper *);}
static void dealloc_QTextDocumentWriter(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTextDocumentWriter(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QTextDocumentWriter(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTextDocumentWriter(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QTextDocumentWriter *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextDocumentWriter();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        QIODevice* a0;
        const QByteArray* a1;
        int a1State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J8J1", sipType_QIODevice, &a0, sipType_QByteArray, &a1, &a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextDocumentWriter(a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QByteArray *>(a1),sipType_QByteArray,a1State);

            return sipCpp;
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        const QByteArray& a1def = QByteArray();
        const QByteArray* a1 = &a1def;
        int a1State = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_format,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1|J1", sipType_QString,&a0, &a0State, sipType_QByteArray, &a1, &a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextDocumentWriter(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QByteArray *>(a1),sipType_QByteArray,a1State);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QTextDocumentWriter[] = {
    {SIP_MLNAME_CAST(sipName_codec), meth_QTextDocumentWriter_codec, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextDocumentWriter_codec)},
    {SIP_MLNAME_CAST(sipName_device), meth_QTextDocumentWriter_device, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextDocumentWriter_device)},
    {SIP_MLNAME_CAST(sipName_fileName), meth_QTextDocumentWriter_fileName, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextDocumentWriter_fileName)},
    {SIP_MLNAME_CAST(sipName_format), meth_QTextDocumentWriter_format, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextDocumentWriter_format)},
    {SIP_MLNAME_CAST(sipName_setCodec), meth_QTextDocumentWriter_setCodec, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextDocumentWriter_setCodec)},
    {SIP_MLNAME_CAST(sipName_setDevice), meth_QTextDocumentWriter_setDevice, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextDocumentWriter_setDevice)},
    {SIP_MLNAME_CAST(sipName_setFileName), meth_QTextDocumentWriter_setFileName, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextDocumentWriter_setFileName)},
    {SIP_MLNAME_CAST(sipName_setFormat), meth_QTextDocumentWriter_setFormat, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextDocumentWriter_setFormat)},
    {SIP_MLNAME_CAST(sipName_supportedDocumentFormats), meth_QTextDocumentWriter_supportedDocumentFormats, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextDocumentWriter_supportedDocumentFormats)},
    {SIP_MLNAME_CAST(sipName_write), meth_QTextDocumentWriter_write, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextDocumentWriter_write)}
};

PyDoc_STRVAR(doc_QTextDocumentWriter, "\1QTextDocumentWriter()\n"
    "QTextDocumentWriter(QIODevice, QByteArray)\n"
    "QTextDocumentWriter(QString, format: QByteArray = QByteArray())");


pyqt4ClassTypeDef sipTypeDef_QtGui_QTextDocumentWriter = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QTextDocumentWriter,
        {0}
    },
    {
        sipNameNr_QTextDocumentWriter,
        {0, 0, 1},
        10, methods_QTextDocumentWriter,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTextDocumentWriter,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QTextDocumentWriter,
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
    dealloc_QTextDocumentWriter,
    0,
    0,
    0,
    release_QTextDocumentWriter,
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
