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

#include "sipAPIQtXmlPatterns.h"

#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtXmlPatterns/qxmlresultitems.sip"
#include <qxmlresultitems.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtXmlPatterns/sipQtXmlPatternsQXmlResultItems.cpp"

#line 127 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtXmlPatterns/qabstractxmlnodemodel.sip"
#include <qabstractxmlnodemodel.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtXmlPatterns/sipQtXmlPatternsQXmlResultItems.cpp"


class sipQXmlResultItems : public QXmlResultItems
{
public:
    sipQXmlResultItems();
    ~sipQXmlResultItems();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQXmlResultItems(const sipQXmlResultItems &);
    sipQXmlResultItems &operator = (const sipQXmlResultItems &);
};

sipQXmlResultItems::sipQXmlResultItems(): QXmlResultItems(), sipPySelf(0)
{
}

sipQXmlResultItems::~sipQXmlResultItems()
{
    sipCommonDtor(sipPySelf);
}


PyDoc_STRVAR(doc_QXmlResultItems_hasError, "hasError(self) -> bool");

extern "C" {static PyObject *meth_QXmlResultItems_hasError(PyObject *, PyObject *);}
static PyObject *meth_QXmlResultItems_hasError(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlResultItems *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlResultItems, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->hasError();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlResultItems, sipName_hasError, doc_QXmlResultItems_hasError);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlResultItems_next, "next(self) -> QXmlItem");

extern "C" {static PyObject *meth_QXmlResultItems_next(PyObject *, PyObject *);}
static PyObject *meth_QXmlResultItems_next(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QXmlResultItems *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlResultItems, &sipCpp))
        {
            QXmlItem*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QXmlItem(sipCpp->next());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QXmlItem,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlResultItems, sipName_next, doc_QXmlResultItems_next);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlResultItems_current, "current(self) -> QXmlItem");

extern "C" {static PyObject *meth_QXmlResultItems_current(PyObject *, PyObject *);}
static PyObject *meth_QXmlResultItems_current(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlResultItems *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlResultItems, &sipCpp))
        {
            QXmlItem*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QXmlItem(sipCpp->current());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QXmlItem,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlResultItems, sipName_current, doc_QXmlResultItems_current);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QXmlResultItems(void *, int);}
static void release_QXmlResultItems(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQXmlResultItems *>(sipCppV);
    else
        delete reinterpret_cast<QXmlResultItems *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QXmlResultItems(sipSimpleWrapper *);}
static void dealloc_QXmlResultItems(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQXmlResultItems *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QXmlResultItems(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QXmlResultItems(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QXmlResultItems(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQXmlResultItems *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQXmlResultItems();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QXmlResultItems[] = {
    {SIP_MLNAME_CAST(sipName_current), meth_QXmlResultItems_current, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlResultItems_current)},
    {SIP_MLNAME_CAST(sipName_hasError), meth_QXmlResultItems_hasError, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlResultItems_hasError)},
    {SIP_MLNAME_CAST(sipName_next), meth_QXmlResultItems_next, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlResultItems_next)}
};

PyDoc_STRVAR(doc_QXmlResultItems, "\1QXmlResultItems()");


pyqt4ClassTypeDef sipTypeDef_QtXmlPatterns_QXmlResultItems = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QXmlResultItems,
        {0}
    },
    {
        sipNameNr_QXmlResultItems,
        {0, 0, 1},
        3, methods_QXmlResultItems,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QXmlResultItems,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QXmlResultItems,
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
    dealloc_QXmlResultItems,
    0,
    0,
    0,
    release_QXmlResultItems,
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
