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

#include "sipAPIQtXml.h"

#line 214 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtXml/qxml.sip"
#include <qxml.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtXml/sipQtXmlQXmlContentHandler.cpp"

#line 31 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtXml/sipQtXmlQXmlContentHandler.cpp"
#line 52 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtXml/qxml.sip"
#include <qxml.h>
#line 36 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtXml/sipQtXmlQXmlContentHandler.cpp"
#line 201 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtXml/qxml.sip"
#include <qxml.h>
#line 39 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtXml/sipQtXmlQXmlContentHandler.cpp"


class sipQXmlContentHandler : public QXmlContentHandler
{
public:
    sipQXmlContentHandler();
    sipQXmlContentHandler(const QXmlContentHandler&);
    virtual ~sipQXmlContentHandler();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QString errorString() const;
    bool skippedEntity(const QString&);
    bool processingInstruction(const QString&,const QString&);
    bool ignorableWhitespace(const QString&);
    bool characters(const QString&);
    bool endElement(const QString&,const QString&,const QString&);
    bool startElement(const QString&,const QString&,const QString&,const QXmlAttributes&);
    bool endPrefixMapping(const QString&);
    bool startPrefixMapping(const QString&,const QString&);
    bool endDocument();
    bool startDocument();
    void setDocumentLocator(QXmlLocator*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQXmlContentHandler(const sipQXmlContentHandler &);
    sipQXmlContentHandler &operator = (const sipQXmlContentHandler &);

    char sipPyMethods[12];
};

sipQXmlContentHandler::sipQXmlContentHandler(): QXmlContentHandler(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQXmlContentHandler::sipQXmlContentHandler(const QXmlContentHandler& a0): QXmlContentHandler(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQXmlContentHandler::~sipQXmlContentHandler()
{
    sipCommonDtor(sipPySelf);
}

QString sipQXmlContentHandler::errorString() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,sipName_QXmlContentHandler,sipName_errorString);

    if (!sipMeth)
        return QString();

    typedef QString (*sipVH_QtCore_62)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_62)(sipModuleAPI_QtXml_QtCore->em_virthandlers[62]))(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipQXmlContentHandler::skippedEntity(const QString& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,sipName_QXmlContentHandler,sipName_skippedEntity);

    if (!sipMeth)
        return 0;

    typedef bool (*sipVH_QtCore_28)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QString&);

    return ((sipVH_QtCore_28)(sipModuleAPI_QtXml_QtCore->em_virthandlers[28]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQXmlContentHandler::processingInstruction(const QString& a0,const QString& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,sipName_QXmlContentHandler,sipName_processingInstruction);

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtXml_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QString&,const QString&);

    return sipVH_QtXml_1(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQXmlContentHandler::ignorableWhitespace(const QString& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,sipName_QXmlContentHandler,sipName_ignorableWhitespace);

    if (!sipMeth)
        return 0;

    typedef bool (*sipVH_QtCore_28)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QString&);

    return ((sipVH_QtCore_28)(sipModuleAPI_QtXml_QtCore->em_virthandlers[28]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQXmlContentHandler::characters(const QString& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,sipName_QXmlContentHandler,sipName_characters);

    if (!sipMeth)
        return 0;

    typedef bool (*sipVH_QtCore_28)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QString&);

    return ((sipVH_QtCore_28)(sipModuleAPI_QtXml_QtCore->em_virthandlers[28]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQXmlContentHandler::endElement(const QString& a0,const QString& a1,const QString& a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,sipName_QXmlContentHandler,sipName_endElement);

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtXml_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QString&,const QString&,const QString&);

    return sipVH_QtXml_0(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2);
}

bool sipQXmlContentHandler::startElement(const QString& a0,const QString& a1,const QString& a2,const QXmlAttributes& a3)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,sipName_QXmlContentHandler,sipName_startElement);

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtXml_6(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QString&,const QString&,const QString&,const QXmlAttributes&);

    return sipVH_QtXml_6(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2, a3);
}

