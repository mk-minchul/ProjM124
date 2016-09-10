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

#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtNetwork/qsslcipher.sip"
#include <qsslcipher.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQSslCipher.cpp"

#line 31 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQSslCipher.cpp"
#line 35 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtNetwork/qssl.sip"
#include <qssl.h>
#line 36 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQSslCipher.cpp"


PyDoc_STRVAR(doc_QSslCipher_isNull, "isNull(self) -> bool");

extern "C" {static PyObject *meth_QSslCipher_isNull(PyObject *, PyObject *);}
static PyObject *meth_QSslCipher_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSslCipher *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslCipher, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isNull();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslCipher, sipName_isNull, doc_QSslCipher_isNull);

    return NULL;
}


PyDoc_STRVAR(doc_QSslCipher_name, "name(self) -> QString");

extern "C" {static PyObject *meth_QSslCipher_name(PyObject *, PyObject *);}
static PyObject *meth_QSslCipher_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSslCipher *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslCipher, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->name());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslCipher, sipName_name, doc_QSslCipher_name);

    return NULL;
}


PyDoc_STRVAR(doc_QSslCipher_supportedBits, "supportedBits(self) -> int");

extern "C" {static PyObject *meth_QSslCipher_supportedBits(PyObject *, PyObject *);}
static PyObject *meth_QSslCipher_supportedBits(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSslCipher *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslCipher, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->supportedBits();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslCipher, sipName_supportedBits, doc_QSslCipher_supportedBits);

    return NULL;
}


PyDoc_STRVAR(doc_QSslCipher_usedBits, "usedBits(self) -> int");

extern "C" {static PyObject *meth_QSslCipher_usedBits(PyObject *, PyObject *);}
static PyObject *meth_QSslCipher_usedBits(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSslCipher *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslCipher, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->usedBits();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslCipher, sipName_usedBits, doc_QSslCipher_usedBits);

    return NULL;
}


PyDoc_STRVAR(doc_QSslCipher_keyExchangeMethod, "keyExchangeMethod(self) -> QString");

extern "C" {static PyObject *meth_QSslCipher_keyExchangeMethod(PyObject *, PyObject *);}
static PyObject *meth_QSslCipher_keyExchangeMethod(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSslCipher *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslCipher, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->keyExchangeMethod());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslCipher, sipName_keyExchangeMethod, doc_QSslCipher_keyExchangeMethod);

    return NULL;
}


PyDoc_STRVAR(doc_QSslCipher_authenticationMethod, "authenticationMethod(self) -> QString");

extern "C" {static PyObject *meth_QSslCipher_authenticationMethod(PyObject *, PyObject *);}
static PyObject *meth_QSslCipher_authenticationMethod(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSslCipher *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslCipher, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->authenticationMethod());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslCipher, sipName_authenticationMethod, doc_QSslCipher_authenticationMethod);

    return NULL;
}


PyDoc_STRVAR(doc_QSslCipher_encryptionMethod, "encryptionMethod(self) -> QString");

extern "C" {static PyObject *meth_QSslCipher_encryptionMethod(PyObject *, PyObject *);}
static PyObject *meth_QSslCipher_encryptionMethod(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSslCipher *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslCipher, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->encryptionMethod());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslCipher, sipName_encryptionMethod, doc_QSslCipher_encryptionMethod);

    return NULL;
}


PyDoc_STRVAR(doc_QSslCipher_protocolString, "protocolString(self) -> QString");

extern "C" {static PyObject *meth_QSslCipher_protocolString(PyObject *, PyObject *);}
static PyObject *meth_QSslCipher_protocolString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSslCipher *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslCipher, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->protocolString());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslCipher, sipName_protocolString, doc_QSslCipher_protocolString);

    return NULL;
}


PyDoc_STRVAR(doc_QSslCipher_protocol, "protocol(self) -> QSsl.SslProtocol");

extern "C" {static PyObject *meth_QSslCipher_protocol(PyObject *, PyObject *);}
static PyObject *meth_QSslCipher_protocol(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSslCipher *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslCipher, &sipCpp))
        {
            QSsl::SslProtocol sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->protocol();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QSsl_SslProtocol);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslCipher, sipName_protocol, doc_QSslCipher_protocol);

    return NULL;
}


