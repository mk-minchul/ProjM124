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

#line 26 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qfontmetrics.sip"
#include <qfontmetrics.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQFontMetrics.cpp"

#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qfont.sip"
#include <qfont.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQFontMetrics.cpp"
#line 26 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qpaintdevice.sip"
#include <qpaintdevice.h>
#line 36 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQFontMetrics.cpp"
#line 30 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 39 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQFontMetrics.cpp"
#line 31 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 42 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQFontMetrics.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 45 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQFontMetrics.cpp"
#line 30 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 48 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQFontMetrics.cpp"
#line 67 "sip/QtCore/qchar.sip"
#include <qchar.h>
#line 51 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQFontMetrics.cpp"


PyDoc_STRVAR(doc_QFontMetrics_ascent, "ascent(self) -> int");

extern "C" {static PyObject *meth_QFontMetrics_ascent(PyObject *, PyObject *);}
static PyObject *meth_QFontMetrics_ascent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QFontMetrics *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontMetrics, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->ascent();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetrics, sipName_ascent, doc_QFontMetrics_ascent);

    return NULL;
}


PyDoc_STRVAR(doc_QFontMetrics_descent, "descent(self) -> int");

extern "C" {static PyObject *meth_QFontMetrics_descent(PyObject *, PyObject *);}
static PyObject *meth_QFontMetrics_descent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QFontMetrics *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontMetrics, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->descent();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetrics, sipName_descent, doc_QFontMetrics_descent);

    return NULL;
}


PyDoc_STRVAR(doc_QFontMetrics_height, "height(self) -> int");

extern "C" {static PyObject *meth_QFontMetrics_height(PyObject *, PyObject *);}
static PyObject *meth_QFontMetrics_height(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QFontMetrics *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontMetrics, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->height();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetrics, sipName_height, doc_QFontMetrics_height);

    return NULL;
}


PyDoc_STRVAR(doc_QFontMetrics_leading, "leading(self) -> int");

extern "C" {static PyObject *meth_QFontMetrics_leading(PyObject *, PyObject *);}
static PyObject *meth_QFontMetrics_leading(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QFontMetrics *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontMetrics, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->leading();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetrics, sipName_leading, doc_QFontMetrics_leading);

    return NULL;
}


PyDoc_STRVAR(doc_QFontMetrics_lineSpacing, "lineSpacing(self) -> int");

extern "C" {static PyObject *meth_QFontMetrics_lineSpacing(PyObject *, PyObject *);}
static PyObject *meth_QFontMetrics_lineSpacing(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QFontMetrics *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontMetrics, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->lineSpacing();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetrics, sipName_lineSpacing, doc_QFontMetrics_lineSpacing);

    return NULL;
}


PyDoc_STRVAR(doc_QFontMetrics_minLeftBearing, "minLeftBearing(self) -> int");

extern "C" {static PyObject *meth_QFontMetrics_minLeftBearing(PyObject *, PyObject *);}
static PyObject *meth_QFontMetrics_minLeftBearing(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QFontMetrics *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontMetrics, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->minLeftBearing();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetrics, sipName_minLeftBearing, doc_QFontMetrics_minLeftBearing);

    return NULL;
}


PyDoc_STRVAR(doc_QFontMetrics_minRightBearing, "minRightBearing(self) -> int");

extern "C" {static PyObject *meth_QFontMetrics_minRightBearing(PyObject *, PyObject *);}
static PyObject *meth_QFontMetrics_minRightBearing(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QFontMetrics *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontMetrics, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->minRightBearing();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetrics, sipName_minRightBearing, doc_QFontMetrics_minRightBearing);

    return NULL;
}


PyDoc_STRVAR(doc_QFontMetrics_maxWidth, "maxWidth(self) -> int");

extern "C" {static PyObject *meth_QFontMetrics_maxWidth(PyObject *, PyObject *);}
static PyObject *meth_QFontMetrics_maxWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QFontMetrics *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontMetrics, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->maxWidth();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetrics, sipName_maxWidth, doc_QFontMetrics_maxWidth);

    return NULL;
}


PyDoc_STRVAR(doc_QFontMetrics_xHeight, "xHeight(self) -> int");

extern "C" {static PyObject *meth_QFontMetrics_xHeight(PyObject *, PyObject *);}
static PyObject *meth_QFontMetrics_xHeight(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QFontMetrics *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontMetrics, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->xHeight();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetrics, sipName_xHeight, doc_QFontMetrics_xHeight);

    return NULL;
}


PyDoc_STRVAR(doc_QFontMetrics_inFont, "inFont(self, QChar) -> bool");

