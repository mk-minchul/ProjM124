// This contains the implementation of the pyqtBoundSignal type.
//
// Copyright (c) 2015 Riverbank Computing Limited <info@riverbankcomputing.com>
// 
// This file is part of PyQt4.
// 
// This file may be used under the terms of the GNU General Public License
// version 3.0 as published by the Free Software Foundation and appearing in
// the file LICENSE included in the packaging of this file.  Please review the
// following information to ensure the GNU General Public License version 3.0
// requirements will be met: http://www.gnu.org/copyleft/gpl.html.
// 
// If you do not wish to use this file under the terms of the GPL version 3.0
// then you may purchase a commercial license.  For more information contact
// info@riverbankcomputing.com.
// 
// This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
// WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.


#include <Python.h>

#include <QtGlobal>
#include <QByteArray>
#include <QMetaObject>

#include "qpycore_chimera.h"
#include "qpycore_misc.h"
#include "qpycore_pyqtboundsignal.h"
#include "qpycore_pyqtproxy.h"
#include "qpycore_pyqtpyobject.h"
#include "qpycore_pyqtsignal.h"
#include "qpycore_sip.h"
#include "qpycore_sip_helpers.h"


// Forward declarations.
extern "C" {
static PyObject *pyqtBoundSignal_call(PyObject *self, PyObject *args,
        PyObject *kw);
static void pyqtBoundSignal_dealloc(PyObject *self);
static PyObject *pyqtBoundSignal_repr(PyObject *self);
static PyObject *pyqtBoundSignal_get_doc(PyObject *self, void *);
static PyObject *pyqtBoundSignal_get_signal(PyObject *self, void *);
static PyObject *pyqtBoundSignal_connect(PyObject *self, PyObject *args,
        PyObject *kwd_args);
static PyObject *pyqtBoundSignal_disconnect(PyObject *self, PyObject *args);
static PyObject *pyqtBoundSignal_emit(PyObject *self, PyObject *args);
static PyObject *pyqtBoundSignal_mp_subscript(PyObject *self,
        PyObject *subscript);
}

static PyObject *connect(qpycore_pyqtBoundSignal *bs, QObject *qrx,
        const char *slot, Qt::ConnectionType type);
static PyObject *disconnect(qpycore_pyqtBoundSignal *bs, QObject *qrx,
        const char *slot);
static QObject *get_receiver(qpycore_pyqtBoundSignal *bs, PyObject *slot_obj,
        QByteArray &name);
static QByteArray slot_signature_from_decorations(Chimera::Signature *signal,
        PyObject *decorations, int nr_args);
static QByteArray slot_signature_from_metaobject(Chimera::Signature *signal,
        const QMetaObject *slot_mo, const QByteArray &slot_name, int nr_args);
static QByteArray slot_signature(Chimera::Signature *signal,
        const QByteArray &slot_name, int nr_args);


// Doc-strings.
PyDoc_STRVAR(pyqtBoundSignal_connect_doc,
"connect(slot, type=Qt.AutoConnection, no_receiver_check=False)\n"
"\n"
"slot is either a Python callable or another signal.\n"
"type is a Qt.ConnectionType.\n"
"no_receiver_check is True to disable the check that the receiver's C++\n"
"instance still exists when the signal is emitted.\n");

PyDoc_STRVAR(pyqtBoundSignal_disconnect_doc,
"disconnect([slot])\n"
"\n"
"slot is an optional Python callable or another signal.  If it is omitted\n"
"then the signal is disconnected from everything it is connected to.");

PyDoc_STRVAR(pyqtBoundSignal_emit_doc,
"emit(*args)\n"
"\n"
"*args are the values that will be passed as arguments to all connected\n"
"slots.");

PyDoc_STRVAR(pyqtBoundSignal_signal_doc,
"The signature of the signal that would be returned by SIGNAL()");


