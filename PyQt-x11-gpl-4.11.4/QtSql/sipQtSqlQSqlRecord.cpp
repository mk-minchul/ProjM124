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

#line 26 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtSql/qsqlrecord.sip"
#include <qsqlrecord.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtSql/sipQtSqlQSqlRecord.cpp"

#line 31 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtSql/sipQtSqlQSqlRecord.cpp"
#line 26 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtSql/qsqlfield.sip"
#include <qsqlfield.h>
#line 36 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtSql/sipQtSqlQSqlRecord.cpp"
#line 269 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 39 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtSql/sipQtSqlQSqlRecord.cpp"


PyDoc_STRVAR(doc_QSqlRecord_value, "value(self, int) -> QVariant\n"
    "value(self, QString) -> QVariant");

extern "C" {static PyObject *meth_QSqlRecord_value(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_value(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QSqlRecord, &sipCpp, &a0))
        {
            QVariant*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVariant(sipCpp->value(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        const QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSqlRecord, &sipCpp, sipType_QString,&a0, &a0State))
        {
            QVariant*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVariant(sipCpp->value(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlRecord, sipName_value, doc_QSqlRecord_value);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlRecord_setValue, "setValue(self, int, QVariant)\n"
    "setValue(self, QString, QVariant)");

extern "C" {static PyObject *meth_QSqlRecord_setValue(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_setValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QVariant* a1;
        int a1State = 0;
        QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiJ1", &sipSelf, sipType_QSqlRecord, &sipCpp, &a0, sipType_QVariant,&a1, &a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setValue(a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QVariant *>(a1),sipType_QVariant,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        const QVariant* a1;
        int a1State = 0;
        QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QSqlRecord, &sipCpp, sipType_QString,&a0, &a0State, sipType_QVariant,&a1, &a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setValue(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QVariant *>(a1),sipType_QVariant,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlRecord, sipName_setValue, doc_QSqlRecord_setValue);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlRecord_setNull, "setNull(self, int)\n"
    "setNull(self, QString)");

extern "C" {static PyObject *meth_QSqlRecord_setNull(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_setNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QSqlRecord, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setNull(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSqlRecord, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setNull(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlRecord, sipName_setNull, doc_QSqlRecord_setNull);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlRecord_isNull, "isNull(self, int) -> bool\n"
    "isNull(self, QString) -> bool");

extern "C" {static PyObject *meth_QSqlRecord_isNull(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QSqlRecord, &sipCpp, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isNull(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        const QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSqlRecord, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isNull(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlRecord, sipName_isNull, doc_QSqlRecord_isNull);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlRecord_indexOf, "indexOf(self, QString) -> int");

extern "C" {static PyObject *meth_QSqlRecord_indexOf(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_indexOf(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSqlRecord, &sipCpp, sipType_QString,&a0, &a0State))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->indexOf(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlRecord, sipName_indexOf, doc_QSqlRecord_indexOf);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlRecord_fieldName, "fieldName(self, int) -> QString");

extern "C" {static PyObject *meth_QSqlRecord_fieldName(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_fieldName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QSqlRecord, &sipCpp, &a0))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->fieldName(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlRecord, sipName_fieldName, doc_QSqlRecord_fieldName);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlRecord_field, "field(self, int) -> QSqlField\n"
    "field(self, QString) -> QSqlField");

extern "C" {static PyObject *meth_QSqlRecord_field(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_field(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QSqlRecord, &sipCpp, &a0))
        {
            QSqlField*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSqlField(sipCpp->field(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QSqlField,NULL);
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        const QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSqlRecord, &sipCpp, sipType_QString,&a0, &a0State))
        {
            QSqlField*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSqlField(sipCpp->field(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSqlField,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlRecord, sipName_field, doc_QSqlRecord_field);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlRecord_isGenerated, "isGenerated(self, int) -> bool\n"
    "isGenerated(self, QString) -> bool");

extern "C" {static PyObject *meth_QSqlRecord_isGenerated(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_isGenerated(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QSqlRecord, &sipCpp, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isGenerated(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        const QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSqlRecord, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isGenerated(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlRecord, sipName_isGenerated, doc_QSqlRecord_isGenerated);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlRecord_setGenerated, "setGenerated(self, QString, bool)\n"
    "setGenerated(self, int, bool)");

extern "C" {static PyObject *meth_QSqlRecord_setGenerated(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_setGenerated(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        bool a1;
        QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1b", &sipSelf, sipType_QSqlRecord, &sipCpp, sipType_QString,&a0, &a0State, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setGenerated(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        int a0;
        bool a1;
        QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bib", &sipSelf, sipType_QSqlRecord, &sipCpp, &a0, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setGenerated(a0,a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlRecord, sipName_setGenerated, doc_QSqlRecord_setGenerated);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlRecord_append, "append(self, QSqlField)");

extern "C" {static PyObject *meth_QSqlRecord_append(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_append(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSqlField* a0;
        QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QSqlRecord, &sipCpp, sipType_QSqlField, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->append(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlRecord, sipName_append, doc_QSqlRecord_append);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlRecord_replace, "replace(self, int, QSqlField)");

extern "C" {static PyObject *meth_QSqlRecord_replace(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_replace(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QSqlField* a1;
        QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiJ9", &sipSelf, sipType_QSqlRecord, &sipCpp, &a0, sipType_QSqlField, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->replace(a0,*a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlRecord, sipName_replace, doc_QSqlRecord_replace);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlRecord_insert, "insert(self, int, QSqlField)");

extern "C" {static PyObject *meth_QSqlRecord_insert(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_insert(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QSqlField* a1;
        QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiJ9", &sipSelf, sipType_QSqlRecord, &sipCpp, &a0, sipType_QSqlField, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->insert(a0,*a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlRecord, sipName_insert, doc_QSqlRecord_insert);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlRecord_remove, "remove(self, int)");

extern "C" {static PyObject *meth_QSqlRecord_remove(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_remove(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QSqlRecord, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->remove(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlRecord, sipName_remove, doc_QSqlRecord_remove);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlRecord_isEmpty, "isEmpty(self) -> bool");

extern "C" {static PyObject *meth_QSqlRecord_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_isEmpty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSqlRecord, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isEmpty();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlRecord, sipName_isEmpty, doc_QSqlRecord_isEmpty);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlRecord_contains, "contains(self, QString) -> bool");

extern "C" {static PyObject *meth_QSqlRecord_contains(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_contains(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSqlRecord, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->contains(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlRecord, sipName_contains, doc_QSqlRecord_contains);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlRecord_clear, "clear(self)");

extern "C" {static PyObject *meth_QSqlRecord_clear(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSqlRecord, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->clear();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlRecord, sipName_clear, doc_QSqlRecord_clear);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlRecord_clearValues, "clearValues(self)");

extern "C" {static PyObject *meth_QSqlRecord_clearValues(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_clearValues(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSqlRecord, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->clearValues();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlRecord, sipName_clearValues, doc_QSqlRecord_clearValues);

    return NULL;
}


PyDoc_STRVAR(doc_QSqlRecord_count, "count(self) -> int");

extern "C" {static PyObject *meth_QSqlRecord_count(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_count(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSqlRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSqlRecord, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->count();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSqlRecord, sipName_count, doc_QSqlRecord_count);

    return NULL;
}


extern "C" {static SIP_SSIZE_T slot_QSqlRecord___len__(PyObject *);}
static SIP_SSIZE_T slot_QSqlRecord___len__(PyObject *sipSelf)
{
    QSqlRecord *sipCpp = reinterpret_cast<QSqlRecord *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSqlRecord));

    if (!sipCpp)
        return 0;


    {
        {
            SIP_SSIZE_T sipRes = 0;

#line 1 "Auto-generated"
            sipRes = (SIP_SSIZE_T)sipCpp->count();
#line 753 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtSql/sipQtSqlQSqlRecord.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QSqlRecord___ne__(PyObject *,PyObject *);}
static PyObject *slot_QSqlRecord___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QSqlRecord *sipCpp = reinterpret_cast<QSqlRecord *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSqlRecord));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSqlRecord* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QSqlRecord, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QSqlRecord::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtSql,ne_slot,sipType_QSqlRecord,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QSqlRecord___eq__(PyObject *,PyObject *);}
static PyObject *slot_QSqlRecord___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QSqlRecord *sipCpp = reinterpret_cast<QSqlRecord *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSqlRecord));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSqlRecord* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QSqlRecord, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QSqlRecord::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtSql,eq_slot,sipType_QSqlRecord,sipSelf,sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QSqlRecord(void *, int);}
static void release_QSqlRecord(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QSqlRecord *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QSqlRecord(void *, SIP_SSIZE_T, const void *);}
static void assign_QSqlRecord(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QSqlRecord *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QSqlRecord *>(sipSrc);
}


extern "C" {static void *array_QSqlRecord(SIP_SSIZE_T);}
static void *array_QSqlRecord(SIP_SSIZE_T sipNrElem)
{
    return new QSqlRecord[sipNrElem];
}


extern "C" {static void *copy_QSqlRecord(const void *, SIP_SSIZE_T);}
static void *copy_QSqlRecord(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QSqlRecord(reinterpret_cast<const QSqlRecord *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSqlRecord(sipSimpleWrapper *);}
static void dealloc_QSqlRecord(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QSqlRecord(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QSqlRecord(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSqlRecord(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QSqlRecord *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QSqlRecord();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QSqlRecord* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QSqlRecord, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QSqlRecord(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QSqlRecord[] = {
    {(void *)slot_QSqlRecord___len__, len_slot},
    {(void *)slot_QSqlRecord___ne__, ne_slot},
    {(void *)slot_QSqlRecord___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QSqlRecord[] = {
    {SIP_MLNAME_CAST(sipName_append), meth_QSqlRecord_append, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlRecord_append)},
    {SIP_MLNAME_CAST(sipName_clear), meth_QSqlRecord_clear, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlRecord_clear)},
    {SIP_MLNAME_CAST(sipName_clearValues), meth_QSqlRecord_clearValues, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlRecord_clearValues)},
    {SIP_MLNAME_CAST(sipName_contains), meth_QSqlRecord_contains, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlRecord_contains)},
    {SIP_MLNAME_CAST(sipName_count), meth_QSqlRecord_count, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlRecord_count)},
    {SIP_MLNAME_CAST(sipName_field), meth_QSqlRecord_field, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlRecord_field)},
    {SIP_MLNAME_CAST(sipName_fieldName), meth_QSqlRecord_fieldName, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlRecord_fieldName)},
    {SIP_MLNAME_CAST(sipName_indexOf), meth_QSqlRecord_indexOf, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlRecord_indexOf)},
    {SIP_MLNAME_CAST(sipName_insert), meth_QSqlRecord_insert, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlRecord_insert)},
    {SIP_MLNAME_CAST(sipName_isEmpty), meth_QSqlRecord_isEmpty, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlRecord_isEmpty)},
    {SIP_MLNAME_CAST(sipName_isGenerated), meth_QSqlRecord_isGenerated, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlRecord_isGenerated)},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QSqlRecord_isNull, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlRecord_isNull)},
    {SIP_MLNAME_CAST(sipName_remove), meth_QSqlRecord_remove, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlRecord_remove)},
    {SIP_MLNAME_CAST(sipName_replace), meth_QSqlRecord_replace, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlRecord_replace)},
    {SIP_MLNAME_CAST(sipName_setGenerated), meth_QSqlRecord_setGenerated, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlRecord_setGenerated)},
    {SIP_MLNAME_CAST(sipName_setNull), meth_QSqlRecord_setNull, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlRecord_setNull)},
    {SIP_MLNAME_CAST(sipName_setValue), meth_QSqlRecord_setValue, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlRecord_setValue)},
    {SIP_MLNAME_CAST(sipName_value), meth_QSqlRecord_value, METH_VARARGS, SIP_MLDOC_CAST(doc_QSqlRecord_value)}
};

PyDoc_STRVAR(doc_QSqlRecord, "\1QSqlRecord()\n"
    "QSqlRecord(QSqlRecord)");


pyqt4ClassTypeDef sipTypeDef_QtSql_QSqlRecord = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QSqlRecord,
        {0}
    },
    {
        sipNameNr_QSqlRecord,
        {0, 0, 1},
        18, methods_QSqlRecord,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSqlRecord,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QSqlRecord,
    init_type_QSqlRecord,
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
    dealloc_QSqlRecord,
    assign_QSqlRecord,
    array_QSqlRecord,
    copy_QSqlRecord,
    release_QSqlRecord,
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
