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

#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtNetwork/qhostaddress.sip"
#include <qhostaddress.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQHostAddress.cpp"

#line 31 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQHostAddress.cpp"
#line 125 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtNetwork/qhostaddress.sip"
#include <qhostaddress.h>
#line 36 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQHostAddress.cpp"
#line 83 "sip/QtCore/qpair.sip"
#include <qpair.h>
#line 39 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQHostAddress.cpp"
#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtNetwork/qabstractsocket.sip"
#include <qabstractsocket.h>
#line 42 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQHostAddress.cpp"


PyDoc_STRVAR(doc_QHostAddress_setAddress, "setAddress(self, int)\n"
    "setAddress(self, QString) -> bool\n"
    "setAddress(self, object)");

extern "C" {static PyObject *meth_QHostAddress_setAddress(PyObject *, PyObject *);}
static PyObject *meth_QHostAddress_setAddress(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        quint32 a0;
        QHostAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bu", &sipSelf, sipType_QHostAddress, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setAddress(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        QHostAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QHostAddress, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->setAddress(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const Q_IPV6ADDR* a0;
        int a0State = 0;
        QHostAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QHostAddress, &sipCpp, sipType_Q_IPV6ADDR,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setAddress(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<Q_IPV6ADDR *>(a0),sipType_Q_IPV6ADDR,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHostAddress, sipName_setAddress, doc_QHostAddress_setAddress);

    return NULL;
}


PyDoc_STRVAR(doc_QHostAddress_protocol, "protocol(self) -> QAbstractSocket.NetworkLayerProtocol");

extern "C" {static PyObject *meth_QHostAddress_protocol(PyObject *, PyObject *);}
static PyObject *meth_QHostAddress_protocol(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QHostAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHostAddress, &sipCpp))
        {
            QAbstractSocket::NetworkLayerProtocol sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->protocol();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QAbstractSocket_NetworkLayerProtocol);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHostAddress, sipName_protocol, doc_QHostAddress_protocol);

    return NULL;
}


PyDoc_STRVAR(doc_QHostAddress_toIPv4Address, "toIPv4Address(self) -> int");

extern "C" {static PyObject *meth_QHostAddress_toIPv4Address(PyObject *, PyObject *);}
static PyObject *meth_QHostAddress_toIPv4Address(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QHostAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHostAddress, &sipCpp))
        {
            quint32 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->toIPv4Address();
            Py_END_ALLOW_THREADS

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHostAddress, sipName_toIPv4Address, doc_QHostAddress_toIPv4Address);

    return NULL;
}


PyDoc_STRVAR(doc_QHostAddress_toIPv6Address, "toIPv6Address(self) -> object");

extern "C" {static PyObject *meth_QHostAddress_toIPv6Address(PyObject *, PyObject *);}
static PyObject *meth_QHostAddress_toIPv6Address(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QHostAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHostAddress, &sipCpp))
        {
            Q_IPV6ADDR*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Q_IPV6ADDR(sipCpp->toIPv6Address());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Q_IPV6ADDR,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHostAddress, sipName_toIPv6Address, doc_QHostAddress_toIPv6Address);

    return NULL;
}


PyDoc_STRVAR(doc_QHostAddress_toString, "toString(self) -> QString");

extern "C" {static PyObject *meth_QHostAddress_toString(PyObject *, PyObject *);}
static PyObject *meth_QHostAddress_toString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QHostAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHostAddress, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->toString());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHostAddress, sipName_toString, doc_QHostAddress_toString);

    return NULL;
}


PyDoc_STRVAR(doc_QHostAddress_scopeId, "scopeId(self) -> QString");

extern "C" {static PyObject *meth_QHostAddress_scopeId(PyObject *, PyObject *);}
static PyObject *meth_QHostAddress_scopeId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QHostAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHostAddress, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->scopeId());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHostAddress, sipName_scopeId, doc_QHostAddress_scopeId);

    return NULL;
}


PyDoc_STRVAR(doc_QHostAddress_setScopeId, "setScopeId(self, QString)");

extern "C" {static PyObject *meth_QHostAddress_setScopeId(PyObject *, PyObject *);}
static PyObject *meth_QHostAddress_setScopeId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QHostAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QHostAddress, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setScopeId(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHostAddress, sipName_setScopeId, doc_QHostAddress_setScopeId);

    return NULL;
}


PyDoc_STRVAR(doc_QHostAddress_isNull, "isNull(self) -> bool");

extern "C" {static PyObject *meth_QHostAddress_isNull(PyObject *, PyObject *);}
static PyObject *meth_QHostAddress_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QHostAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHostAddress, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isNull();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHostAddress, sipName_isNull, doc_QHostAddress_isNull);

    return NULL;
}


PyDoc_STRVAR(doc_QHostAddress_clear, "clear(self)");

