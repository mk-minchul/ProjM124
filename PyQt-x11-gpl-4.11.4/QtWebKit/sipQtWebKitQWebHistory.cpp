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

#line 62 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtWebKit/qwebhistory.sip"
#include <qwebhistory.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtWebKit/sipQtWebKitQWebHistory.cpp"

#line 34 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtWebKit/qwebhistory.sip"
#include <qwebhistory.h>
#line 33 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtWebKit/sipQtWebKitQWebHistory.cpp"
#line 28 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 36 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtWebKit/sipQtWebKitQWebHistory.cpp"


PyDoc_STRVAR(doc_QWebHistory_clear, "clear(self)");

extern "C" {static PyObject *meth_QWebHistory_clear(PyObject *, PyObject *);}
static PyObject *meth_QWebHistory_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWebHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHistory, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->clear();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistory, sipName_clear, doc_QWebHistory_clear);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistory_items, "items(self) -> object");

extern "C" {static PyObject *meth_QWebHistory_items(PyObject *, PyObject *);}
static PyObject *meth_QWebHistory_items(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHistory, &sipCpp))
        {
            QList<QWebHistoryItem>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QWebHistoryItem>(sipCpp->items());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QWebHistoryItem,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistory, sipName_items, doc_QWebHistory_items);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistory_backItems, "backItems(self, int) -> object");

extern "C" {static PyObject *meth_QWebHistory_backItems(PyObject *, PyObject *);}
static PyObject *meth_QWebHistory_backItems(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QWebHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QWebHistory, &sipCpp, &a0))
        {
            QList<QWebHistoryItem>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QWebHistoryItem>(sipCpp->backItems(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QWebHistoryItem,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistory, sipName_backItems, doc_QWebHistory_backItems);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistory_forwardItems, "forwardItems(self, int) -> object");

extern "C" {static PyObject *meth_QWebHistory_forwardItems(PyObject *, PyObject *);}
static PyObject *meth_QWebHistory_forwardItems(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QWebHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QWebHistory, &sipCpp, &a0))
        {
            QList<QWebHistoryItem>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QWebHistoryItem>(sipCpp->forwardItems(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QWebHistoryItem,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistory, sipName_forwardItems, doc_QWebHistory_forwardItems);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistory_canGoBack, "canGoBack(self) -> bool");

extern "C" {static PyObject *meth_QWebHistory_canGoBack(PyObject *, PyObject *);}
static PyObject *meth_QWebHistory_canGoBack(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHistory, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->canGoBack();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistory, sipName_canGoBack, doc_QWebHistory_canGoBack);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistory_canGoForward, "canGoForward(self) -> bool");

extern "C" {static PyObject *meth_QWebHistory_canGoForward(PyObject *, PyObject *);}
static PyObject *meth_QWebHistory_canGoForward(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHistory, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->canGoForward();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistory, sipName_canGoForward, doc_QWebHistory_canGoForward);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistory_back, "back(self)");

extern "C" {static PyObject *meth_QWebHistory_back(PyObject *, PyObject *);}
static PyObject *meth_QWebHistory_back(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWebHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHistory, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->back();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistory, sipName_back, doc_QWebHistory_back);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistory_forward, "forward(self)");

extern "C" {static PyObject *meth_QWebHistory_forward(PyObject *, PyObject *);}
static PyObject *meth_QWebHistory_forward(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWebHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHistory, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->forward();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistory, sipName_forward, doc_QWebHistory_forward);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistory_goToItem, "goToItem(self, QWebHistoryItem)");

extern "C" {static PyObject *meth_QWebHistory_goToItem(PyObject *, PyObject *);}
static PyObject *meth_QWebHistory_goToItem(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebHistoryItem* a0;
        QWebHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QWebHistory, &sipCpp, sipType_QWebHistoryItem, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->goToItem(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistory, sipName_goToItem, doc_QWebHistory_goToItem);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistory_backItem, "backItem(self) -> QWebHistoryItem");

extern "C" {static PyObject *meth_QWebHistory_backItem(PyObject *, PyObject *);}
static PyObject *meth_QWebHistory_backItem(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHistory, &sipCpp))
        {
            QWebHistoryItem*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QWebHistoryItem(sipCpp->backItem());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QWebHistoryItem,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistory, sipName_backItem, doc_QWebHistory_backItem);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistory_currentItem, "currentItem(self) -> QWebHistoryItem");

extern "C" {static PyObject *meth_QWebHistory_currentItem(PyObject *, PyObject *);}
static PyObject *meth_QWebHistory_currentItem(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHistory, &sipCpp))
        {
            QWebHistoryItem*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QWebHistoryItem(sipCpp->currentItem());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QWebHistoryItem,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistory, sipName_currentItem, doc_QWebHistory_currentItem);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistory_forwardItem, "forwardItem(self) -> QWebHistoryItem");

extern "C" {static PyObject *meth_QWebHistory_forwardItem(PyObject *, PyObject *);}
static PyObject *meth_QWebHistory_forwardItem(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHistory, &sipCpp))
        {
            QWebHistoryItem*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QWebHistoryItem(sipCpp->forwardItem());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QWebHistoryItem,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistory, sipName_forwardItem, doc_QWebHistory_forwardItem);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistory_itemAt, "itemAt(self, int) -> QWebHistoryItem");

