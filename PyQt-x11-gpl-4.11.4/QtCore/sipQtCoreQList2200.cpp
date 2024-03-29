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

#include "sipAPIQtCore.h"

#line 755 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQList2200.cpp"



extern "C" {static void assign_QList_2200(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_2200(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<qreal> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<qreal> *>(sipSrc);
}


extern "C" {static void *array_QList_2200(SIP_SSIZE_T);}
static void *array_QList_2200(SIP_SSIZE_T sipNrElem)
{
    return new QList<qreal>[sipNrElem];
}


extern "C" {static void *copy_QList_2200(const void *, SIP_SSIZE_T);}
static void *copy_QList_2200(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<qreal>(reinterpret_cast<const QList<qreal> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_2200(void *, int);}
static void release_QList_2200(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QList<qreal> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QList_2200(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_2200(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<qreal> **sipCppPtr = reinterpret_cast<QList<qreal> **>(sipCppPtrV);

#line 784 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qlist.sip"
    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
        return (PySequence_Check(sipPy) && PySequence_Size(sipPy) >= 0);

    QList<qreal> *ql = new QList<qreal>;
    SIP_SSIZE_T len = PySequence_Size(sipPy);
 
    for (SIP_SSIZE_T i = 0; i < len; ++i)
    {
        PyObject *itm = PySequence_ITEM(sipPy, i);

        PyErr_Clear();
        double val = itm ? PyFloat_AsDouble(itm) : -1.0;
            
        if (!itm || (val == -1.0 && PyErr_Occurred()))
        {
            Py_XDECREF(itm);
            delete ql;
            *sipIsErr = 1;

            return 0;
        }

        ql->append(val);

        Py_DECREF(itm);
    }
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 102 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQList2200.cpp"
}


extern "C" {static PyObject *convertFrom_QList_2200(void *, PyObject *);}
static PyObject *convertFrom_QList_2200(void *sipCppV, PyObject *)
{
   QList<qreal> *sipCpp = reinterpret_cast<QList<qreal> *>(sipCppV);

#line 759 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qlist.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        PyObject *pobj;

        if ((pobj = PyFloat_FromDouble(sipCpp->value(i))) == NULL)
        {
            Py_DECREF(l);

            return NULL;
        }

        PyList_SET_ITEM(l, i, pobj);
    }

    return l;
#line 134 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQList2200.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QList_2200 = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_30002,
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
    assign_QList_2200,
    array_QList_2200,
    copy_QList_2200,
    release_QList_2200,
    convertTo_QList_2200,
    convertFrom_QList_2200
};