extern "C" {static PyObject *meth_QHostAddress_clear(PyObject *, PyObject *);}
static PyObject *meth_QHostAddress_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QHostAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHostAddress, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->clear();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHostAddress, sipName_clear, doc_QHostAddress_clear);

    return NULL;
}


PyDoc_STRVAR(doc_QHostAddress_isInSubnet, "isInSubnet(self, QHostAddress, int) -> bool\n"
    "isInSubnet(self, object) -> bool");

extern "C" {static PyObject *meth_QHostAddress_isInSubnet(PyObject *, PyObject *);}
static PyObject *meth_QHostAddress_isInSubnet(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QHostAddress* a0;
        int a0State = 0;
        int a1;
        const QHostAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1i", &sipSelf, sipType_QHostAddress, &sipCpp, sipType_QHostAddress, &a0, &a0State, &a1))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isInSubnet(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QHostAddress *>(a0),sipType_QHostAddress,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const QPair<QHostAddress,int>* a0;
        int a0State = 0;
        const QHostAddress *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QHostAddress, &sipCpp, sipType_QPair_0100QHostAddress_1800,&a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isInSubnet(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QPair<QHostAddress,int> *>(a0),sipType_QPair_0100QHostAddress_1800,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHostAddress, sipName_isInSubnet, doc_QHostAddress_isInSubnet);

    return NULL;
}


PyDoc_STRVAR(doc_QHostAddress_parseSubnet, "parseSubnet(QString) -> object");

extern "C" {static PyObject *meth_QHostAddress_parseSubnet(PyObject *, PyObject *);}
static PyObject *meth_QHostAddress_parseSubnet(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString,&a0, &a0State))
        {
            QPair<QHostAddress,int>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPair<QHostAddress,int>(QHostAddress::parseSubnet(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QPair_0100QHostAddress_1800,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHostAddress, sipName_parseSubnet, doc_QHostAddress_parseSubnet);

    return NULL;
}


extern "C" {static long slot_QHostAddress___hash__(PyObject *);}
static long slot_QHostAddress___hash__(PyObject *sipSelf)
{
    QHostAddress *sipCpp = reinterpret_cast<QHostAddress *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QHostAddress));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

#line 96 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtNetwork/qhostaddress.sip"
        sipRes = qHash(*sipCpp);
