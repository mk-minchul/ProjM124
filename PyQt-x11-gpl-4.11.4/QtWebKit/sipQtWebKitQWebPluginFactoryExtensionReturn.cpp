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

#include "sipAPIQtWebKit.h"

#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtWebKit/qwebpluginfactory.sip"
#include <qwebpluginfactory.h>
#line 80 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtWebKit/qwebpluginfactory.sip"
#include <qwebpluginfactory.h>
#line 31 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtWebKit/sipQtWebKitQWebPluginFactoryExtensionReturn.cpp"



/* Call the instance's destructor. */
extern "C" {static void release_QWebPluginFactory_ExtensionReturn(void *, int);}
static void release_QWebPluginFactory_ExtensionReturn(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QWebPluginFactory::ExtensionReturn *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QWebPluginFactory_ExtensionReturn(void *, SIP_SSIZE_T, const void *);}
static void assign_QWebPluginFactory_ExtensionReturn(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QWebPluginFactory::ExtensionReturn *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QWebPluginFactory::ExtensionReturn *>(sipSrc);
}


extern "C" {static void *array_QWebPluginFactory_ExtensionReturn(SIP_SSIZE_T);}
static void *array_QWebPluginFactory_ExtensionReturn(SIP_SSIZE_T sipNrElem)
{
    return new QWebPluginFactory::ExtensionReturn[sipNrElem];
}


extern "C" {static void *copy_QWebPluginFactory_ExtensionReturn(const void *, SIP_SSIZE_T);}
static void *copy_QWebPluginFactory_ExtensionReturn(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QWebPluginFactory::ExtensionReturn(reinterpret_cast<const QWebPluginFactory::ExtensionReturn *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QWebPluginFactory_ExtensionReturn(sipSimpleWrapper *);}
static void dealloc_QWebPluginFactory_ExtensionReturn(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QWebPluginFactory_ExtensionReturn(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QWebPluginFactory_ExtensionReturn(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QWebPluginFactory_ExtensionReturn(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QWebPluginFactory::ExtensionReturn *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QWebPluginFactory::ExtensionReturn();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QWebPluginFactory::ExtensionReturn* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QWebPluginFactory_ExtensionReturn, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QWebPluginFactory::ExtensionReturn(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}

PyDoc_STRVAR(doc_QWebPluginFactory_ExtensionReturn, "\1QWebPluginFactory.ExtensionReturn()\n"
    "QWebPluginFactory.ExtensionReturn(QWebPluginFactory.ExtensionReturn)");


pyqt4ClassTypeDef sipTypeDef_QtWebKit_QWebPluginFactory_ExtensionReturn = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QWebPluginFactory__ExtensionReturn,
        {0}
    },
    {
        sipNameNr_ExtensionReturn,
        {38, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QWebPluginFactory_ExtensionReturn,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QWebPluginFactory_ExtensionReturn,
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
    dealloc_QWebPluginFactory_ExtensionReturn,
    assign_QWebPluginFactory_ExtensionReturn,
    array_QWebPluginFactory_ExtensionReturn,
    copy_QWebPluginFactory_ExtensionReturn,
    release_QWebPluginFactory_ExtensionReturn,
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
