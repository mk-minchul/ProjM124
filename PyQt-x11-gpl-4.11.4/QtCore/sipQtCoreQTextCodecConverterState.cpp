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

#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qtextcodec.sip"
#include <qtextcodec.h>
#line 86 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qtextcodec.sip"
#include <qtextcodec.h>
#line 31 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQTextCodecConverterState.cpp"

#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtCore/qtextcodec.sip"
#include <qtextcodec.h>
#line 35 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtCore/sipQtCoreQTextCodecConverterState.cpp"


/* Call the instance's destructor. */
extern "C" {static void release_QTextCodec_ConverterState(void *, int);}
static void release_QTextCodec_ConverterState(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QTextCodec::ConverterState *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QTextCodec_ConverterState(sipSimpleWrapper *);}
static void dealloc_QTextCodec_ConverterState(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTextCodec_ConverterState(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QTextCodec_ConverterState(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTextCodec_ConverterState(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QTextCodec::ConverterState *sipCpp = 0;

    {
        QTextCodec::ConversionFlags a0def = QTextCodec::DefaultConversion;
        QTextCodec::ConversionFlags* a0 = &a0def;
        int a0State = 0;

        static const char *sipKwdList[] = {
            sipName_flags,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|J1", sipType_QTextCodec_ConversionFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextCodec::ConverterState(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QTextCodec_ConversionFlags,a0State);

            return sipCpp;
        }
    }

    return NULL;
}

PyDoc_STRVAR(doc_QTextCodec_ConverterState, "\1QTextCodec.ConverterState(flags: QTextCodec.ConversionFlags = QTextCodec.DefaultConversion)");


pyqt4ClassTypeDef sipTypeDef_QtCore_QTextCodec_ConverterState = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QTextCodec__ConverterState,
        {0}
    },
    {
        sipNameNr_ConverterState,
        {218, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTextCodec_ConverterState,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QTextCodec_ConverterState,
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
    dealloc_QTextCodec_ConverterState,
    0,
    0,
    0,
    release_QTextCodec_ConverterState,
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