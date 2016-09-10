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

#line 196 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qlist.sip"
#include <qlist.h>
#include <qpair.h>
#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQList0600QPair0100QString0100QString.cpp"

#line 72 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 34 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQList0600QPair0100QString0100QString.cpp"


extern "C" {static void assign_QList_0600QPair_0100QString_0100QString(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0600QPair_0100QString_0100QString(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QPair<QString,QString> > *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QPair<QString,QString> > *>(sipSrc);
}


extern "C" {static void *array_QList_0600QPair_0100QString_0100QString(SIP_SSIZE_T);}
static void *array_QList_0600QPair_0100QString_0100QString(SIP_SSIZE_T sipNrElem)
{
    return new QList<QPair<QString,QString> >[sipNrElem];
}


extern "C" {static void *copy_QList_0600QPair_0100QString_0100QString(const void *, SIP_SSIZE_T);}
static void *copy_QList_0600QPair_0100QString_0100QString(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QPair<QString,QString> >(reinterpret_cast<const QList<QPair<QString,QString> > *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0600QPair_0100QString_0100QString(void *, int);}
static void release_QList_0600QPair_0100QString_0100QString(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QList<QPair<QString,QString> > *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QList_0600QPair_0100QString_0100QString(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0600QPair_0100QString_0100QString(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QPair<QString,QString> > **sipCppPtr = reinterpret_cast<QList<QPair<QString,QString> > **>(sipCppPtrV);

#line 231 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qlist.sip"
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

            PyObject *itm0 = PySequence_ITEM(seq, 0);
            PyObject *itm1 = PySequence_ITEM(seq, 1);

            if (!itm0 || !itm1)
            {
                Py_XDECREF(itm0);
                Py_XDECREF(itm1);
                Py_DECREF(seq);
                return 0;
            }

            if (!sipCanConvertToType(itm0, sipType_QString, SIP_NOT_NONE) ||
                !sipCanConvertToType(itm1, sipType_QString, SIP_NOT_NONE))
            {
                Py_DECREF(itm0);
                Py_DECREF(itm1);
                Py_DECREF(seq);
                return 0;
            }
        }

        return 1;
    }

    QList<QPair<QString, QString> > *ql = new QList<QPair<QString, QString> >;
    len = PySequence_Size(sipPy);
 
    for (SIP_SSIZE_T i = 0; i < len; ++i)
    {
        PyObject *seq = PySequence_ITEM(sipPy, i);
        PyObject *itm0 = PySequence_ITEM(seq, 0);
        PyObject *itm1 = PySequence_ITEM(seq, 1);
        int state1, state2;

        QString *s1 = reinterpret_cast<QString *>(sipConvertToType(itm0, sipType_QString, sipTransferObj, SIP_NOT_NONE, &state1, sipIsErr));
        QString *s2 = reinterpret_cast<QString *>(sipConvertToType(itm1, sipType_QString, sipTransferObj, SIP_NOT_NONE, &state2, sipIsErr));
 
        Py_DECREF(itm0);
        Py_DECREF(itm1);
        Py_DECREF(seq);

        if (*sipIsErr)
        {
            sipReleaseType(s1, sipType_QString, state1);
            sipReleaseType(s2, sipType_QString, state2);

            delete ql;
            return 0;
        }

        ql->append(QPair<QString, QString>(*s1, *s2));

        sipReleaseType(s1, sipType_QString, state1);
        sipReleaseType(s2, sipType_QString, state2);
    }
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 152 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQList0600QPair0100QString0100QString.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0600QPair_0100QString_0100QString(void *, PyObject *);}
static PyObject *convertFrom_QList_0600QPair_0100QString_0100QString(void *sipCppV, PyObject *sipTransferObj)
{
   QList<QPair<QString,QString> > *sipCpp = reinterpret_cast<QList<QPair<QString,QString> > *>(sipCppV);

#line 201 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qlist.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        const QPair<QString, QString> &p = sipCpp->at(i);
        QString *s1 = new QString(p.first);
        QString *s2 = new QString(p.second);
        PyObject *pobj;

        if ((pobj = sipBuildResult(NULL, "(NN)", s1, sipType_QString, sipTransferObj, s2, sipType_QString, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            delete s1;
            delete s2;

            return NULL;
        }

        PyList_SET_ITEM(l, i, pobj);
    }

    return l;
#line 189 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQList0600QPair0100QString0100QString.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QList_0600QPair_0100QString_0100QString = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_1089,
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
    assign_QList_0600QPair_0100QString_0100QString,
    array_QList_0600QPair_0100QString_0100QString,
    copy_QList_0600QPair_0100QString_0100QString,
    release_QList_0600QPair_0100QString_0100QString,
    convertTo_QList_0600QPair_0100QString_0100QString,
    convertFrom_QList_0600QPair_0100QString_0100QString
};
