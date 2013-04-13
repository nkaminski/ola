/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Library General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 * Base.h
 * Copyright (C) 2012 Simon Newton
 */

#ifndef INCLUDE_OLA_SLP_BASE_H_
#define INCLUDE_OLA_SLP_BASE_H_

#include <stdint.h>

namespace ola {
namespace slp {

// The default SLP scope from RFC 2608
static const char DEFAULT_SLP_SCOPE[] = "DEFAULT";

// The default port the SLP uses for RPC servers, not part of the RFC.
static const int OLA_SLP_DEFAULT_PORT = 9011;
}  // slp
}  // ola
#endif  // INCLUDE_OLA_SLP_BASE_H_
