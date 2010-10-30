// These warnings disabled to quiet down compilation, since we're not about to
// muck with the code itself.
#pragma warning ( disable : 4267 4244 4996 4018 4013 )
/*=                    -*- c-basic-offset: 4; indent-tabs-mode: nil; -*-
 *
 * librsync -- library for network deltas
 * 
 * Copyright (C) 2000, 2001 by Martin Pool <mbp@samba.org>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

/** \file librsync-config.h
 *
 * \brief System-specific configuration for librsync.h.
 */

#ifndef _LIBRSYNC_CONFIG_H
#define _LIBRSYNC_CONFIG_H

/**
 * \brief A long integer type that can handle the largest file
 * offsets.
 *
 * Perhaps this might have to be configured to be 'long long', 'long',
 * or something else depending on the platform.  On WIN32, many config.h's
 * define LONG_LONG as "__int64".
 */

 /********************************************************************
*********************************************************************
    WINDOWS
*********************************************************************
********************************************************************/
#if defined(_WIN32) || defined(__WIN32__) || defined(WIN32)
 typedef  __int64 rs_long_t;

/********************************************************************
*********************************************************************
    MAC
*********************************************************************
********************************************************************/    
#elif defined(macintosh) || defined(__APPLE__) || defined(__APPLE_CC__)
typedef long long    rs_long_t;

#else
    #error Undefined platform
#endif

#endif /* _LIBRSYNC_CONFIG_H */
