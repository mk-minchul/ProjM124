/*
 * Module code.
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

#include "sipAPIQtHelp.h"

#line 29 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 29 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtHelp/sipQtHelpcmodule.cpp"
#line 28 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtHelp/qhelpsearchengine.sip"
#include <qhelpsearchengine.h>
#line 32 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtHelp/sipQtHelpcmodule.cpp"

/* Define the strings used by this module. */
const char sipStrings_QtHelp[] = {
    'P', 'y', 'Q', 't', '4', '.', 'Q', 't', 'C', 'o', 'r', 'e', '.', 'p', 'y', 'q', 't', 'W', 'r', 'a', 'p', 'p', 'e', 'r', 'T', 'y', 'p', 'e', 0,
    'Q', 'H', 'e', 'l', 'p', 'S', 'e', 'a', 'r', 'c', 'h', 'Q', 'u', 'e', 'r', 'y', ':', ':', 'F', 'i', 'e', 'l', 'd', 'N', 'a', 'm', 'e', 0,
    'r', 'e', 'g', 'i', 's', 't', 'e', 'r', 'e', 'd', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'a', 't', 'i', 'o', 'n', 's', 0,
    'Q', 'L', 'i', 's', 't', '<', 'Q', 'H', 'e', 'l', 'p', 'S', 'e', 'a', 'r', 'c', 'h', 'Q', 'u', 'e', 'r', 'y', '>', 0,
    'Q', 'H', 'e', 'l', 'p', 'S', 'e', 'a', 'r', 'c', 'h', 'R', 'e', 's', 'u', 'l', 't', 'W', 'i', 'd', 'g', 'e', 't', 0,
    'u', 'n', 'r', 'e', 'g', 'i', 's', 't', 'e', 'r', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'a', 't', 'i', 'o', 'n', 0,
    'c', 'o', 'n', 't', 'e', 'n', 't', 's', 'C', 'r', 'e', 'a', 't', 'i', 'o', 'n', 'S', 't', 'a', 'r', 't', 'e', 'd', 0,
    'c', 'o', 'l', 'l', 'a', 'p', 's', 'e', 'E', 'x', 't', 'e', 'n', 'd', 'e', 'd', 'S', 'e', 'a', 'r', 'c', 'h', 0,
    'Q', 'H', 'e', 'l', 'p', 'S', 'e', 'a', 'r', 'c', 'h', 'Q', 'u', 'e', 'r', 'y', 'W', 'i', 'd', 'g', 'e', 't', 0,
    'w', 'i', 'n', 'd', 'o', 'w', 'A', 'c', 't', 'i', 'v', 'a', 't', 'i', 'o', 'n', 'C', 'h', 'a', 'n', 'g', 'e', 0,
    'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'a', 't', 'i', 'o', 'n', 'F', 'i', 'l', 'e', 'N', 'a', 'm', 'e', 0,
    'm', 'o', 'u', 's', 'e', 'D', 'o', 'u', 'b', 'l', 'e', 'C', 'l', 'i', 'c', 'k', 'E', 'v', 'e', 'n', 't', 0,
    'e', 'x', 'p', 'a', 'n', 'd', 'E', 'x', 't', 'e', 'n', 'd', 'e', 'd', 'S', 'e', 'a', 'r', 'c', 'h', 0,
    'r', 'e', 'i', 'n', 'd', 'e', 'x', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'a', 't', 'i', 'o', 'n', 0,
    'i', 'n', 'd', 'e', 'x', 'C', 'r', 'e', 'a', 't', 'i', 'o', 'n', 'S', 't', 'a', 'r', 't', 'e', 'd', 0,
    'c', 'u', 'r', 'r', 'e', 'n', 't', 'F', 'i', 'l', 't', 'e', 'r', 'C', 'h', 'a', 'n', 'g', 'e', 'd', 0,
    'a', 'c', 't', 'i', 'v', 'a', 't', 'e', 'C', 'u', 'r', 'r', 'e', 'n', 't', 'I', 't', 'e', 'm', 0,
    'f', 'i', 'l', 't', 'e', 'r', 'A', 't', 't', 'r', 'i', 'b', 'u', 't', 'e', 'S', 'e', 't', 's', 0,
    'd', 'e', 'f', 'a', 'u', 'l', 't', 'B', 'u', 't', 't', 'o', 'n', 'N', 'u', 'm', 'b', 'e', 'r', 0,
    'Q', 'M', 'a', 'p', '<', 'Q', 'S', 't', 'r', 'i', 'n', 'g', ',', 'Q', 'U', 'r', 'l', '>', 0,
    'Q', 'L', 'i', 's', 't', '<', 'Q', 'S', 't', 'r', 'i', 'n', 'g', 'L', 'i', 's', 't', '>', 0,
    'l', 'i', 'n', 'k', 's', 'F', 'o', 'r', 'I', 'd', 'e', 'n', 't', 'i', 'f', 'i', 'e', 'r', 0,
    'r', 'e', 'm', 'o', 'v', 'e', 'C', 'u', 's', 't', 'o', 'm', 'F', 'i', 'l', 't', 'e', 'r', 0,
    'c', 'o', 'p', 'y', 'C', 'o', 'l', 'l', 'e', 'c', 't', 'i', 'o', 'n', 'F', 'i', 'l', 'e', 0,
    'Q', 'H', 'e', 'l', 'p', 'C', 'o', 'n', 't', 'e', 'n', 't', 'W', 'i', 'd', 'g', 'e', 't', 0,
    'i', 's', 'C', 'r', 'e', 'a', 't', 'i', 'n', 'g', 'C', 'o', 'n', 't', 'e', 'n', 't', 's', 0,
    'e', 's', 'c', 'a', 'p', 'e', 'B', 'u', 't', 't', 'o', 'n', 'N', 'u', 'm', 'b', 'e', 'r', 0,
    'f', 'o', 'c', 'u', 's', 'N', 'e', 'x', 't', 'P', 'r', 'e', 'v', 'C', 'h', 'i', 'l', 'd', 0,
    's', 'e', 'a', 'r', 'c', 'h', 'i', 'n', 'g', 'F', 'i', 'n', 'i', 's', 'h', 'e', 'd', 0,
    'Q', 'H', 'e', 'l', 'p', 'S', 'e', 'a', 'r', 'c', 'h', 'E', 'n', 'g', 'i', 'n', 'e', 0,
    's', 'e', 't', 'A', 'u', 't', 'o', 'S', 'a', 'v', 'e', 'F', 'i', 'l', 't', 'e', 'r', 0,
    'r', 'e', 'm', 'o', 'v', 'e', 'C', 'u', 's', 't', 'o', 'm', 'V', 'a', 'l', 'u', 'e', 0,
    's', 'e', 't', 'C', 'o', 'l', 'l', 'e', 'c', 't', 'i', 'o', 'n', 'F', 'i', 'l', 'e', 0,
    'Q', 'H', 'e', 'l', 'p', 'C', 'o', 'n', 't', 'e', 'n', 't', 'M', 'o', 'd', 'e', 'l', 0,
    'm', 'o', 'u', 's', 'e', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'E', 'v', 'e', 'n', 't', 0,
    's', 'i', 'p', '.', 's', 'i', 'm', 'p', 'l', 'e', 'w', 'r', 'a', 'p', 'p', 'e', 'r', 0,
    's', 'e', 'a', 'r', 'c', 'h', 'i', 'n', 'g', 'S', 't', 'a', 'r', 't', 'e', 'd', 0,
    'i', 'n', 'd', 'e', 'x', 'i', 'n', 'g', 'F', 'i', 'n', 'i', 's', 'h', 'e', 'd', 0,
    'Q', 'H', 'e', 'l', 'p', 'S', 'e', 'a', 'r', 'c', 'h', 'Q', 'u', 'e', 'r', 'y', 0,
    'Q', 'H', 'e', 'l', 'p', 'I', 'n', 'd', 'e', 'x', 'W', 'i', 'd', 'g', 'e', 't', 0,
    's', 'e', 't', 'C', 'u', 'r', 'r', 'e', 'n', 't', 'F', 'i', 'l', 't', 'e', 'r', 0,
    'f', 'i', 'l', 't', 'e', 'r', 'A', 't', 't', 'r', 'i', 'b', 'u', 't', 'e', 's', 0,
    'Q', 'H', 'e', 'l', 'p', 'C', 'o', 'n', 't', 'e', 'n', 't', 'I', 't', 'e', 'm', 0,
    'c', 'o', 'n', 't', 'e', 'x', 't', 'M', 'e', 'n', 'u', 'E', 'v', 'e', 'n', 't', 0,
    'i', 'n', 'p', 'u', 't', 'M', 'e', 't', 'h', 'o', 'd', 'E', 'v', 'e', 'n', 't', 0,
    'i', 'n', 'p', 'u', 't', 'M', 'e', 't', 'h', 'o', 'd', 'Q', 'u', 'e', 'r', 'y', 0,
    'd', 'i', 's', 'c', 'o', 'n', 'n', 'e', 'c', 't', 'N', 'o', 't', 'i', 'f', 'y', 0,
    'r', 'e', 'q', 'u', 'e', 's', 't', 'S', 'h', 'o', 'w', 'L', 'i', 'n', 'k', 0,
    'i', 'n', 'd', 'e', 'x', 'i', 'n', 'g', 'S', 't', 'a', 'r', 't', 'e', 'd', 0,
    'c', 'a', 'n', 'c', 'e', 'l', 'S', 'e', 'a', 'r', 'c', 'h', 'i', 'n', 'g', 0,
    'i', 's', 'C', 'r', 'e', 'a', 't', 'i', 'n', 'g', 'I', 'n', 'd', 'e', 'x', 0,
    'l', 'i', 'n', 'k', 's', 'F', 'o', 'r', 'K', 'e', 'y', 'w', 'o', 'r', 'd', 0,
    'Q', 'H', 'e', 'l', 'p', 'I', 'n', 'd', 'e', 'x', 'M', 'o', 'd', 'e', 'l', 0,
    'e', 'x', 't', 'e', 'n', 's', 'i', 'o', 'n', 'F', 'i', 'l', 't', 'e', 'r', 0,
    'a', 'd', 'd', 'C', 'u', 's', 't', 'o', 'm', 'F', 'i', 'l', 't', 'e', 'r', 0,
    'Q', 'H', 'e', 'l', 'p', 'E', 'n', 'g', 'i', 'n', 'e', 'C', 'o', 'r', 'e', 0,
    'c', 'o', 'n', 't', 'e', 'n', 't', 's', 'C', 'r', 'e', 'a', 't', 'e', 'd', 0,
    'a', 's', 'p', 'e', 'c', 't', 'R', 'a', 't', 'i', 'o', 'M', 'o', 'd', 'e', 0,
    'd', 'e', 'v', 'i', 'c', 'e', 'T', 'r', 'a', 'n', 's', 'f', 'o', 'r', 'm', 0,
    'm', 'i', 'n', 'i', 'm', 'u', 'm', 'S', 'i', 'z', 'e', 'H', 'i', 'n', 't', 0,
    'm', 'o', 'u', 's', 'e', 'P', 'r', 'e', 's', 's', 'E', 'v', 'e', 'n', 't', 0,
    'k', 'e', 'y', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'c', 'a', 'n', 'c', 'e', 'l', 'I', 'n', 'd', 'e', 'x', 'i', 'n', 'g', 0,
    'l', 'i', 'n', 'k', 's', 'A', 'c', 't', 'i', 'v', 'a', 't', 'e', 'd', 0,
    'a', 'u', 't', 'o', 'S', 'a', 'v', 'e', 'F', 'i', 'l', 't', 'e', 'r', 0,
    's', 'e', 't', 'C', 'u', 's', 't', 'o', 'm', 'V', 'a', 'l', 'u', 'e', 0,
    'c', 'o', 'l', 'l', 'e', 'c', 't', 'i', 'o', 'n', 'F', 'i', 'l', 'e', 0,
    'c', 'r', 'e', 'a', 't', 'e', 'C', 'o', 'n', 't', 'e', 'n', 't', 's', 0,
    'l', 'a', 'n', 'g', 'u', 'a', 'g', 'e', 'C', 'h', 'a', 'n', 'g', 'e', 0,
    's', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'F', 'i', 'l', 't', 'e', 'r', 0,
    'h', 'e', 'i', 'g', 'h', 't', 'F', 'o', 'r', 'W', 'i', 'd', 't', 'h', 0,
    'd', 'r', 'a', 'g', 'L', 'e', 'a', 'v', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'd', 'r', 'a', 'g', 'E', 'n', 't', 'e', 'r', 'E', 'v', 'e', 'n', 't', 0,
    'm', 'o', 'u', 's', 'e', 'M', 'o', 'v', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'f', 'i', 'l', 't', 'e', 'r', 'I', 'n', 'd', 'i', 'c', 'e', 's', 0,
    's', 'e', 't', 'u', 'p', 'F', 'i', 'n', 'i', 's', 'h', 'e', 'd', 0,
    'c', 'u', 'r', 'r', 'e', 'n', 't', 'F', 'i', 'l', 't', 'e', 'r', 0,
    'c', 'u', 's', 't', 'o', 'm', 'F', 'i', 'l', 't', 'e', 'r', 's', 0,
    'n', 'a', 'm', 'e', 's', 'p', 'a', 'c', 'e', 'N', 'a', 'm', 'e', 0,
    'c', 'o', 'n', 't', 'e', 'n', 't', 'W', 'i', 'd', 'g', 'e', 't', 0,
    'c', 'o', 'n', 't', 'e', 'n', 't', 'I', 't', 'e', 'm', 'A', 't', 0,
    'c', 'h', 'i', 'l', 'd', 'P', 'o', 's', 'i', 't', 'i', 'o', 'n', 0,
    'c', 'h', 'a', 'n', 'g', 'e', 'd', 'S', 'i', 'g', 'n', 'a', 'l', 0,
    'p', 'a', 'l', 'e', 't', 't', 'e', 'C', 'h', 'a', 'n', 'g', 'e', 0,
    'e', 'n', 'a', 'b', 'l', 'e', 'd', 'C', 'h', 'a', 'n', 'g', 'e', 0,
    't', 'r', 'a', 'n', 's', 'f', 'o', 'r', 'm', 'M', 'o', 'd', 'e', 0,
    'l', 'i', 'n', 'k', 'A', 'c', 't', 'i', 'v', 'a', 't', 'e', 'd', 0,
    'd', 'r', 'a', 'g', 'M', 'o', 'v', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'f', 'o', 'c', 'u', 's', 'O', 'u', 't', 'E', 'v', 'e', 'n', 't', 0,
    'k', 'e', 'y', 'P', 'r', 'e', 's', 's', 'E', 'v', 'e', 'n', 't', 0,
    'r', 'e', 's', 'u', 'l', 't', 'W', 'i', 'd', 'g', 'e', 't', 0,
    'i', 'n', 'd', 'e', 'x', 'C', 'r', 'e', 'a', 't', 'e', 'd', 0,
    's', 'e', 't', 'u', 'p', 'S', 't', 'a', 'r', 't', 'e', 'd', 0,
    's', 'e', 'a', 'r', 'c', 'h', 'E', 'n', 'g', 'i', 'n', 'e', 0,
    'c', 'o', 'n', 't', 'e', 'n', 't', 'M', 'o', 'd', 'e', 'l', 0,
    's', 'o', 'u', 'r', 'c', 'e', 'R', 'e', 'g', 'i', 'o', 'n', 0,
    't', 'a', 'r', 'g', 'e', 't', 'O', 'f', 'f', 's', 'e', 't', 0,
    'b', 'o', 'u', 'n', 'd', 'i', 'n', 'g', 'R', 'e', 'c', 't', 0,
    'm', 'i', 'd', 'L', 'i', 'n', 'e', 'W', 'i', 'd', 't', 'h', 0,
    'f', 'o', 'c', 'u', 's', 'I', 'n', 'E', 'v', 'e', 'n', 't', 0,
    'd', 'e', 'f', 'a', 'u', 'l', 't', 'V', 'a', 'l', 'u', 'e', 0,
    'P', 'y', 'Q', 't', '4', '.', 'Q', 't', 'H', 'e', 'l', 'p', 0,
    'q', 'u', 'e', 'r', 'y', 'W', 'i', 'd', 'g', 'e', 't', 0,
    'c', 'u', 's', 't', 'o', 'm', 'V', 'a', 'l', 'u', 'e', 0,
    'Q', 'H', 'e', 'l', 'p', 'E', 'n', 'g', 'i', 'n', 'e', 0,
    't', 'a', 'b', 'l', 'e', 't', 'E', 'v', 'e', 'n', 't', 0,
    'b', 'u', 't', 't', 'o', 'n', '2', 'T', 'e', 'x', 't', 0,
    'b', 'u', 't', 't', 'o', 'n', '1', 'T', 'e', 'x', 't', 0,
    'a', 'c', 't', 'i', 'o', 'n', 'E', 'v', 'e', 'n', 't', 0,
    'p', 'a', 'i', 'n', 't', 'E', 'n', 'g', 'i', 'n', 'e', 0,
    'r', 'e', 's', 'i', 'z', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'i', 'n', 'd', 'e', 'x', 'W', 'i', 'd', 'g', 'e', 't', 0,
    'c', 'h', 'a', 'n', 'g', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'c', 'u', 's', 't', 'o', 'm', 'E', 'v', 'e', 'n', 't', 0,
    'e', 'v', 'e', 'n', 't', 'F', 'i', 'l', 't', 'e', 'r', 0,
    'c', 'r', 'e', 'a', 't', 'e', 'I', 'n', 'd', 'e', 'x', 0,
    'c', 'o', 'l', 'u', 'm', 'n', 'C', 'o', 'u', 'n', 't', 0,
    'i', 'n', 'd', 'e', 'x', 'M', 'o', 'd', 'e', 'l', 0,
    'f', 'o', 'n', 't', 'C', 'h', 'a', 'n', 'g', 'e', 0,
    'c', 'h', 'i', 'l', 'd', 'C', 'o', 'u', 'n', 't', 0,
    'e', 'n', 't', 'e', 'r', 'E', 'v', 'e', 'n', 't', 0,
    'l', 'e', 'a', 'v', 'e', 'E', 'v', 'e', 'n', 't', 0,
    's', 'e', 't', 'V', 'i', 's', 'i', 'b', 'l', 'e', 0,
    'c', 'l', 'o', 's', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'w', 'h', 'e', 'e', 'l', 'E', 'v', 'e', 'n', 't', 0,
    'p', 'a', 'i', 'n', 't', 'E', 'v', 'e', 'n', 't', 0,
    'f', 'i', 'e', 'l', 'd', 'W', 'i', 'd', 't', 'h', 0,
    'c', 'h', 'i', 'l', 'd', 'E', 'v', 'e', 'n', 't', 0,
    't', 'i', 'm', 'e', 'r', 'E', 'v', 'e', 'n', 't', 0,
    'h', 'i', 't', 's', 'C', 'o', 'u', 'n', 't', 0,
    's', 'e', 't', 'u', 'p', 'D', 'a', 't', 'a', 0,
    'o', 'p', 'e', 'r', 'a', 't', 'i', 'o', 'n', 0,
    'm', 'o', 'v', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'l', 'i', 'n', 'e', 'W', 'i', 'd', 't', 'h', 0,
    's', 'h', 'o', 'w', 'E', 'v', 'e', 'n', 't', 0,
    'h', 'i', 'd', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'd', 'r', 'o', 'p', 'E', 'v', 'e', 'n', 't', 0,
    'd', 'i', 'r', 'e', 'c', 't', 'o', 'r', 'y', 0,
    'a', 'l', 'i', 'g', 'n', 'm', 'e', 'n', 't', 0,
    'p', 'r', 'e', 'c', 'i', 's', 'i', 'o', 'n', 0,
    's', 'e', 't', 'Q', 'u', 'e', 'r', 'y', 0,
    'h', 'i', 't', 'C', 'o', 'u', 'n', 't', 0,
    'w', 'i', 'l', 'd', 'c', 'a', 'r', 'd', 0,
    'm', 'e', 't', 'a', 'D', 'a', 't', 'a', 0,
    'f', 'i', 'l', 'e', 'D', 'a', 't', 'a', 0,
    'f', 'i', 'n', 'd', 'F', 'i', 'l', 'e', 0,
    'f', 'i', 'l', 'l', 'R', 'u', 'l', 'e', 0,
    't', 'a', 'b', 'A', 'r', 'r', 'a', 'y', 0,
    't', 'a', 'b', 'S', 't', 'o', 'p', 's', 0,
    'u', 's', 'e', 'r', 'D', 'a', 't', 'a', 0,
    's', 'i', 'z', 'e', 'H', 'i', 'n', 't', 0,
    's', 'h', 'o', 'r', 't', 'c', 'u', 't', 0,
    'b', 'e', 'h', 'a', 'v', 'i', 'o', 'r', 0,
    'p', 'o', 's', 'i', 't', 'i', 'o', 'n', 0,
    'f', 'i', 'l', 'l', 'C', 'h', 'a', 'r', 0,
    'p', 'r', 'o', 'p', 'e', 'r', 't', 'y', 0,
    'r', 'o', 'w', 'C', 'o', 'u', 'n', 't', 0,
    'A', 'T', 'L', 'E', 'A', 'S', 'T', 0,
    'W', 'I', 'T', 'H', 'O', 'U', 'T', 0,
    'D', 'E', 'F', 'A', 'U', 'L', 'T', 0,
    'e', 'x', 'p', 'o', 's', 'e', 'd', 0,
    'w', 'a', 'r', 'n', 'i', 'n', 'g', 0,
    'b', 'u', 't', 't', 'o', 'n', '2', 0,
    'b', 'u', 't', 't', 'o', 'n', '1', 0,
    'q', 'u', 'a', 'l', 'i', 't', 'y', 0,
    'd', 'e', 'v', 'T', 'y', 'p', 'e', 0,
    'y', 'M', 'a', 'r', 'g', 'i', 'n', 0,
    'x', 'M', 'a', 'r', 'g', 'i', 'n', 0,
    'c', 'a', 'p', 't', 'i', 'o', 'n', 0,
    'o', 'p', 't', 'i', 'o', 'n', 's', 0,
    'i', 'n', 'd', 'e', 'x', 'O', 'f', 0,
    'f', 'i', 'l', 't', 'e', 'r', 's', 0,
    'l', 'i', 'n', 'k', 'A', 't', 0,
    'P', 'H', 'R', 'A', 'S', 'E', 0,
    'y', 'R', 'o', 'u', 'n', 'd', 0,
    'x', 'R', 'o', 'u', 'n', 'd', 0,
    'm', 'e', 't', 'r', 'i', 'c', 0,
    'l', 'a', 'y', 'e', 'r', 's', 0,
    's', 'u', 'n', 'k', 'e', 'n', 0,
    's', 'e', 'a', 'r', 'c', 'h', 0,
    'o', 'p', 't', 'i', 'o', 'n', 0,
    'p', 'r', 'o', 'p', 'e', 'r', 0,
    'v', 'a', 'l', 'u', 'e', '9', 0,
    'v', 'a', 'l', 'u', 'e', '8', 0,
    'v', 'a', 'l', 'u', 'e', '7', 0,
    'v', 'a', 'l', 'u', 'e', '6', 0,
    'v', 'a', 'l', 'u', 'e', '5', 0,
    'v', 'a', 'l', 'u', 'e', '4', 0,
    'v', 'a', 'l', 'u', 'e', '3', 0,
    'v', 'a', 'l', 'u', 'e', '0', 0,
    's', 'y', 'm', 'b', 'o', 'l', 0,
    's', 'u', 'f', 'f', 'i', 'x', 0,
    'p', 'r', 'e', 'f', 'i', 'x', 0,
    'f', 'o', 'r', 'm', 'a', 't', 0,
    'v', 'a', 'l', 'u', 'e', '2', 0,
    'v', 'a', 'l', 'u', 'e', '1', 0,
    'a', 'c', 't', 'i', 'o', 'n', 0,
    'c', 'o', 'l', 'u', 'm', 'n', 0,
    'f', 'i', 'l', 't', 'e', 'r', 0,
    'p', 'a', 'r', 'e', 'n', 't', 0,
    'F', 'U', 'Z', 'Z', 'Y', 0,
    't', 'i', 't', 'l', 'e', 0,
    'b', 'r', 'u', 's', 'h', 0,
    'q', 'u', 'e', 'r', 'y', 0,
    'h', 'i', 'n', 't', 's', 0,
    'f', 'i', 'l', 'e', 's', 0,
    'i', 'n', 'd', 'e', 'x', 0,
    'c', 'h', 'i', 'l', 'd', 0,
    'e', 'r', 'r', 'o', 'r', 0,
    'f', 'l', 'a', 'g', 's', 0,
    'e', 'v', 'e', 'n', 't', 0,
    'm', 's', 'e', 'c', 's', 0,
    's', 't', 'a', 't', 'e', 0,
    'm', 'o', 'd', 'e', 0,
    'n', 'a', 'm', 'e', 0,
    'b', 'a', 's', 'e', 0,
    'f', 'i', 'l', 'l', 0,
    'f', 'r', 'o', 'm', 0,
    'h', 'i', 't', 's', 0,
    's', 'o', 'r', 't', 0,
    'd', 'a', 't', 'a', 0,
    'A', 'L', 'L', 0,
    'p', 'e', 'n', 0,
    'u', 'r', 'l', 0,
    'e', 'n', 'd', 0,
    'r', 'o', 'w', 0,
    'p', 'o', 's', 0,
    's', 'w', 0,
    's', 'y', 0,
    's', 'x', 0,
};