// Define the methods.
static PyMethodDef pyqtBoundSignal_methods[] = {
    {SIP_MLNAME_CAST("connect"), (PyCFunction)pyqtBoundSignal_connect,
            METH_VARARGS|METH_KEYWORDS,
            SIP_MLDOC_CAST(pyqtBoundSignal_connect_doc)},
    {SIP_MLNAME_CAST("disconnect"), pyqtBoundSignal_disconnect,
            METH_VARARGS, SIP_MLDOC_CAST(pyqtBoundSignal_disconnect_doc)},
    {SIP_MLNAME_CAST("emit"), pyqtBoundSignal_emit,
            METH_VARARGS, SIP_MLDOC_CAST(pyqtBoundSignal_emit_doc)},
    {0, 0, 0, 0}
};


// Define the mapping methods.
static PyMappingMethods pyqtBoundSignal_as_mapping = {
    0,                      /* mp_length */
    pyqtBoundSignal_mp_subscript,   /* mp_subscript */
    0,                      /* mp_ass_subscript */
};


// The getters/setters.
static PyGetSetDef pyqtBoundSignal_getsets[] = {
    {(char *)"__doc__", pyqtBoundSignal_get_doc, NULL, NULL, NULL},
    {(char *)"signal", pyqtBoundSignal_get_signal, NULL,
            (char *)pyqtBoundSignal_signal_doc, NULL},
    {NULL, NULL, NULL, NULL, NULL}
};


// The pyqtBoundSignal type object.
PyTypeObject qpycore_pyqtBoundSignal_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    SIP_TPNAME_CAST("PyQt4.QtCore.pyqtBoundSignal"),    /* tp_name */
    sizeof (qpycore_pyqtBoundSignal),   /* tp_basicsize */
    0,                      /* tp_itemsize */
    pyqtBoundSignal_dealloc,    /* tp_dealloc */
    0,                      /* tp_print */
    0,                      /* tp_getattr */
    0,                      /* tp_setattr */
    0,                      /* tp_compare */
    pyqtBoundSignal_repr,   /* tp_repr */
    0,                      /* tp_as_number */
    0,                      /* tp_as_sequence */
    &pyqtBoundSignal_as_mapping,    /* tp_as_mapping */
    0,                      /* tp_hash */
    pyqtBoundSignal_call,   /* tp_call */
    0,                      /* tp_str */
    0,                      /* tp_getattro */
    0,                      /* tp_setattro */
    0,                      /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,     /* tp_flags */
    0,                      /* tp_doc */
    0,                      /* tp_traverse */
    0,                      /* tp_clear */
    0,                      /* tp_richcompare */
    0,                      /* tp_weaklistoffset */
    0,                      /* tp_iter */
    0,                      /* tp_iternext */
    pyqtBoundSignal_methods,    /* tp_methods */
    0,                      /* tp_members */
    pyqtBoundSignal_getsets,    /* tp_getset */
    0,                      /* tp_base */
    0,                      /* tp_dict */
    0,                      /* tp_descr_get */
    0,                      /* tp_descr_set */
    0,                      /* tp_dictoffset */
    0,                      /* tp_init */
    0,                      /* tp_alloc */
    PyType_GenericNew,      /* tp_new */
    0,                      /* tp_free */
    0,                      /* tp_is_gc */
    0,                      /* tp_bases */
    0,                      /* tp_mro */
    0,                      /* tp_cache */
    0,                      /* tp_subclasses */
    0,                      /* tp_weaklist */
    0,                      /* tp_del */
#if PY_VERSION_HEX >= 0x02060000
    0,                      /* tp_version_tag */
#endif
#if PY_VERSION_HEX >= 0x03040000
    0,                      /* tp_finalize */
#endif
};