#line 456 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQHostAddress.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QHostAddress___ne__(PyObject *,PyObject *);}
static PyObject *slot_QHostAddress___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QHostAddress *sipCpp = reinterpret_cast<QHostAddress *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QHostAddress));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QHostAddress* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QHostAddress, &a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QHostAddress::operator!=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QHostAddress *>(a0),sipType_QHostAddress,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        QHostAddress::SpecialAddress a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1E", sipType_QHostAddress_SpecialAddress, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QHostAddress::operator!=(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,ne_slot,sipType_QHostAddress,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QHostAddress___eq__(PyObject *,PyObject *);}
static PyObject *slot_QHostAddress___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QHostAddress *sipCpp = reinterpret_cast<QHostAddress *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QHostAddress));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QHostAddress* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QHostAddress, &a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QHostAddress::operator==(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QHostAddress *>(a0),sipType_QHostAddress,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        QHostAddress::SpecialAddress a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1E", sipType_QHostAddress_SpecialAddress, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QHostAddress::operator==(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,eq_slot,sipType_QHostAddress,sipSelf,sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QHostAddress(void *, int);}
static void release_QHostAddress(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QHostAddress *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QHostAddress(void *, SIP_SSIZE_T, const void *);}
static void assign_QHostAddress(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QHostAddress *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QHostAddress *>(sipSrc);
}


extern "C" {static void *array_QHostAddress(SIP_SSIZE_T);}
static void *array_QHostAddress(SIP_SSIZE_T sipNrElem)
{
    return new QHostAddress[sipNrElem];
}


extern "C" {static void *copy_QHostAddress(const void *, SIP_SSIZE_T);}
static void *copy_QHostAddress(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QHostAddress(reinterpret_cast<const QHostAddress *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QHostAddress(sipSimpleWrapper *);}
static void dealloc_QHostAddress(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QHostAddress(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QHostAddress(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QHostAddress(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QHostAddress *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QHostAddress();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        QHostAddress::SpecialAddress a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "XE", sipType_QHostAddress_SpecialAddress, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QHostAddress(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        quint32 a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "u", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QHostAddress(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QString* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QHostAddress(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipCpp;
        }
    }

    {
        const Q_IPV6ADDR* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_Q_IPV6ADDR,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QHostAddress(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<Q_IPV6ADDR *>(a0),sipType_Q_IPV6ADDR,a0State);

            return sipCpp;
        }
    }

    {
        const QHostAddress* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QHostAddress, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QHostAddress(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QHostAddress *>(a0),sipType_QHostAddress,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QHostAddress(PyObject *, void **, int *, PyObject *);}
static int convertTo_QHostAddress(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QHostAddress **sipCppPtr = reinterpret_cast<QHostAddress **>(sipCppPtrV);

#line 34 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtNetwork/qhostaddress.sip"
// SIP doesn't support automatic type convertors so we explicitly allow a
// QHostAddress::SpecialAddress to be used whenever a QHostAddress is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QHostAddress_SpecialAddress)) ||
            sipCanConvertToType(sipPy, sipType_QHostAddress, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QHostAddress_SpecialAddress)))
{
    *sipCppPtr = new QHostAddress((QHostAddress::SpecialAddress)SIPLong_AsLong(sipPy));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QHostAddress *>(sipConvertToType(sipPy, sipType_QHostAddress, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 725 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtNetwork/sipQtNetworkQHostAddress.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QHostAddress[] = {
    {(void *)slot_QHostAddress___hash__, hash_slot},
    {(void *)slot_QHostAddress___ne__, ne_slot},
    {(void *)slot_QHostAddress___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QHostAddress[] = {
    {SIP_MLNAME_CAST(sipName_clear), meth_QHostAddress_clear, METH_VARARGS, SIP_MLDOC_CAST(doc_QHostAddress_clear)},
    {SIP_MLNAME_CAST(sipName_isInSubnet), meth_QHostAddress_isInSubnet, METH_VARARGS, SIP_MLDOC_CAST(doc_QHostAddress_isInSubnet)},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QHostAddress_isNull, METH_VARARGS, SIP_MLDOC_CAST(doc_QHostAddress_isNull)},
    {SIP_MLNAME_CAST(sipName_parseSubnet), meth_QHostAddress_parseSubnet, METH_VARARGS, SIP_MLDOC_CAST(doc_QHostAddress_parseSubnet)},
    {SIP_MLNAME_CAST(sipName_protocol), meth_QHostAddress_protocol, METH_VARARGS, SIP_MLDOC_CAST(doc_QHostAddress_protocol)},
    {SIP_MLNAME_CAST(sipName_scopeId), meth_QHostAddress_scopeId, METH_VARARGS, SIP_MLDOC_CAST(doc_QHostAddress_scopeId)},
    {SIP_MLNAME_CAST(sipName_setAddress), meth_QHostAddress_setAddress, METH_VARARGS, SIP_MLDOC_CAST(doc_QHostAddress_setAddress)},
    {SIP_MLNAME_CAST(sipName_setScopeId), meth_QHostAddress_setScopeId, METH_VARARGS, SIP_MLDOC_CAST(doc_QHostAddress_setScopeId)},
    {SIP_MLNAME_CAST(sipName_toIPv4Address), meth_QHostAddress_toIPv4Address, METH_VARARGS, SIP_MLDOC_CAST(doc_QHostAddress_toIPv4Address)},
    {SIP_MLNAME_CAST(sipName_toIPv6Address), meth_QHostAddress_toIPv6Address, METH_VARARGS, SIP_MLDOC_CAST(doc_QHostAddress_toIPv6Address)},
    {SIP_MLNAME_CAST(sipName_toString), meth_QHostAddress_toString, METH_VARARGS, SIP_MLDOC_CAST(doc_QHostAddress_toString)}
};

static sipEnumMemberDef enummembers_QHostAddress[] = {
    {sipName_Any, static_cast<int>(QHostAddress::Any), 16},
    {sipName_AnyIPv6, static_cast<int>(QHostAddress::AnyIPv6), 16},
    {sipName_Broadcast, static_cast<int>(QHostAddress::Broadcast), 16},
    {sipName_LocalHost, static_cast<int>(QHostAddress::LocalHost), 16},
    {sipName_LocalHostIPv6, static_cast<int>(QHostAddress::LocalHostIPv6), 16},
    {sipName_Null, static_cast<int>(QHostAddress::Null), 16},
};

PyDoc_STRVAR(doc_QHostAddress, "\1QHostAddress()\n"
    "QHostAddress(QHostAddress.SpecialAddress)\n"
    "QHostAddress(int)\n"
    "QHostAddress(QString)\n"
    "QHostAddress(object)\n"
    "QHostAddress(QHostAddress)");


pyqt4ClassTypeDef sipTypeDef_QtNetwork_QHostAddress = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QHostAddress,
        {0}
    },
    {
        sipNameNr_QHostAddress,
        {0, 0, 1},
        11, methods_QHostAddress,
        6, enummembers_QHostAddress,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QHostAddress,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QHostAddress,
    init_type_QHostAddress,
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
    dealloc_QHostAddress,
    assign_QHostAddress,
    array_QHostAddress,
    copy_QHostAddress,
    release_QHostAddress,
    0,
    convertTo_QHostAddress,
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
