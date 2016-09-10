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

#line 243 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qset.sip"
#include <qset.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQSet1900.cpp"



extern "C" {static void assign_QSet_1900(void *, SIP_SSIZE_T, const void *);}
static void assign_QSet_1900(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QSet<uint> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QSet<uint> *>(sipSrc);
}


extern "C" {static void *array_QSet_1900(SIP_SSIZE_T);}
static void *array_QSet_1900(SIP_SSIZE_T sipNrElem)
{
    return new QSet<uint>[sipNrElem];
}


extern "C" {static void *copy_QSet_1900(const void *, SIP_SSIZE_T);}
static void *copy_QSet_1900(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QSet<uint>(reinterpret_cast<const QSet<uint> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QSet_1900(void *, int);}
static void release_QSet_1900(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QSet<uint> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QSet_1900(PyObject *, void **, int *, PyObject *);}
static int convertTo_QSet_1900(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QSet<uint> **sipCppPtr = reinterpret_cast<QSet<uint> **>(sipCppPtrV);

#line 275 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qset.sip"
    PyObject *it = PyObject_GetIter(sipPy), *itm;

    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (it == NULL)
            return 0;

        Py_DECREF(it);
        return 1;
    }

    if (it == NULL)
    {
        *sipIsErr = 1;
        return 0;
    }

    QSet<unsigned> *qs = new QSet<unsigned>;

    while ((itm = PyIter_Next(it)) != NULL)
    {
        qs->insert(PyLong_AsUnsignedLong(itm));
        Py_DECREF(itm);
    }

    Py_DECREF(it);

    *sipCppPtr = qs;

    return sipGetState(sipTransferObj);
#line 102 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQSet1900.cpp"
}


extern "C" {static PyObject *convertFrom_QSet_1900(void *, PyObject *);}
static PyObject *convertFrom_QSet_1900(void *sipCppV, PyObject *)
{
   QSet<uint> *sipCpp = reinterpret_cast<QSet<uint> *>(sipCppV);

#line 247 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qset.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    QSet<unsigned>::const_iterator it = sipCpp->constBegin();

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        PyObject *el_obj;

        if ((el_obj = PyLong_FromUnsignedLong(*it)) == NULL)
        {
            Py_DECREF(l);
            return NULL;
        }

        PyList_SET_ITEM(l, i, el_obj);

        ++it;
    }

    return l;
#line 137 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQSet1900.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QSet_1900 = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_36056,
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
    assign_QSet_1900,
    array_QSet_1900,
    copy_QSet_1900,
    release_QSet_1900,
    convertTo_QSet_1900,
    convertFrom_QSet_1900
};
