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

#line 65 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qtextobject.sip"
#include <qtextobject.h>
#line 82 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qtextobject.sip"
#include <qtextobject.h>
#line 31 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextFrameiterator.cpp"

#line 129 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qtextobject.sip"
#include <qtextobject.h>
#line 35 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextFrameiterator.cpp"
#line 65 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qtextobject.sip"
#include <qtextobject.h>
#line 38 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextFrameiterator.cpp"


PyDoc_STRVAR(doc_QTextFrame_iterator_parentFrame, "parentFrame(self) -> QTextFrame");

extern "C" {static PyObject *meth_QTextFrame_iterator_parentFrame(PyObject *, PyObject *);}
static PyObject *meth_QTextFrame_iterator_parentFrame(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextFrame::iterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextFrame_iterator, &sipCpp))
        {
            QTextFrame*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->parentFrame();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QTextFrame,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_iterator, sipName_parentFrame, doc_QTextFrame_iterator_parentFrame);

    return NULL;
}


PyDoc_STRVAR(doc_QTextFrame_iterator_currentFrame, "currentFrame(self) -> QTextFrame");

extern "C" {static PyObject *meth_QTextFrame_iterator_currentFrame(PyObject *, PyObject *);}
static PyObject *meth_QTextFrame_iterator_currentFrame(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextFrame::iterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextFrame_iterator, &sipCpp))
        {
            QTextFrame*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->currentFrame();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QTextFrame,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_iterator, sipName_currentFrame, doc_QTextFrame_iterator_currentFrame);

    return NULL;
}


PyDoc_STRVAR(doc_QTextFrame_iterator_currentBlock, "currentBlock(self) -> QTextBlock");

extern "C" {static PyObject *meth_QTextFrame_iterator_currentBlock(PyObject *, PyObject *);}
static PyObject *meth_QTextFrame_iterator_currentBlock(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextFrame::iterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextFrame_iterator, &sipCpp))
        {
            QTextBlock*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextBlock(sipCpp->currentBlock());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextBlock,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_iterator, sipName_currentBlock, doc_QTextFrame_iterator_currentBlock);

    return NULL;
}


PyDoc_STRVAR(doc_QTextFrame_iterator_atEnd, "atEnd(self) -> bool");

extern "C" {static PyObject *meth_QTextFrame_iterator_atEnd(PyObject *, PyObject *);}
static PyObject *meth_QTextFrame_iterator_atEnd(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextFrame::iterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextFrame_iterator, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->atEnd();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_iterator, sipName_atEnd, doc_QTextFrame_iterator_atEnd);

    return NULL;
}


extern "C" {static PyObject *slot_QTextFrame_iterator___isub__(PyObject *,PyObject *);}
static PyObject *slot_QTextFrame_iterator___isub__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextFrame_iterator)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QTextFrame::iterator *sipCpp = reinterpret_cast<QTextFrame::iterator *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextFrame_iterator));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 106 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qtextobject.sip"
            if (a0 > 0)
                while (a0--)
                    (*sipCpp)--;
            else if (a0 < 0)
                while (a0++)
                    (*sipCpp)++;
#line 189 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextFrameiterator.cpp"

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


extern "C" {static PyObject *slot_QTextFrame_iterator___iadd__(PyObject *,PyObject *);}
static PyObject *slot_QTextFrame_iterator___iadd__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextFrame_iterator)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QTextFrame::iterator *sipCpp = reinterpret_cast<QTextFrame::iterator *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextFrame_iterator));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
#line 96 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qtextobject.sip"
            if (a0 > 0)
                while (a0--)
                    (*sipCpp)++;
            else if (a0 < 0)
                while (a0++)
                    (*sipCpp)--;
#line 236 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextFrameiterator.cpp"

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


extern "C" {static PyObject *slot_QTextFrame_iterator___ne__(PyObject *,PyObject *);}
static PyObject *slot_QTextFrame_iterator___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextFrame::iterator *sipCpp = reinterpret_cast<QTextFrame::iterator *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextFrame_iterator));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTextFrame::iterator* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QTextFrame_iterator, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QTextFrame::iterator::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QTextFrame_iterator,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTextFrame_iterator___eq__(PyObject *,PyObject *);}
static PyObject *slot_QTextFrame_iterator___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextFrame::iterator *sipCpp = reinterpret_cast<QTextFrame::iterator *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextFrame_iterator));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTextFrame::iterator* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QTextFrame_iterator, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QTextFrame::iterator::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QTextFrame_iterator,sipSelf,sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextFrame_iterator(void *, int);}
static void release_QTextFrame_iterator(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QTextFrame::iterator *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QTextFrame_iterator(void *, SIP_SSIZE_T, const void *);}
static void assign_QTextFrame_iterator(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QTextFrame::iterator *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QTextFrame::iterator *>(sipSrc);
}


extern "C" {static void *array_QTextFrame_iterator(SIP_SSIZE_T);}
static void *array_QTextFrame_iterator(SIP_SSIZE_T sipNrElem)
{
    return new QTextFrame::iterator[sipNrElem];
}


extern "C" {static void *copy_QTextFrame_iterator(const void *, SIP_SSIZE_T);}
static void *copy_QTextFrame_iterator(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QTextFrame::iterator(reinterpret_cast<const QTextFrame::iterator *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTextFrame_iterator(sipSimpleWrapper *);}
static void dealloc_QTextFrame_iterator(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTextFrame_iterator(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QTextFrame_iterator(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTextFrame_iterator(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QTextFrame::iterator *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextFrame::iterator();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QTextFrame::iterator* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QTextFrame_iterator, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextFrame::iterator(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QTextFrame_iterator[] = {
    {(void *)slot_QTextFrame_iterator___isub__, isub_slot},
    {(void *)slot_QTextFrame_iterator___iadd__, iadd_slot},
    {(void *)slot_QTextFrame_iterator___ne__, ne_slot},
    {(void *)slot_QTextFrame_iterator___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QTextFrame_iterator[] = {
    {SIP_MLNAME_CAST(sipName_atEnd), meth_QTextFrame_iterator_atEnd, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextFrame_iterator_atEnd)},
    {SIP_MLNAME_CAST(sipName_currentBlock), meth_QTextFrame_iterator_currentBlock, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextFrame_iterator_currentBlock)},
    {SIP_MLNAME_CAST(sipName_currentFrame), meth_QTextFrame_iterator_currentFrame, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextFrame_iterator_currentFrame)},
    {SIP_MLNAME_CAST(sipName_parentFrame), meth_QTextFrame_iterator_parentFrame, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextFrame_iterator_parentFrame)}
};

PyDoc_STRVAR(doc_QTextFrame_iterator, "\1QTextFrame.iterator()\n"
    "QTextFrame.iterator(QTextFrame.iterator)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QTextFrame_iterator = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QTextFrame__iterator,
        {0}
    },
    {
        sipNameNr_iterator,
        {679, 255, 0},
        4, methods_QTextFrame_iterator,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTextFrame_iterator,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QTextFrame_iterator,
    init_type_QTextFrame_iterator,
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
    dealloc_QTextFrame_iterator,
    assign_QTextFrame_iterator,
    array_QTextFrame_iterator,
    copy_QTextFrame_iterator,
    release_QTextFrame_iterator,
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
