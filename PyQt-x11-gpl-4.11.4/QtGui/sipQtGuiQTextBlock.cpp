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

#line 129 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qtextobject.sip"
#include <qtextobject.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextBlock.cpp"

#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextBlock.cpp"
#line 281 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qtextobject.sip"
#include <qtextobject.h>
#line 36 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextBlock.cpp"
#line 129 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qtextobject.sip"
#include <qtextobject.h>
#line 154 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qtextobject.sip"
#include <qtextobject.h>
#line 41 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextBlock.cpp"
#line 26 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qtextlist.sip"
#include <qtextlist.h>
#line 44 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextBlock.cpp"
#line 63 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qtextdocument.sip"
#include <qtextdocument.h>
#line 47 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextBlock.cpp"
#line 31 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 50 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextBlock.cpp"
#line 340 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 53 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextBlock.cpp"
#line 491 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 56 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextBlock.cpp"
#line 48 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qtextlayout.sip"
#include <qtextlayout.h>
#line 59 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextBlock.cpp"


PyDoc_STRVAR(doc_QTextBlock_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QTextBlock_isValid(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isValid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_isValid, doc_QTextBlock_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_position, "position(self) -> int");

extern "C" {static PyObject *meth_QTextBlock_position(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_position(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->position();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_position, doc_QTextBlock_position);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_length, "length(self) -> int");

extern "C" {static PyObject *meth_QTextBlock_length(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_length(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->length();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_length, doc_QTextBlock_length);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_contains, "contains(self, int) -> bool");

extern "C" {static PyObject *meth_QTextBlock_contains(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_contains(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QTextBlock, &sipCpp, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->contains(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_contains, doc_QTextBlock_contains);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_layout, "layout(self) -> QTextLayout");

extern "C" {static PyObject *meth_QTextBlock_layout(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_layout(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            QTextLayout*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->layout();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QTextLayout,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_layout, doc_QTextBlock_layout);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_blockFormat, "blockFormat(self) -> QTextBlockFormat");

extern "C" {static PyObject *meth_QTextBlock_blockFormat(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_blockFormat(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            QTextBlockFormat*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextBlockFormat(sipCpp->blockFormat());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextBlockFormat,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_blockFormat, doc_QTextBlock_blockFormat);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_blockFormatIndex, "blockFormatIndex(self) -> int");

extern "C" {static PyObject *meth_QTextBlock_blockFormatIndex(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_blockFormatIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->blockFormatIndex();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_blockFormatIndex, doc_QTextBlock_blockFormatIndex);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_charFormat, "charFormat(self) -> QTextCharFormat");

extern "C" {static PyObject *meth_QTextBlock_charFormat(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_charFormat(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            QTextCharFormat*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextCharFormat(sipCpp->charFormat());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextCharFormat,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_charFormat, doc_QTextBlock_charFormat);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_charFormatIndex, "charFormatIndex(self) -> int");

extern "C" {static PyObject *meth_QTextBlock_charFormatIndex(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_charFormatIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->charFormatIndex();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_charFormatIndex, doc_QTextBlock_charFormatIndex);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_text, "text(self) -> QString");

extern "C" {static PyObject *meth_QTextBlock_text(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_text(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->text());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_text, doc_QTextBlock_text);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_document, "document(self) -> QTextDocument");

extern "C" {static PyObject *meth_QTextBlock_document(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_document(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            const QTextDocument*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->document();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(const_cast<QTextDocument *>(sipRes),sipType_QTextDocument,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_document, doc_QTextBlock_document);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_textList, "textList(self) -> QTextList");

extern "C" {static PyObject *meth_QTextBlock_textList(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_textList(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            QTextList*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->textList();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QTextList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_textList, doc_QTextBlock_textList);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_begin, "begin(self) -> QTextBlock.iterator");

extern "C" {static PyObject *meth_QTextBlock_begin(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_begin(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            QTextBlock::iterator*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextBlock::iterator(sipCpp->begin());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextBlock_iterator,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_begin, doc_QTextBlock_begin);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_end, "end(self) -> QTextBlock.iterator");

extern "C" {static PyObject *meth_QTextBlock_end(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_end(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            QTextBlock::iterator*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextBlock::iterator(sipCpp->end());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextBlock_iterator,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_end, doc_QTextBlock_end);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_next, "next(self) -> QTextBlock");

extern "C" {static PyObject *meth_QTextBlock_next(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_next(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            QTextBlock*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextBlock(sipCpp->next());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextBlock,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_next, doc_QTextBlock_next);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_previous, "previous(self) -> QTextBlock");

extern "C" {static PyObject *meth_QTextBlock_previous(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_previous(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            QTextBlock*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextBlock(sipCpp->previous());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextBlock,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_previous, doc_QTextBlock_previous);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_userData, "userData(self) -> QTextBlockUserData");

extern "C" {static PyObject *meth_QTextBlock_userData(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_userData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            QTextBlockUserData*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->userData();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QTextBlockUserData,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_userData, doc_QTextBlock_userData);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_setUserData, "setUserData(self, QTextBlockUserData)");

extern "C" {static PyObject *meth_QTextBlock_setUserData(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_setUserData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextBlockUserData* a0;
        PyObject *a0Wrapper;
        QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8", &sipSelf, sipType_QTextBlock, &sipCpp, &a0Wrapper, sipType_QTextBlockUserData, &a0))
        {
            int sipIsErr = 0;

#line 193 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qtextobject.sip"
        // Ownership of the user data is with the document not the text block.
        const QTextDocument *td = sipCpp->document();
        
        if (td)
        {
            PyObject *py_td = qtgui_wrap_ancestors(const_cast<QTextDocument *>(td),
                    sipType_QTextDocument);
        
            if (!py_td)
            {
                sipIsErr = 1;
            }
            else
            {
                sipTransferTo(a0Wrapper, py_td);
                Py_DECREF(py_td);
            }
        }
        
        sipCpp->setUserData(a0);
#line 611 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextBlock.cpp"

            if (sipIsErr)
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_setUserData, doc_QTextBlock_setUserData);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_userState, "userState(self) -> int");

extern "C" {static PyObject *meth_QTextBlock_userState(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_userState(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->userState();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_userState, doc_QTextBlock_userState);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_setUserState, "setUserState(self, int)");

extern "C" {static PyObject *meth_QTextBlock_setUserState(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_setUserState(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QTextBlock, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setUserState(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_setUserState, doc_QTextBlock_setUserState);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_clearLayout, "clearLayout(self)");

extern "C" {static PyObject *meth_QTextBlock_clearLayout(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_clearLayout(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->clearLayout();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_clearLayout, doc_QTextBlock_clearLayout);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_revision, "revision(self) -> int");

extern "C" {static PyObject *meth_QTextBlock_revision(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_revision(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->revision();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_revision, doc_QTextBlock_revision);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_setRevision, "setRevision(self, int)");

extern "C" {static PyObject *meth_QTextBlock_setRevision(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_setRevision(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QTextBlock, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setRevision(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_setRevision, doc_QTextBlock_setRevision);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_isVisible, "isVisible(self) -> bool");

extern "C" {static PyObject *meth_QTextBlock_isVisible(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_isVisible(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isVisible();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_isVisible, doc_QTextBlock_isVisible);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_setVisible, "setVisible(self, bool)");

extern "C" {static PyObject *meth_QTextBlock_setVisible(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_setVisible(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QTextBlock, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setVisible(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_setVisible, doc_QTextBlock_setVisible);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_blockNumber, "blockNumber(self) -> int");

extern "C" {static PyObject *meth_QTextBlock_blockNumber(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_blockNumber(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->blockNumber();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_blockNumber, doc_QTextBlock_blockNumber);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_firstLineNumber, "firstLineNumber(self) -> int");

extern "C" {static PyObject *meth_QTextBlock_firstLineNumber(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_firstLineNumber(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->firstLineNumber();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_firstLineNumber, doc_QTextBlock_firstLineNumber);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_setLineCount, "setLineCount(self, int)");

extern "C" {static PyObject *meth_QTextBlock_setLineCount(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_setLineCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QTextBlock, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setLineCount(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_setLineCount, doc_QTextBlock_setLineCount);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_lineCount, "lineCount(self) -> int");

extern "C" {static PyObject *meth_QTextBlock_lineCount(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_lineCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->lineCount();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_lineCount, doc_QTextBlock_lineCount);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_textDirection, "textDirection(self) -> Qt.LayoutDirection");

extern "C" {static PyObject *meth_QTextBlock_textDirection(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_textDirection(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock, &sipCpp))
        {
            Qt::LayoutDirection sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->textDirection();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_Qt_LayoutDirection);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextBlock, sipName_textDirection, doc_QTextBlock_textDirection);

    return NULL;
}


extern "C" {static PyObject *slot_QTextBlock___ge__(PyObject *,PyObject *);}
static PyObject *slot_QTextBlock___ge__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextBlock *sipCpp = reinterpret_cast<QTextBlock *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextBlock));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTextBlock* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QTextBlock, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = !sipCpp->QTextBlock::operator<(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ge_slot,sipType_QTextBlock,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTextBlock___lt__(PyObject *,PyObject *);}
static PyObject *slot_QTextBlock___lt__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextBlock *sipCpp = reinterpret_cast<QTextBlock *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextBlock));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTextBlock* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QTextBlock, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QTextBlock::operator<(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,lt_slot,sipType_QTextBlock,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTextBlock___ne__(PyObject *,PyObject *);}
static PyObject *slot_QTextBlock___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextBlock *sipCpp = reinterpret_cast<QTextBlock *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextBlock));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTextBlock* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QTextBlock, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QTextBlock::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QTextBlock,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTextBlock___eq__(PyObject *,PyObject *);}
static PyObject *slot_QTextBlock___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextBlock *sipCpp = reinterpret_cast<QTextBlock *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextBlock));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTextBlock* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QTextBlock, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QTextBlock::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QTextBlock,sipSelf,sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextBlock(void *, int);}
static void release_QTextBlock(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QTextBlock *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QTextBlock(void *, SIP_SSIZE_T, const void *);}
static void assign_QTextBlock(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QTextBlock *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QTextBlock *>(sipSrc);
}


extern "C" {static void *array_QTextBlock(SIP_SSIZE_T);}
static void *array_QTextBlock(SIP_SSIZE_T sipNrElem)
{
    return new QTextBlock[sipNrElem];
}


extern "C" {static void *copy_QTextBlock(const void *, SIP_SSIZE_T);}
static void *copy_QTextBlock(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QTextBlock(reinterpret_cast<const QTextBlock *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTextBlock(sipSimpleWrapper *);}
static void dealloc_QTextBlock(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTextBlock(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QTextBlock(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTextBlock(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QTextBlock *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextBlock();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QTextBlock* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QTextBlock, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextBlock(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QTextBlock[] = {
    {(void *)slot_QTextBlock___ge__, ge_slot},
    {(void *)slot_QTextBlock___lt__, lt_slot},
    {(void *)slot_QTextBlock___ne__, ne_slot},
    {(void *)slot_QTextBlock___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QTextBlock[] = {
    {SIP_MLNAME_CAST(sipName_begin), meth_QTextBlock_begin, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_begin)},
    {SIP_MLNAME_CAST(sipName_blockFormat), meth_QTextBlock_blockFormat, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_blockFormat)},
    {SIP_MLNAME_CAST(sipName_blockFormatIndex), meth_QTextBlock_blockFormatIndex, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_blockFormatIndex)},
    {SIP_MLNAME_CAST(sipName_blockNumber), meth_QTextBlock_blockNumber, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_blockNumber)},
    {SIP_MLNAME_CAST(sipName_charFormat), meth_QTextBlock_charFormat, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_charFormat)},
    {SIP_MLNAME_CAST(sipName_charFormatIndex), meth_QTextBlock_charFormatIndex, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_charFormatIndex)},
    {SIP_MLNAME_CAST(sipName_clearLayout), meth_QTextBlock_clearLayout, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_clearLayout)},
    {SIP_MLNAME_CAST(sipName_contains), meth_QTextBlock_contains, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_contains)},
    {SIP_MLNAME_CAST(sipName_document), meth_QTextBlock_document, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_document)},
    {SIP_MLNAME_CAST(sipName_end), meth_QTextBlock_end, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_end)},
    {SIP_MLNAME_CAST(sipName_firstLineNumber), meth_QTextBlock_firstLineNumber, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_firstLineNumber)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QTextBlock_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_isValid)},
    {SIP_MLNAME_CAST(sipName_isVisible), meth_QTextBlock_isVisible, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_isVisible)},
    {SIP_MLNAME_CAST(sipName_layout), meth_QTextBlock_layout, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_layout)},
    {SIP_MLNAME_CAST(sipName_length), meth_QTextBlock_length, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_length)},
    {SIP_MLNAME_CAST(sipName_lineCount), meth_QTextBlock_lineCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_lineCount)},
    {SIP_MLNAME_CAST(sipName_next), meth_QTextBlock_next, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_next)},
    {SIP_MLNAME_CAST(sipName_position), meth_QTextBlock_position, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_position)},
    {SIP_MLNAME_CAST(sipName_previous), meth_QTextBlock_previous, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_previous)},
    {SIP_MLNAME_CAST(sipName_revision), meth_QTextBlock_revision, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_revision)},
    {SIP_MLNAME_CAST(sipName_setLineCount), meth_QTextBlock_setLineCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_setLineCount)},
    {SIP_MLNAME_CAST(sipName_setRevision), meth_QTextBlock_setRevision, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_setRevision)},
    {SIP_MLNAME_CAST(sipName_setUserData), meth_QTextBlock_setUserData, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_setUserData)},
    {SIP_MLNAME_CAST(sipName_setUserState), meth_QTextBlock_setUserState, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_setUserState)},
    {SIP_MLNAME_CAST(sipName_setVisible), meth_QTextBlock_setVisible, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_setVisible)},
    {SIP_MLNAME_CAST(sipName_text), meth_QTextBlock_text, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_text)},
    {SIP_MLNAME_CAST(sipName_textDirection), meth_QTextBlock_textDirection, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_textDirection)},
    {SIP_MLNAME_CAST(sipName_textList), meth_QTextBlock_textList, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_textList)},
    {SIP_MLNAME_CAST(sipName_userData), meth_QTextBlock_userData, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_userData)},
    {SIP_MLNAME_CAST(sipName_userState), meth_QTextBlock_userState, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_userState)}
};

PyDoc_STRVAR(doc_QTextBlock, "\1QTextBlock()\n"
    "QTextBlock(QTextBlock)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QTextBlock = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QTextBlock,
        {0}
    },
    {
        sipNameNr_QTextBlock,
        {0, 0, 1},
        30, methods_QTextBlock,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTextBlock,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    -1,
    0,
    slots_QTextBlock,
    init_type_QTextBlock,
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
    dealloc_QTextBlock,
    assign_QTextBlock,
    array_QTextBlock,
    copy_QTextBlock,
    release_QTextBlock,
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