bool sipQXmlContentHandler::endPrefixMapping(const QString& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,sipName_QXmlContentHandler,sipName_endPrefixMapping);

    if (!sipMeth)
        return 0;

    typedef bool (*sipVH_QtCore_28)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QString&);

    return ((sipVH_QtCore_28)(sipModuleAPI_QtXml_QtCore->em_virthandlers[28]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQXmlContentHandler::startPrefixMapping(const QString& a0,const QString& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,sipName_QXmlContentHandler,sipName_startPrefixMapping);

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtXml_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QString&,const QString&);

    return sipVH_QtXml_1(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQXmlContentHandler::endDocument()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,sipName_QXmlContentHandler,sipName_endDocument);

    if (!sipMeth)
        return 0;

    typedef bool (*sipVH_QtCore_7)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_7)(sipModuleAPI_QtXml_QtCore->em_virthandlers[7]))(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipQXmlContentHandler::startDocument()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[10],sipPySelf,sipName_QXmlContentHandler,sipName_startDocument);

    if (!sipMeth)
        return 0;

    typedef bool (*sipVH_QtCore_7)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_7)(sipModuleAPI_QtXml_QtCore->em_virthandlers[7]))(sipGILState, 0, sipPySelf, sipMeth);
}

void sipQXmlContentHandler::setDocumentLocator(QXmlLocator*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[11],sipPySelf,sipName_QXmlContentHandler,sipName_setDocumentLocator);

    if (!sipMeth)
        return;

    extern void sipVH_QtXml_7(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QXmlLocator*);

    sipVH_QtXml_7(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QXmlContentHandler_setDocumentLocator, "setDocumentLocator(self, QXmlLocator)");

extern "C" {static PyObject *meth_QXmlContentHandler_setDocumentLocator(PyObject *, PyObject *);}
static PyObject *meth_QXmlContentHandler_setDocumentLocator(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QXmlLocator* a0;
        PyObject *a0Keep;
        QXmlContentHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8", &sipSelf, sipType_QXmlContentHandler, &sipCpp, &a0Keep, sipType_QXmlLocator, &a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlContentHandler, sipName_setDocumentLocator);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->setDocumentLocator(a0);
            Py_END_ALLOW_THREADS

            sipKeepReference(sipSelf, -13, a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlContentHandler, sipName_setDocumentLocator, doc_QXmlContentHandler_setDocumentLocator);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlContentHandler_startDocument, "startDocument(self) -> bool");

extern "C" {static PyObject *meth_QXmlContentHandler_startDocument(PyObject *, PyObject *);}
static PyObject *meth_QXmlContentHandler_startDocument(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QXmlContentHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlContentHandler, &sipCpp))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlContentHandler, sipName_startDocument);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->startDocument();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlContentHandler, sipName_startDocument, doc_QXmlContentHandler_startDocument);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlContentHandler_endDocument, "endDocument(self) -> bool");

extern "C" {static PyObject *meth_QXmlContentHandler_endDocument(PyObject *, PyObject *);}
static PyObject *meth_QXmlContentHandler_endDocument(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QXmlContentHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlContentHandler, &sipCpp))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlContentHandler, sipName_endDocument);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->endDocument();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlContentHandler, sipName_endDocument, doc_QXmlContentHandler_endDocument);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlContentHandler_startPrefixMapping, "startPrefixMapping(self, QString, QString) -> bool");

extern "C" {static PyObject *meth_QXmlContentHandler_startPrefixMapping(PyObject *, PyObject *);}
static PyObject *meth_QXmlContentHandler_startPrefixMapping(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QString* a0;
        int a0State = 0;
        const QString* a1;
        int a1State = 0;
        QXmlContentHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QXmlContentHandler, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlContentHandler, sipName_startPrefixMapping);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->startPrefixMapping(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlContentHandler, sipName_startPrefixMapping, doc_QXmlContentHandler_startPrefixMapping);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlContentHandler_endPrefixMapping, "endPrefixMapping(self, QString) -> bool");

