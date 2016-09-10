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

#include "sipAPIQtSvg.h"

#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtSvg/qsvggenerator.sip"
#include <qsvggenerator.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtSvg/sipQtSvgQSvgGenerator.cpp"

#line 26 "sip/QtGui/qpaintdevice.sip"
#include <qpaintdevice.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtSvg/sipQtSvgQSvgGenerator.cpp"
#line 56 "sip/QtGui/qpaintengine.sip"
#include <qpaintengine.h>
#line 36 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtSvg/sipQtSvgQSvgGenerator.cpp"
#line 30 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 39 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtSvg/sipQtSvgQSvgGenerator.cpp"
#line 163 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 42 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtSvg/sipQtSvgQSvgGenerator.cpp"
#line 31 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 45 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtSvg/sipQtSvgQSvgGenerator.cpp"
#line 30 "sip/QtCore/qiodevice.sip"
#include <qiodevice.h>
#line 48 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtSvg/sipQtSvgQSvgGenerator.cpp"
#line 30 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 51 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtSvg/sipQtSvgQSvgGenerator.cpp"


class sipQSvgGenerator : public QSvgGenerator
{
public:
    sipQSvgGenerator();
    virtual ~sipQSvgGenerator();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    int metric(QPaintDevice::PaintDeviceMetric) const;
    QPaintEngine* paintEngine() const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQSvgGenerator(const sipQSvgGenerator &);
    sipQSvgGenerator &operator = (const sipQSvgGenerator &);

    char sipPyMethods[2];
};

sipQSvgGenerator::sipQSvgGenerator(): QSvgGenerator(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQSvgGenerator::~sipQSvgGenerator()
{
    sipCommonDtor(sipPySelf);
}

int sipQSvgGenerator::metric(QPaintDevice::PaintDeviceMetric a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_metric);

    if (!sipMeth)
        return QSvgGenerator::metric(a0);

    typedef int (*sipVH_QtGui_14)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QPaintDevice::PaintDeviceMetric);

    return ((sipVH_QtGui_14)(sipModuleAPI_QtSvg_QtGui->em_virthandlers[14]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QPaintEngine* sipQSvgGenerator::paintEngine() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_paintEngine);

    if (!sipMeth)
        return QSvgGenerator::paintEngine();

    typedef QPaintEngine* (*sipVH_QtGui_27)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtGui_27)(sipModuleAPI_QtSvg_QtGui->em_virthandlers[27]))(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_QSvgGenerator_size, "size(self) -> QSize");

extern "C" {static PyObject *meth_QSvgGenerator_size(PyObject *, PyObject *);}
static PyObject *meth_QSvgGenerator_size(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSvgGenerator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSvgGenerator, &sipCpp))
        {
            QSize*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSize(sipCpp->size());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSvgGenerator, sipName_size, doc_QSvgGenerator_size);

    return NULL;
}


PyDoc_STRVAR(doc_QSvgGenerator_setSize, "setSize(self, QSize)");

extern "C" {static PyObject *meth_QSvgGenerator_setSize(PyObject *, PyObject *);}
static PyObject *meth_QSvgGenerator_setSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSize* a0;
        QSvgGenerator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QSvgGenerator, &sipCpp, sipType_QSize, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setSize(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSvgGenerator, sipName_setSize, doc_QSvgGenerator_setSize);

    return NULL;
}


PyDoc_STRVAR(doc_QSvgGenerator_fileName, "fileName(self) -> QString");

extern "C" {static PyObject *meth_QSvgGenerator_fileName(PyObject *, PyObject *);}
static PyObject *meth_QSvgGenerator_fileName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSvgGenerator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSvgGenerator, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->fileName());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSvgGenerator, sipName_fileName, doc_QSvgGenerator_fileName);

    return NULL;
}


PyDoc_STRVAR(doc_QSvgGenerator_setFileName, "setFileName(self, QString)");

