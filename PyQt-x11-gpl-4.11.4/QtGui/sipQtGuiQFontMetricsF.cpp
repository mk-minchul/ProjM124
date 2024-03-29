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

#line 119 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qfontmetrics.sip"
#include <qfontmetrics.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQFontMetricsF.cpp"

#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qfont.sip"
#include <qfont.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQFontMetricsF.cpp"
#line 26 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qpaintdevice.sip"
#include <qpaintdevice.h>
#line 36 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQFontMetricsF.cpp"
#line 26 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qfontmetrics.sip"
#include <qfontmetrics.h>
#line 39 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQFontMetricsF.cpp"
#line 163 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 42 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQFontMetricsF.cpp"
#line 31 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 45 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQFontMetricsF.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 48 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQFontMetricsF.cpp"
#line 107 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 51 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQFontMetricsF.cpp"
#line 67 "sip/QtCore/qchar.sip"
#include <qchar.h>
#line 54 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQFontMetricsF.cpp"


PyDoc_STRVAR(doc_QFontMetricsF_ascent, "ascent(self) -> float");

extern "C" {static PyObject *meth_QFontMetricsF_ascent(PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_ascent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QFontMetricsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontMetricsF, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->ascent();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_ascent, doc_QFontMetricsF_ascent);

    return NULL;
}


PyDoc_STRVAR(doc_QFontMetricsF_descent, "descent(self) -> float");

extern "C" {static PyObject *meth_QFontMetricsF_descent(PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_descent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QFontMetricsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontMetricsF, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->descent();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_descent, doc_QFontMetricsF_descent);

    return NULL;
}


PyDoc_STRVAR(doc_QFontMetricsF_height, "height(self) -> float");

