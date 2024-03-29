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

#include "sipAPIphonon.h"

#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/abstractaudiooutput.sip"
#include <abstractaudiooutput.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/abstractvideooutput.sip"
#include <abstractvideooutput.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/audiooutput.sip"
#include <audiooutput.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/backendcapabilities.sip"
#include <backendcapabilities.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/effect.sip"
#include <effect.h>
#line 34 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/effectparameter.sip"
#include <effectparameter.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/effectwidget.sip"
#include <effectwidget.h>
#line 34 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/mediacontroller.sip"
#include <mediacontroller.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/medianode.sip"
#include <medianode.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/mediaobject.sip"
#include <mediaobject.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/mediasource.sip"
#include <mediasource.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/objectdescription.sip"
#include <objectdescription.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/path.sip"
#include <path.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/phononnamespace.sip"
#include <phononnamespace.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/seekslider.sip"
#include <seekslider.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/videoplayer.sip"
#include <videoplayer.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/videowidget.sip"
#include <videowidget.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/volumeslider.sip"
#include <volumeslider.h>
#line 63 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/phonon/sipphononPhonon.cpp"

#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/abstractaudiooutput.sip"
#include <abstractaudiooutput.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/abstractvideooutput.sip"
#include <abstractvideooutput.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/audiooutput.sip"
#include <audiooutput.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/backendcapabilities.sip"
#include <backendcapabilities.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/effect.sip"
#include <effect.h>
#line 34 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/effectparameter.sip"
#include <effectparameter.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/effectwidget.sip"
#include <effectwidget.h>
#line 34 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/mediacontroller.sip"
#include <mediacontroller.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/medianode.sip"
#include <medianode.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/mediaobject.sip"
#include <mediaobject.h>
#line 34 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/mediaobject.sip"
#include <mediaobject.h>
#line 87 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/phonon/sipphononPhonon.cpp"
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/abstractaudiooutput.sip"
#include <abstractaudiooutput.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/abstractvideooutput.sip"
#include <abstractvideooutput.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/audiooutput.sip"
#include <audiooutput.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/backendcapabilities.sip"
#include <backendcapabilities.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/effect.sip"
#include <effect.h>
#line 34 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/effectparameter.sip"
#include <effectparameter.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/effectwidget.sip"
#include <effectwidget.h>
#line 34 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/mediacontroller.sip"
#include <mediacontroller.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/medianode.sip"
#include <medianode.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/mediaobject.sip"
#include <mediaobject.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/mediasource.sip"
#include <mediasource.h>
#line 34 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/mediasource.sip"
#include <mediasource.h>
#line 112 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/phonon/sipphononPhonon.cpp"
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/abstractaudiooutput.sip"
#include <abstractaudiooutput.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/abstractvideooutput.sip"
#include <abstractvideooutput.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/audiooutput.sip"
#include <audiooutput.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/backendcapabilities.sip"
#include <backendcapabilities.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/effect.sip"
#include <effect.h>
#line 34 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/effectparameter.sip"
#include <effectparameter.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/effectwidget.sip"
#include <effectwidget.h>
#line 34 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/mediacontroller.sip"
#include <mediacontroller.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/medianode.sip"
#include <medianode.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/mediaobject.sip"
#include <mediaobject.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/mediasource.sip"
#include <mediasource.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/objectdescription.sip"
#include <objectdescription.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/path.sip"
#include <path.h>
#line 34 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/path.sip"
#include <path.h>
#line 141 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/phonon/sipphononPhonon.cpp"
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/abstractaudiooutput.sip"
#include <abstractaudiooutput.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/abstractvideooutput.sip"
#include <abstractvideooutput.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/audiooutput.sip"
#include <audiooutput.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/backendcapabilities.sip"
#include <backendcapabilities.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/effect.sip"
#include <effect.h>
#line 34 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/effectparameter.sip"
#include <effectparameter.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/effectwidget.sip"
#include <effectwidget.h>
#line 34 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/mediacontroller.sip"
#include <mediacontroller.h>
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/medianode.sip"
#include <medianode.h>
#line 34 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/phonon/medianode.sip"
#include <medianode.h>
#line 162 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/phonon/sipphononPhonon.cpp"
#line 31 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 165 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/phonon/sipphononPhonon.cpp"


PyDoc_STRVAR(doc_Phonon_phononVersion, "phononVersion() -> str");

extern "C" {static PyObject *meth_Phonon_phononVersion(PyObject *, PyObject *);}
static PyObject *meth_Phonon_phononVersion(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            const char*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = Phonon::phononVersion();
            Py_END_ALLOW_THREADS

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return SIPBytes_FromString(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_phononVersion, doc_Phonon_phononVersion);

    return NULL;
}


PyDoc_STRVAR(doc_Phonon_categoryToString, "categoryToString(Phonon.Category) -> QString");

extern "C" {static PyObject *meth_Phonon_categoryToString(PyObject *, PyObject *);}
static PyObject *meth_Phonon_categoryToString(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        Phonon::Category a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "E", sipType_Phonon_Category, &a0))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(Phonon::categoryToString(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_categoryToString, doc_Phonon_categoryToString);

    return NULL;
}


PyDoc_STRVAR(doc_Phonon_createPath, "createPath(Phonon.MediaNode, Phonon.MediaNode) -> Phonon.Path");