extern "C" {static PyObject *meth_QXmlContentHandler_endPrefixMapping(PyObject *, PyObject *);}
static PyObject *meth_QXmlContentHandler_endPrefixMapping(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QString* a0;
        int a0State = 0;
        QXmlContentHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlContentHandler, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlContentHandler, sipName_endPrefixMapping);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->endPrefixMapping(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlContentHandler, sipName_endPrefixMapping, doc_QXmlContentHandler_endPrefixMapping);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlContentHandler_startElement, "startElement(self, QString, QString, QString, QXmlAttributes) -> bool");

extern "C" {static PyObject *meth_QXmlContentHandler_startElement(PyObject *, PyObject *);}
static PyObject *meth_QXmlContentHandler_startElement(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QString* a0;
        int a0State = 0;
        const QString* a1;
        int a1State = 0;
        const QString* a2;
        int a2State = 0;
        const QXmlAttributes* a3;
        QXmlContentHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1J1J9", &sipSelf, sipType_QXmlContentHandler, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, sipType_QString,&a2, &a2State, sipType_QXmlAttributes, &a3))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlContentHandler, sipName_startElement);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->startElement(*a0,*a1,*a2,*a3);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast<QString *>(a2),sipType_QString,a2State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlContentHandler, sipName_startElement, doc_QXmlContentHandler_startElement);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlContentHandler_endElement, "endElement(self, QString, QString, QString) -> bool");

extern "C" {static PyObject *meth_QXmlContentHandler_endElement(PyObject *, PyObject *);}
static PyObject *meth_QXmlContentHandler_endElement(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QString* a0;
        int a0State = 0;
        const QString* a1;
        int a1State = 0;
        const QString* a2;
        int a2State = 0;
        QXmlContentHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1J1", &sipSelf, sipType_QXmlContentHandler, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, sipType_QString,&a2, &a2State))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlContentHandler, sipName_endElement);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->endElement(*a0,*a1,*a2);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast<QString *>(a2),sipType_QString,a2State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlContentHandler, sipName_endElement, doc_QXmlContentHandler_endElement);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlContentHandler_characters, "characters(self, QString) -> bool");

extern "C" {static PyObject *meth_QXmlContentHandler_characters(PyObject *, PyObject *);}
static PyObject *meth_QXmlContentHandler_characters(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QString* a0;
        int a0State = 0;
        QXmlContentHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlContentHandler, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlContentHandler, sipName_characters);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->characters(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlContentHandler, sipName_characters, doc_QXmlContentHandler_characters);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlContentHandler_ignorableWhitespace, "ignorableWhitespace(self, QString) -> bool");

extern "C" {static PyObject *meth_QXmlContentHandler_ignorableWhitespace(PyObject *, PyObject *);}
static PyObject *meth_QXmlContentHandler_ignorableWhitespace(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QString* a0;
        int a0State = 0;
        QXmlContentHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlContentHandler, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlContentHandler, sipName_ignorableWhitespace);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->ignorableWhitespace(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlContentHandler, sipName_ignorableWhitespace, doc_QXmlContentHandler_ignorableWhitespace);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlContentHandler_processingInstruction, "processingInstruction(self, QString, QString) -> bool");

extern "C" {static PyObject *meth_QXmlContentHandler_processingInstruction(PyObject *, PyObject *);}
static PyObject *meth_QXmlContentHandler_processingInstruction(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QString* a0;
        int a0State = 0;
        const QString* a1;
        int a1State = 0;
        QXmlContentHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QXmlContentHandler, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlContentHandler, sipName_processingInstruction);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->processingInstruction(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlContentHandler, sipName_processingInstruction, doc_QXmlContentHandler_processingInstruction);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlContentHandler_skippedEntity, "skippedEntity(self, QString) -> bool");

