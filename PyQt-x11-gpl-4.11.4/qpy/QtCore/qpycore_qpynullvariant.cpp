// This implements the helpers for QPyNullVariant.
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

#include <QByteArray>
#include <QDate>
#include <QDateTime>
#include <QLine>
#include <QLineF>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRectF>
#include <QSize>
#include <QSizeF>
#include <QTime>
#include <QVariant>

#include "qpycore_chimera.h"
#include "qpycore_qpynullvariant.h"
#include "qpycore_sip.h"


// Create a null QVariant.
QVariant *qpycore_qpynullvariant(PyObject *type)
{
    // Parse the type.
    const Chimera *ct = Chimera::parse(type);

    if (!ct)
        return 0;

    int metatype = ct->metatype();

    delete ct;

    // We can only create null QVariants of the core types.
    if (metatype >= static_cast<int>(QVariant::UserType))
    {
        PyErr_SetString(PyExc_TypeError,
                "can only create QPyNullVariant for types corresponding to "
                "QVariant.Type");
        return 0;
    }

    return new QVariant(static_cast<QVariant::Type>(metatype));
}


// Convert a null QVariant to a Python object as part of the v2 API.
PyObject *qpycore_qpynullvariant_FromQVariant(const QVariant &var)
{
    sipTypeDef *td;
    void *cpp;

    // If the C++ type of the QVariant has an isNull() method then create a
    // null instance of that type.  Otherwise create a QPyNullVariant.  The
    // exception is QString where we create a QPyNullVariant even though it has
    // an isNull() method.  This is because the QString v2 API converts a null
    // QString to an empty Python string (because Qt often returns a null
    // QString when it should really return an empty QString and if we didn't
    // hide that then it would be a pain for the programmer).
    switch (var.type())
    {
    case QVariant::Date:
        td = sipType_QDate;
        cpp = new QDate;
        break;

    case QVariant::Time:
        td = sipType_QTime;
        cpp = new QTime;
        break;

    case QVariant::DateTime:
        td = sipType_QDateTime;
        cpp = new QDateTime;
        break;

    case QVariant::ByteArray:
        td = sipType_QByteArray;
        cpp = new QByteArray;
        break;

    case QVariant::Size:
        td = sipType_QSize;
        cpp = new QSize;
        break;

    case QVariant::SizeF:
        td = sipType_QSizeF;
        cpp = new QSizeF;
        break;

    case QVariant::Rect:
        td = sipType_QRect;
        cpp = new QRect;
        break;

    case QVariant::RectF:
        td = sipType_QRectF;
        cpp = new QRectF;
        break;

    case QVariant::Line:
        td = sipType_QLine;
        cpp = new QLine;
        break;

    case QVariant::LineF:
        td = sipType_QLineF;
        cpp = new QLineF;
        break;

    case QVariant::Point:
        td = sipType_QPoint;
        cpp = new QPoint;
        break;

    case QVariant::PointF:
        td = sipType_QPointF;
        cpp = new QPointF;
        break;

    default:
        td = sipType_QPyNullVariant;
        cpp = new QVariant(var);
    }

    return sipConvertFromNewType(cpp, td, 0);
}