/* Convert to a sub-class if possible. */
extern "C" {static const sipTypeDef *sipSubClass_QHelpEngineCore(void **);}
static const sipTypeDef *sipSubClass_QHelpEngineCore(void **sipCppRet)
{
    QObject *sipCpp = reinterpret_cast<QObject *>(*sipCppRet);
    const sipTypeDef *sipType;

#line 32 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/sip/QtHelp/qhelpenginecore.sip"
    static struct class_graph {
            const char *name;
            sipTypeDef **type;
            int yes, no;
        } graph[] = {
            {sipName_QHelpIndexWidget,	&sipType_QHelpIndexWidget,	-1, 1},
            {sipName_QHelpContentWidget,	&sipType_QHelpContentWidget,	-1, 2},
            {sipName_QHelpContentModel,	&sipType_QHelpContentModel,	-1, 3},
            {sipName_QHelpIndexModel,	&sipType_QHelpIndexModel,	-1, 4},
            {sipName_QHelpSearchResultWidget,	&sipType_QHelpSearchResultWidget,	-1, 5},
            {sipName_QHelpEngineCore,	&sipType_QHelpEngineCore,	8, 6},
            {sipName_QHelpSearchQueryWidget,	&sipType_QHelpSearchQueryWidget,	-1, 7},
            {sipName_QHelpSearchEngine,	&sipType_QHelpSearchEngine,	-1, -1},
            {sipName_QHelpEngine,	&sipType_QHelpEngine,	-1, -1},
        };
    
        int i = 0;
    
        sipType = 0;
    
        do
        {
            struct class_graph *cg = &graph[i];
    
            if (cg->name != NULL && sipCpp->inherits(cg->name))
            {
                sipType = *cg->type;
                i = cg->yes;
            }
            else
                i = cg->no;
        }
        while (i >= 0);
#line 310 "/home/pi/Github/ProjM124/PyQt-x11-gpl-4.11.4/QtHelp/sipQtHelpcmodule.cpp"

    return sipType;
}
static sipEnumTypeDef enumTypes[] = {
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QHelpSearchQuery__FieldName, {0}}, sipNameNr_FieldName, 8, NULL},
};


