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

#include "sipAPIQtOpenGL.h"

#line 117 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtOpenGL/qglframebufferobject.sip"
#include <qglframebufferobject.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtOpenGL/sipQtOpenGLQGLFramebufferObjectFormat.cpp"

#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtOpenGL/qglframebufferobject.sip"
#include <qglframebufferobject.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtOpenGL/sipQtOpenGLQGLFramebufferObjectFormat.cpp"


PyDoc_STRVAR(doc_QGLFramebufferObjectFormat_setSamples, "setSamples(self, int)");

extern "C" {static PyObject *meth_QGLFramebufferObjectFormat_setSamples(PyObject *, PyObject *);}
static PyObject *meth_QGLFramebufferObjectFormat_setSamples(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QGLFramebufferObjectFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QGLFramebufferObjectFormat, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setSamples(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLFramebufferObjectFormat, sipName_setSamples, doc_QGLFramebufferObjectFormat_setSamples);

    return NULL;
}


PyDoc_STRVAR(doc_QGLFramebufferObjectFormat_samples, "samples(self) -> int");

extern "C" {static PyObject *meth_QGLFramebufferObjectFormat_samples(PyObject *, PyObject *);}
static PyObject *meth_QGLFramebufferObjectFormat_samples(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGLFramebufferObjectFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLFramebufferObjectFormat, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->samples();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLFramebufferObjectFormat, sipName_samples, doc_QGLFramebufferObjectFormat_samples);

    return NULL;
}


PyDoc_STRVAR(doc_QGLFramebufferObjectFormat_setAttachment, "setAttachment(self, QGLFramebufferObject.Attachment)");

extern "C" {static PyObject *meth_QGLFramebufferObjectFormat_setAttachment(PyObject *, PyObject *);}
static PyObject *meth_QGLFramebufferObjectFormat_setAttachment(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGLFramebufferObject::Attachment a0;
        QGLFramebufferObjectFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QGLFramebufferObjectFormat, &sipCpp, sipType_QGLFramebufferObject_Attachment, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setAttachment(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLFramebufferObjectFormat, sipName_setAttachment, doc_QGLFramebufferObjectFormat_setAttachment);

    return NULL;
}


PyDoc_STRVAR(doc_QGLFramebufferObjectFormat_attachment, "attachment(self) -> QGLFramebufferObject.Attachment");

extern "C" {static PyObject *meth_QGLFramebufferObjectFormat_attachment(PyObject *, PyObject *);}
static PyObject *meth_QGLFramebufferObjectFormat_attachment(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGLFramebufferObjectFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLFramebufferObjectFormat, &sipCpp))
        {
            QGLFramebufferObject::Attachment sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->attachment();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QGLFramebufferObject_Attachment);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLFramebufferObjectFormat, sipName_attachment, doc_QGLFramebufferObjectFormat_attachment);

    return NULL;
}


PyDoc_STRVAR(doc_QGLFramebufferObjectFormat_setTextureTarget, "setTextureTarget(self, int)");

extern "C" {static PyObject *meth_QGLFramebufferObjectFormat_setTextureTarget(PyObject *, PyObject *);}
static PyObject *meth_QGLFramebufferObjectFormat_setTextureTarget(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        GLenum a0;
        QGLFramebufferObjectFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bu", &sipSelf, sipType_QGLFramebufferObjectFormat, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setTextureTarget(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLFramebufferObjectFormat, sipName_setTextureTarget, doc_QGLFramebufferObjectFormat_setTextureTarget);

    return NULL;
}


PyDoc_STRVAR(doc_QGLFramebufferObjectFormat_textureTarget, "textureTarget(self) -> int");

extern "C" {static PyObject *meth_QGLFramebufferObjectFormat_textureTarget(PyObject *, PyObject *);}
static PyObject *meth_QGLFramebufferObjectFormat_textureTarget(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGLFramebufferObjectFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLFramebufferObjectFormat, &sipCpp))
        {
            GLenum sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->textureTarget();
            Py_END_ALLOW_THREADS

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLFramebufferObjectFormat, sipName_textureTarget, doc_QGLFramebufferObjectFormat_textureTarget);

    return NULL;
}


