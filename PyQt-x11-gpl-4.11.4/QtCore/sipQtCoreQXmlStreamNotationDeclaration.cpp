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

#line 275 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qxmlstream.sip"
#include <qxmlstream.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQXmlStreamNotationDeclaration.cpp"

#line 796 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQXmlStreamNotationDeclaration.cpp"


PyDoc_STRVAR(doc_QXmlStreamNotationDeclaration_name, "name(self) -> QStringRef");

extern "C" {static PyObject *meth_QXmlStreamNotationDeclaration_name(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamNotationDeclaration_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlStreamNotationDeclaration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlStreamNotationDeclaration, &sipCpp))
        {
            QStringRef*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStringRef(sipCpp->name());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QStringRef,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamNotationDeclaration, sipName_name, doc_QXmlStreamNotationDeclaration_name);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamNotationDeclaration_systemId, "systemId(self) -> QStringRef");

extern "C" {static PyObject *meth_QXmlStreamNotationDeclaration_systemId(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamNotationDeclaration_systemId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlStreamNotationDeclaration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlStreamNotationDeclaration, &sipCpp))
        {
            QStringRef*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStringRef(sipCpp->systemId());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QStringRef,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamNotationDeclaration, sipName_systemId, doc_QXmlStreamNotationDeclaration_systemId);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlStreamNotationDeclaration_publicId, "publicId(self) -> QStringRef");

extern "C" {static PyObject *meth_QXmlStreamNotationDeclaration_publicId(PyObject *, PyObject *);}
static PyObject *meth_QXmlStreamNotationDeclaration_publicId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlStreamNotationDeclaration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlStreamNotationDeclaration, &sipCpp))
        {
            QStringRef*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStringRef(sipCpp->publicId());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QStringRef,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlStreamNotationDeclaration, sipName_publicId, doc_QXmlStreamNotationDeclaration_publicId);

    return NULL;
}


extern "C" {static PyObject *slot_QXmlStreamNotationDeclaration___ne__(PyObject *,PyObject *);}
static PyObject *slot_QXmlStreamNotationDeclaration___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QXmlStreamNotationDeclaration *sipCpp = reinterpret_cast<QXmlStreamNotationDeclaration *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QXmlStreamNotationDeclaration));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QXmlStreamNotationDeclaration* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QXmlStreamNotationDeclaration, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QXmlStreamNotationDeclaration::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QXmlStreamNotationDeclaration,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QXmlStreamNotationDeclaration___eq__(PyObject *,PyObject *);}
static PyObject *slot_QXmlStreamNotationDeclaration___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QXmlStreamNotationDeclaration *sipCpp = reinterpret_cast<QXmlStreamNotationDeclaration *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QXmlStreamNotationDeclaration));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QXmlStreamNotationDeclaration* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QXmlStreamNotationDeclaration, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QXmlStreamNotationDeclaration::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QXmlStreamNotationDeclaration,sipSelf,sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QXmlStreamNotationDeclaration(void *, int);}
static void release_QXmlStreamNotationDeclaration(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QXmlStreamNotationDeclaration *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QXmlStreamNotationDeclaration(void *, SIP_SSIZE_T, const void *);}
static void assign_QXmlStreamNotationDeclaration(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QXmlStreamNotationDeclaration *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QXmlStreamNotationDeclaration *>(sipSrc);
}


extern "C" {static void *array_QXmlStreamNotationDeclaration(SIP_SSIZE_T);}
static void *array_QXmlStreamNotationDeclaration(SIP_SSIZE_T sipNrElem)
{
    return new QXmlStreamNotationDeclaration[sipNrElem];
}


extern "C" {static void *copy_QXmlStreamNotationDeclaration(const void *, SIP_SSIZE_T);}
static void *copy_QXmlStreamNotationDeclaration(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QXmlStreamNotationDeclaration(reinterpret_cast<const QXmlStreamNotationDeclaration *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QXmlStreamNotationDeclaration(sipSimpleWrapper *);}
static void dealloc_QXmlStreamNotationDeclaration(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QXmlStreamNotationDeclaration(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QXmlStreamNotationDeclaration(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QXmlStreamNotationDeclaration(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QXmlStreamNotationDeclaration *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QXmlStreamNotationDeclaration();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QXmlStreamNotationDeclaration* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QXmlStreamNotationDeclaration, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QXmlStreamNotationDeclaration(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QXmlStreamNotationDeclaration[] = {
    {(void *)slot_QXmlStreamNotationDeclaration___ne__, ne_slot},
    {(void *)slot_QXmlStreamNotationDeclaration___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QXmlStreamNotationDeclaration[] = {
    {SIP_MLNAME_CAST(sipName_name), meth_QXmlStreamNotationDeclaration_name, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamNotationDeclaration_name)},
    {SIP_MLNAME_CAST(sipName_publicId), meth_QXmlStreamNotationDeclaration_publicId, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamNotationDeclaration_publicId)},
    {SIP_MLNAME_CAST(sipName_systemId), meth_QXmlStreamNotationDeclaration_systemId, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlStreamNotationDeclaration_systemId)}
};

PyDoc_STRVAR(doc_QXmlStreamNotationDeclaration, "\1QXmlStreamNotationDeclaration()\n"
    "QXmlStreamNotationDeclaration(QXmlStreamNotationDeclaration)");


pyqt4ClassTypeDef sipTypeDef_QtCore_QXmlStreamNotationDeclaration = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QXmlStreamNotationDeclaration,
        {0}
    },
    {
        sipNameNr_QXmlStreamNotationDeclaration,
        {0, 0, 1},
        3, methods_QXmlStreamNotationDeclaration,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QXmlStreamNotationDeclaration,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QXmlStreamNotationDeclaration,
    init_type_QXmlStreamNotationDeclaration,
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
    dealloc_QXmlStreamNotationDeclaration,
    assign_QXmlStreamNotationDeclaration,
    array_QXmlStreamNotationDeclaration,
    copy_QXmlStreamNotationDeclaration,
    release_QXmlStreamNotationDeclaration,
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