// The __doc__ getter.
static PyObject *pyqtBoundSignal_get_doc(PyObject *self, void *)
{
    qpycore_pyqtBoundSignal *bs = (qpycore_pyqtBoundSignal *)self;

    const char *docstring = bs->unbound_signal->docstring;

    if (!docstring)
    {
        Py_INCREF(Py_None);
        return Py_None;
    }

    if (*docstring == '\1')
        ++docstring;

    return
#if PY_MAJOR_VERSION >= 3
        PyUnicode_FromString
#else
        PyString_FromString
#endif
            (docstring);
}


// The __signal__ getter.
static PyObject *pyqtBoundSignal_get_signal(PyObject *self, void *)
{
    qpycore_pyqtBoundSignal *bs = (qpycore_pyqtBoundSignal *)self;

    return
#if PY_MAJOR_VERSION >= 3
        PyUnicode_FromString
#else
        PyString_FromString
#endif
            (bs->unbound_signal->signature->signature.constData());
}


// The type repr slot.
static PyObject *pyqtBoundSignal_repr(PyObject *self)
{
    qpycore_pyqtBoundSignal *bs = (qpycore_pyqtBoundSignal *)self;

    QByteArray name = bs->unbound_signal->signature->name();

    return
#if PY_MAJOR_VERSION >= 3
        PyUnicode_FromFormat
#else
        PyString_FromFormat
#endif
            ("<bound signal %s of %s object at %p>", name.constData() + 1,
                    bs->bound_pyobject->ob_type->tp_name, bs->bound_pyobject);
}


// The type call slot.
static PyObject *pyqtBoundSignal_call(PyObject *self, PyObject *args,
        PyObject *kw)
{
    qpycore_pyqtBoundSignal *bs = (qpycore_pyqtBoundSignal *)self;

    return qpycore_call_signal_overload(bs->unbound_signal, bs->bound_pyobject,
            args, kw);
}


// The type dealloc slot.
static void pyqtBoundSignal_dealloc(PyObject *self)
{
    qpycore_pyqtBoundSignal *bs = (qpycore_pyqtBoundSignal *)self;

    Py_XDECREF((PyObject *)bs->unbound_signal);

    Py_TYPE(self)->tp_free(self);
}


// Create a bound signal.
PyObject *qpycore_pyqtBoundSignal_New(qpycore_pyqtSignal *unbound_signal,
        PyObject *bound_pyobject, QObject *bound_qobject)
{
    qpycore_pyqtBoundSignal *bs = (qpycore_pyqtBoundSignal *)PyType_GenericNew(&qpycore_pyqtBoundSignal_Type, 0, 0);

    if (bs)
    {
        Py_INCREF((PyObject *)unbound_signal);
        bs->unbound_signal = unbound_signal;

        bs->bound_pyobject = bound_pyobject;
        bs->bound_qobject = bound_qobject;
    }

    return (PyObject *)bs;
}


// The mapping subscript slot.
static PyObject *pyqtBoundSignal_mp_subscript(PyObject *self,
        PyObject *subscript)
{
    qpycore_pyqtBoundSignal *bs = (qpycore_pyqtBoundSignal *)self;

    qpycore_pyqtSignal *ps = qpycore_find_signal(bs->unbound_signal, subscript,
            "a bound signal type argument");

    if (!ps)
        return 0;

    // Create a new bound signal.
    return qpycore_pyqtBoundSignal_New(ps, bs->bound_pyobject,
            bs->bound_qobject);
}