extern "C" {static PyObject *meth_QWebHistory_itemAt(PyObject *, PyObject *);}
static PyObject *meth_QWebHistory_itemAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QWebHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QWebHistory, &sipCpp, &a0))
        {
            QWebHistoryItem*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QWebHistoryItem(sipCpp->itemAt(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QWebHistoryItem,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistory, sipName_itemAt, doc_QWebHistory_itemAt);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistory_count, "count(self) -> int");

extern "C" {static PyObject *meth_QWebHistory_count(PyObject *, PyObject *);}
static PyObject *meth_QWebHistory_count(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHistory, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->count();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistory, sipName_count, doc_QWebHistory_count);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistory_currentItemIndex, "currentItemIndex(self) -> int");

extern "C" {static PyObject *meth_QWebHistory_currentItemIndex(PyObject *, PyObject *);}
static PyObject *meth_QWebHistory_currentItemIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHistory, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->currentItemIndex();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistory, sipName_currentItemIndex, doc_QWebHistory_currentItemIndex);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistory_maximumItemCount, "maximumItemCount(self) -> int");

extern "C" {static PyObject *meth_QWebHistory_maximumItemCount(PyObject *, PyObject *);}
static PyObject *meth_QWebHistory_maximumItemCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHistory, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->maximumItemCount();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistory, sipName_maximumItemCount, doc_QWebHistory_maximumItemCount);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistory_setMaximumItemCount, "setMaximumItemCount(self, int)");

extern "C" {static PyObject *meth_QWebHistory_setMaximumItemCount(PyObject *, PyObject *);}
static PyObject *meth_QWebHistory_setMaximumItemCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QWebHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QWebHistory, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setMaximumItemCount(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistory, sipName_setMaximumItemCount, doc_QWebHistory_setMaximumItemCount);

    return NULL;
}


extern "C" {static SIP_SSIZE_T slot_QWebHistory___len__(PyObject *);}
static SIP_SSIZE_T slot_QWebHistory___len__(PyObject *sipSelf)
{
    QWebHistory *sipCpp = reinterpret_cast<QWebHistory *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebHistory));

    if (!sipCpp)
        return 0;


    {
        {
            SIP_SSIZE_T sipRes = 0;

#line 1 "Auto-generated"
            sipRes = (SIP_SSIZE_T)sipCpp->count();
#line 564 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtWebKit/sipQtWebKitQWebHistory.cpp"

            return sipRes;
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_QWebHistory(void *, int);}
static void release_QWebHistory(void *,int)
{
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QWebHistory[] = {
    {(void *)slot_QWebHistory___len__, len_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QWebHistory[] = {
    {SIP_MLNAME_CAST(sipName_back), meth_QWebHistory_back, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistory_back)},
    {SIP_MLNAME_CAST(sipName_backItem), meth_QWebHistory_backItem, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistory_backItem)},
    {SIP_MLNAME_CAST(sipName_backItems), meth_QWebHistory_backItems, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistory_backItems)},
    {SIP_MLNAME_CAST(sipName_canGoBack), meth_QWebHistory_canGoBack, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistory_canGoBack)},
    {SIP_MLNAME_CAST(sipName_canGoForward), meth_QWebHistory_canGoForward, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistory_canGoForward)},
    {SIP_MLNAME_CAST(sipName_clear), meth_QWebHistory_clear, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistory_clear)},
    {SIP_MLNAME_CAST(sipName_count), meth_QWebHistory_count, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistory_count)},
    {SIP_MLNAME_CAST(sipName_currentItem), meth_QWebHistory_currentItem, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistory_currentItem)},
    {SIP_MLNAME_CAST(sipName_currentItemIndex), meth_QWebHistory_currentItemIndex, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistory_currentItemIndex)},
    {SIP_MLNAME_CAST(sipName_forward), meth_QWebHistory_forward, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistory_forward)},
    {SIP_MLNAME_CAST(sipName_forwardItem), meth_QWebHistory_forwardItem, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistory_forwardItem)},
    {SIP_MLNAME_CAST(sipName_forwardItems), meth_QWebHistory_forwardItems, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistory_forwardItems)},
    {SIP_MLNAME_CAST(sipName_goToItem), meth_QWebHistory_goToItem, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistory_goToItem)},
    {SIP_MLNAME_CAST(sipName_itemAt), meth_QWebHistory_itemAt, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistory_itemAt)},
    {SIP_MLNAME_CAST(sipName_items), meth_QWebHistory_items, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistory_items)},
    {SIP_MLNAME_CAST(sipName_maximumItemCount), meth_QWebHistory_maximumItemCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistory_maximumItemCount)},
    {SIP_MLNAME_CAST(sipName_setMaximumItemCount), meth_QWebHistory_setMaximumItemCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistory_setMaximumItemCount)}
};


pyqt4ClassTypeDef sipTypeDef_QtWebKit_QWebHistory = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QWebHistory,
        {0}
    },
    {
        sipNameNr_QWebHistory,
        {0, 0, 1},
        17, methods_QWebHistory,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QWebHistory,
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
    release_QWebHistory,
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
