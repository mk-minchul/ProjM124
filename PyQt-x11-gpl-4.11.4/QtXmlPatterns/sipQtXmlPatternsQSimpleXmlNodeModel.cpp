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

#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtXmlPatterns/qsimplexmlnodemodel.sip"
#include <qsimplexmlnodemodel.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtXmlPatterns/sipQtXmlPatternsQSimpleXmlNodeModel.cpp"

#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtXmlPatterns/qxmlnamepool.sip"
#include <qxmlnamepool.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtXmlPatterns/sipQtXmlPatternsQSimpleXmlNodeModel.cpp"
#line 28 "sip/QtCore/qvector.sip"
#include <qvector.h>
#line 36 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtXmlPatterns/sipQtXmlPatternsQSimpleXmlNodeModel.cpp"
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtXmlPatterns/qabstractxmlnodemodel.sip"
#include <qabstractxmlnodemodel.h>
#line 39 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtXmlPatterns/sipQtXmlPatternsQSimpleXmlNodeModel.cpp"
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtXmlPatterns/qxmlname.sip"
#include <qxmlname.h>
#line 42 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtXmlPatterns/sipQtXmlPatternsQSimpleXmlNodeModel.cpp"
#line 31 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 45 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtXmlPatterns/sipQtXmlPatternsQSimpleXmlNodeModel.cpp"
#line 28 "sip/QtCore/qvector.sip"
#include <qvector.h>
#line 48 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtXmlPatterns/sipQtXmlPatternsQSimpleXmlNodeModel.cpp"
#line 102 "sip/QtCore/qurl.sip"
#include <qurl.h>
#line 51 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtXmlPatterns/sipQtXmlPatternsQSimpleXmlNodeModel.cpp"
#line 81 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtXmlPatterns/qabstractxmlnodemodel.sip"
#include <qabstractxmlnodemodel.h>
#line 54 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtXmlPatterns/sipQtXmlPatternsQSimpleXmlNodeModel.cpp"
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtXmlPatterns/qsourcelocation.sip"
#include <qsourcelocation.h>
#line 57 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtXmlPatterns/sipQtXmlPatternsQSimpleXmlNodeModel.cpp"
#line 269 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 60 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtXmlPatterns/sipQtXmlPatternsQSimpleXmlNodeModel.cpp"


class sipQSimpleXmlNodeModel : public QSimpleXmlNodeModel
{
public:
    sipQSimpleXmlNodeModel(const QXmlNamePool&);
    virtual ~sipQSimpleXmlNodeModel();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QVector<QXmlNodeModelIndex> attributes(const QXmlNodeModelIndex&) const;
    QXmlNodeModelIndex nextFromSimpleAxis(QAbstractXmlNodeModel::SimpleAxis,const QXmlNodeModelIndex&) const;
    QVariant typedValue(const QXmlNodeModelIndex&) const;
    QXmlName name(const QXmlNodeModelIndex&) const;
    QXmlNodeModelIndex root(const QXmlNodeModelIndex&) const;
    QXmlNodeModelIndex::DocumentOrder compareOrder(const QXmlNodeModelIndex&,const QXmlNodeModelIndex&) const;
    QXmlNodeModelIndex::NodeKind kind(const QXmlNodeModelIndex&) const;
    QUrl documentUri(const QXmlNodeModelIndex&) const;
    QVector<QXmlNodeModelIndex> nodesByIdref(const QXmlName&) const;
    QXmlNodeModelIndex elementById(const QXmlName&) const;
    QString stringValue(const QXmlNodeModelIndex&) const;
    QVector<QXmlName> namespaceBindings(const QXmlNodeModelIndex&) const;
    QUrl baseUri(const QXmlNodeModelIndex&) const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQSimpleXmlNodeModel(const sipQSimpleXmlNodeModel &);
    sipQSimpleXmlNodeModel &operator = (const sipQSimpleXmlNodeModel &);

    char sipPyMethods[13];
};

