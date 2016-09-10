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

#line 252 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qtextobject.sip"
#include <qtextobject.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextFragment.cpp"

#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextFragment.cpp"
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qglyphrun.sip"
#include <qglyphrun.h>
#line 36 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextFragment.cpp"
#line 31 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 39 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextFragment.cpp"
#line 340 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 42 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQTextFragment.cpp"


PyDoc_STRVAR(doc_QTextFragment_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QTextFragment_isValid(PyObject *, PyObject *);}
static PyObject *meth_QTextFragment_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextFragment *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextFragment, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isValid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextFragment, sipName_isValid, doc_QTextFragment_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QTextFragment_position, "position(self) -> int");

extern "C" {static PyObject *meth_QTextFragment_position(PyObject *, PyObject *);}
static PyObject *meth_QTextFragment_position(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextFragment *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextFragment, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->position();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextFragment, sipName_position, doc_QTextFragment_position);

    return NULL;
}


PyDoc_STRVAR(doc_QTextFragment_length, "length(self) -> int");

extern "C" {static PyObject *meth_QTextFragment_length(PyObject *, PyObject *);}
static PyObject *meth_QTextFragment_length(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextFragment *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextFragment, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->length();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextFragment, sipName_length, doc_QTextFragment_length);

    return NULL;
}


PyDoc_STRVAR(doc_QTextFragment_contains, "contains(self, int) -> bool");

extern "C" {static PyObject *meth_QTextFragment_contains(PyObject *, PyObject *);}
static PyObject *meth_QTextFragment_contains(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QTextFragment *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QTextFragment, &sipCpp, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->contains(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextFragment, sipName_contains, doc_QTextFragment_contains);

    return NULL;
}


PyDoc_STRVAR(doc_QTextFragment_charFormat, "charFormat(self) -> QTextCharFormat");

extern "C" {static PyObject *meth_QTextFragment_charFormat(PyObject *, PyObject *);}
static PyObject *meth_QTextFragment_charFormat(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextFragment *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextFragment, &sipCpp))
        {
            QTextCharFormat*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextCharFormat(sipCpp->charFormat());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextCharFormat,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextFragment, sipName_charFormat, doc_QTextFragment_charFormat);

    return NULL;
}


PyDoc_STRVAR(doc_QTextFragment_charFormatIndex, "charFormatIndex(self) -> int");

extern "C" {static PyObject *meth_QTextFragment_charFormatIndex(PyObject *, PyObject *);}
static PyObject *meth_QTextFragment_charFormatIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextFragment *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextFragment, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->charFormatIndex();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextFragment, sipName_charFormatIndex, doc_QTextFragment_charFormatIndex);

    return NULL;
}


PyDoc_STRVAR(doc_QTextFragment_text, "text(self) -> QString");

extern "C" {static PyObject *meth_QTextFragment_text(PyObject *, PyObject *);}
static PyObject *meth_QTextFragment_text(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextFragment *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextFragment, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->text());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextFragment, sipName_text, doc_QTextFragment_text);

    return NULL;
}


PyDoc_STRVAR(doc_QTextFragment_glyphRuns, "glyphRuns(self) -> object");

extern "C" {static PyObject *meth_QTextFragment_glyphRuns(PyObject *, PyObject *);}
static PyObject *meth_QTextFragment_glyphRuns(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextFragment *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextFragment, &sipCpp))
        {
            QList<QGlyphRun>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QGlyphRun>(sipCpp->glyphRuns());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QGlyphRun,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextFragment, sipName_glyphRuns, doc_QTextFragment_glyphRuns);

    return NULL;
}


extern "C" {static PyObject *slot_QTextFragment___ge__(PyObject *,PyObject *);}
static PyObject *slot_QTextFragment___ge__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextFragment *sipCpp = reinterpret_cast<QTextFragment *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextFragment));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTextFragment* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QTextFragment, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = !sipCpp->QTextFragment::operator<(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ge_slot,sipType_QTextFragment,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTextFragment___lt__(PyObject *,PyObject *);}
static PyObject *slot_QTextFragment___lt__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextFragment *sipCpp = reinterpret_cast<QTextFragment *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextFragment));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTextFragment* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QTextFragment, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QTextFragment::operator<(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,lt_slot,sipType_QTextFragment,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTextFragment___ne__(PyObject *,PyObject *);}
static PyObject *slot_QTextFragment___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextFragment *sipCpp = reinterpret_cast<QTextFragment *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextFragment));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTextFragment* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QTextFragment, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QTextFragment::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QTextFragment,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTextFragment___eq__(PyObject *,PyObject *);}
static PyObject *slot_QTextFragment___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextFragment *sipCpp = reinterpret_cast<QTextFragment *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextFragment));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTextFragment* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QTextFragment, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QTextFragment::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QTextFragment,sipSelf,sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextFragment(void *, int);}
static void release_QTextFragment(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QTextFragment *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QTextFragment(void *, SIP_SSIZE_T, const void *);}
static void assign_QTextFragment(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QTextFragment *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QTextFragment *>(sipSrc);
}


extern "C" {static void *array_QTextFragment(SIP_SSIZE_T);}
static void *array_QTextFragment(SIP_SSIZE_T sipNrElem)
{
    return new QTextFragment[sipNrElem];
}


extern "C" {static void *copy_QTextFragment(const void *, SIP_SSIZE_T);}
static void *copy_QTextFragment(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QTextFragment(reinterpret_cast<const QTextFragment *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTextFragment(sipSimpleWrapper *);}
static void dealloc_QTextFragment(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTextFragment(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QTextFragment(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTextFragment(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QTextFragment *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextFragment();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QTextFragment* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QTextFragment, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextFragment(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QTextFragment[] = {
    {(void *)slot_QTextFragment___ge__, ge_slot},
    {(void *)slot_QTextFragment___lt__, lt_slot},
    {(void *)slot_QTextFragment___ne__, ne_slot},
    {(void *)slot_QTextFragment___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QTextFragment[] = {
    {SIP_MLNAME_CAST(sipName_charFormat), meth_QTextFragment_charFormat, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextFragment_charFormat)},
    {SIP_MLNAME_CAST(sipName_charFormatIndex), meth_QTextFragment_charFormatIndex, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextFragment_charFormatIndex)},
    {SIP_MLNAME_CAST(sipName_contains), meth_QTextFragment_contains, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextFragment_contains)},
    {SIP_MLNAME_CAST(sipName_glyphRuns), meth_QTextFragment_glyphRuns, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextFragment_glyphRuns)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QTextFragment_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextFragment_isValid)},
    {SIP_MLNAME_CAST(sipName_length), meth_QTextFragment_length, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextFragment_length)},
    {SIP_MLNAME_CAST(sipName_position), meth_QTextFragment_position, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextFragment_position)},
    {SIP_MLNAME_CAST(sipName_text), meth_QTextFragment_text, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextFragment_text)}
};

PyDoc_STRVAR(doc_QTextFragment, "\1QTextFragment()\n"
    "QTextFragment(QTextFragment)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QTextFragment = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QTextFragment,
        {0}
    },
    {
        sipNameNr_QTextFragment,
        {0, 0, 1},
        8, methods_QTextFragment,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTextFragment,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QTextFragment,
    init_type_QTextFragment,
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
    dealloc_QTextFragment,
    assign_QTextFragment,
    array_QTextFragment,
    copy_QTextFragment,
    release_QTextFragment,
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