PyDoc_STRVAR(doc_QGLFramebufferObjectFormat_setInternalTextureFormat, "setInternalTextureFormat(self, int)");

extern "C" {static PyObject *meth_QGLFramebufferObjectFormat_setInternalTextureFormat(PyObject *, PyObject *);}
static PyObject *meth_QGLFramebufferObjectFormat_setInternalTextureFormat(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        GLenum a0;
        QGLFramebufferObjectFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bu", &sipSelf, sipType_QGLFramebufferObjectFormat, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setInternalTextureFormat(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLFramebufferObjectFormat, sipName_setInternalTextureFormat, doc_QGLFramebufferObjectFormat_setInternalTextureFormat);

    return NULL;
}


PyDoc_STRVAR(doc_QGLFramebufferObjectFormat_internalTextureFormat, "internalTextureFormat(self) -> int");

extern "C" {static PyObject *meth_QGLFramebufferObjectFormat_internalTextureFormat(PyObject *, PyObject *);}
static PyObject *meth_QGLFramebufferObjectFormat_internalTextureFormat(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGLFramebufferObjectFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLFramebufferObjectFormat, &sipCpp))
        {
            GLenum sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->internalTextureFormat();
            Py_END_ALLOW_THREADS

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLFramebufferObjectFormat, sipName_internalTextureFormat, doc_QGLFramebufferObjectFormat_internalTextureFormat);

    return NULL;
}


PyDoc_STRVAR(doc_QGLFramebufferObjectFormat_setMipmap, "setMipmap(self, bool)");

extern "C" {static PyObject *meth_QGLFramebufferObjectFormat_setMipmap(PyObject *, PyObject *);}
static PyObject *meth_QGLFramebufferObjectFormat_setMipmap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QGLFramebufferObjectFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QGLFramebufferObjectFormat, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setMipmap(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLFramebufferObjectFormat, sipName_setMipmap, doc_QGLFramebufferObjectFormat_setMipmap);

    return NULL;
}


PyDoc_STRVAR(doc_QGLFramebufferObjectFormat_mipmap, "mipmap(self) -> bool");

extern "C" {static PyObject *meth_QGLFramebufferObjectFormat_mipmap(PyObject *, PyObject *);}
static PyObject *meth_QGLFramebufferObjectFormat_mipmap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGLFramebufferObjectFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLFramebufferObjectFormat, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->mipmap();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLFramebufferObjectFormat, sipName_mipmap, doc_QGLFramebufferObjectFormat_mipmap);

    return NULL;
}


extern "C" {static PyObject *slot_QGLFramebufferObjectFormat___ne__(PyObject *,PyObject *);}
static PyObject *slot_QGLFramebufferObjectFormat___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QGLFramebufferObjectFormat *sipCpp = reinterpret_cast<QGLFramebufferObjectFormat *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGLFramebufferObjectFormat));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGLFramebufferObjectFormat* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QGLFramebufferObjectFormat, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QGLFramebufferObjectFormat::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtOpenGL,ne_slot,sipType_QGLFramebufferObjectFormat,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGLFramebufferObjectFormat___eq__(PyObject *,PyObject *);}
static PyObject *slot_QGLFramebufferObjectFormat___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QGLFramebufferObjectFormat *sipCpp = reinterpret_cast<QGLFramebufferObjectFormat *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGLFramebufferObjectFormat));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGLFramebufferObjectFormat* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QGLFramebufferObjectFormat, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QGLFramebufferObjectFormat::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtOpenGL,eq_slot,sipType_QGLFramebufferObjectFormat,sipSelf,sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QGLFramebufferObjectFormat(void *, int);}
static void release_QGLFramebufferObjectFormat(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QGLFramebufferObjectFormat *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QGLFramebufferObjectFormat(void *, SIP_SSIZE_T, const void *);}
static void assign_QGLFramebufferObjectFormat(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QGLFramebufferObjectFormat *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QGLFramebufferObjectFormat *>(sipSrc);
}