// Connect a signal.
static PyObject *pyqtBoundSignal_connect(PyObject *self, PyObject *args,
        PyObject *kwd_args)
{
    qpycore_pyqtBoundSignal *bs = (qpycore_pyqtBoundSignal *)self;

    static const char *kwds[] = {
        "slot",
        "type",
        "no_receiver_check",
        0
    };

    PyObject *slot_obj, *type_obj = 0;
    int no_receiver_check = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwd_args,
#if PY_VERSION_HEX >= 0x03030000
                "O|Op:connect",
#elif PY_VERSION_HEX >= 0x02050000
                "O|Oi:connect",
#else
                const_cast<char *>("O|Oi:connect"),
#endif
                const_cast<char **>(kwds), &slot_obj, &type_obj, &no_receiver_check))
        return 0;

    Qt::ConnectionType type = Qt::AutoConnection;

    if (type_obj)
    {
        if (!sipCanConvertToEnum(type_obj, sipType_Qt_ConnectionType))
        {
            PyErr_Format(PyExc_TypeError,
                    "connect() type argument should be Qt.ConnectionType, not '%s'",
                    Py_TYPE(slot_obj)->tp_name);

            return 0;
        }

        type = (Qt::ConnectionType)SIPLong_AsLong(type_obj);
    }

    // See if the slot is a signal.
    if (Py_TYPE(slot_obj) == &qpycore_pyqtBoundSignal_Type)
    {
        qpycore_pyqtBoundSignal *slot_bs = (qpycore_pyqtBoundSignal *)slot_obj;

        // Check we are not connecting to ourself.  We do this because Qt
        // doesn't do a similar check and will recurse its way to a crash.
        if (slot_bs->unbound_signal == bs->unbound_signal && slot_bs->bound_qobject == bs->bound_qobject)
        {
            PyErr_SetString(PyExc_ValueError,
                    "cannot connect a signal to itself");
            return 0;
        }

        return connect(bs, slot_bs->bound_qobject,
                slot_bs->unbound_signal->signature->signature.constData(),
                type);
    }

    // Make sure the slot is callable.
    if (!PyCallable_Check(slot_obj))
    {
        PyErr_Format(PyExc_TypeError,
                "connect() slot argument should be a callable or a signal, not '%s'",
                Py_TYPE(slot_obj)->tp_name);

        return 0;
    }

    // See if the slot can be used directly (ie. it wraps a Qt slot) or if it
    // needs a proxy.
    QByteArray rx_name;
    QObject *rx_qobj = get_receiver(bs, slot_obj, rx_name);

    if (PyErr_Occurred())
        return 0;

    if (!rx_name.isEmpty())
        return connect(bs, rx_qobj, rx_name.constData(), type);

    // Create a proxy for the slot.
    PyQtProxy *proxy;
    const char *member;

#if QT_VERSION >= 0x040600
    if ((type & Qt::UniqueConnection) == Qt::UniqueConnection)
    {
        proxy = PyQtProxy::findSlotProxy(bs->bound_qobject,
                bs->unbound_signal->signature->signature.constData(), slot_obj,
                0, &member);

        if (proxy)
        {
            // We give more information than we could if it was a Qt slot but
            // to be consistent we raise a TypeError even though it's not the
            // most appropriate for the type of error.
            PyErr_SetString(PyExc_TypeError, "connection is not unique");
            return 0;
        }
    }
#endif

    Py_BEGIN_ALLOW_THREADS

    proxy = new PyQtProxy(bs, slot_obj, &member);

    if (no_receiver_check)
        proxy->disableReceiverCheck();

    if (proxy->metaObject())
    {
        if (rx_qobj)
            proxy->moveToThread(rx_qobj->thread());
    }
    else
    {
        delete proxy;
        proxy = 0;
    }

    Py_END_ALLOW_THREADS

    if (!proxy)
        return 0;

    return connect(bs, proxy, member, type);
}


// Connect a signal to a slot and handle any errors.
static PyObject *connect(qpycore_pyqtBoundSignal *bs, QObject *qrx,
        const char *slot, Qt::ConnectionType type)
{
    bool ok;
    Chimera::Signature *signature = bs->unbound_signal->signature;

    Py_BEGIN_ALLOW_THREADS
    ok = QObject::connect(bs->bound_qobject, signature->signature.constData(),
            qrx, slot, type);
    Py_END_ALLOW_THREADS

    if (!ok)
    {
        QByteArray rx_name = Chimera::Signature::name(slot);

        PyErr_Format(PyExc_TypeError, "connect() failed between %s and %s()",
                signature->py_signature.constData(), rx_name.constData() + 1);

        return 0;
    }

    Py_INCREF(Py_None);
    return Py_None;
}