sipQSimpleXmlNodeModel::sipQSimpleXmlNodeModel(const QXmlNamePool& a0): QSimpleXmlNodeModel(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQSimpleXmlNodeModel::~sipQSimpleXmlNodeModel()
{
    sipCommonDtor(sipPySelf);
}

QVector<QXmlNodeModelIndex> sipQSimpleXmlNodeModel::attributes(const QXmlNodeModelIndex& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,sipName_QSimpleXmlNodeModel,sipName_attributes);

    if (!sipMeth)
        return QVector<QXmlNodeModelIndex>();

    extern QVector<QXmlNodeModelIndex> sipVH_QtXmlPatterns_9(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QXmlNodeModelIndex&);

    return sipVH_QtXmlPatterns_9(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QXmlNodeModelIndex sipQSimpleXmlNodeModel::nextFromSimpleAxis(QAbstractXmlNodeModel::SimpleAxis a0,const QXmlNodeModelIndex& a1) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,sipName_QSimpleXmlNodeModel,sipName_nextFromSimpleAxis);

    if (!sipMeth)
        return QXmlNodeModelIndex();

    extern QXmlNodeModelIndex sipVH_QtXmlPatterns_10(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QAbstractXmlNodeModel::SimpleAxis,const QXmlNodeModelIndex&);

    return sipVH_QtXmlPatterns_10(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

QVariant sipQSimpleXmlNodeModel::typedValue(const QXmlNodeModelIndex& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,sipName_QSimpleXmlNodeModel,sipName_typedValue);

    if (!sipMeth)
        return QVariant();

    extern QVariant sipVH_QtXmlPatterns_11(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QXmlNodeModelIndex&);

    return sipVH_QtXmlPatterns_11(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QXmlName sipQSimpleXmlNodeModel::name(const QXmlNodeModelIndex& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[3]),sipPySelf,sipName_QSimpleXmlNodeModel,sipName_name);

    if (!sipMeth)
        return QXmlName();

    extern QXmlName sipVH_QtXmlPatterns_12(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QXmlNodeModelIndex&);

    return sipVH_QtXmlPatterns_12(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QXmlNodeModelIndex sipQSimpleXmlNodeModel::root(const QXmlNodeModelIndex& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[4]),sipPySelf,sipName_QSimpleXmlNodeModel,sipName_root);

    if (!sipMeth)
        return QXmlNodeModelIndex();

    extern QXmlNodeModelIndex sipVH_QtXmlPatterns_13(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QXmlNodeModelIndex&);

    return sipVH_QtXmlPatterns_13(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QXmlNodeModelIndex::DocumentOrder sipQSimpleXmlNodeModel::compareOrder(const QXmlNodeModelIndex& a0,const QXmlNodeModelIndex& a1) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[5]),sipPySelf,sipName_QSimpleXmlNodeModel,sipName_compareOrder);

    if (!sipMeth)
        return (QXmlNodeModelIndex::DocumentOrder)0;

    extern QXmlNodeModelIndex::DocumentOrder sipVH_QtXmlPatterns_14(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QXmlNodeModelIndex&,const QXmlNodeModelIndex&);

    return sipVH_QtXmlPatterns_14(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

QXmlNodeModelIndex::NodeKind sipQSimpleXmlNodeModel::kind(const QXmlNodeModelIndex& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[6]),sipPySelf,sipName_QSimpleXmlNodeModel,sipName_kind);

    if (!sipMeth)
        return (QXmlNodeModelIndex::NodeKind)0;

    extern QXmlNodeModelIndex::NodeKind sipVH_QtXmlPatterns_15(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QXmlNodeModelIndex&);

    return sipVH_QtXmlPatterns_15(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QUrl sipQSimpleXmlNodeModel::documentUri(const QXmlNodeModelIndex& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[7]),sipPySelf,sipName_QSimpleXmlNodeModel,sipName_documentUri);

    if (!sipMeth)
        return QUrl();

    extern QUrl sipVH_QtXmlPatterns_8(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QXmlNodeModelIndex&);

    return sipVH_QtXmlPatterns_8(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QVector<QXmlNodeModelIndex> sipQSimpleXmlNodeModel::nodesByIdref(const QXmlName& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[8]),sipPySelf,NULL,sipName_nodesByIdref);

    if (!sipMeth)
        return QSimpleXmlNodeModel::nodesByIdref(a0);

    extern QVector<QXmlNodeModelIndex> sipVH_QtXmlPatterns_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QXmlName&);

    return sipVH_QtXmlPatterns_4(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QXmlNodeModelIndex sipQSimpleXmlNodeModel::elementById(const QXmlName& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[9]),sipPySelf,NULL,sipName_elementById);

    if (!sipMeth)
        return QSimpleXmlNodeModel::elementById(a0);

    extern QXmlNodeModelIndex sipVH_QtXmlPatterns_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QXmlName&);

    return sipVH_QtXmlPatterns_5(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QString sipQSimpleXmlNodeModel::stringValue(const QXmlNodeModelIndex& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[10]),sipPySelf,NULL,sipName_stringValue);

    if (!sipMeth)
        return QSimpleXmlNodeModel::stringValue(a0);

    extern QString sipVH_QtXmlPatterns_6(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QXmlNodeModelIndex&);

    return sipVH_QtXmlPatterns_6(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QVector<QXmlName> sipQSimpleXmlNodeModel::namespaceBindings(const QXmlNodeModelIndex& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[11]),sipPySelf,NULL,sipName_namespaceBindings);

    if (!sipMeth)
        return QSimpleXmlNodeModel::namespaceBindings(a0);

    extern QVector<QXmlName> sipVH_QtXmlPatterns_7(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QXmlNodeModelIndex&);

    return sipVH_QtXmlPatterns_7(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QUrl sipQSimpleXmlNodeModel::baseUri(const QXmlNodeModelIndex& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[12]),sipPySelf,NULL,sipName_baseUri);

    if (!sipMeth)
        return QSimpleXmlNodeModel::baseUri(a0);

    extern QUrl sipVH_QtXmlPatterns_8(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QXmlNodeModelIndex&);

    return sipVH_QtXmlPatterns_8(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QSimpleXmlNodeModel_baseUri, "baseUri(self, QXmlNodeModelIndex) -> QUrl");