extern "C" {static PyObject *meth_Phonon_createPath(PyObject *, PyObject *);}
static PyObject *meth_Phonon_createPath(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        Phonon::MediaNode* a0;
        Phonon::MediaNode* a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8J8", sipType_Phonon_MediaNode, &a0, sipType_Phonon_MediaNode, &a1))
        {
            Phonon::Path*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Phonon::Path(Phonon::createPath(a0,a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Phonon_Path,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_createPath, doc_Phonon_createPath);

    return NULL;
}


PyDoc_STRVAR(doc_Phonon_createPlayer, "createPlayer(Phonon.Category, source: Phonon.MediaSource = Phonon.MediaSource()) -> Phonon.MediaObject");

extern "C" {static PyObject *meth_Phonon_createPlayer(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_Phonon_createPlayer(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        Phonon::Category a0;
        const Phonon::MediaSource& a1def = Phonon::MediaSource();
        const Phonon::MediaSource* a1 = &a1def;

        static const char *sipKwdList[] = {
            NULL,
            sipName_source,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "E|J9", sipType_Phonon_Category, &a0, sipType_Phonon_MediaSource, &a1))
        {
            Phonon::MediaObject*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = Phonon::createPlayer(a0,*a1);
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Phonon_MediaObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_createPlayer, doc_Phonon_createPlayer);

    return NULL;
}


static PyMethodDef methods_Phonon[] = {
    {SIP_MLNAME_CAST(sipName_categoryToString), meth_Phonon_categoryToString, METH_VARARGS, SIP_MLDOC_CAST(doc_Phonon_categoryToString)},
    {SIP_MLNAME_CAST(sipName_createPath), meth_Phonon_createPath, METH_VARARGS, SIP_MLDOC_CAST(doc_Phonon_createPath)},
    {SIP_MLNAME_CAST(sipName_createPlayer), (PyCFunction)meth_Phonon_createPlayer, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_Phonon_createPlayer)},
    {SIP_MLNAME_CAST(sipName_phononVersion), meth_Phonon_phononVersion, METH_VARARGS, SIP_MLDOC_CAST(doc_Phonon_phononVersion)}
};

static sipEnumMemberDef enummembers_Phonon[] = {
    {sipName_AccessibilityCategory, static_cast<int>(Phonon::AccessibilityCategory), 10},
    {sipName_AlbumMetaData, static_cast<int>(Phonon::AlbumMetaData), 27},
    {sipName_ArtistMetaData, static_cast<int>(Phonon::ArtistMetaData), 27},
    {sipName_BufferingState, static_cast<int>(Phonon::BufferingState), 30},
    {sipName_Cd, static_cast<int>(Phonon::Cd), 11},
    {sipName_CommunicationCategory, static_cast<int>(Phonon::CommunicationCategory), 10},
    {sipName_DateMetaData, static_cast<int>(Phonon::DateMetaData), 27},
    {sipName_DescriptionMetaData, static_cast<int>(Phonon::DescriptionMetaData), 27},
    {sipName_Dvd, static_cast<int>(Phonon::Dvd), 11},
    {sipName_ErrorState, static_cast<int>(Phonon::ErrorState), 30},
    {sipName_FatalError, static_cast<int>(Phonon::FatalError), 19},
    {sipName_GameCategory, static_cast<int>(Phonon::GameCategory), 10},
    {sipName_GenreMetaData, static_cast<int>(Phonon::GenreMetaData), 27},
    {sipName_LoadingState, static_cast<int>(Phonon::LoadingState), 30},
    {sipName_MusicBrainzDiscIdMetaData, static_cast<int>(Phonon::MusicBrainzDiscIdMetaData), 27},
    {sipName_MusicCategory, static_cast<int>(Phonon::MusicCategory), 10},
    {sipName_NoCategory, static_cast<int>(Phonon::NoCategory), 10},
    {sipName_NoDisc, static_cast<int>(Phonon::NoDisc), 11},
    {sipName_NoError, static_cast<int>(Phonon::NoError), 19},
    {sipName_NormalError, static_cast<int>(Phonon::NormalError), 19},
    {sipName_NotificationCategory, static_cast<int>(Phonon::NotificationCategory), 10},
    {sipName_PausedState, static_cast<int>(Phonon::PausedState), 30},
    {sipName_PlayingState, static_cast<int>(Phonon::PlayingState), 30},
    {sipName_StoppedState, static_cast<int>(Phonon::StoppedState), 30},
    {sipName_TitleMetaData, static_cast<int>(Phonon::TitleMetaData), 27},
    {sipName_TracknumberMetaData, static_cast<int>(Phonon::TracknumberMetaData), 27},
    {sipName_Vcd, static_cast<int>(Phonon::Vcd), 11},
    {sipName_VideoCategory, static_cast<int>(Phonon::VideoCategory), 10},
};


pyqt4ClassTypeDef sipTypeDef_phonon_Phonon = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_NAMESPACE,
        sipNameNr_Phonon,
        {0}
    },
    {
        sipNameNr_Phonon,
        {0, 0, 1},
        4, methods_Phonon,
        28, enummembers_Phonon,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    0,
    0,
    0,
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
    0,
    0,
    0,
    0,
    0,
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