// Disconnect a signal.
static PyObject *pyqtBoundSignal_disconnect(PyObject *self, PyObject *args)
{
    qpycore_pyqtBoundSignal *bs = (qpycore_pyqtBoundSignal *)self;

    PyObject *slot_obj = 0, *res_obj;
    Chimera::Signature *signature = bs->unbound_signal->signature;

#if PY_VERSION_HEX >= 0x02050000
    if (!PyArg_ParseTuple(args, "|O:disconnect", &slot_obj))
#else
    if (!PyArg_ParseTuple(args, const_cast<char *>("|O:disconnect"), &slot_obj))
#endif
        return 0;

    // See if we are disconnecting everything from the overload.
    if (!slot_obj)
    {
        res_obj = disconnect(bs, 0, 0);

        PyQtProxy::deleteSlotProxies(bs->bound_qobject,
                signature->signature.constData());

        return res_obj;
    }

    // See if the slot is a signal.
    if (Py_TYPE(slot_obj) == &qpycore_pyqtBoundSignal_Type)
    {
        qpycore_pyqtBoundSignal *slot_bs = (qpycore_pyqtBoundSignal *)slot_obj;

        return disconnect(bs, slot_bs->bound_qobject,
                slot_bs->unbound_signal->signature->signature.constData());
    }

    if (!PyCallable_Check(slot_obj))
    {
        PyErr_Format(PyExc_TypeError,
                "disconnect() argument should be callable, not '%s'",
                Py_TYPE(slot_obj)->tp_name);

        return 0;
    }

    // See if the slot has been used directly (ie. it wraps a Qt slot) or if it
    // has a proxy.
    QByteArray rx_name;
    QObject *rx_qobj = get_receiver(bs, slot_obj, rx_name);

    if (PyErr_Occurred())
        return 0;

    if (!rx_name.isEmpty())
        return disconnect(bs, rx_qobj, rx_name.constData());

    const char *member;
    PyQtProxy *proxy = PyQtProxy::findSlotProxy(bs->bound_qobject,
            signature->signature.constData(), slot_obj, 0, &member);

    if (!proxy)
    {
        PyErr_Format(PyExc_TypeError, "'%s' object is not connected",
                Py_TYPE(slot_obj)->tp_name);

        return 0;
    }

    res_obj = disconnect(bs, proxy, member);

    proxy->disable();

    return res_obj;
}


// Disonnect a signal from a slot and handle any errors.
static PyObject *disconnect(qpycore_pyqtBoundSignal *bs, QObject *qrx,
        const char *slot)
{
    Chimera::Signature *signature = bs->unbound_signal->signature;
    bool ok;

    Py_BEGIN_ALLOW_THREADS
    ok = QObject::disconnect(bs->bound_qobject,
            signature->signature.constData(), qrx, slot);
    Py_END_ALLOW_THREADS

    if (!ok)
    {
        QByteArray tx_name = signature->name();

        if (slot)
        {
            QByteArray rx_name = Chimera::Signature::name(slot);

            PyErr_Format(PyExc_TypeError,
                    "disconnect() failed between '%s' and '%s'",
                    tx_name.constData() + 1, rx_name.constData() + 1);
        }
        else
        {
            PyErr_Format(PyExc_TypeError,
                    "disconnect() failed between '%s' and all its connections",
                    tx_name.constData() + 1);
        }

        return 0;
    }

    Py_INCREF(Py_None);
    return Py_None;
}


