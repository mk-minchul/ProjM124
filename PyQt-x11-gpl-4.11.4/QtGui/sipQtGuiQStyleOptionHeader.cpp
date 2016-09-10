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

#line 624 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQStyleOptionHeader.cpp"

#line 30 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qicon.sip"
#include <qicon.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQStyleOptionHeader.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 36 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQStyleOptionHeader.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 39 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQStyleOptionHeader.cpp"
#line 31 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 42 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQStyleOptionHeader.cpp"
#line 32 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 45 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtGui/sipQtGuiQStyleOptionHeader.cpp"


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionHeader(void *, int);}
static void release_QStyleOptionHeader(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStyleOptionHeader *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStyleOptionHeader(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionHeader(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionHeader *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionHeader *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionHeader(SIP_SSIZE_T);}
static void *array_QStyleOptionHeader(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionHeader[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionHeader(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionHeader(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionHeader(reinterpret_cast<const QStyleOptionHeader *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionHeader(sipSimpleWrapper *);}
static void dealloc_QStyleOptionHeader(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionHeader(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStyleOptionHeader(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionHeader(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionHeader *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionHeader();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QStyleOptionHeader* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionHeader, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionHeader(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionHeader[] = {{498, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionHeader[] = {
    {sipName_Beginning, static_cast<int>(QStyleOptionHeader::Beginning), 537},
    {sipName_End, static_cast<int>(QStyleOptionHeader::End), 537},
    {sipName_Middle, static_cast<int>(QStyleOptionHeader::Middle), 537},
    {sipName_NextAndPreviousAreSelected, static_cast<int>(QStyleOptionHeader::NextAndPreviousAreSelected), 538},
    {sipName_NextIsSelected, static_cast<int>(QStyleOptionHeader::NextIsSelected), 538},
    {sipName_None, static_cast<int>(QStyleOptionHeader::None), 539},
    {sipName_NotAdjacent, static_cast<int>(QStyleOptionHeader::NotAdjacent), 538},
    {sipName_OnlyOneSection, static_cast<int>(QStyleOptionHeader::OnlyOneSection), 537},
    {sipName_PreviousIsSelected, static_cast<int>(QStyleOptionHeader::PreviousIsSelected), 538},
    {sipName_SortDown, static_cast<int>(QStyleOptionHeader::SortDown), 539},
    {sipName_SortUp, static_cast<int>(QStyleOptionHeader::SortUp), 539},
    {sipName_Type, static_cast<int>(QStyleOptionHeader::Type), 540},
    {sipName_Version, static_cast<int>(QStyleOptionHeader::Version), 541},
};


extern "C" {static PyObject *varget_QStyleOptionHeader_icon(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionHeader_icon(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QIcon*sipVal;
    QStyleOptionHeader *sipCpp = reinterpret_cast<QStyleOptionHeader *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -136);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->icon;

    sipPy = sipConvertFromType(sipVal, sipType_QIcon, NULL);
    sipKeepReference(sipPySelf, -136, sipPy);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionHeader_icon(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionHeader_icon(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QIcon*sipVal;
    QStyleOptionHeader *sipCpp = reinterpret_cast<QStyleOptionHeader *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QIcon *>(sipForceConvertToType(sipPy,sipType_QIcon,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->icon = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionHeader_iconAlignment(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionHeader_iconAlignment(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    Qt::Alignment*sipVal;
    QStyleOptionHeader *sipCpp = reinterpret_cast<QStyleOptionHeader *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -137);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->iconAlignment;

    sipPy = sipConvertFromType(sipVal, sipType_Qt_Alignment, NULL);
    sipKeepReference(sipPySelf, -137, sipPy);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionHeader_iconAlignment(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionHeader_iconAlignment(void *sipSelf, PyObject *sipPy, PyObject *)
{
    Qt::Alignment*sipVal;
    QStyleOptionHeader *sipCpp = reinterpret_cast<QStyleOptionHeader *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<Qt::Alignment *>(sipForceConvertToType(sipPy,sipType_Qt_Alignment,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->iconAlignment = *sipVal;

    sipReleaseType(sipVal, sipType_Qt_Alignment, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionHeader_orientation(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionHeader_orientation(void *sipSelf, PyObject *, PyObject *)
{
    Qt::Orientation sipVal;
    QStyleOptionHeader *sipCpp = reinterpret_cast<QStyleOptionHeader *>(sipSelf);

    sipVal = sipCpp->orientation;

    return sipConvertFromEnum(sipVal, sipType_Qt_Orientation);
}


extern "C" {static int varset_QStyleOptionHeader_orientation(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionHeader_orientation(void *sipSelf, PyObject *sipPy, PyObject *)
{
    Qt::Orientation sipVal;
    QStyleOptionHeader *sipCpp = reinterpret_cast<QStyleOptionHeader *>(sipSelf);

    sipVal = (Qt::Orientation)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->orientation = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionHeader_position(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionHeader_position(void *sipSelf, PyObject *, PyObject *)
{
    QStyleOptionHeader::SectionPosition sipVal;
    QStyleOptionHeader *sipCpp = reinterpret_cast<QStyleOptionHeader *>(sipSelf);

    sipVal = sipCpp->position;

    return sipConvertFromEnum(sipVal, sipType_QStyleOptionHeader_SectionPosition);
}


extern "C" {static int varset_QStyleOptionHeader_position(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionHeader_position(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QStyleOptionHeader::SectionPosition sipVal;
    QStyleOptionHeader *sipCpp = reinterpret_cast<QStyleOptionHeader *>(sipSelf);

    sipVal = (QStyleOptionHeader::SectionPosition)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->position = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionHeader_section(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionHeader_section(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
    QStyleOptionHeader *sipCpp = reinterpret_cast<QStyleOptionHeader *>(sipSelf);

    sipVal = sipCpp->section;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionHeader_section(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionHeader_section(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
    QStyleOptionHeader *sipCpp = reinterpret_cast<QStyleOptionHeader *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->section = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionHeader_selectedPosition(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionHeader_selectedPosition(void *sipSelf, PyObject *, PyObject *)
{
    QStyleOptionHeader::SelectedPosition sipVal;
    QStyleOptionHeader *sipCpp = reinterpret_cast<QStyleOptionHeader *>(sipSelf);

    sipVal = sipCpp->selectedPosition;

    return sipConvertFromEnum(sipVal, sipType_QStyleOptionHeader_SelectedPosition);
}


extern "C" {static int varset_QStyleOptionHeader_selectedPosition(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionHeader_selectedPosition(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QStyleOptionHeader::SelectedPosition sipVal;
    QStyleOptionHeader *sipCpp = reinterpret_cast<QStyleOptionHeader *>(sipSelf);

    sipVal = (QStyleOptionHeader::SelectedPosition)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->selectedPosition = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionHeader_sortIndicator(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionHeader_sortIndicator(void *sipSelf, PyObject *, PyObject *)
{
    QStyleOptionHeader::SortIndicator sipVal;
    QStyleOptionHeader *sipCpp = reinterpret_cast<QStyleOptionHeader *>(sipSelf);

    sipVal = sipCpp->sortIndicator;

    return sipConvertFromEnum(sipVal, sipType_QStyleOptionHeader_SortIndicator);
}


extern "C" {static int varset_QStyleOptionHeader_sortIndicator(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionHeader_sortIndicator(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QStyleOptionHeader::SortIndicator sipVal;
    QStyleOptionHeader *sipCpp = reinterpret_cast<QStyleOptionHeader *>(sipSelf);

    sipVal = (QStyleOptionHeader::SortIndicator)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->sortIndicator = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionHeader_text(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionHeader_text(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QString*sipVal;
    QStyleOptionHeader *sipCpp = reinterpret_cast<QStyleOptionHeader *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -138);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->text;

    sipPy = sipConvertFromType(sipVal, sipType_QString, NULL);
    sipKeepReference(sipPySelf, -138, sipPy);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionHeader_text(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionHeader_text(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QString*sipVal;
    QStyleOptionHeader *sipCpp = reinterpret_cast<QStyleOptionHeader *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QString *>(sipForceConvertToType(sipPy,sipType_QString,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->text = *sipVal;

    sipReleaseType(sipVal, sipType_QString, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionHeader_textAlignment(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionHeader_textAlignment(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    Qt::Alignment*sipVal;
    QStyleOptionHeader *sipCpp = reinterpret_cast<QStyleOptionHeader *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -139);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->textAlignment;

    sipPy = sipConvertFromType(sipVal, sipType_Qt_Alignment, NULL);
    sipKeepReference(sipPySelf, -139, sipPy);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionHeader_textAlignment(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionHeader_textAlignment(void *sipSelf, PyObject *sipPy, PyObject *)
{
    Qt::Alignment*sipVal;
    QStyleOptionHeader *sipCpp = reinterpret_cast<QStyleOptionHeader *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<Qt::Alignment *>(sipForceConvertToType(sipPy,sipType_Qt_Alignment,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->textAlignment = *sipVal;

    sipReleaseType(sipVal, sipType_Qt_Alignment, sipValState);

    return 0;
}

sipVariableDef variables_QStyleOptionHeader[] = {
    {InstanceVariable, sipName_icon, (PyMethodDef *)varget_QStyleOptionHeader_icon, (PyMethodDef *)varset_QStyleOptionHeader_icon, NULL, NULL},
    {InstanceVariable, sipName_iconAlignment, (PyMethodDef *)varget_QStyleOptionHeader_iconAlignment, (PyMethodDef *)varset_QStyleOptionHeader_iconAlignment, NULL, NULL},
    {InstanceVariable, sipName_orientation, (PyMethodDef *)varget_QStyleOptionHeader_orientation, (PyMethodDef *)varset_QStyleOptionHeader_orientation, NULL, NULL},
    {InstanceVariable, sipName_position, (PyMethodDef *)varget_QStyleOptionHeader_position, (PyMethodDef *)varset_QStyleOptionHeader_position, NULL, NULL},
    {InstanceVariable, sipName_section, (PyMethodDef *)varget_QStyleOptionHeader_section, (PyMethodDef *)varset_QStyleOptionHeader_section, NULL, NULL},
    {InstanceVariable, sipName_selectedPosition, (PyMethodDef *)varget_QStyleOptionHeader_selectedPosition, (PyMethodDef *)varset_QStyleOptionHeader_selectedPosition, NULL, NULL},
    {InstanceVariable, sipName_sortIndicator, (PyMethodDef *)varget_QStyleOptionHeader_sortIndicator, (PyMethodDef *)varset_QStyleOptionHeader_sortIndicator, NULL, NULL},
    {InstanceVariable, sipName_text, (PyMethodDef *)varget_QStyleOptionHeader_text, (PyMethodDef *)varset_QStyleOptionHeader_text, NULL, NULL},
    {InstanceVariable, sipName_textAlignment, (PyMethodDef *)varget_QStyleOptionHeader_textAlignment, (PyMethodDef *)varset_QStyleOptionHeader_textAlignment, NULL, NULL},
};

PyDoc_STRVAR(doc_QStyleOptionHeader, "\1QStyleOptionHeader()\n"
    "QStyleOptionHeader(QStyleOptionHeader)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QStyleOptionHeader = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionHeader,
        {0}
    },
    {
        sipNameNr_QStyleOptionHeader,
        {0, 0, 1},
        0, 0,
        13, enummembers_QStyleOptionHeader,
        9, variables_QStyleOptionHeader,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionHeader,
    -1,
    -1,
    supers_QStyleOptionHeader,
    0,
    init_type_QStyleOptionHeader,
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
    dealloc_QStyleOptionHeader,
    assign_QStyleOptionHeader,
    array_QStyleOptionHeader,
    copy_QStyleOptionHeader,
    release_QStyleOptionHeader,
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
