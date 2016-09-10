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

#line 28 "sip/QtCore/qvector.sip"
#include <qvector.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQVector0100QTextFormat.cpp"

#line 69 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQVector0100QTextFormat.cpp"


extern "C" {static void assign_QVector_0100QTextFormat(void *, SIP_SSIZE_T, const void *);}
static void assign_QVector_0100QTextFormat(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QVector<QTextFormat> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QVector<QTextFormat> *>(sipSrc);
}


extern "C" {static void *array_QVector_0100QTextFormat(SIP_SSIZE_T);}
static void *array_QVector_0100QTextFormat(SIP_SSIZE_T sipNrElem)
{
    return new QVector<QTextFormat>[sipNrElem];
}


extern "C" {static void *copy_QVector_0100QTextFormat(const void *, SIP_SSIZE_T);}
static void *copy_QVector_0100QTextFormat(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QVector<QTextFormat>(reinterpret_cast<const QVector<QTextFormat> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QVector_0100QTextFormat(void *, int);}
static void release_QVector_0100QTextFormat(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QVector<QTextFormat> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QVector_0100QTextFormat(PyObject *, void **, int *, PyObject *);}
static int convertTo_QVector_0100QTextFormat(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QVector<QTextFormat> **sipCppPtr = reinterpret_cast<QVector<QTextFormat> **>(sipCppPtrV);

#line 59 "sip/QtCore/qvector.sip"
    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PyList_Check(sipPy))
            return 0;

        for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i)
            if (!sipCanConvertToType(PyList_GET_ITEM(sipPy, i), sipType_QTextFormat, SIP_NOT_NONE))
                return 0;

        return 1;
    }

    QVector<QTextFormat> *qv = new QVector<QTextFormat>;
 
    for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i)
    {
        int state;
        QTextFormat *t = reinterpret_cast<QTextFormat *>(sipConvertToType(PyList_GET_ITEM(sipPy, i), sipType_QTextFormat, sipTransferObj, SIP_NOT_NONE, &state, sipIsErr));
 
        if (*sipIsErr)
        {
            sipReleaseType(t, sipType_QTextFormat, state);

            delete qv;
            return 0;
        }

        qv->append(*t);

        sipReleaseType(t, sipType_QTextFormat, state);
    }
 
    *sipCppPtr = qv;
 
    return sipGetState(sipTransferObj);
#line 110 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQVector0100QTextFormat.cpp"
}


extern "C" {static PyObject *convertFrom_QVector_0100QTextFormat(void *, PyObject *);}
static PyObject *convertFrom_QVector_0100QTextFormat(void *sipCppV, PyObject *sipTransferObj)
{
   QVector<QTextFormat> *sipCpp = reinterpret_cast<QVector<QTextFormat> *>(sipCppV);

#line 32 "sip/QtCore/qvector.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QTextFormat *t = new QTextFormat(sipCpp->at(i));
        PyObject *tobj;

        if ((tobj = sipConvertFromNewType(t, sipType_QTextFormat, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            delete t;

            return NULL;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 144 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQVector0100QTextFormat.cpp"
}


sipMappedTypeDef sipTypeDef_QtGui_QVector_0100QTextFormat = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_25752,
        {0}
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QVector_0100QTextFormat,
    array_QVector_0100QTextFormat,
    copy_QVector_0100QTextFormat,
    release_QVector_0100QTextFormat,
    convertTo_QVector_0100QTextFormat,
    convertFrom_QVector_0100QTextFormat
};