// Emit a signal.
static PyObject *pyqtBoundSignal_emit(PyObject *self, PyObject *args)
{
    qpycore_pyqtBoundSignal *bs = (qpycore_pyqtBoundSignal *)self;

    if (!bs->bound_qobject->signalsBlocked())
    {
        Chimera::Signature *signature = bs->unbound_signal->signature;
        int mo_index = bs->bound_qobject->metaObject()->indexOfSignal(signature->signature.constData() + 1);

        if (mo_index < 0)
        {
            PyErr_Format(PyExc_AttributeError,
                    "signal was not defined in the first super-class of class '%s'",
                    Py_TYPE(bs->bound_pyobject)->tp_name);
            return 0;
        }

        // Use the docstring if there is one and it is auto-generated.
        const char *docstring = bs->unbound_signal->docstring;

        if (!docstring || *docstring != '\1')
        {
            docstring = signature->py_signature.constData();
        }
        else
        {
            // Skip the auto-generated marker.
            ++docstring;
        }

#if QT_VERSION < 0x050000
        if (!qpycore_emit(bs->bound_qobject, mo_index, signature, docstring, args))
            return 0;
#else
        // Qt5 changes the way signals with optional arguments are handled in
        // that the version with all arguments used is always used when making
        // connections.  (Note that it's possible Qt4 does this as well but we
        // have never noticed because Qt4 only has one signal with optional
        // arguments.)  We can't do what PyQt5 does because it exploits the
        // fact that Qt5 signals are public rather than protected.  We could do
        // what PyQt3 does (by creating a public wrapper in the derived class)
        // but that is a bit complicated.  We could implement the parsing of
        // optional arguments in Chimera, but that is also a bit complicated.
        // Instead, at this late stage in the life of PyQt4, we keep the code
        // changes to a minimum and handle it with a big hack.  Each
        // problematic signal has a number attached to it which specifies
        // exactly what hack is needed.

        PyObject *hacked_args;
        int hack = bs->unbound_signal->hack;

        // If all the arguments has been provided then we don't need the hack.
        if (PyTuple_GET_SIZE(args) == signature->parsed_arguments.size())
        {
            hack = 0;
        }
        else
        {
            hacked_args = PyTuple_New(PyTuple_GET_SIZE(args) + 1);

            if (!hacked_args)
                return 0;

            for (SIP_SSIZE_T i = 0; i < PyTuple_GET_SIZE(args); ++i)
            {
                PyObject *arg = PyTuple_GET_ITEM(args, i);

                Py_INCREF(arg);
                PyTuple_SET_ITEM(hacked_args, i, arg);
            }
        }

        switch (hack)
        {
        case 1:
            // Supply the missing None.
            Py_INCREF(Py_None);
            PyTuple_SET_ITEM(hacked_args, PyTuple_GET_SIZE(args), Py_None);
            break;

        case 2:
            // Supply the missing [].
            {
                PyObject *empty_list = PyList_New(0);

                if (!empty_list)
                {
                    Py_DECREF(hacked_args);
                    return 0;
                }

                PyTuple_SET_ITEM(hacked_args, PyTuple_GET_SIZE(args),
                        empty_list);
            }

            break;

        case 3:
            // Supply the missing False.
            Py_INCREF(Py_False);
            PyTuple_SET_ITEM(hacked_args, PyTuple_GET_SIZE(args), Py_False);
            break;

        default:
            hacked_args = args;
            Py_INCREF(hacked_args);
        }

        bool ok = qpycore_emit(bs->bound_qobject, mo_index, signature,
                docstring, hacked_args);

        Py_DECREF(hacked_args);

        if (!ok)
            return 0;
#endif
    }

    Py_INCREF(Py_None);
    return Py_None;
}