extern "C" {static void *array_QGLFramebufferObjectFormat(SIP_SSIZE_T);}
static void *array_QGLFramebufferObjectFormat(SIP_SSIZE_T sipNrElem)
{
    return new QGLFramebufferObjectFormat[sipNrElem];
}


extern "C" {static void *copy_QGLFramebufferObjectFormat(const void *, SIP_SSIZE_T);}
static void *copy_QGLFramebufferObjectFormat(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QGLFramebufferObjectFormat(reinterpret_cast<const QGLFramebufferObjectFormat *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QGLFramebufferObjectFormat(sipSimpleWrapper *);}
static void dealloc_QGLFramebufferObjectFormat(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QGLFramebufferObjectFormat(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QGLFramebufferObjectFormat(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGLFramebufferObjectFormat(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QGLFramebufferObjectFormat *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QGLFramebufferObjectFormat();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QGLFramebufferObjectFormat* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QGLFramebufferObjectFormat, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QGLFramebufferObjectFormat(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QGLFramebufferObjectFormat[] = {
    {(void *)slot_QGLFramebufferObjectFormat___ne__, ne_slot},
    {(void *)slot_QGLFramebufferObjectFormat___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QGLFramebufferObjectFormat[] = {
    {SIP_MLNAME_CAST(sipName_attachment), meth_QGLFramebufferObjectFormat_attachment, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLFramebufferObjectFormat_attachment)},
    {SIP_MLNAME_CAST(sipName_internalTextureFormat), meth_QGLFramebufferObjectFormat_internalTextureFormat, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLFramebufferObjectFormat_internalTextureFormat)},
    {SIP_MLNAME_CAST(sipName_mipmap), meth_QGLFramebufferObjectFormat_mipmap, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLFramebufferObjectFormat_mipmap)},
    {SIP_MLNAME_CAST(sipName_samples), meth_QGLFramebufferObjectFormat_samples, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLFramebufferObjectFormat_samples)},
    {SIP_MLNAME_CAST(sipName_setAttachment), meth_QGLFramebufferObjectFormat_setAttachment, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLFramebufferObjectFormat_setAttachment)},
    {SIP_MLNAME_CAST(sipName_setInternalTextureFormat), meth_QGLFramebufferObjectFormat_setInternalTextureFormat, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLFramebufferObjectFormat_setInternalTextureFormat)},
    {SIP_MLNAME_CAST(sipName_setMipmap), meth_QGLFramebufferObjectFormat_setMipmap, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLFramebufferObjectFormat_setMipmap)},
    {SIP_MLNAME_CAST(sipName_setSamples), meth_QGLFramebufferObjectFormat_setSamples, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLFramebufferObjectFormat_setSamples)},
    {SIP_MLNAME_CAST(sipName_setTextureTarget), meth_QGLFramebufferObjectFormat_setTextureTarget, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLFramebufferObjectFormat_setTextureTarget)},
    {SIP_MLNAME_CAST(sipName_textureTarget), meth_QGLFramebufferObjectFormat_textureTarget, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLFramebufferObjectFormat_textureTarget)}
};

PyDoc_STRVAR(doc_QGLFramebufferObjectFormat, "\1QGLFramebufferObjectFormat()\n"
    "QGLFramebufferObjectFormat(QGLFramebufferObjectFormat)");


pyqt4ClassTypeDef sipTypeDef_QtOpenGL_QGLFramebufferObjectFormat = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QGLFramebufferObjectFormat,
        {0}
    },
    {
        sipNameNr_QGLFramebufferObjectFormat,
        {0, 0, 1},
        10, methods_QGLFramebufferObjectFormat,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGLFramebufferObjectFormat,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QGLFramebufferObjectFormat,
    init_type_QGLFramebufferObjectFormat,
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
    dealloc_QGLFramebufferObjectFormat,
    assign_QGLFramebufferObjectFormat,
    array_QGLFramebufferObjectFormat,
    copy_QGLFramebufferObjectFormat,
    release_QGLFramebufferObjectFormat,
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
