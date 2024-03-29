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

#line 31 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQStringList_1.cpp"



extern "C" {static void assign_QStringList_1(void *, SIP_SSIZE_T, const void *);}
static void assign_QStringList_1(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStringList *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStringList *>(sipSrc);
}


extern "C" {static void *array_QStringList_1(SIP_SSIZE_T);}
static void *array_QStringList_1(SIP_SSIZE_T sipNrElem)
{
    return new QStringList[sipNrElem];
}


extern "C" {static void *copy_QStringList_1(const void *, SIP_SSIZE_T);}
static void *copy_QStringList_1(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStringList(reinterpret_cast<const QStringList *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QStringList_1(void *, int);}
static void release_QStringList_1(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QStringList *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QStringList_1(PyObject *, void **, int *, PyObject *);}
static int convertTo_QStringList_1(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QStringList **sipCppPtr = reinterpret_cast<QStringList **>(sipCppPtrV);

#line 35 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qstringlist.sip"
if (sipIsErr == NULL)
    return qpycore_PySequence_Check_QStringList(sipPy);

*sipCppPtr = new QStringList(qpycore_PySequence_AsQStringList(sipPy));

return sipGetState(sipTransferObj);
#line 77 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQStringList_1.cpp"
}


extern "C" {static PyObject *convertFrom_QStringList_1(void *, PyObject *);}
static PyObject *convertFrom_QStringList_1(void *sipCppV, PyObject *)
{
   QStringList *sipCpp = reinterpret_cast<QStringList *>(sipCppV);

#line 44 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qstringlist.sip"
    return qpycore_PyObject_FromQStringList(*sipCpp);
#line 88 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQStringList_1.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QStringList_1 = {
    {
        1,
        &sipTypeDef_QtCore_QStringList_0.super.ctd_base,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_QStringList,
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
    assign_QStringList_1,
    array_QStringList_1,
    copy_QStringList_1,
    release_QStringList_1,
    convertTo_QStringList_1,
    convertFrom_QStringList_1
};