// Get the receiver QObject from the slot (if there is one) and its signature
// (if it wraps a Qt slot).  A Python exception will be raised if there was an
// error.
static QObject *get_receiver(qpycore_pyqtBoundSignal *bs, PyObject *slot_obj,
        QByteArray &name)
{
    PyObject *rx_self, *decorations;
    QByteArray rx_name;
    bool try_qt_slot;
    Chimera::Signature *signature = bs->unbound_signal->signature;

    decorations = 0;

    if (PyMethod_Check(slot_obj))
    {
        rx_self = PyMethod_GET_SELF(slot_obj);

        PyObject *f = PyMethod_GET_FUNCTION(slot_obj);
        Q_ASSERT(PyFunction_Check(f));

        PyObject *f_name_obj = ((PyFunctionObject *)f)->func_name;
        const char *f_name = sipString_AsASCIIString(&f_name_obj);
        Q_ASSERT(f_name);

        rx_name = f_name;
        Py_DECREF(f_name_obj);

        // See if this has been decorated.
        decorations = PyObject_GetAttr(f, qpycore_signature_attr_name);

        if (decorations)
        {
            try_qt_slot = true;

            // It's convenient to do this here as it's not going to disappear.
            Py_DECREF(decorations);
        }
        else
        {
            try_qt_slot = false;
        }

        Py_XINCREF(rx_self);
    }
    else if (PyCFunction_Check(slot_obj))
    {
        rx_self = PyCFunction_GET_SELF(slot_obj);
        rx_name = ((PyCFunctionObject *)slot_obj)->m_ml->ml_name;

        // We actually want the C++ name which may (in theory) be completely
        // different.  However this will cope with the exec_ case which is
        // probably good enough.
        if (rx_name.endsWith('_'))
            rx_name.chop(1);

        try_qt_slot = true;

        Py_XINCREF(rx_self);
    }
    else
    {
        static PyObject *partial = 0;

        // Get the functools.partial type object if we haven't already got it.
        if (!partial)
        {
            PyObject *functools = PyImport_ImportModule("functools");

            if (functools)
            {
                partial = PyObject_GetAttrString(functools, "partial");
                Py_DECREF(functools);
            }
        }

        // If we know about functools.partial then remove the outer partials to
        // get to the original function.
        if (partial && PyObject_IsInstance(slot_obj, partial))
        {
            PyObject *func = slot_obj;

            Py_INCREF(func);

            do
            {
                PyObject *subfunc = PyObject_GetAttrString(func, "func");

                Py_DECREF(func);

                // This should never happen.
                if (!subfunc)
                    return 0;

                func = subfunc;
            }
            while (PyObject_IsInstance(func, partial));

            if (PyMethod_Check(func))
                rx_self = PyMethod_GET_SELF(func);
            else if (PyCFunction_Check(func))
                rx_self = PyCFunction_GET_SELF(func);
            else
                rx_self = 0;

            Py_XINCREF(rx_self);
            Py_DECREF(func);

            try_qt_slot = false;
        }
        else
        {
            rx_self = 0;
        }
    }
 
    if (!rx_self)
        return 0;

    int iserr = 0;
    void *rx = sipForceConvertToType(rx_self, sipType_QObject, 0,
            SIP_NO_CONVERTORS, 0, &iserr);

    Py_DECREF(rx_self);

    PyErr_Clear();

    if (iserr)
        return 0;

    QObject *rx_qobj = reinterpret_cast<QObject *>(rx);

    // If there might be a Qt slot that can handle the arguments (or a subset
    // of them) then use it.  Otherwise we will fallback to using a proxy.
    if (try_qt_slot)
    {
        for (int ol = signature->parsed_arguments.count(); ol >= 0; --ol)
        {
            // If there are decorations then we compare the signal's signature
            // against them so that we distinguish between Python types that
            // are passed to Qt as PyQt_PyObject objects.  Qt will not make the
            // distinction.  If there are no decorations then let Qt determine
            // if a slot is available.
            if (decorations)
                name = slot_signature_from_decorations(signature, decorations,
                        ol);
            else
                name = slot_signature_from_metaobject(signature,
                        rx_qobj->metaObject(), rx_name, ol);

            if (!name.isEmpty())
            {
                // Prepend the magic slot marker.
                name.prepend('1');
                break;
            }
        }
    }

    return rx_qobj;
}