extern "C" {static PyObject *meth_QXmlContentHandler_skippedEntity(PyObject *, PyObject *);}
static PyObject *meth_QXmlContentHandler_skippedEntity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QString* a0;
        int a0State = 0;
        QXmlContentHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlContentHandler, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlContentHandler, sipName_skippedEntity);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->skippedEntity(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlContentHandler, sipName_skippedEntity, doc_QXmlContentHandler_skippedEntity);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlContentHandler_errorString, "errorString(self) -> QString");

extern "C" {static PyObject *meth_QXmlContentHandler_errorString(PyObject *, PyObject *);}
static PyObject *meth_QXmlContentHandler_errorString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QXmlContentHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlContentHandler, &sipCpp))
        {
            QString*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlContentHandler, sipName_errorString);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->errorString());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlContentHandler, sipName_errorString, doc_QXmlContentHandler_errorString);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QXmlContentHandler(void *, int);}
static void release_QXmlContentHandler(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQXmlContentHandler *>(sipCppV);
    else
        delete reinterpret_cast<QXmlContentHandler *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QXmlContentHandler(sipSimpleWrapper *);}
static void dealloc_QXmlContentHandler(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQXmlContentHandler *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QXmlContentHandler(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QXmlContentHandler(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QXmlContentHandler(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQXmlContentHandler *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQXmlContentHandler();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QXmlContentHandler* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QXmlContentHandler, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQXmlContentHandler(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QXmlContentHandler[] = {
    {SIP_MLNAME_CAST(sipName_characters), meth_QXmlContentHandler_characters, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlContentHandler_characters)},
    {SIP_MLNAME_CAST(sipName_endDocument), meth_QXmlContentHandler_endDocument, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlContentHandler_endDocument)},
    {SIP_MLNAME_CAST(sipName_endElement), meth_QXmlContentHandler_endElement, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlContentHandler_endElement)},
    {SIP_MLNAME_CAST(sipName_endPrefixMapping), meth_QXmlContentHandler_endPrefixMapping, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlContentHandler_endPrefixMapping)},
    {SIP_MLNAME_CAST(sipName_errorString), meth_QXmlContentHandler_errorString, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlContentHandler_errorString)},
    {SIP_MLNAME_CAST(sipName_ignorableWhitespace), meth_QXmlContentHandler_ignorableWhitespace, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlContentHandler_ignorableWhitespace)},
    {SIP_MLNAME_CAST(sipName_processingInstruction), meth_QXmlContentHandler_processingInstruction, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlContentHandler_processingInstruction)},
    {SIP_MLNAME_CAST(sipName_setDocumentLocator), meth_QXmlContentHandler_setDocumentLocator, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlContentHandler_setDocumentLocator)},
    {SIP_MLNAME_CAST(sipName_skippedEntity), meth_QXmlContentHandler_skippedEntity, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlContentHandler_skippedEntity)},
    {SIP_MLNAME_CAST(sipName_startDocument), meth_QXmlContentHandler_startDocument, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlContentHandler_startDocument)},
    {SIP_MLNAME_CAST(sipName_startElement), meth_QXmlContentHandler_startElement, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlContentHandler_startElement)},
    {SIP_MLNAME_CAST(sipName_startPrefixMapping), meth_QXmlContentHandler_startPrefixMapping, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlContentHandler_startPrefixMapping)}
};

PyDoc_STRVAR(doc_QXmlContentHandler, "\1QXmlContentHandler()\n"
    "QXmlContentHandler(QXmlContentHandler)");


pyqt4ClassTypeDef sipTypeDef_QtXml_QXmlContentHandler = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QXmlContentHandler,
        {0}
    },
    {
        sipNameNr_QXmlContentHandler,
        {0, 0, 1},
        12, methods_QXmlContentHandler,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QXmlContentHandler,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QXmlContentHandler,
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
    dealloc_QXmlContentHandler,
    0,
    0,
    0,
    release_QXmlContentHandler,
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