extern "C" {static PyObject *meth_QSvgGenerator_setFileName(PyObject *, PyObject *);}
static PyObject *meth_QSvgGenerator_setFileName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QSvgGenerator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSvgGenerator, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setFileName(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSvgGenerator, sipName_setFileName, doc_QSvgGenerator_setFileName);

    return NULL;
}


PyDoc_STRVAR(doc_QSvgGenerator_outputDevice, "outputDevice(self) -> QIODevice");

extern "C" {static PyObject *meth_QSvgGenerator_outputDevice(PyObject *, PyObject *);}
static PyObject *meth_QSvgGenerator_outputDevice(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSvgGenerator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSvgGenerator, &sipCpp))
        {
            QIODevice*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->outputDevice();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QIODevice,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSvgGenerator, sipName_outputDevice, doc_QSvgGenerator_outputDevice);

    return NULL;
}


PyDoc_STRVAR(doc_QSvgGenerator_setOutputDevice, "setOutputDevice(self, QIODevice)");

extern "C" {static PyObject *meth_QSvgGenerator_setOutputDevice(PyObject *, PyObject *);}
static PyObject *meth_QSvgGenerator_setOutputDevice(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QIODevice* a0;
        QSvgGenerator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QSvgGenerator, &sipCpp, sipType_QIODevice, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setOutputDevice(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSvgGenerator, sipName_setOutputDevice, doc_QSvgGenerator_setOutputDevice);

    return NULL;
}


PyDoc_STRVAR(doc_QSvgGenerator_resolution, "resolution(self) -> int");

extern "C" {static PyObject *meth_QSvgGenerator_resolution(PyObject *, PyObject *);}
static PyObject *meth_QSvgGenerator_resolution(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSvgGenerator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSvgGenerator, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->resolution();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSvgGenerator, sipName_resolution, doc_QSvgGenerator_resolution);

    return NULL;
}


PyDoc_STRVAR(doc_QSvgGenerator_setResolution, "setResolution(self, int)");

extern "C" {static PyObject *meth_QSvgGenerator_setResolution(PyObject *, PyObject *);}
static PyObject *meth_QSvgGenerator_setResolution(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QSvgGenerator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QSvgGenerator, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setResolution(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSvgGenerator, sipName_setResolution, doc_QSvgGenerator_setResolution);

    return NULL;
}


PyDoc_STRVAR(doc_QSvgGenerator_title, "title(self) -> QString");

extern "C" {static PyObject *meth_QSvgGenerator_title(PyObject *, PyObject *);}
static PyObject *meth_QSvgGenerator_title(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSvgGenerator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSvgGenerator, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->title());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSvgGenerator, sipName_title, doc_QSvgGenerator_title);

    return NULL;
}


PyDoc_STRVAR(doc_QSvgGenerator_setTitle, "setTitle(self, QString)");

extern "C" {static PyObject *meth_QSvgGenerator_setTitle(PyObject *, PyObject *);}
static PyObject *meth_QSvgGenerator_setTitle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QSvgGenerator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSvgGenerator, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setTitle(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSvgGenerator, sipName_setTitle, doc_QSvgGenerator_setTitle);

    return NULL;
}


PyDoc_STRVAR(doc_QSvgGenerator_description, "description(self) -> QString");

extern "C" {static PyObject *meth_QSvgGenerator_description(PyObject *, PyObject *);}
static PyObject *meth_QSvgGenerator_description(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSvgGenerator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSvgGenerator, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->description());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSvgGenerator, sipName_description, doc_QSvgGenerator_description);

    return NULL;
}


PyDoc_STRVAR(doc_QSvgGenerator_setDescription, "setDescription(self, QString)");

extern "C" {static PyObject *meth_QSvgGenerator_setDescription(PyObject *, PyObject *);}
static PyObject *meth_QSvgGenerator_setDescription(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QSvgGenerator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSvgGenerator, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setDescription(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSvgGenerator, sipName_setDescription, doc_QSvgGenerator_setDescription);

    return NULL;
}