// Return the full name and signature of a Qt slot that a signal can be
// connected to, taking the slot decorators into account.
static QByteArray slot_signature_from_decorations(Chimera::Signature *signal,
        PyObject *decorations, int nr_args)
{
    for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(decorations); ++i)
    {
        Chimera::Signature *slot = Chimera::Signature::fromPyObject(
                PyList_GET_ITEM(decorations, i));

        if (slot->parsed_arguments.count() != nr_args)
            continue;

        int a;

        for (a = 0; a < nr_args; ++a)
        {
            const Chimera *sig_arg = signal->parsed_arguments.at(a);
            const Chimera *slot_arg = slot->parsed_arguments.at(a);

            // The same type names must be compatible.
            if (sig_arg->name() == slot_arg->name())
                continue;

            enum Match {
                // The type is PyQt_PyObject because it was explicitly
                // specified as such as a string.
                MatchesAll,

                // The type is PyQt_PyObject because it was specified as a type
                // object that needed wrapping.
                MatchesPyType,

                // The type is something other than PyQt_PyObject.
                MatchesName
            };

            Match sig_match, slot_match;

            if (sig_arg->name() != "PyQt_PyObject")
                sig_match = MatchesName;
            else
                sig_match = sig_arg->py_type() ? MatchesPyType : MatchesAll;

            if (slot_arg->name() != "PyQt_PyObject")
                slot_match = MatchesName;
            else
                slot_match = slot_arg->py_type() ? MatchesPyType : MatchesAll;

            // They are incompatible unless one is called PyQt_PyObject.
            if (sig_match == MatchesName || slot_match == MatchesName)
                break;

            // They are compatible if neither was a Python type.
            if (sig_match == MatchesAll || slot_match == MatchesAll)
                continue;

            // The signal type can be a sub-type of the slot type.
            if (!PyType_IsSubtype((PyTypeObject *)sig_arg->py_type(), (PyTypeObject *)slot_arg->py_type()))
                break;
        }

        if (a == nr_args)
            return slot_signature(signal, slot->name(), nr_args);
    }

    return QByteArray();
}


// Return the full name and signature of a Qt slot that a signal can be
// connected to, taking the Qt meta-object into account.
static QByteArray slot_signature_from_metaobject(Chimera::Signature *signal,
        const QMetaObject *slot_mo, const QByteArray &slot_name, int nr_args)
{
    QByteArray slot_sig = slot_signature(signal, slot_name, nr_args);

    if (slot_mo->indexOfSlot(slot_sig.constData()) < 0)
        slot_sig.clear();

    return slot_sig;
}


// Return the full name and signature of the Qt slot that a signal would be
// connected to.
static QByteArray slot_signature(Chimera::Signature *signal,
        const QByteArray &slot_name, int nr_args)
{
    QByteArray slot_sig = slot_name;

    slot_sig.append('(');

    for (int a = 0; a < nr_args; ++a)
    {
        if (a != 0)
            slot_sig.append(',');

        slot_sig.append(signal->parsed_arguments.at(a)->name());
    }

    slot_sig.append(')');

    return slot_sig;
}


// Check that an object is a signal and return the bound QObject (if requested)
// and the signal signature.
const char *qpycore_pyqtsignal_get_parts(PyObject *sig_obj, QObject **qtx)
{
    if (PyObject_TypeCheck(sig_obj, &qpycore_pyqtBoundSignal_Type))
    {
        qpycore_pyqtBoundSignal *bs = (qpycore_pyqtBoundSignal *)sig_obj;

        if (qtx)
            *qtx = bs->bound_qobject;

        return bs->unbound_signal->signature->signature.constData();
    }

    if (PyObject_TypeCheck(sig_obj, &qpycore_pyqtSignal_Type) && !qtx)
    {
        qpycore_pyqtSignal *ps = (qpycore_pyqtSignal *)sig_obj;

        return ps->signature->signature.constData();
    }

    return 0;
}