extern "C" {static PyObject *meth_QSimpleXmlNodeModel_baseUri(PyObject *, PyObject *);}
static PyObject *meth_QSimpleXmlNodeModel_baseUri(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QXmlNodeModelIndex* a0;
        const QSimpleXmlNodeModel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QSimpleXmlNodeModel, &sipCpp, sipType_QXmlNodeModelIndex, &a0))
        {
            QUrl*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QUrl((sipSelfWasArg ? sipCpp->QSimpleXmlNodeModel::baseUri(*a0) : sipCpp->baseUri(*a0)));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QUrl,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSimpleXmlNodeModel, sipName_baseUri, doc_QSimpleXmlNodeModel_baseUri);

    return NULL;
}


PyDoc_STRVAR(doc_QSimpleXmlNodeModel_namePool, "namePool(self) -> QXmlNamePool");

extern "C" {static PyObject *meth_QSimpleXmlNodeModel_namePool(PyObject *, PyObject *);}
static PyObject *meth_QSimpleXmlNodeModel_namePool(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSimpleXmlNodeModel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSimpleXmlNodeModel, &sipCpp))
        {
            QXmlNamePool*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = &sipCpp->namePool();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QXmlNamePool,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSimpleXmlNodeModel, sipName_namePool, doc_QSimpleXmlNodeModel_namePool);

    return NULL;
}


PyDoc_STRVAR(doc_QSimpleXmlNodeModel_namespaceBindings, "namespaceBindings(self, QXmlNodeModelIndex) -> object");

extern "C" {static PyObject *meth_QSimpleXmlNodeModel_namespaceBindings(PyObject *, PyObject *);}
static PyObject *meth_QSimpleXmlNodeModel_namespaceBindings(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QXmlNodeModelIndex* a0;
        const QSimpleXmlNodeModel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QSimpleXmlNodeModel, &sipCpp, sipType_QXmlNodeModelIndex, &a0))
        {
            QVector<QXmlName>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVector<QXmlName>((sipSelfWasArg ? sipCpp->QSimpleXmlNodeModel::namespaceBindings(*a0) : sipCpp->namespaceBindings(*a0)));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVector_0100QXmlName,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSimpleXmlNodeModel, sipName_namespaceBindings, doc_QSimpleXmlNodeModel_namespaceBindings);

    return NULL;
}


PyDoc_STRVAR(doc_QSimpleXmlNodeModel_stringValue, "stringValue(self, QXmlNodeModelIndex) -> QString");

extern "C" {static PyObject *meth_QSimpleXmlNodeModel_stringValue(PyObject *, PyObject *);}
static PyObject *meth_QSimpleXmlNodeModel_stringValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QXmlNodeModelIndex* a0;
        const QSimpleXmlNodeModel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QSimpleXmlNodeModel, &sipCpp, sipType_QXmlNodeModelIndex, &a0))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString((sipSelfWasArg ? sipCpp->QSimpleXmlNodeModel::stringValue(*a0) : sipCpp->stringValue(*a0)));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSimpleXmlNodeModel, sipName_stringValue, doc_QSimpleXmlNodeModel_stringValue);

    return NULL;
}


PyDoc_STRVAR(doc_QSimpleXmlNodeModel_elementById, "elementById(self, QXmlName) -> QXmlNodeModelIndex");