extern "C" {static PyObject *meth_QFontMetrics_inFont(PyObject *, PyObject *);}
static PyObject *meth_QFontMetrics_inFont(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QChar* a0;
        int a0State = 0;
        const QFontMetrics *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QFontMetrics, &sipCpp, sipType_QChar,&a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->inFont(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QChar,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetrics, sipName_inFont, doc_QFontMetrics_inFont);

    return NULL;
}


PyDoc_STRVAR(doc_QFontMetrics_leftBearing, "leftBearing(self, QChar) -> int");

extern "C" {static PyObject *meth_QFontMetrics_leftBearing(PyObject *, PyObject *);}
static PyObject *meth_QFontMetrics_leftBearing(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QChar* a0;
        int a0State = 0;
        const QFontMetrics *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QFontMetrics, &sipCpp, sipType_QChar,&a0, &a0State))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->leftBearing(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QChar,a0State);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetrics, sipName_leftBearing, doc_QFontMetrics_leftBearing);

    return NULL;
}


PyDoc_STRVAR(doc_QFontMetrics_rightBearing, "rightBearing(self, QChar) -> int");

extern "C" {static PyObject *meth_QFontMetrics_rightBearing(PyObject *, PyObject *);}
static PyObject *meth_QFontMetrics_rightBearing(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QChar* a0;
        int a0State = 0;
        const QFontMetrics *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QFontMetrics, &sipCpp, sipType_QChar,&a0, &a0State))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->rightBearing(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QChar,a0State);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetrics, sipName_rightBearing, doc_QFontMetrics_rightBearing);

    return NULL;
}


extern "C" {static PyObject *meth_QFontMetrics_widthChar(PyObject *, PyObject *);}
static PyObject *meth_QFontMetrics_widthChar(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    if (sipIsAPIEnabled(sipName_QString, 2, 0))
    {
        QChar* a0;
        int a0State = 0;
        const QFontMetrics *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QFontMetrics, &sipCpp, sipType_QChar,&a0, &a0State))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->width(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QChar,a0State);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetrics, sipName_widthChar, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_QFontMetrics_width, "width(self, QChar) -> int\n"
    "width(self, QString, length: int = -1) -> int");