PyDoc_STRVAR(doc_QSvgGenerator_viewBox, "viewBox(self) -> QRect");

extern "C" {static PyObject *meth_QSvgGenerator_viewBox(PyObject *, PyObject *);}
static PyObject *meth_QSvgGenerator_viewBox(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSvgGenerator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSvgGenerator, &sipCpp))
        {
            QRect*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QRect(sipCpp->viewBox());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QRect,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSvgGenerator, sipName_viewBox, doc_QSvgGenerator_viewBox);

    return NULL;
}


PyDoc_STRVAR(doc_QSvgGenerator_viewBoxF, "viewBoxF(self) -> QRectF");

extern "C" {static PyObject *meth_QSvgGenerator_viewBoxF(PyObject *, PyObject *);}
static PyObject *meth_QSvgGenerator_viewBoxF(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSvgGenerator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSvgGenerator, &sipCpp))
        {
            QRectF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QRectF(sipCpp->viewBoxF());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QRectF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSvgGenerator, sipName_viewBoxF, doc_QSvgGenerator_viewBoxF);

    return NULL;
}


PyDoc_STRVAR(doc_QSvgGenerator_setViewBox, "setViewBox(self, QRect)\n"
    "setViewBox(self, QRectF)");

extern "C" {static PyObject *meth_QSvgGenerator_setViewBox(PyObject *, PyObject *);}
static PyObject *meth_QSvgGenerator_setViewBox(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRect* a0;
        QSvgGenerator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QSvgGenerator, &sipCpp, sipType_QRect, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setViewBox(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QRectF* a0;
        QSvgGenerator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QSvgGenerator, &sipCpp, sipType_QRectF, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setViewBox(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSvgGenerator, sipName_setViewBox, doc_QSvgGenerator_setViewBox);

    return NULL;
}


PyDoc_STRVAR(doc_QSvgGenerator_paintEngine, "paintEngine(self) -> QPaintEngine");

extern "C" {static PyObject *meth_QSvgGenerator_paintEngine(PyObject *, PyObject *);}
static PyObject *meth_QSvgGenerator_paintEngine(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QSvgGenerator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "p", &sipSelf, sipType_QSvgGenerator, &sipCpp))
        {
            QPaintEngine*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QSvgGenerator::paintEngine() : sipCpp->paintEngine());
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QPaintEngine,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSvgGenerator, sipName_paintEngine, doc_QSvgGenerator_paintEngine);

    return NULL;
}


PyDoc_STRVAR(doc_QSvgGenerator_metric, "metric(self, QPaintDevice.PaintDeviceMetric) -> int");

extern "C" {static PyObject *meth_QSvgGenerator_metric(PyObject *, PyObject *);}
static PyObject *meth_QSvgGenerator_metric(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QPaintDevice::PaintDeviceMetric a0;
        const QSvgGenerator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pE", &sipSelf, sipType_QSvgGenerator, &sipCpp, sipType_QPaintDevice_PaintDeviceMetric, &a0))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QSvgGenerator::metric(a0) : sipCpp->metric(a0));
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSvgGenerator, sipName_metric, doc_QSvgGenerator_metric);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSvgGenerator(void *, int);}
static void release_QSvgGenerator(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQSvgGenerator *>(sipCppV);
    else
        delete reinterpret_cast<QSvgGenerator *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QSvgGenerator(sipSimpleWrapper *);}
