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

#line 204 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQMetaProperty.cpp"

#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQMetaProperty.cpp"
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 36 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQMetaProperty.cpp"
#line 269 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 39 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQMetaProperty.cpp"
#line 173 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 42 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQMetaProperty.cpp"


PyDoc_STRVAR(doc_QMetaProperty_name, "name(self) -> str");

extern "C" {static PyObject *meth_QMetaProperty_name(PyObject *, PyObject *);}
static PyObject *meth_QMetaProperty_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMetaProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaProperty, &sipCpp))
        {
            const char*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->name();
            Py_END_ALLOW_THREADS

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return SIPBytes_FromString(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaProperty, sipName_name, doc_QMetaProperty_name);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaProperty_typeName, "typeName(self) -> str");

extern "C" {static PyObject *meth_QMetaProperty_typeName(PyObject *, PyObject *);}
static PyObject *meth_QMetaProperty_typeName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMetaProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaProperty, &sipCpp))
        {
            const char*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->typeName();
            Py_END_ALLOW_THREADS

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return SIPBytes_FromString(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaProperty, sipName_typeName, doc_QMetaProperty_typeName);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaProperty_type, "type(self) -> QVariant.Type");

extern "C" {static PyObject *meth_QMetaProperty_type(PyObject *, PyObject *);}
static PyObject *meth_QMetaProperty_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMetaProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaProperty, &sipCpp))
        {
            QVariant::Type sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->type();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QVariant_Type);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaProperty, sipName_type, doc_QMetaProperty_type);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaProperty_isReadable, "isReadable(self) -> bool");

extern "C" {static PyObject *meth_QMetaProperty_isReadable(PyObject *, PyObject *);}
static PyObject *meth_QMetaProperty_isReadable(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMetaProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaProperty, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isReadable();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaProperty, sipName_isReadable, doc_QMetaProperty_isReadable);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaProperty_isWritable, "isWritable(self) -> bool");

extern "C" {static PyObject *meth_QMetaProperty_isWritable(PyObject *, PyObject *);}
static PyObject *meth_QMetaProperty_isWritable(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMetaProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaProperty, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isWritable();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaProperty, sipName_isWritable, doc_QMetaProperty_isWritable);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaProperty_isDesignable, "isDesignable(self, object: QObject = None) -> bool");