extern "C" {static PyObject *meth_QFontMetrics_width(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QFontMetrics_width(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    if (sipIsAPIEnabled(sipName_QString, 0, 2))
    {
        QChar* a0;
        int a0State = 0;
        const QFontMetrics *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ1", &sipSelf, sipType_QFontMetrics, &sipCpp, sipType_QChar,&a0, &a0State))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->width(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QChar,a0State);

            return SIPLong_FromLong(sipRes);
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        int a1 = -1;
        const QFontMetrics *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_length,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1|i", &sipSelf, sipType_QFontMetrics, &sipCpp, sipType_QString,&a0, &a0State, &a1))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->width(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetrics, sipName_width, doc_QFontMetrics_width);

    return NULL;
}


PyDoc_STRVAR(doc_QFontMetrics_charWidth, "charWidth(self, QString, int) -> int");

extern "C" {static PyObject *meth_QFontMetrics_charWidth(PyObject *, PyObject *);}
static PyObject *meth_QFontMetrics_charWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        int a1;
        const QFontMetrics *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1i", &sipSelf, sipType_QFontMetrics, &sipCpp, sipType_QString,&a0, &a0State, &a1))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->charWidth(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetrics, sipName_charWidth, doc_QFontMetrics_charWidth);

    return NULL;
}


extern "C" {static PyObject *meth_QFontMetrics_boundingRectChar(PyObject *, PyObject *);}
static PyObject *meth_QFontMetrics_boundingRectChar(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    if (sipIsAPIEnabled(sipName_QString, 2, 0))
    {
        QChar* a0;
        int a0State = 0;
        const QFontMetrics *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QFontMetrics, &sipCpp, sipType_QChar,&a0, &a0State))
        {
            QRect*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QRect(sipCpp->boundingRect(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QChar,a0State);

            return sipConvertFromNewType(sipRes,sipType_QRect,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetrics, sipName_boundingRectChar, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_QFontMetrics_boundingRect, "boundingRect(self, QChar) -> QRect\n"
    "boundingRect(self, QString) -> QRect\n"
    "boundingRect(self, QRect, int, QString, tabStops: int = 0, tabArray: List = 0) -> QRect\n"
    "boundingRect(self, int, int, int, int, int, QString, tabStops: int = 0, tabArray: List = 0) -> QRect");

extern "C" {static PyObject *meth_QFontMetrics_boundingRect(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QFontMetrics_boundingRect(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    if (sipIsAPIEnabled(sipName_QString, 0, 2))
    {
        QChar* a0;
        int a0State = 0;
        const QFontMetrics *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ1", &sipSelf, sipType_QFontMetrics, &sipCpp, sipType_QChar,&a0, &a0State))
        {
            QRect*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QRect(sipCpp->boundingRect(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QChar,a0State);

            return sipConvertFromNewType(sipRes,sipType_QRect,NULL);
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        const QFontMetrics *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ1", &sipSelf, sipType_QFontMetrics, &sipCpp, sipType_QString,&a0, &a0State))
        {
            QRect*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QRect(sipCpp->boundingRect(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QRect,NULL);
        }
    }

    {
        const QRect* a0;
        int a1;
        const QString* a2;
        int a2State = 0;
        int a3 = 0;
        PyObject * a4 = 0;
        const QFontMetrics *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            NULL,
            sipName_tabStops,
            sipName_tabArray,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ9iJ1|iN", &sipSelf, sipType_QFontMetrics, &sipCpp, sipType_QRect, &a0, &a1, sipType_QString,&a2, &a2State, &a3, &PyList_Type, &a4))
        {
            QRect*sipRes = 0;

#line 60 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qfontmetrics.sip"
        int *tabarray = qtgui_tabarray(a4);
        
        sipRes = new QRect(sipCpp->boundingRect(*a0, a1, *a2, a3, tabarray));
        
        if (!tabarray)
            delete[] tabarray;
#line 658 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQFontMetrics.cpp"
            sipReleaseType(const_cast<QString *>(a2),sipType_QString,a2State);

            return sipConvertFromNewType(sipRes,sipType_QRect,NULL);
        }
    }

    {
        int a0;
        int a1;
        int a2;
        int a3;
        int a4;
        const QString* a5;
        int a5State = 0;
        int a6 = 0;
        PyObject * a7 = 0;
        const QFontMetrics *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            NULL,
            NULL,
            NULL,
            NULL,
            sipName_tabStops,
            sipName_tabArray,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BiiiiiJ1|iN", &sipSelf, sipType_QFontMetrics, &sipCpp, &a0, &a1, &a2, &a3, &a4, sipType_QString,&a5, &a5State, &a6, &PyList_Type, &a7))
        {
            QRect*sipRes = 0;

#line 70 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qfontmetrics.sip"
        int *tabarray = qtgui_tabarray(a7);
        
        sipRes = new QRect(sipCpp->boundingRect(a0, a1, a2, a3, a4, *a5, a6, tabarray));
        
        if (!tabarray)
            delete[] tabarray;
#line 699 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQFontMetrics.cpp"
            sipReleaseType(const_cast<QString *>(a5),sipType_QString,a5State);

            return sipConvertFromNewType(sipRes,sipType_QRect,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetrics, sipName_boundingRect, doc_QFontMetrics_boundingRect);

    return NULL;
}


PyDoc_STRVAR(doc_QFontMetrics_size, "size(self, int, QString, tabStops: int = 0, tabArray: List = 0) -> QSize");

extern "C" {static PyObject *meth_QFontMetrics_size(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QFontMetrics_size(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QString* a1;
        int a1State = 0;
        int a2 = 0;
        PyObject * a3 = 0;
        const QFontMetrics *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_tabStops,
            sipName_tabArray,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BiJ1|iN", &sipSelf, sipType_QFontMetrics, &sipCpp, &a0, sipType_QString,&a1, &a1State, &a2, &PyList_Type, &a3))
        {
            QSize*sipRes = 0;

#line 80 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qfontmetrics.sip"
        int *tabarray = qtgui_tabarray(a3);
        
        sipRes = new QSize(sipCpp->size(a0, *a1, a2, tabarray));
        
        if (!tabarray)
            delete[] tabarray;
#line 747 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQFontMetrics.cpp"
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetrics, sipName_size, doc_QFontMetrics_size);

    return NULL;
}


PyDoc_STRVAR(doc_QFontMetrics_underlinePos, "underlinePos(self) -> int");

extern "C" {static PyObject *meth_QFontMetrics_underlinePos(PyObject *, PyObject *);}
static PyObject *meth_QFontMetrics_underlinePos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QFontMetrics *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontMetrics, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->underlinePos();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetrics, sipName_underlinePos, doc_QFontMetrics_underlinePos);

    return NULL;
}


PyDoc_STRVAR(doc_QFontMetrics_overlinePos, "overlinePos(self) -> int");

extern "C" {static PyObject *meth_QFontMetrics_overlinePos(PyObject *, PyObject *);}
static PyObject *meth_QFontMetrics_overlinePos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QFontMetrics *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontMetrics, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->overlinePos();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetrics, sipName_overlinePos, doc_QFontMetrics_overlinePos);

    return NULL;
}


PyDoc_STRVAR(doc_QFontMetrics_strikeOutPos, "strikeOutPos(self) -> int");

extern "C" {static PyObject *meth_QFontMetrics_strikeOutPos(PyObject *, PyObject *);}
static PyObject *meth_QFontMetrics_strikeOutPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QFontMetrics *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontMetrics, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->strikeOutPos();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetrics, sipName_strikeOutPos, doc_QFontMetrics_strikeOutPos);

    return NULL;
}


PyDoc_STRVAR(doc_QFontMetrics_lineWidth, "lineWidth(self) -> int");

extern "C" {static PyObject *meth_QFontMetrics_lineWidth(PyObject *, PyObject *);}
static PyObject *meth_QFontMetrics_lineWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QFontMetrics *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontMetrics, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->lineWidth();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetrics, sipName_lineWidth, doc_QFontMetrics_lineWidth);

    return NULL;
}


PyDoc_STRVAR(doc_QFontMetrics_averageCharWidth, "averageCharWidth(self) -> int");

extern "C" {static PyObject *meth_QFontMetrics_averageCharWidth(PyObject *, PyObject *);}
static PyObject *meth_QFontMetrics_averageCharWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QFontMetrics *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontMetrics, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->averageCharWidth();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetrics, sipName_averageCharWidth, doc_QFontMetrics_averageCharWidth);

    return NULL;
}


PyDoc_STRVAR(doc_QFontMetrics_elidedText, "elidedText(self, QString, Qt.TextElideMode, int, flags: int = 0) -> QString");

extern "C" {static PyObject *meth_QFontMetrics_elidedText(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QFontMetrics_elidedText(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        Qt::TextElideMode a1;
        int a2;
        int a3 = 0;
        const QFontMetrics *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            NULL,
            sipName_flags,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1Ei|i", &sipSelf, sipType_QFontMetrics, &sipCpp, sipType_QString,&a0, &a0State, sipType_Qt_TextElideMode, &a1, &a2, &a3))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->elidedText(*a0,a1,a2,a3));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetrics, sipName_elidedText, doc_QFontMetrics_elidedText);

    return NULL;
}


PyDoc_STRVAR(doc_QFontMetrics_tightBoundingRect, "tightBoundingRect(self, QString) -> QRect");

extern "C" {static PyObject *meth_QFontMetrics_tightBoundingRect(PyObject *, PyObject *);}
static PyObject *meth_QFontMetrics_tightBoundingRect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QFontMetrics *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QFontMetrics, &sipCpp, sipType_QString,&a0, &a0State))
        {
            QRect*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QRect(sipCpp->tightBoundingRect(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QRect,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetrics, sipName_tightBoundingRect, doc_QFontMetrics_tightBoundingRect);

    return NULL;
}


PyDoc_STRVAR(doc_QFontMetrics_inFontUcs4, "inFontUcs4(self, int) -> bool");

extern "C" {static PyObject *meth_QFontMetrics_inFontUcs4(PyObject *, PyObject *);}
static PyObject *meth_QFontMetrics_inFontUcs4(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        uint a0;
        const QFontMetrics *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bu", &sipSelf, sipType_QFontMetrics, &sipCpp, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->inFontUcs4(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetrics, sipName_inFontUcs4, doc_QFontMetrics_inFontUcs4);

    return NULL;
}


extern "C" {static PyObject *slot_QFontMetrics___ne__(PyObject *,PyObject *);}
static PyObject *slot_QFontMetrics___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QFontMetrics *sipCpp = reinterpret_cast<QFontMetrics *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFontMetrics));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QFontMetrics* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QFontMetrics, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QFontMetrics::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QFontMetrics,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QFontMetrics___eq__(PyObject *,PyObject *);}
static PyObject *slot_QFontMetrics___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QFontMetrics *sipCpp = reinterpret_cast<QFontMetrics *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFontMetrics));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QFontMetrics* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QFontMetrics, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QFontMetrics::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QFontMetrics,sipSelf,sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QFontMetrics(void *, int);}
static void release_QFontMetrics(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QFontMetrics *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QFontMetrics(sipSimpleWrapper *);}
static void dealloc_QFontMetrics(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QFontMetrics(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QFontMetrics(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QFontMetrics(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QFontMetrics *sipCpp = 0;

    {
        const QFont* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QFont, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QFontMetrics(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QFont* a0;
        QPaintDevice* a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9J8", sipType_QFont, &a0, sipType_QPaintDevice, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QFontMetrics(*a0,a1);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QFontMetrics* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QFontMetrics, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QFontMetrics(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QFontMetrics[] = {
    {(void *)slot_QFontMetrics___ne__, ne_slot},
    {(void *)slot_QFontMetrics___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QFontMetrics[] = {
    {SIP_MLNAME_CAST(sipName_ascent), meth_QFontMetrics_ascent, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontMetrics_ascent)},
    {SIP_MLNAME_CAST(sipName_averageCharWidth), meth_QFontMetrics_averageCharWidth, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontMetrics_averageCharWidth)},
    {SIP_MLNAME_CAST(sipName_boundingRect), (PyCFunction)meth_QFontMetrics_boundingRect, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QFontMetrics_boundingRect)},
    {SIP_MLNAME_CAST(sipName_boundingRectChar), meth_QFontMetrics_boundingRectChar, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_charWidth), meth_QFontMetrics_charWidth, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontMetrics_charWidth)},
    {SIP_MLNAME_CAST(sipName_descent), meth_QFontMetrics_descent, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontMetrics_descent)},
    {SIP_MLNAME_CAST(sipName_elidedText), (PyCFunction)meth_QFontMetrics_elidedText, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QFontMetrics_elidedText)},
    {SIP_MLNAME_CAST(sipName_height), meth_QFontMetrics_height, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontMetrics_height)},
    {SIP_MLNAME_CAST(sipName_inFont), meth_QFontMetrics_inFont, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontMetrics_inFont)},
    {SIP_MLNAME_CAST(sipName_inFontUcs4), meth_QFontMetrics_inFontUcs4, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontMetrics_inFontUcs4)},
    {SIP_MLNAME_CAST(sipName_leading), meth_QFontMetrics_leading, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontMetrics_leading)},
    {SIP_MLNAME_CAST(sipName_leftBearing), meth_QFontMetrics_leftBearing, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontMetrics_leftBearing)},
    {SIP_MLNAME_CAST(sipName_lineSpacing), meth_QFontMetrics_lineSpacing, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontMetrics_lineSpacing)},
    {SIP_MLNAME_CAST(sipName_lineWidth), meth_QFontMetrics_lineWidth, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontMetrics_lineWidth)},
    {SIP_MLNAME_CAST(sipName_maxWidth), meth_QFontMetrics_maxWidth, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontMetrics_maxWidth)},
    {SIP_MLNAME_CAST(sipName_minLeftBearing), meth_QFontMetrics_minLeftBearing, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontMetrics_minLeftBearing)},
    {SIP_MLNAME_CAST(sipName_minRightBearing), meth_QFontMetrics_minRightBearing, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontMetrics_minRightBearing)},
    {SIP_MLNAME_CAST(sipName_overlinePos), meth_QFontMetrics_overlinePos, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontMetrics_overlinePos)},
    {SIP_MLNAME_CAST(sipName_rightBearing), meth_QFontMetrics_rightBearing, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontMetrics_rightBearing)},
    {SIP_MLNAME_CAST(sipName_size), (PyCFunction)meth_QFontMetrics_size, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QFontMetrics_size)},
    {SIP_MLNAME_CAST(sipName_strikeOutPos), meth_QFontMetrics_strikeOutPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontMetrics_strikeOutPos)},
    {SIP_MLNAME_CAST(sipName_tightBoundingRect), meth_QFontMetrics_tightBoundingRect, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontMetrics_tightBoundingRect)},
    {SIP_MLNAME_CAST(sipName_underlinePos), meth_QFontMetrics_underlinePos, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontMetrics_underlinePos)},
    {SIP_MLNAME_CAST(sipName_width), (PyCFunction)meth_QFontMetrics_width, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QFontMetrics_width)},
    {SIP_MLNAME_CAST(sipName_widthChar), meth_QFontMetrics_widthChar, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_xHeight), meth_QFontMetrics_xHeight, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontMetrics_xHeight)}
};

PyDoc_STRVAR(doc_QFontMetrics, "\1QFontMetrics(QFont)\n"
    "QFontMetrics(QFont, QPaintDevice)\n"
    "QFontMetrics(QFontMetrics)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QFontMetrics = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QFontMetrics,
        {0}
    },
    {
        sipNameNr_QFontMetrics,
        {0, 0, 1},
        26, methods_QFontMetrics,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QFontMetrics,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QFontMetrics,
    init_type_QFontMetrics,
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
    dealloc_QFontMetrics,
    0,
    0,
    0,
    release_QFontMetrics,
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