/*
 * This defines each type in this module.
 */
static sipTypeDef *typesTable[] = {
    &sipTypeDef_QtHelp_QHelpContentItem.super.ctd_base,
    &sipTypeDef_QtHelp_QHelpContentModel.super.ctd_base,
    &sipTypeDef_QtHelp_QHelpContentWidget.super.ctd_base,
    &sipTypeDef_QtHelp_QHelpEngine.super.ctd_base,
    &sipTypeDef_QtHelp_QHelpEngineCore.super.ctd_base,
    &sipTypeDef_QtHelp_QHelpIndexModel.super.ctd_base,
    &sipTypeDef_QtHelp_QHelpIndexWidget.super.ctd_base,
    &sipTypeDef_QtHelp_QHelpSearchEngine.super.ctd_base,
    &sipTypeDef_QtHelp_QHelpSearchQuery.super.ctd_base,
    &enumTypes[0].etd_base,
    &sipTypeDef_QtHelp_QHelpSearchQueryWidget.super.ctd_base,
    &sipTypeDef_QtHelp_QHelpSearchResultWidget.super.ctd_base,
    &sipTypeDef_QtHelp_QList_0100QHelpSearchQuery.mtd_base,
    &sipTypeDef_QtHelp_QList_0100QStringList.mtd_base,
    &sipTypeDef_QtHelp_QMap_0100QString_0100QUrl.mtd_base,
};