extern "C" {static PyObject *meth_QMetaProperty_isDesignable(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QMetaProperty_isDesignable(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QObject* a0 = 0;
        const QMetaProperty *sipCpp;

        static const char *sipKwdList[] = {
            sipName_object,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|J8", &sipSelf, sipType_QMetaProperty, &sipCpp, sipType_QObject, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isDesignable(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaProperty, sipName_isDesignable, doc_QMetaProperty_isDesignable);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaProperty_isScriptable, "isScriptable(self, object: QObject = None) -> bool");

extern "C" {static PyObject *meth_QMetaProperty_isScriptable(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QMetaProperty_isScriptable(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QObject* a0 = 0;
        const QMetaProperty *sipCpp;

        static const char *sipKwdList[] = {
            sipName_object,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|J8", &sipSelf, sipType_QMetaProperty, &sipCpp, sipType_QObject, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isScriptable(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaProperty, sipName_isScriptable, doc_QMetaProperty_isScriptable);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaProperty_isStored, "isStored(self, object: QObject = None) -> bool");

extern "C" {static PyObject *meth_QMetaProperty_isStored(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QMetaProperty_isStored(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QObject* a0 = 0;
        const QMetaProperty *sipCpp;

        static const char *sipKwdList[] = {
            sipName_object,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|J8", &sipSelf, sipType_QMetaProperty, &sipCpp, sipType_QObject, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isStored(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaProperty, sipName_isStored, doc_QMetaProperty_isStored);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaProperty_isEditable, "isEditable(self, object: QObject = None) -> bool");

extern "C" {static PyObject *meth_QMetaProperty_isEditable(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QMetaProperty_isEditable(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QObject* a0 = 0;
        const QMetaProperty *sipCpp;

        static const char *sipKwdList[] = {
            sipName_object,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|J8", &sipSelf, sipType_QMetaProperty, &sipCpp, sipType_QObject, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isEditable(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaProperty, sipName_isEditable, doc_QMetaProperty_isEditable);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaProperty_isFlagType, "isFlagType(self) -> bool");

extern "C" {static PyObject *meth_QMetaProperty_isFlagType(PyObject *, PyObject *);}
static PyObject *meth_QMetaProperty_isFlagType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMetaProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaProperty, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isFlagType();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaProperty, sipName_isFlagType, doc_QMetaProperty_isFlagType);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaProperty_isEnumType, "isEnumType(self) -> bool");

extern "C" {static PyObject *meth_QMetaProperty_isEnumType(PyObject *, PyObject *);}
static PyObject *meth_QMetaProperty_isEnumType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMetaProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaProperty, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isEnumType();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaProperty, sipName_isEnumType, doc_QMetaProperty_isEnumType);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaProperty_enumerator, "enumerator(self) -> QMetaEnum");

extern "C" {static PyObject *meth_QMetaProperty_enumerator(PyObject *, PyObject *);}
static PyObject *meth_QMetaProperty_enumerator(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMetaProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaProperty, &sipCpp))
        {
            QMetaEnum*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QMetaEnum(sipCpp->enumerator());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QMetaEnum,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaProperty, sipName_enumerator, doc_QMetaProperty_enumerator);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaProperty_read, "read(self, QObject) -> QVariant");

extern "C" {static PyObject *meth_QMetaProperty_read(PyObject *, PyObject *);}
static PyObject *meth_QMetaProperty_read(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QObject* a0;
        const QMetaProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QMetaProperty, &sipCpp, sipType_QObject, &a0))
        {
            QVariant*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVariant(sipCpp->read(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaProperty, sipName_read, doc_QMetaProperty_read);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaProperty_write, "write(self, QObject, QVariant) -> bool");

extern "C" {static PyObject *meth_QMetaProperty_write(PyObject *, PyObject *);}
static PyObject *meth_QMetaProperty_write(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QObject* a0;
        const QVariant* a1;
        int a1State = 0;
        const QMetaProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J1", &sipSelf, sipType_QMetaProperty, &sipCpp, sipType_QObject, &a0, sipType_QVariant,&a1, &a1State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->write(a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QVariant *>(a1),sipType_QVariant,a1State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaProperty, sipName_write, doc_QMetaProperty_write);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaProperty_reset, "reset(self, QObject) -> bool");

extern "C" {static PyObject *meth_QMetaProperty_reset(PyObject *, PyObject *);}
static PyObject *meth_QMetaProperty_reset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QObject* a0;
        const QMetaProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QMetaProperty, &sipCpp, sipType_QObject, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->reset(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaProperty, sipName_reset, doc_QMetaProperty_reset);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaProperty_hasStdCppSet, "hasStdCppSet(self) -> bool");

extern "C" {static PyObject *meth_QMetaProperty_hasStdCppSet(PyObject *, PyObject *);}
static PyObject *meth_QMetaProperty_hasStdCppSet(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMetaProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaProperty, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->hasStdCppSet();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaProperty, sipName_hasStdCppSet, doc_QMetaProperty_hasStdCppSet);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaProperty_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QMetaProperty_isValid(PyObject *, PyObject *);}
static PyObject *meth_QMetaProperty_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMetaProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaProperty, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isValid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaProperty, sipName_isValid, doc_QMetaProperty_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaProperty_isResettable, "isResettable(self) -> bool");

extern "C" {static PyObject *meth_QMetaProperty_isResettable(PyObject *, PyObject *);}
static PyObject *meth_QMetaProperty_isResettable(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMetaProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaProperty, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isResettable();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaProperty, sipName_isResettable, doc_QMetaProperty_isResettable);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaProperty_isUser, "isUser(self, object: QObject = None) -> bool");

extern "C" {static PyObject *meth_QMetaProperty_isUser(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QMetaProperty_isUser(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QObject* a0 = 0;
        const QMetaProperty *sipCpp;

        static const char *sipKwdList[] = {
            sipName_object,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|J8", &sipSelf, sipType_QMetaProperty, &sipCpp, sipType_QObject, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isUser(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaProperty, sipName_isUser, doc_QMetaProperty_isUser);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaProperty_userType, "userType(self) -> int");

extern "C" {static PyObject *meth_QMetaProperty_userType(PyObject *, PyObject *);}
static PyObject *meth_QMetaProperty_userType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMetaProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaProperty, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->userType();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaProperty, sipName_userType, doc_QMetaProperty_userType);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaProperty_hasNotifySignal, "hasNotifySignal(self) -> bool");

extern "C" {static PyObject *meth_QMetaProperty_hasNotifySignal(PyObject *, PyObject *);}
static PyObject *meth_QMetaProperty_hasNotifySignal(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMetaProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaProperty, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->hasNotifySignal();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaProperty, sipName_hasNotifySignal, doc_QMetaProperty_hasNotifySignal);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaProperty_notifySignal, "notifySignal(self) -> QMetaMethod");

extern "C" {static PyObject *meth_QMetaProperty_notifySignal(PyObject *, PyObject *);}
static PyObject *meth_QMetaProperty_notifySignal(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMetaProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaProperty, &sipCpp))
        {
            QMetaMethod*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QMetaMethod(sipCpp->notifySignal());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QMetaMethod,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaProperty, sipName_notifySignal, doc_QMetaProperty_notifySignal);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaProperty_notifySignalIndex, "notifySignalIndex(self) -> int");

extern "C" {static PyObject *meth_QMetaProperty_notifySignalIndex(PyObject *, PyObject *);}
static PyObject *meth_QMetaProperty_notifySignalIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMetaProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaProperty, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->notifySignalIndex();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaProperty, sipName_notifySignalIndex, doc_QMetaProperty_notifySignalIndex);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaProperty_propertyIndex, "propertyIndex(self) -> int");

extern "C" {static PyObject *meth_QMetaProperty_propertyIndex(PyObject *, PyObject *);}
static PyObject *meth_QMetaProperty_propertyIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMetaProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaProperty, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->propertyIndex();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaProperty, sipName_propertyIndex, doc_QMetaProperty_propertyIndex);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaProperty_isConstant, "isConstant(self) -> bool");

extern "C" {static PyObject *meth_QMetaProperty_isConstant(PyObject *, PyObject *);}
static PyObject *meth_QMetaProperty_isConstant(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMetaProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaProperty, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isConstant();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaProperty, sipName_isConstant, doc_QMetaProperty_isConstant);

    return NULL;
}


PyDoc_STRVAR(doc_QMetaProperty_isFinal, "isFinal(self) -> bool");

extern "C" {static PyObject *meth_QMetaProperty_isFinal(PyObject *, PyObject *);}
static PyObject *meth_QMetaProperty_isFinal(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMetaProperty *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMetaProperty, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isFinal();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMetaProperty, sipName_isFinal, doc_QMetaProperty_isFinal);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QMetaProperty(void *, int);}
static void release_QMetaProperty(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QMetaProperty *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QMetaProperty(void *, SIP_SSIZE_T, const void *);}
static void assign_QMetaProperty(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QMetaProperty *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QMetaProperty *>(sipSrc);
}


