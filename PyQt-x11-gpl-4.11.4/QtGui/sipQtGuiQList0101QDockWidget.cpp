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

#line 115 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQList0101QDockWidget.cpp"

#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qdockwidget.sip"
#include <qdockwidget.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQList0101QDockWidget.cpp"


extern "C" {static void assign_QList_0101QDockWidget(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0101QDockWidget(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QDockWidget*> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QDockWidget*> *>(sipSrc);
}


extern "C" {static void *array_QList_0101QDockWidget(SIP_SSIZE_T);}
static void *array_QList_0101QDockWidget(SIP_SSIZE_T sipNrElem)
{
    return new QList<QDockWidget*>[sipNrElem];
}


extern "C" {static void *copy_QList_0101QDockWidget(const void *, SIP_SSIZE_T);}
static void *copy_QList_0101QDockWidget(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QDockWidget*>(reinterpret_cast<const QList<QDockWidget*> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0101QDockWidget(void *, int);}
static void release_QList_0101QDockWidget(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QList<QDockWidget*> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QList_0101QDockWidget(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0101QDockWidget(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QDockWidget*> **sipCppPtr = reinterpret_cast<QList<QDockWidget*> **>(sipCppPtrV);

#line 145 "sip/QtCore/qlist.sip"
    SIP_SSIZE_T len;

    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PySequence_Check(sipPy) || (len = PySequence_Size(sipPy)) < 0)
            return 0;

        for (SIP_SSIZE_T i = 0; i < len; ++i)
        {
            PyObject *itm = PySequence_ITEM(sipPy, i);
            bool ok = (itm && sipCanConvertToType(itm, sipType_QDockWidget, 0));

            Py_XDECREF(itm);

            if (!ok)
                return 0;
        }

        return 1;
    }

    QList<QDockWidget *> *ql = new QList<QDockWidget *>;
    len = PySequence_Size(sipPy);
 
    for (SIP_SSIZE_T i = 0; i < len; ++i)
    {
        PyObject *itm = PySequence_ITEM(sipPy, i);
        QDockWidget *t = reinterpret_cast<QDockWidget *>(sipConvertToType(itm, sipType_QDockWidget, sipTransferObj, 0, 0, sipIsErr));

        Py_DECREF(itm);
 
        if (*sipIsErr)
        {
            delete ql;
            return 0;
        }

        ql->append(t);
    }
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 118 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQList0101QDockWidget.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0101QDockWidget(void *, PyObject *);}
static PyObject *convertFrom_QList_0101QDockWidget(void *sipCppV, PyObject *sipTransferObj)
{
   QList<QDockWidget*> *sipCpp = reinterpret_cast<QList<QDockWidget*> *>(sipCppV);

#line 119 "sip/QtCore/qlist.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QDockWidget *t = sipCpp->at(i);
        PyObject *tobj;

        // The explicit (void *) cast allows QDockWidget to be const.
        if ((tobj = sipConvertFromType((void *)t, sipType_QDockWidget, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            return NULL;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 151 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQList0101QDockWidget.cpp"
}


sipMappedTypeDef sipTypeDef_QtGui_QList_0101QDockWidget = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_29678,
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
    assign_QList_0101QDockWidget,
    array_QList_0101QDockWidget,
    copy_QList_0101QDockWidget,
    release_QList_0101QDockWidget,
    convertTo_QList_0101QDockWidget,
    convertFrom_QList_0101QDockWidget
};