/* This defines the modules that this module needs to import. */
static sipImportedModuleDef importsTable[] = {
    {"PyQt4.QtCore", 1, NULL},
    {"PyQt4.QtGui", -1, NULL},
    {NULL, -1, NULL}
};


/* This defines the class sub-convertors that this module defines. */
static sipSubClassConvertorDef convertorsTable[] = {
    {sipSubClass_QHelpEngineCore, {141, 0, 0}, NULL},
    {NULL, {0, 0, 0}, NULL}
};


/* This defines this module. */
sipExportedModuleDef sipModuleAPI_QtHelp = {
    0,
    SIP_API_MINOR_NR,
    sipNameNr_PyQt4_QtHelp,
    0,
    -1,
    sipStrings_QtHelp,
    importsTable,
    NULL,
    15,
    typesTable,
    NULL,
    0,
    NULL,
    0,
    NULL,
    NULL,
    NULL,
    convertorsTable,
    {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL},
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL
};


/* The SIP API and the APIs of any imported modules. */
const sipAPIDef *sipAPI_QtHelp;
const sipExportedModuleDef *sipModuleAPI_QtHelp_QtCore;
const sipExportedModuleDef *sipModuleAPI_QtHelp_QtGui;

sip_qt_metaobject_func sip_QtHelp_qt_metaobject;
sip_qt_metacall_func sip_QtHelp_qt_metacall;
sip_qt_metacast_func sip_QtHelp_qt_metacast;