extern "C" {static PyObject *slot_QSslCipher___ne__(PyObject *,PyObject *);}
static PyObject *slot_QSslCipher___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QSslCipher *sipCpp = reinterpret_cast<QSslCipher *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSslCipher));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSslCipher* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QSslCipher, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QSslCipher::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,ne_slot,sipType_QSslCipher,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QSslCipher___eq__(PyObject *,PyObject *);}
static PyObject *slot_QSslCipher___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QSslCipher *sipCpp = reinterpret_cast<QSslCipher *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSslCipher));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSslCipher* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QSslCipher, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QSslCipher::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,eq_slot,sipType_QSslCipher,sipSelf,sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QSslCipher(void *, int);}
static void release_QSslCipher(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QSslCipher *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QSslCipher(void *, SIP_SSIZE_T, const void *);}
static void assign_QSslCipher(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QSslCipher *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QSslCipher *>(sipSrc);
}


extern "C" {static void *array_QSslCipher(SIP_SSIZE_T);}
static void *array_QSslCipher(SIP_SSIZE_T sipNrElem)
{
    return new QSslCipher[sipNrElem];
}


extern "C" {static void *copy_QSslCipher(const void *, SIP_SSIZE_T);}
static void *copy_QSslCipher(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QSslCipher(reinterpret_cast<const QSslCipher *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSslCipher(sipSimpleWrapper *);}
static void dealloc_QSslCipher(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QSslCipher(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QSslCipher(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSslCipher(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QSslCipher *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QSslCipher();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        QSsl::SslProtocol a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1E", sipType_QString,&a0, &a0State, sipType_QSsl_SslProtocol, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QSslCipher(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipCpp;
        }
    }

    {
        const QSslCipher* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QSslCipher, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QSslCipher(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QSslCipher[] = {
    {(void *)slot_QSslCipher___ne__, ne_slot},
    {(void *)slot_QSslCipher___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QSslCipher[] = {
    {SIP_MLNAME_CAST(sipName_authenticationMethod), meth_QSslCipher_authenticationMethod, METH_VARARGS, SIP_MLDOC_CAST(doc_QSslCipher_authenticationMethod)},
    {SIP_MLNAME_CAST(sipName_encryptionMethod), meth_QSslCipher_encryptionMethod, METH_VARARGS, SIP_MLDOC_CAST(doc_QSslCipher_encryptionMethod)},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QSslCipher_isNull, METH_VARARGS, SIP_MLDOC_CAST(doc_QSslCipher_isNull)},
    {SIP_MLNAME_CAST(sipName_keyExchangeMethod), meth_QSslCipher_keyExchangeMethod, METH_VARARGS, SIP_MLDOC_CAST(doc_QSslCipher_keyExchangeMethod)},
    {SIP_MLNAME_CAST(sipName_name), meth_QSslCipher_name, METH_VARARGS, SIP_MLDOC_CAST(doc_QSslCipher_name)},
    {SIP_MLNAME_CAST(sipName_protocol), meth_QSslCipher_protocol, METH_VARARGS, SIP_MLDOC_CAST(doc_QSslCipher_protocol)},
    {SIP_MLNAME_CAST(sipName_protocolString), meth_QSslCipher_protocolString, METH_VARARGS, SIP_MLDOC_CAST(doc_QSslCipher_protocolString)},
    {SIP_MLNAME_CAST(sipName_supportedBits), meth_QSslCipher_supportedBits, METH_VARARGS, SIP_MLDOC_CAST(doc_QSslCipher_supportedBits)},
    {SIP_MLNAME_CAST(sipName_usedBits), meth_QSslCipher_usedBits, METH_VARARGS, SIP_MLDOC_CAST(doc_QSslCipher_usedBits)}
};

PyDoc_STRVAR(doc_QSslCipher, "\1QSslCipher()\n"
    "QSslCipher(QString, QSsl.SslProtocol)\n"
    "QSslCipher(QSslCipher)");


pyqt4ClassTypeDef sipTypeDef_QtNetwork_QSslCipher = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QSslCipher,
        {0}
    },
    {
        sipNameNr_QSslCipher,
        {0, 0, 1},
        9, methods_QSslCipher,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSslCipher,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QSslCipher,
    init_type_QSslCipher,
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
    dealloc_QSslCipher,
    assign_QSslCipher,
    array_QSslCipher,
    copy_QSslCipher,
    release_QSslCipher,
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
