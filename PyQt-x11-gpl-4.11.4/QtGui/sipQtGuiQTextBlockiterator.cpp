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

#line 129 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qtextobject.sip"
#include <qtextobject.h>
#line 154 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qtextobject.sip"
#include <qtextobject.h>
#line 31 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextBlockiterator.cpp"

#line 252 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qtextobject.sip"
#include <qtextobject.h>
#line 35 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextBlockiterator.cpp"


PyDoc_STRVAR(doc_QTextBlock_iterator_fragment, "fragment(self) -> QTextFragment");

extern "C" {static PyObject *meth_QTextBlock_iterator_fragment(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_iterator_fragment(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock::iterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock_iterator, &sipCpp))
        {
            QTextFragment*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextFragment(sipCpp->fragment());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextFragment,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_iterator, sipName_fragment, doc_QTextBlock_iterator_fragment);

    return NULL;
}


PyDoc_STRVAR(doc_QTextBlock_iterator_atEnd, "atEnd(self) -> bool");

extern "C" {static PyObject *meth_QTextBlock_iterator_atEnd(PyObject *, PyObject *);}
static PyObject *meth_QTextBlock_iterator_atEnd(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock::iterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextBlock_iterator, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->atEnd();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_iterator, sipName_atEnd, doc_QTextBlock_iterator_atEnd);

    return NULL;
}


extern "C" {static PyObject *slot_QTextBlock_iterator___isub__(PyObject *,PyObject *);}
static PyObject *slot_QTextBlock_iterator___isub__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextBlock_iterator)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QTextBlock::iterator *sipCpp = reinterpret_cast<QTextBlock::iterator *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextBlock_iterator));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 176 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qtextobject.sip"
            if (a0 > 0)
                while (a0--)
                    (*sipCpp)--;
            else if (a0 < 0)
                while (a0++)
                    (*sipCpp)++;
#line 126 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextBlockiterator.cpp"

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QTextBlock_iterator___iadd__(PyObject *,PyObject *);}
static PyObject *slot_QTextBlock_iterator___iadd__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextBlock_iterator)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QTextBlock::iterator *sipCpp = reinterpret_cast<QTextBlock::iterator *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextBlock_iterator));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 166 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qtextobject.sip"
            if (a0 > 0)
                while (a0--)
                    (*sipCpp)++;
            else if (a0 < 0)
                while (a0++)
                    (*sipCpp)--;
#line 173 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextBlockiterator.cpp"

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QTextBlock_iterator___ne__(PyObject *,PyObject *);}
static PyObject *slot_QTextBlock_iterator___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextBlock::iterator *sipCpp = reinterpret_cast<QTextBlock::iterator *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextBlock_iterator));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTextBlock::iterator* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QTextBlock_iterator, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QTextBlock::iterator::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QTextBlock_iterator,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTextBlock_iterator___eq__(PyObject *,PyObject *);}
static PyObject *slot_QTextBlock_iterator___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextBlock::iterator *sipCpp = reinterpret_cast<QTextBlock::iterator *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextBlock_iterator));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTextBlock::iterator* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QTextBlock_iterator, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QTextBlock::iterator::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QTextBlock_iterator,sipSelf,sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextBlock_iterator(void *, int);}
static void release_QTextBlock_iterator(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QTextBlock::iterator *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QTextBlock_iterator(void *, SIP_SSIZE_T, const void *);}
static void assign_QTextBlock_iterator(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QTextBlock::iterator *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QTextBlock::iterator *>(sipSrc);
}


extern "C" {static void *array_QTextBlock_iterator(SIP_SSIZE_T);}
static void *array_QTextBlock_iterator(SIP_SSIZE_T sipNrElem)
{
    return new QTextBlock::iterator[sipNrElem];
}


extern "C" {static void *copy_QTextBlock_iterator(const void *, SIP_SSIZE_T);}
static void *copy_QTextBlock_iterator(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QTextBlock::iterator(reinterpret_cast<const QTextBlock::iterator *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTextBlock_iterator(sipSimpleWrapper *);}
static void dealloc_QTextBlock_iterator(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTextBlock_iterator(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QTextBlock_iterator(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTextBlock_iterator(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QTextBlock::iterator *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextBlock::iterator();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QTextBlock::iterator* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QTextBlock_iterator, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextBlock::iterator(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QTextBlock_iterator[] = {
    {(void *)slot_QTextBlock_iterator___isub__, isub_slot},
    {(void *)slot_QTextBlock_iterator___iadd__, iadd_slot},
    {(void *)slot_QTextBlock_iterator___ne__, ne_slot},
    {(void *)slot_QTextBlock_iterator___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QTextBlock_iterator[] = {
    {SIP_MLNAME_CAST(sipName_atEnd), meth_QTextBlock_iterator_atEnd, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_iterator_atEnd)},
    {SIP_MLNAME_CAST(sipName_fragment), meth_QTextBlock_iterator_fragment, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextBlock_iterator_fragment)}
};

PyDoc_STRVAR(doc_QTextBlock_iterator, "\1QTextBlock.iterator()\n"
    "QTextBlock.iterator(QTextBlock.iterator)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QTextBlock_iterator = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QTextBlock__iterator,
        {0}
    },
    {
        sipNameNr_iterator,
        {645, 255, 0},
        2, methods_QTextBlock_iterator,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTextBlock_iterator,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QTextBlock_iterator,
    init_type_QTextBlock_iterator,
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
    dealloc_QTextBlock_iterator,
    assign_QTextBlock_iterator,
    array_QTextBlock_iterator,
    copy_QTextBlock_iterator,
    release_QTextBlock_iterator,
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