extern "C" {static PyObject *meth_QSimpleXmlNodeModel_elementById(PyObject *, PyObject *);}
static PyObject *meth_QSimpleXmlNodeModel_elementById(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QXmlName* a0;
        const QSimpleXmlNodeModel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QSimpleXmlNodeModel, &sipCpp, sipType_QXmlName, &a0))
        {
            QXmlNodeModelIndex*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QXmlNodeModelIndex((sipSelfWasArg ? sipCpp->QSimpleXmlNodeModel::elementById(*a0) : sipCpp->elementById(*a0)));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QXmlNodeModelIndex,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSimpleXmlNodeModel, sipName_elementById, doc_QSimpleXmlNodeModel_elementById);

    return NULL;
}


PyDoc_STRVAR(doc_QSimpleXmlNodeModel_nodesByIdref, "nodesByIdref(self, QXmlName) -> object");

extern "C" {static PyObject *meth_QSimpleXmlNodeModel_nodesByIdref(PyObject *, PyObject *);}
static PyObject *meth_QSimpleXmlNodeModel_nodesByIdref(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QXmlName* a0;
        const QSimpleXmlNodeModel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QSimpleXmlNodeModel, &sipCpp, sipType_QXmlName, &a0))
        {
            QVector<QXmlNodeModelIndex>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVector<QXmlNodeModelIndex>((sipSelfWasArg ? sipCpp->QSimpleXmlNodeModel::nodesByIdref(*a0) : sipCpp->nodesByIdref(*a0)));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVector_0100QXmlNodeModelIndex,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSimpleXmlNodeModel, sipName_nodesByIdref, doc_QSimpleXmlNodeModel_nodesByIdref);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSimpleXmlNodeModel(void *, int);}
static void release_QSimpleXmlNodeModel(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQSimpleXmlNodeModel *>(sipCppV);
    else
        delete reinterpret_cast<QSimpleXmlNodeModel *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QSimpleXmlNodeModel(sipSimpleWrapper *);}
static void dealloc_QSimpleXmlNodeModel(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQSimpleXmlNodeModel *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QSimpleXmlNodeModel(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QSimpleXmlNodeModel(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSimpleXmlNodeModel(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQSimpleXmlNodeModel *sipCpp = 0;

    {
        const QXmlNamePool* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QXmlNamePool, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQSimpleXmlNodeModel(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QSimpleXmlNodeModel[] = {{2, 255, 1}};


static PyMethodDef methods_QSimpleXmlNodeModel[] = {
    {SIP_MLNAME_CAST(sipName_baseUri), meth_QSimpleXmlNodeModel_baseUri, METH_VARARGS, SIP_MLDOC_CAST(doc_QSimpleXmlNodeModel_baseUri)},
    {SIP_MLNAME_CAST(sipName_elementById), meth_QSimpleXmlNodeModel_elementById, METH_VARARGS, SIP_MLDOC_CAST(doc_QSimpleXmlNodeModel_elementById)},
    {SIP_MLNAME_CAST(sipName_namePool), meth_QSimpleXmlNodeModel_namePool, METH_VARARGS, SIP_MLDOC_CAST(doc_QSimpleXmlNodeModel_namePool)},
    {SIP_MLNAME_CAST(sipName_namespaceBindings), meth_QSimpleXmlNodeModel_namespaceBindings, METH_VARARGS, SIP_MLDOC_CAST(doc_QSimpleXmlNodeModel_namespaceBindings)},
    {SIP_MLNAME_CAST(sipName_nodesByIdref), meth_QSimpleXmlNodeModel_nodesByIdref, METH_VARARGS, SIP_MLDOC_CAST(doc_QSimpleXmlNodeModel_nodesByIdref)},
    {SIP_MLNAME_CAST(sipName_stringValue), meth_QSimpleXmlNodeModel_stringValue, METH_VARARGS, SIP_MLDOC_CAST(doc_QSimpleXmlNodeModel_stringValue)}
};

PyDoc_STRVAR(doc_QSimpleXmlNodeModel, "\1QSimpleXmlNodeModel(QXmlNamePool)");


pyqt4ClassTypeDef sipTypeDef_QtXmlPatterns_QSimpleXmlNodeModel = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QSimpleXmlNodeModel,
        {0}
    },
    {
        sipNameNr_QSimpleXmlNodeModel,
        {0, 0, 1},
        6, methods_QSimpleXmlNodeModel,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSimpleXmlNodeModel,
    -1,
    -1,
    supers_QSimpleXmlNodeModel,
    0,
    init_type_QSimpleXmlNodeModel,
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
    dealloc_QSimpleXmlNodeModel,
    0,
    0,
    0,
    release_QSimpleXmlNodeModel,
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
