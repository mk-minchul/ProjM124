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

#line 1248 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQStyleOptionToolBox.cpp"

#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qicon.sip"
#include <qicon.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQStyleOptionToolBox.cpp"
#line 31 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQStyleOptionToolBox.cpp"
#line 32 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 39 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQStyleOptionToolBox.cpp"


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionToolBox(void *, int);}
static void release_QStyleOptionToolBox(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStyleOptionToolBox *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStyleOptionToolBox(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionToolBox(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionToolBox *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionToolBox *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionToolBox(SIP_SSIZE_T);}
static void *array_QStyleOptionToolBox(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionToolBox[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionToolBox(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionToolBox(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionToolBox(reinterpret_cast<const QStyleOptionToolBox *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionToolBox(sipSimpleWrapper *);}
static void dealloc_QStyleOptionToolBox(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionToolBox(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStyleOptionToolBox(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionToolBox(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionToolBox *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionToolBox();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QStyleOptionToolBox* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionToolBox, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionToolBox(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionToolBox[] = {{498, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionToolBox[] = {
    {sipName_Type, static_cast<int>(QStyleOptionToolBox::Type), 596},
    {sipName_Version, static_cast<int>(QStyleOptionToolBox::Version), 597},
};


extern "C" {static PyObject *varget_QStyleOptionToolBox_icon(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionToolBox_icon(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QIcon*sipVal;
    QStyleOptionToolBox *sipCpp = reinterpret_cast<QStyleOptionToolBox *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -115);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->icon;

    sipPy = sipConvertFromType(sipVal, sipType_QIcon, NULL);
    sipKeepReference(sipPySelf, -115, sipPy);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionToolBox_icon(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionToolBox_icon(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QIcon*sipVal;
    QStyleOptionToolBox *sipCpp = reinterpret_cast<QStyleOptionToolBox *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QIcon *>(sipForceConvertToType(sipPy,sipType_QIcon,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->icon = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionToolBox_text(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionToolBox_text(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QString*sipVal;
    QStyleOptionToolBox *sipCpp = reinterpret_cast<QStyleOptionToolBox *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -116);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->text;

    sipPy = sipConvertFromType(sipVal, sipType_QString, NULL);
    sipKeepReference(sipPySelf, -116, sipPy);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionToolBox_text(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionToolBox_text(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QString*sipVal;
    QStyleOptionToolBox *sipCpp = reinterpret_cast<QStyleOptionToolBox *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QString *>(sipForceConvertToType(sipPy,sipType_QString,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->text = *sipVal;

    sipReleaseType(sipVal, sipType_QString, sipValState);

    return 0;
}

sipVariableDef variables_QStyleOptionToolBox[] = {
    {InstanceVariable, sipName_icon, (PyMethodDef *)varget_QStyleOptionToolBox_icon, (PyMethodDef *)varset_QStyleOptionToolBox_icon, NULL, NULL},
    {InstanceVariable, sipName_text, (PyMethodDef *)varget_QStyleOptionToolBox_text, (PyMethodDef *)varset_QStyleOptionToolBox_text, NULL, NULL},
};

PyDoc_STRVAR(doc_QStyleOptionToolBox, "\1QStyleOptionToolBox()\n"
    "QStyleOptionToolBox(QStyleOptionToolBox)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QStyleOptionToolBox = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionToolBox,
        {0}
    },
    {
        sipNameNr_QStyleOptionToolBox,
        {0, 0, 1},
        0, 0,
        2, enummembers_QStyleOptionToolBox,
        2, variables_QStyleOptionToolBox,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionToolBox,
    -1,
    -1,
    supers_QStyleOptionToolBox,
    0,
    init_type_QStyleOptionToolBox,
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
    dealloc_QStyleOptionToolBox,
    assign_QStyleOptionToolBox,
    array_QStyleOptionToolBox,
    copy_QStyleOptionToolBox,
    release_QStyleOptionToolBox,
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