extern "C" {static PyObject *meth_QFontMetricsF_height(PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_height(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QFontMetricsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontMetricsF, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->height();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_height, doc_QFontMetricsF_height);

    return NULL;
}


PyDoc_STRVAR(doc_QFontMetricsF_leading, "leading(self) -> float");

extern "C" {static PyObject *meth_QFontMetricsF_leading(PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_leading(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QFontMetricsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontMetricsF, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->leading();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_leading, doc_QFontMetricsF_leading);

    return NULL;
}


PyDoc_STRVAR(doc_QFontMetricsF_lineSpacing, "lineSpacing(self) -> float");

extern "C" {static PyObject *meth_QFontMetricsF_lineSpacing(PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_lineSpacing(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QFontMetricsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontMetricsF, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->lineSpacing();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_lineSpacing, doc_QFontMetricsF_lineSpacing);

    return NULL;
}


PyDoc_STRVAR(doc_QFontMetricsF_minLeftBearing, "minLeftBearing(self) -> float");

extern "C" {static PyObject *meth_QFontMetricsF_minLeftBearing(PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_minLeftBearing(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QFontMetricsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontMetricsF, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->minLeftBearing();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_minLeftBearing, doc_QFontMetricsF_minLeftBearing);

    return NULL;
}


PyDoc_STRVAR(doc_QFontMetricsF_minRightBearing, "minRightBearing(self) -> float");

extern "C" {static PyObject *meth_QFontMetricsF_minRightBearing(PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_minRightBearing(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QFontMetricsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontMetricsF, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->minRightBearing();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_minRightBearing, doc_QFontMetricsF_minRightBearing);

    return NULL;
}


PyDoc_STRVAR(doc_QFontMetricsF_maxWidth, "maxWidth(self) -> float");

extern "C" {static PyObject *meth_QFontMetricsF_maxWidth(PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_maxWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QFontMetricsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontMetricsF, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->maxWidth();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_maxWidth, doc_QFontMetricsF_maxWidth);

    return NULL;
}


PyDoc_STRVAR(doc_QFontMetricsF_xHeight, "xHeight(self) -> float");

extern "C" {static PyObject *meth_QFontMetricsF_xHeight(PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_xHeight(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QFontMetricsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontMetricsF, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->xHeight();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_xHeight, doc_QFontMetricsF_xHeight);

    return NULL;
}


PyDoc_STRVAR(doc_QFontMetricsF_inFont, "inFont(self, QChar) -> bool");

extern "C" {static PyObject *meth_QFontMetricsF_inFont(PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_inFont(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QChar* a0;
        int a0State = 0;
        const QFontMetricsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QFontMetricsF, &sipCpp, sipType_QChar,&a0, &a0State))
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
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_inFont, doc_QFontMetricsF_inFont);

    return NULL;
}


PyDoc_STRVAR(doc_QFontMetricsF_leftBearing, "leftBearing(self, QChar) -> float");

extern "C" {static PyObject *meth_QFontMetricsF_leftBearing(PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_leftBearing(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QChar* a0;
        int a0State = 0;
        const QFontMetricsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QFontMetricsF, &sipCpp, sipType_QChar,&a0, &a0State))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->leftBearing(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QChar,a0State);

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_leftBearing, doc_QFontMetricsF_leftBearing);

    return NULL;
}


PyDoc_STRVAR(doc_QFontMetricsF_rightBearing, "rightBearing(self, QChar) -> float");

extern "C" {static PyObject *meth_QFontMetricsF_rightBearing(PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_rightBearing(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QChar* a0;
        int a0State = 0;
        const QFontMetricsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QFontMetricsF, &sipCpp, sipType_QChar,&a0, &a0State))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->rightBearing(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QChar,a0State);

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_rightBearing, doc_QFontMetricsF_rightBearing);

    return NULL;
}


extern "C" {static PyObject *meth_QFontMetricsF_widthChar(PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_widthChar(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    if (sipIsAPIEnabled(sipName_QString, 2, 0))
    {
        QChar* a0;
        int a0State = 0;
        const QFontMetricsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QFontMetricsF, &sipCpp, sipType_QChar,&a0, &a0State))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->width(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QChar,a0State);

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_widthChar, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_QFontMetricsF_width, "width(self, QChar) -> float\n"
    "width(self, QString) -> float");

extern "C" {static PyObject *meth_QFontMetricsF_width(PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_width(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    if (sipIsAPIEnabled(sipName_QString, 0, 2))
    {
        QChar* a0;
        int a0State = 0;
        const QFontMetricsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QFontMetricsF, &sipCpp, sipType_QChar,&a0, &a0State))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->width(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QChar,a0State);

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        const QFontMetricsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QFontMetricsF, &sipCpp, sipType_QString,&a0, &a0State))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->width(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_width, doc_QFontMetricsF_width);

    return NULL;
}


extern "C" {static PyObject *meth_QFontMetricsF_boundingRectChar(PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_boundingRectChar(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    if (sipIsAPIEnabled(sipName_QString, 2, 0))
    {
        QChar* a0;
        int a0State = 0;
        const QFontMetricsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QFontMetricsF, &sipCpp, sipType_QChar,&a0, &a0State))
        {
            QRectF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QRectF(sipCpp->boundingRect(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QChar,a0State);

            return sipConvertFromNewType(sipRes,sipType_QRectF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_boundingRectChar, NULL);

    return NULL;
}


PyDoc_STRVAR(doc_QFontMetricsF_boundingRect, "boundingRect(self, QChar) -> QRectF\n"
    "boundingRect(self, QString) -> QRectF\n"
    "boundingRect(self, QRectF, int, QString, tabStops: int = 0, tabArray: List = 0) -> QRectF");

extern "C" {static PyObject *meth_QFontMetricsF_boundingRect(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_boundingRect(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    if (sipIsAPIEnabled(sipName_QString, 0, 2))
    {
        QChar* a0;
        int a0State = 0;
        const QFontMetricsF *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ1", &sipSelf, sipType_QFontMetricsF, &sipCpp, sipType_QChar,&a0, &a0State))
        {
            QRectF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QRectF(sipCpp->boundingRect(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QChar,a0State);

            return sipConvertFromNewType(sipRes,sipType_QRectF,NULL);
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        const QFontMetricsF *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ1", &sipSelf, sipType_QFontMetricsF, &sipCpp, sipType_QString,&a0, &a0State))
        {
            QRectF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QRectF(sipCpp->boundingRect(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QRectF,NULL);
        }
    }

    {
        const QRectF* a0;
        int a1;
        const QString* a2;
        int a2State = 0;
        int a3 = 0;
        PyObject * a4 = 0;
        const QFontMetricsF *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            NULL,
            sipName_tabStops,
            sipName_tabArray,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ9iJ1|iN", &sipSelf, sipType_QFontMetricsF, &sipCpp, sipType_QRectF, &a0, &a1, sipType_QString,&a2, &a2State, &a3, &PyList_Type, &a4))
        {
            QRectF*sipRes = 0;

#line 155 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qfontmetrics.sip"
        int *tabarray = qtgui_tabarray(a4);
        
        sipRes = new QRectF(sipCpp->boundingRect(*a0, a1, *a2, a3, tabarray));
        
        if (!tabarray)
            delete[] tabarray;
#line 619 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQFontMetricsF.cpp"
            sipReleaseType(const_cast<QString *>(a2),sipType_QString,a2State);

            return sipConvertFromNewType(sipRes,sipType_QRectF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_boundingRect, doc_QFontMetricsF_boundingRect);

    return NULL;
}


PyDoc_STRVAR(doc_QFontMetricsF_size, "size(self, int, QString, tabStops: int = 0, tabArray: List = 0) -> QSizeF");

extern "C" {static PyObject *meth_QFontMetricsF_size(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_size(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QString* a1;
        int a1State = 0;
        int a2 = 0;
        PyObject * a3 = 0;
        const QFontMetricsF *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_tabStops,
            sipName_tabArray,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BiJ1|iN", &sipSelf, sipType_QFontMetricsF, &sipCpp, &a0, sipType_QString,&a1, &a1State, &a2, &PyList_Type, &a3))
        {
            QSizeF*sipRes = 0;

#line 165 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qfontmetrics.sip"
        int *tabarray = qtgui_tabarray(a3);
        
        sipRes = new QSizeF(sipCpp->size(a0, *a1, a2, tabarray));
        
        if (!tabarray)
            delete[] tabarray;
#line 667 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQFontMetricsF.cpp"
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QSizeF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_size, doc_QFontMetricsF_size);

    return NULL;
}


PyDoc_STRVAR(doc_QFontMetricsF_underlinePos, "underlinePos(self) -> float");

extern "C" {static PyObject *meth_QFontMetricsF_underlinePos(PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_underlinePos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QFontMetricsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontMetricsF, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->underlinePos();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_underlinePos, doc_QFontMetricsF_underlinePos);

    return NULL;
}


PyDoc_STRVAR(doc_QFontMetricsF_overlinePos, "overlinePos(self) -> float");

extern "C" {static PyObject *meth_QFontMetricsF_overlinePos(PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_overlinePos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QFontMetricsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontMetricsF, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->overlinePos();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_overlinePos, doc_QFontMetricsF_overlinePos);

    return NULL;
}


PyDoc_STRVAR(doc_QFontMetricsF_strikeOutPos, "strikeOutPos(self) -> float");

extern "C" {static PyObject *meth_QFontMetricsF_strikeOutPos(PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_strikeOutPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QFontMetricsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontMetricsF, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->strikeOutPos();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_strikeOutPos, doc_QFontMetricsF_strikeOutPos);

    return NULL;
}


PyDoc_STRVAR(doc_QFontMetricsF_lineWidth, "lineWidth(self) -> float");

extern "C" {static PyObject *meth_QFontMetricsF_lineWidth(PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_lineWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QFontMetricsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontMetricsF, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->lineWidth();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_lineWidth, doc_QFontMetricsF_lineWidth);

    return NULL;
}


PyDoc_STRVAR(doc_QFontMetricsF_averageCharWidth, "averageCharWidth(self) -> float");

extern "C" {static PyObject *meth_QFontMetricsF_averageCharWidth(PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_averageCharWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QFontMetricsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFontMetricsF, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->averageCharWidth();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_averageCharWidth, doc_QFontMetricsF_averageCharWidth);

    return NULL;
}


PyDoc_STRVAR(doc_QFontMetricsF_elidedText, "elidedText(self, QString, Qt.TextElideMode, float, flags: int = 0) -> QString");

extern "C" {static PyObject *meth_QFontMetricsF_elidedText(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_elidedText(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        Qt::TextElideMode a1;
        qreal a2;
        int a3 = 0;
        const QFontMetricsF *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            NULL,
            sipName_flags,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1Ef|i", &sipSelf, sipType_QFontMetricsF, &sipCpp, sipType_QString,&a0, &a0State, sipType_Qt_TextElideMode, &a1, &a2, &a3))
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
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_elidedText, doc_QFontMetricsF_elidedText);

    return NULL;
}


PyDoc_STRVAR(doc_QFontMetricsF_tightBoundingRect, "tightBoundingRect(self, QString) -> QRectF");

extern "C" {static PyObject *meth_QFontMetricsF_tightBoundingRect(PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_tightBoundingRect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QFontMetricsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QFontMetricsF, &sipCpp, sipType_QString,&a0, &a0State))
        {
            QRectF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QRectF(sipCpp->tightBoundingRect(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QRectF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_tightBoundingRect, doc_QFontMetricsF_tightBoundingRect);

    return NULL;
}


PyDoc_STRVAR(doc_QFontMetricsF_inFontUcs4, "inFontUcs4(self, int) -> bool");

extern "C" {static PyObject *meth_QFontMetricsF_inFontUcs4(PyObject *, PyObject *);}
static PyObject *meth_QFontMetricsF_inFontUcs4(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        uint a0;
        const QFontMetricsF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bu", &sipSelf, sipType_QFontMetricsF, &sipCpp, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->inFontUcs4(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFontMetricsF, sipName_inFontUcs4, doc_QFontMetricsF_inFontUcs4);

    return NULL;
}


extern "C" {static PyObject *slot_QFontMetricsF___ne__(PyObject *,PyObject *);}
static PyObject *slot_QFontMetricsF___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QFontMetricsF *sipCpp = reinterpret_cast<QFontMetricsF *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFontMetricsF));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QFontMetricsF* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QFontMetricsF, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QFontMetricsF::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QFontMetricsF,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QFontMetricsF___eq__(PyObject *,PyObject *);}
static PyObject *slot_QFontMetricsF___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QFontMetricsF *sipCpp = reinterpret_cast<QFontMetricsF *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFontMetricsF));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QFontMetricsF* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QFontMetricsF, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QFontMetricsF::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QFontMetricsF,sipSelf,sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QFontMetricsF(void *, int);}
static void release_QFontMetricsF(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QFontMetricsF *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QFontMetricsF(sipSimpleWrapper *);}
static void dealloc_QFontMetricsF(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QFontMetricsF(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QFontMetricsF(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QFontMetricsF(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QFontMetricsF *sipCpp = 0;

    {
        const QFont* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QFont, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QFontMetricsF(*a0);
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
            sipCpp = new QFontMetricsF(*a0,a1);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QFontMetrics* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QFontMetrics, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QFontMetricsF(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QFontMetricsF* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QFontMetricsF, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QFontMetricsF(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QFontMetricsF[] = {
    {(void *)slot_QFontMetricsF___ne__, ne_slot},
    {(void *)slot_QFontMetricsF___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QFontMetricsF[] = {
    {SIP_MLNAME_CAST(sipName_ascent), meth_QFontMetricsF_ascent, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontMetricsF_ascent)},
    {SIP_MLNAME_CAST(sipName_averageCharWidth), meth_QFontMetricsF_averageCharWidth, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontMetricsF_averageCharWidth)},
    {SIP_MLNAME_CAST(sipName_boundingRect), (PyCFunction)meth_QFontMetricsF_boundingRect, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QFontMetricsF_boundingRect)},
    {SIP_MLNAME_CAST(sipName_boundingRectChar), meth_QFontMetricsF_boundingRectChar, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_descent), meth_QFontMetricsF_descent, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontMetricsF_descent)},
    {SIP_MLNAME_CAST(sipName_elidedText), (PyCFunction)meth_QFontMetricsF_elidedText, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QFontMetricsF_elidedText)},
    {SIP_MLNAME_CAST(sipName_height), meth_QFontMetricsF_height, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontMetricsF_height)},
    {SIP_MLNAME_CAST(sipName_inFont), meth_QFontMetricsF_inFont, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontMetricsF_inFont)},
    {SIP_MLNAME_CAST(sipName_inFontUcs4), meth_QFontMetricsF_inFontUcs4, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontMetricsF_inFontUcs4)},
    {SIP_MLNAME_CAST(sipName_leading), meth_QFontMetricsF_leading, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontMetricsF_leading)},
    {SIP_MLNAME_CAST(sipName_leftBearing), meth_QFontMetricsF_leftBearing, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontMetricsF_leftBearing)},
    {SIP_MLNAME_CAST(sipName_lineSpacing), meth_QFontMetricsF_lineSpacing, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontMetricsF_lineSpacing)},
    {SIP_MLNAME_CAST(sipName_lineWidth), meth_QFontMetricsF_lineWidth, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontMetricsF_lineWidth)},
    {SIP_MLNAME_CAST(sipName_maxWidth), meth_QFontMetricsF_maxWidth, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontMetricsF_maxWidth)},
    {SIP_MLNAME_CAST(sipName_minLeftBearing), meth_QFontMetricsF_minLeftBearing, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontMetricsF_minLeftBearing)},
    {SIP_MLNAME_CAST(sipName_minRightBearing), meth_QFontMetricsF_minRightBearing, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontMetricsF_minRightBearing)},
    {SIP_MLNAME_CAST(sipName_overlinePos), meth_QFontMetricsF_overlinePos, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontMetricsF_overlinePos)},
    {SIP_MLNAME_CAST(sipName_rightBearing), meth_QFontMetricsF_rightBearing, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontMetricsF_rightBearing)},
    {SIP_MLNAME_CAST(sipName_size), (PyCFunction)meth_QFontMetricsF_size, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QFontMetricsF_size)},
    {SIP_MLNAME_CAST(sipName_strikeOutPos), meth_QFontMetricsF_strikeOutPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontMetricsF_strikeOutPos)},
    {SIP_MLNAME_CAST(sipName_tightBoundingRect), meth_QFontMetricsF_tightBoundingRect, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontMetricsF_tightBoundingRect)},
    {SIP_MLNAME_CAST(sipName_underlinePos), meth_QFontMetricsF_underlinePos, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontMetricsF_underlinePos)},
    {SIP_MLNAME_CAST(sipName_width), meth_QFontMetricsF_width, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontMetricsF_width)},
    {SIP_MLNAME_CAST(sipName_widthChar), meth_QFontMetricsF_widthChar, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_xHeight), meth_QFontMetricsF_xHeight, METH_VARARGS, SIP_MLDOC_CAST(doc_QFontMetricsF_xHeight)}
};

PyDoc_STRVAR(doc_QFontMetricsF, "\1QFontMetricsF(QFont)\n"
    "QFontMetricsF(QFont, QPaintDevice)\n"
    "QFontMetricsF(QFontMetrics)\n"
    "QFontMetricsF(QFontMetricsF)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QFontMetricsF = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QFontMetricsF,
        {0}
    },
    {
        sipNameNr_QFontMetricsF,
        {0, 0, 1},
        25, methods_QFontMetricsF,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QFontMetricsF,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QFontMetricsF,
    init_type_QFontMetricsF,
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
    dealloc_QFontMetricsF,
    0,
    0,
    0,
    release_QFontMetricsF,
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