extern "C" {static void *array_QMetaProperty(SIP_SSIZE_T);}
static void *array_QMetaProperty(SIP_SSIZE_T sipNrElem)
{
    return new QMetaProperty[sipNrElem];
}


extern "C" {static void *copy_QMetaProperty(const void *, SIP_SSIZE_T);}
static void *copy_QMetaProperty(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QMetaProperty(reinterpret_cast<const QMetaProperty *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QMetaProperty(sipSimpleWrapper *);}
static void dealloc_QMetaProperty(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QMetaProperty(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QMetaProperty(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QMetaProperty(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QMetaProperty *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QMetaProperty();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QMetaProperty* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QMetaProperty, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QMetaProperty(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QMetaProperty[] = {
    {SIP_MLNAME_CAST(sipName_enumerator), meth_QMetaProperty_enumerator, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaProperty_enumerator)},
    {SIP_MLNAME_CAST(sipName_hasNotifySignal), meth_QMetaProperty_hasNotifySignal, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaProperty_hasNotifySignal)},
    {SIP_MLNAME_CAST(sipName_hasStdCppSet), meth_QMetaProperty_hasStdCppSet, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaProperty_hasStdCppSet)},
    {SIP_MLNAME_CAST(sipName_isConstant), meth_QMetaProperty_isConstant, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaProperty_isConstant)},
    {SIP_MLNAME_CAST(sipName_isDesignable), (PyCFunction)meth_QMetaProperty_isDesignable, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QMetaProperty_isDesignable)},
    {SIP_MLNAME_CAST(sipName_isEditable), (PyCFunction)meth_QMetaProperty_isEditable, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QMetaProperty_isEditable)},
    {SIP_MLNAME_CAST(sipName_isEnumType), meth_QMetaProperty_isEnumType, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaProperty_isEnumType)},
    {SIP_MLNAME_CAST(sipName_isFinal), meth_QMetaProperty_isFinal, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaProperty_isFinal)},
    {SIP_MLNAME_CAST(sipName_isFlagType), meth_QMetaProperty_isFlagType, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaProperty_isFlagType)},
    {SIP_MLNAME_CAST(sipName_isReadable), meth_QMetaProperty_isReadable, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaProperty_isReadable)},
    {SIP_MLNAME_CAST(sipName_isResettable), meth_QMetaProperty_isResettable, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaProperty_isResettable)},
    {SIP_MLNAME_CAST(sipName_isScriptable), (PyCFunction)meth_QMetaProperty_isScriptable, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QMetaProperty_isScriptable)},
    {SIP_MLNAME_CAST(sipName_isStored), (PyCFunction)meth_QMetaProperty_isStored, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QMetaProperty_isStored)},
    {SIP_MLNAME_CAST(sipName_isUser), (PyCFunction)meth_QMetaProperty_isUser, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QMetaProperty_isUser)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QMetaProperty_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaProperty_isValid)},
    {SIP_MLNAME_CAST(sipName_isWritable), meth_QMetaProperty_isWritable, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaProperty_isWritable)},
    {SIP_MLNAME_CAST(sipName_name), meth_QMetaProperty_name, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaProperty_name)},
    {SIP_MLNAME_CAST(sipName_notifySignal), meth_QMetaProperty_notifySignal, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaProperty_notifySignal)},
    {SIP_MLNAME_CAST(sipName_notifySignalIndex), meth_QMetaProperty_notifySignalIndex, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaProperty_notifySignalIndex)},
    {SIP_MLNAME_CAST(sipName_propertyIndex), meth_QMetaProperty_propertyIndex, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaProperty_propertyIndex)},
    {SIP_MLNAME_CAST(sipName_read), meth_QMetaProperty_read, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaProperty_read)},
    {SIP_MLNAME_CAST(sipName_reset), meth_QMetaProperty_reset, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaProperty_reset)},
    {SIP_MLNAME_CAST(sipName_type), meth_QMetaProperty_type, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaProperty_type)},
    {SIP_MLNAME_CAST(sipName_typeName), meth_QMetaProperty_typeName, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaProperty_typeName)},
    {SIP_MLNAME_CAST(sipName_userType), meth_QMetaProperty_userType, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaProperty_userType)},
    {SIP_MLNAME_CAST(sipName_write), meth_QMetaProperty_write, METH_VARARGS, SIP_MLDOC_CAST(doc_QMetaProperty_write)}
};

PyDoc_STRVAR(doc_QMetaProperty, "\1QMetaProperty()\n"
    "QMetaProperty(QMetaProperty)");


pyqt4ClassTypeDef sipTypeDef_QtCore_QMetaProperty = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QMetaProperty,
        {0}
    },
    {
        sipNameNr_QMetaProperty,
        {0, 0, 1},
        26, methods_QMetaProperty,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QMetaProperty,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QMetaProperty,
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
    dealloc_QMetaProperty,
    assign_QMetaProperty,
    array_QMetaProperty,
    copy_QMetaProperty,
    release_QMetaProperty,
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