static void dealloc_QSvgGenerator(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQSvgGenerator *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QSvgGenerator(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QSvgGenerator(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSvgGenerator(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQSvgGenerator *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQSvgGenerator();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QSvgGenerator[] = {{362, 1, 1}};


static PyMethodDef methods_QSvgGenerator[] = {
    {SIP_MLNAME_CAST(sipName_description), meth_QSvgGenerator_description, METH_VARARGS, SIP_MLDOC_CAST(doc_QSvgGenerator_description)},
    {SIP_MLNAME_CAST(sipName_fileName), meth_QSvgGenerator_fileName, METH_VARARGS, SIP_MLDOC_CAST(doc_QSvgGenerator_fileName)},
    {SIP_MLNAME_CAST(sipName_metric), meth_QSvgGenerator_metric, METH_VARARGS, SIP_MLDOC_CAST(doc_QSvgGenerator_metric)},
    {SIP_MLNAME_CAST(sipName_outputDevice), meth_QSvgGenerator_outputDevice, METH_VARARGS, SIP_MLDOC_CAST(doc_QSvgGenerator_outputDevice)},
    {SIP_MLNAME_CAST(sipName_paintEngine), meth_QSvgGenerator_paintEngine, METH_VARARGS, SIP_MLDOC_CAST(doc_QSvgGenerator_paintEngine)},
    {SIP_MLNAME_CAST(sipName_resolution), meth_QSvgGenerator_resolution, METH_VARARGS, SIP_MLDOC_CAST(doc_QSvgGenerator_resolution)},
    {SIP_MLNAME_CAST(sipName_setDescription), meth_QSvgGenerator_setDescription, METH_VARARGS, SIP_MLDOC_CAST(doc_QSvgGenerator_setDescription)},
    {SIP_MLNAME_CAST(sipName_setFileName), meth_QSvgGenerator_setFileName, METH_VARARGS, SIP_MLDOC_CAST(doc_QSvgGenerator_setFileName)},
    {SIP_MLNAME_CAST(sipName_setOutputDevice), meth_QSvgGenerator_setOutputDevice, METH_VARARGS, SIP_MLDOC_CAST(doc_QSvgGenerator_setOutputDevice)},
    {SIP_MLNAME_CAST(sipName_setResolution), meth_QSvgGenerator_setResolution, METH_VARARGS, SIP_MLDOC_CAST(doc_QSvgGenerator_setResolution)},
    {SIP_MLNAME_CAST(sipName_setSize), meth_QSvgGenerator_setSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QSvgGenerator_setSize)},
    {SIP_MLNAME_CAST(sipName_setTitle), meth_QSvgGenerator_setTitle, METH_VARARGS, SIP_MLDOC_CAST(doc_QSvgGenerator_setTitle)},
    {SIP_MLNAME_CAST(sipName_setViewBox), meth_QSvgGenerator_setViewBox, METH_VARARGS, SIP_MLDOC_CAST(doc_QSvgGenerator_setViewBox)},
    {SIP_MLNAME_CAST(sipName_size), meth_QSvgGenerator_size, METH_VARARGS, SIP_MLDOC_CAST(doc_QSvgGenerator_size)},
    {SIP_MLNAME_CAST(sipName_title), meth_QSvgGenerator_title, METH_VARARGS, SIP_MLDOC_CAST(doc_QSvgGenerator_title)},
    {SIP_MLNAME_CAST(sipName_viewBox), meth_QSvgGenerator_viewBox, METH_VARARGS, SIP_MLDOC_CAST(doc_QSvgGenerator_viewBox)},
    {SIP_MLNAME_CAST(sipName_viewBoxF), meth_QSvgGenerator_viewBoxF, METH_VARARGS, SIP_MLDOC_CAST(doc_QSvgGenerator_viewBoxF)}
};

PyDoc_STRVAR(doc_QSvgGenerator, "\1QSvgGenerator()");


pyqt4ClassTypeDef sipTypeDef_QtSvg_QSvgGenerator = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QSvgGenerator,
        {0}
    },
    {
        sipNameNr_QSvgGenerator,
        {0, 0, 1},
        17, methods_QSvgGenerator,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSvgGenerator,
    -1,
    -1,
    supers_QSvgGenerator,
    0,
    init_type_QSvgGenerator,
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
    dealloc_QSvgGenerator,
    0,
    0,
    0,
    release_QSvgGenerator,
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