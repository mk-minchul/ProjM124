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

#line 410 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qlist.sip"
#include <qlist.h>
#include <qpair.h>
#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQList0600QPair22002200.cpp"



extern "C" {static void assign_QList_0600QPair_2200_2200(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0600QPair_2200_2200(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QPair<qreal,qreal> > *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QPair<qreal,qreal> > *>(sipSrc);
}


extern "C" {static void *array_QList_0600QPair_2200_2200(SIP_SSIZE_T);}
static void *array_QList_0600QPair_2200_2200(SIP_SSIZE_T sipNrElem)
{
    return new QList<QPair<qreal,qreal> >[sipNrElem];
}


extern "C" {static void *copy_QList_0600QPair_2200_2200(const void *, SIP_SSIZE_T);}
static void *copy_QList_0600QPair_2200_2200(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QPair<qreal,qreal> >(reinterpret_cast<const QList<QPair<qreal,qreal> > *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0600QPair_2200_2200(void *, int);}
static void release_QList_0600QPair_2200_2200(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QList<QPair<qreal,qreal> > *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QList_0600QPair_2200_2200(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0600QPair_2200_2200(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QPair<qreal,qreal> > **sipCppPtr = reinterpret_cast<QList<QPair<qreal,qreal> > **>(sipCppPtrV);

#line 441 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qlist.sip"
    SIP_SSIZE_T len;

    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PySequence_Check(sipPy) || (len = PySequence_Size(sipPy)) < 0)
            return 0;

        for (SIP_SSIZE_T i = 0; i < len; ++i)
        {
            PyObject *seq = PySequence_ITEM(sipPy, i);

            if (!seq || !PySequence_Check(seq) || PySequence_Size(seq) != 2)
            {
                Py_XDECREF(seq);
                return 0;
            }
        }

        return 1;
    }

    QList<QPair<qreal, qreal> > *ql = new QList<QPair<qreal, qreal> >;
    len = PySequence_Size(sipPy);
 
    for (SIP_SSIZE_T i = 0; i < len; ++i)
    {
        PyObject *seq = PySequence_ITEM(sipPy, i);
        PyObject *itm0 = PySequence_ITEM(seq, 0);
        PyObject *itm1 = PySequence_ITEM(seq, 1);

        Py_DECREF(seq);

        if (!itm0 || !itm1)
        {
            Py_XDECREF(itm0);
            Py_XDECREF(itm1);

            delete ql;
            *sipIsErr = 1;

            return 0;
        }

        qreal first = PyFloat_AsDouble(itm0);
        qreal second = PyFloat_AsDouble(itm1);
 
        Py_DECREF(itm0);
        Py_DECREF(itm1);

        ql->append(QPair<qreal, qreal>(first, second));
    }
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 128 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQList0600QPair22002200.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0600QPair_2200_2200(void *, PyObject *);}
static PyObject *convertFrom_QList_0600QPair_2200_2200(void *sipCppV, PyObject *)
{
   QList<QPair<qreal,qreal> > *sipCpp = reinterpret_cast<QList<QPair<qreal,qreal> > *>(sipCppV);

#line 415 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qlist.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        const QPair<qreal, qreal> &p = sipCpp->at(i);
        PyObject *pobj;

        if ((pobj = Py_BuildValue((char *)"dd", p.first, p.second)) == NULL)
        {
            Py_DECREF(l);

            return NULL;
        }

        PyList_SET_ITEM(l, i, pobj);
    }

    return l;
#line 161 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQList0600QPair22002200.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QList_0600QPair_2200_2200 = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_3043,
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
    assign_QList_0600QPair_2200_2200,
    array_QList_0600QPair_2200_2200,
    copy_QList_0600QPair_2200_2200,
    release_QList_0600QPair_2200_2200,
    convertTo_QList_0600QPair_2200_2200,
    convertFrom_QList_0600QPair_2200_2200
};
