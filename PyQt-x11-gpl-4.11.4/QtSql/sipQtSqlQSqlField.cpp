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

#include "sipAPIQtSql.h"

#line 26 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtSql/qsqlfield.sip"
#include <qsqlfield.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtSql/sipQtSqlQSqlField.cpp"

#line 31 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtSql/sipQtSqlQSqlField.cpp"
#line 269 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 36 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtSql/sipQtSqlQSqlField.cpp"


PyDoc_STRVAR(doc_QSqlField_setValue, "setValue(self, QVariant)");

extern "C" {static PyObject *meth_QSqlField_setValue(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_setValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVariant* a0;
        int a0State = 0;
        QSqlField *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSqlField, &sipCpp, sipType_QVariant,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setValue(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QVariant *>(a0),sipType_QVariant,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlField, sipName_setValue, doc_QSqlField_setValue);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlField_value, "value(self) -> QVariant");

extern "C" {static PyObject *meth_QSqlField_value(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_value(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSqlField *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSqlField, &sipCpp))
        {
            QVariant*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVariant(sipCpp->value());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlField, sipName_value, doc_QSqlField_value);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlField_setName, "setName(self, QString)");

extern "C" {static PyObject *meth_QSqlField_setName(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_setName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QSqlField *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSqlField, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setName(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlField, sipName_setName, doc_QSqlField_setName);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlField_name, "name(self) -> QString");

extern "C" {static PyObject *meth_QSqlField_name(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSqlField *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSqlField, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->name());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlField, sipName_name, doc_QSqlField_name);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlField_isNull, "isNull(self) -> bool");

extern "C" {static PyObject *meth_QSqlField_isNull(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSqlField *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSqlField, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isNull();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlField, sipName_isNull, doc_QSqlField_isNull);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlField_setReadOnly, "setReadOnly(self, bool)");

extern "C" {static PyObject *meth_QSqlField_setReadOnly(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_setReadOnly(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QSqlField *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QSqlField, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setReadOnly(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlField, sipName_setReadOnly, doc_QSqlField_setReadOnly);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlField_isReadOnly, "isReadOnly(self) -> bool");

extern "C" {static PyObject *meth_QSqlField_isReadOnly(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_isReadOnly(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSqlField *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSqlField, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isReadOnly();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlField, sipName_isReadOnly, doc_QSqlField_isReadOnly);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlField_clear, "clear(self)");

extern "C" {static PyObject *meth_QSqlField_clear(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSqlField *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSqlField, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->clear();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlField, sipName_clear, doc_QSqlField_clear);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlField_type, "type(self) -> QVariant.Type");

extern "C" {static PyObject *meth_QSqlField_type(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSqlField *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSqlField, &sipCpp))
        {
            QVariant::Type sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->type();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QVariant_Type);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlField, sipName_type, doc_QSqlField_type);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlField_isAutoValue, "isAutoValue(self) -> bool");

extern "C" {static PyObject *meth_QSqlField_isAutoValue(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_isAutoValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSqlField *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSqlField, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isAutoValue();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlField, sipName_isAutoValue, doc_QSqlField_isAutoValue);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlField_setType, "setType(self, QVariant.Type)");

extern "C" {static PyObject *meth_QSqlField_setType(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_setType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QVariant::Type a0;
        QSqlField *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QSqlField, &sipCpp, sipType_QVariant_Type, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setType(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlField, sipName_setType, doc_QSqlField_setType);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlField_setRequiredStatus, "setRequiredStatus(self, QSqlField.RequiredStatus)");

extern "C" {static PyObject *meth_QSqlField_setRequiredStatus(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_setRequiredStatus(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSqlField::RequiredStatus a0;
        QSqlField *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QSqlField, &sipCpp, sipType_QSqlField_RequiredStatus, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setRequiredStatus(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlField, sipName_setRequiredStatus, doc_QSqlField_setRequiredStatus);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlField_setRequired, "setRequired(self, bool)");

extern "C" {static PyObject *meth_QSqlField_setRequired(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_setRequired(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QSqlField *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QSqlField, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setRequired(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlField, sipName_setRequired, doc_QSqlField_setRequired);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlField_setLength, "setLength(self, int)");

extern "C" {static PyObject *meth_QSqlField_setLength(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_setLength(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QSqlField *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QSqlField, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setLength(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlField, sipName_setLength, doc_QSqlField_setLength);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlField_setPrecision, "setPrecision(self, int)");

extern "C" {static PyObject *meth_QSqlField_setPrecision(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_setPrecision(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QSqlField *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QSqlField, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setPrecision(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlField, sipName_setPrecision, doc_QSqlField_setPrecision);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlField_setDefaultValue, "setDefaultValue(self, QVariant)");

extern "C" {static PyObject *meth_QSqlField_setDefaultValue(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_setDefaultValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVariant* a0;
        int a0State = 0;
        QSqlField *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSqlField, &sipCpp, sipType_QVariant,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setDefaultValue(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QVariant *>(a0),sipType_QVariant,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlField, sipName_setDefaultValue, doc_QSqlField_setDefaultValue);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlField_setSqlType, "setSqlType(self, int)");

extern "C" {static PyObject *meth_QSqlField_setSqlType(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_setSqlType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QSqlField *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QSqlField, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setSqlType(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlField, sipName_setSqlType, doc_QSqlField_setSqlType);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlField_setGenerated, "setGenerated(self, bool)");

extern "C" {static PyObject *meth_QSqlField_setGenerated(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_setGenerated(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QSqlField *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QSqlField, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setGenerated(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlField, sipName_setGenerated, doc_QSqlField_setGenerated);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlField_setAutoValue, "setAutoValue(self, bool)");

extern "C" {static PyObject *meth_QSqlField_setAutoValue(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_setAutoValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QSqlField *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QSqlField, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setAutoValue(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlField, sipName_setAutoValue, doc_QSqlField_setAutoValue);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlField_requiredStatus, "requiredStatus(self) -> QSqlField.RequiredStatus");

extern "C" {static PyObject *meth_QSqlField_requiredStatus(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_requiredStatus(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSqlField *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSqlField, &sipCpp))
        {
            QSqlField::RequiredStatus sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->requiredStatus();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QSqlField_RequiredStatus);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlField, sipName_requiredStatus, doc_QSqlField_requiredStatus);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlField_length, "length(self) -> int");

extern "C" {static PyObject *meth_QSqlField_length(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_length(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSqlField *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSqlField, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->length();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlField, sipName_length, doc_QSqlField_length);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlField_precision, "precision(self) -> int");

extern "C" {static PyObject *meth_QSqlField_precision(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_precision(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSqlField *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSqlField, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->precision();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlField, sipName_precision, doc_QSqlField_precision);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlField_defaultValue, "defaultValue(self) -> QVariant");

extern "C" {static PyObject *meth_QSqlField_defaultValue(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_defaultValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSqlField *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSqlField, &sipCpp))
        {
            QVariant*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVariant(sipCpp->defaultValue());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlField, sipName_defaultValue, doc_QSqlField_defaultValue);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlField_typeID, "typeID(self) -> int");

extern "C" {static PyObject *meth_QSqlField_typeID(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_typeID(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSqlField *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSqlField, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->typeID();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlField, sipName_typeID, doc_QSqlField_typeID);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlField_isGenerated, "isGenerated(self) -> bool");

extern "C" {static PyObject *meth_QSqlField_isGenerated(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_isGenerated(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSqlField *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSqlField, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isGenerated();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlField, sipName_isGenerated, doc_QSqlField_isGenerated);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlField_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QSqlField_isValid(PyObject *, PyObject *);}
static PyObject *meth_QSqlField_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSqlField *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSqlField, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isValid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlField, sipName_isValid, doc_QSqlField_isValid);

    return NULL;
}


extern "C" {static PyObject *slot_QSqlField___ne__(PyObject *,PyObject *);}
static PyObject *slot_QSqlField___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QSqlField *sipCpp = reinterpret_cast<QSqlField *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSqlField));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSqlField* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QSqlField, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QSqlField::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtSql,ne_slot,sipType_QSqlField,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QSqlField___eq__(PyObject *,PyObject *);}
static PyObject *slot_QSqlField___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QSqlField *sipCpp = reinterpret_cast<QSqlField *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSqlField));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSqlField* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QSqlField, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QSqlField::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtSql,eq_slot,sipType_QSqlField,sipSelf,sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QSqlField(void *, int);}
static void release_QSqlField(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QSqlField *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QSqlField(void *, SIP_SSIZE_T, const void *);}
static void assign_QSqlField(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QSqlField *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QSqlField *>(sipSrc);
}


extern "C" {static void *array_QSqlField(SIP_SSIZE_T);}
static void *array_QSqlField(SIP_SSIZE_T sipNrElem)
{
    return new QSqlField[sipNrElem];
}


extern "C" {static void *copy_QSqlField(const void *, SIP_SSIZE_T);}
static void *copy_QSqlField(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QSqlField(reinterpret_cast<const QSqlField *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSqlField(sipSimpleWrapper *);}
static void dealloc_QSqlField(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QSqlField(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QSqlField(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSqlField(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QSqlField *sipCpp = 0;

    {
        const QString& a0def = QString();
        const QString* a0 = &a0def;
        int a0State = 0;
        QVariant::Type a1 = QVariant::Invalid;

        static const char *sipKwdList[] = {
            sipName_fieldName,
            sipName_type,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|J1E", sipType_QString,&a0, &a0State, sipType_QVariant_Type, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QSqlField(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipCpp;
        }
    }

    {
        const QSqlField* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QSqlField, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QSqlField(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QSqlField[] = {
    {(void *)slot_QSqlField___ne__, ne_slot},
    {(void *)slot_QSqlField___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QSqlField[] = {
    {SIP_MLNAME_CAST(sipName_clear), meth_QSqlField_clear, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlField_clear)},
    {SIP_MLNAME_CAST(sipName_defaultValue), meth_QSqlField_defaultValue, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlField_defaultValue)},
    {SIP_MLNAME_CAST(sipName_isAutoValue), meth_QSqlField_isAutoValue, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlField_isAutoValue)},
    {SIP_MLNAME_CAST(sipName_isGenerated), meth_QSqlField_isGenerated, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlField_isGenerated)},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QSqlField_isNull, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlField_isNull)},
    {SIP_MLNAME_CAST(sipName_isReadOnly), meth_QSqlField_isReadOnly, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlField_isReadOnly)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QSqlField_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlField_isValid)},
    {SIP_MLNAME_CAST(sipName_length), meth_QSqlField_length, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlField_length)},
    {SIP_MLNAME_CAST(sipName_name), meth_QSqlField_name, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlField_name)},
    {SIP_MLNAME_CAST(sipName_precision), meth_QSqlField_precision, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlField_precision)},
    {SIP_MLNAME_CAST(sipName_requiredStatus), meth_QSqlField_requiredStatus, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlField_requiredStatus)},
    {SIP_MLNAME_CAST(sipName_setAutoValue), meth_QSqlField_setAutoValue, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlField_setAutoValue)},
    {SIP_MLNAME_CAST(sipName_setDefaultValue), meth_QSqlField_setDefaultValue, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlField_setDefaultValue)},
    {SIP_MLNAME_CAST(sipName_setGenerated), meth_QSqlField_setGenerated, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlField_setGenerated)},
    {SIP_MLNAME_CAST(sipName_setLength), meth_QSqlField_setLength, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlField_setLength)},
    {SIP_MLNAME_CAST(sipName_setName), meth_QSqlField_setName, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlField_setName)},
    {SIP_MLNAME_CAST(sipName_setPrecision), meth_QSqlField_setPrecision, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlField_setPrecision)},
    {SIP_MLNAME_CAST(sipName_setReadOnly), meth_QSqlField_setReadOnly, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlField_setReadOnly)},
    {SIP_MLNAME_CAST(sipName_setRequired), meth_QSqlField_setRequired, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlField_setRequired)},
    {SIP_MLNAME_CAST(sipName_setRequiredStatus), meth_QSqlField_setRequiredStatus, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlField_setRequiredStatus)},
    {SIP_MLNAME_CAST(sipName_setSqlType), meth_QSqlField_setSqlType, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlField_setSqlType)},
    {SIP_MLNAME_CAST(sipName_setType), meth_QSqlField_setType, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlField_setType)},
    {SIP_MLNAME_CAST(sipName_setValue), meth_QSqlField_setValue, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlField_setValue)},
    {SIP_MLNAME_CAST(sipName_type), meth_QSqlField_type, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlField_type)},
    {SIP_MLNAME_CAST(sipName_typeID), meth_QSqlField_typeID, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlField_typeID)},
    {SIP_MLNAME_CAST(sipName_value), meth_QSqlField_value, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlField_value)}
};

static sipEnumMemberDef enummembers_QSqlField[] = {
    {sipName_Optional, static_cast<int>(QSqlField::Optional), 15},
    {sipName_Required, static_cast<int>(QSqlField::Required), 15},
    {sipName_Unknown, static_cast<int>(QSqlField::Unknown), 15},
};

PyDoc_STRVAR(doc_QSqlField, "\1QSqlField(fieldName: QString = QString(), type: QVariant.Type = QVariant.Invalid)\n"
    "QSqlField(QSqlField)");


pyqt4ClassTypeDef sipTypeDef_QtSql_QSqlField = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QSqlField,
        {0}
    },
    {
        sipNameNr_QSqlField,
        {0, 0, 1},
        26, methods_QSqlField,
        3, enummembers_QSqlField,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSqlField,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QSqlField,
    init_type_QSqlField,
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
    dealloc_QSqlField,
    assign_QSqlField,
    array_QSqlField,
    copy_QSqlField,
    release_QSqlField,
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