/* The Python module initialisation function. */
#if PY_MAJOR_VERSION >= 3
#define SIP_MODULE_ENTRY        PyInit_QtHelp
#define SIP_MODULE_TYPE         PyObject *
#define SIP_MODULE_DISCARD(r)   Py_DECREF(r)
#define SIP_MODULE_RETURN(r)    return (r)
#else
#define SIP_MODULE_ENTRY        initQtHelp
#define SIP_MODULE_TYPE         void
#define SIP_MODULE_DISCARD(r)
#define SIP_MODULE_RETURN(r)    return
#endif

#if defined(SIP_STATIC_MODULE)
extern "C" SIP_MODULE_TYPE SIP_MODULE_ENTRY()
#else
PyMODINIT_FUNC SIP_MODULE_ENTRY()
#endif
{
    static PyMethodDef sip_methods[] = {
        {0, 0, 0, 0}
    };

#if PY_MAJOR_VERSION >= 3
    static PyModuleDef sip_module_def = {
        PyModuleDef_HEAD_INIT,
        "PyQt4.QtHelp",
        NULL,
        -1,
        sip_methods,
        NULL,
        NULL,
        NULL,
        NULL
    };
#endif

    PyObject *sipModule, *sipModuleDict;
    PyObject *sip_sipmod, *sip_capiobj;

    /* Initialise the module and get it's dictionary. */
#if PY_MAJOR_VERSION >= 3
    sipModule = PyModule_Create(&sip_module_def);
#elif PY_VERSION_HEX >= 0x02050000
    sipModule = Py_InitModule(sipName_PyQt4_QtHelp, sip_methods);
#else
    sipModule = Py_InitModule(const_cast<char *>(sipName_PyQt4_QtHelp), sip_methods);
#endif

    if (sipModule == NULL)
        SIP_MODULE_RETURN(NULL);

    sipModuleDict = PyModule_GetDict(sipModule);

    /* Get the SIP module's API. */
#if PY_VERSION_HEX >= 0x02050000
    sip_sipmod = PyImport_ImportModule(SIP_MODULE_NAME);
#else
    sip_sipmod = PyImport_ImportModule(const_cast<char *>(SIP_MODULE_NAME));
#endif

    if (sip_sipmod == NULL)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }

    sip_capiobj = PyDict_GetItemString(PyModule_GetDict(sip_sipmod), "_C_API");
    Py_DECREF(sip_sipmod);

#if defined(SIP_USE_PYCAPSULE)
    if (sip_capiobj == NULL || !PyCapsule_CheckExact(sip_capiobj))
#else
    if (sip_capiobj == NULL || !PyCObject_Check(sip_capiobj))
#endif
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }

#if defined(SIP_USE_PYCAPSULE)
    sipAPI_QtHelp = reinterpret_cast<const sipAPIDef *>(PyCapsule_GetPointer(sip_capiobj, SIP_MODULE_NAME "._C_API"));
#else
    sipAPI_QtHelp = reinterpret_cast<const sipAPIDef *>(PyCObject_AsVoidPtr(sip_capiobj));
#endif

#if defined(SIP_USE_PYCAPSULE)
    if (sipAPI_QtHelp == NULL)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }
#endif

    /* Export the module and publish it's API. */
    if (sipExportModule(&sipModuleAPI_QtHelp,SIP_API_MAJOR_NR,SIP_API_MINOR_NR,0) < 0)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(0);
    }

    sip_QtHelp_qt_metaobject = (sip_qt_metaobject_func)sipImportSymbol("qtcore_qt_metaobject");
    sip_QtHelp_qt_metacall = (sip_qt_metacall_func)sipImportSymbol("qtcore_qt_metacall");
    sip_QtHelp_qt_metacast = (sip_qt_metacast_func)sipImportSymbol("qtcore_qt_metacast");

    if (!sip_QtHelp_qt_metacast)
        Py_FatalError("Unable to import qtcore_qt_metacast");

    /* Initialise the module now all its dependencies have been set up. */
    if (sipInitModule(&sipModuleAPI_QtHelp,sipModuleDict) < 0)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(0);
    }

    /* Get the APIs of the modules that this one is dependent on. */
    sipModuleAPI_QtHelp_QtCore = sipModuleAPI_QtHelp.em_imports[0].im_module;
    sipModuleAPI_QtHelp_QtGui = sipModuleAPI_QtHelp.em_imports[1].im_module;

    SIP_MODULE_RETURN(sipModule);
}
