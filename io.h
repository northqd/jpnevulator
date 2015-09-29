/* jpnevulator - serial reader/writer
 * Copyright (C) 2006-2015 Freddy Spierenburg
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef __IO_H
#define __IO_H

#include <stdio.h>

#define ioMAGIC "xi2aeniJeeHoo4wuohQuu7ioiev5eiJe"

extern FILE *ioOpen(char *);
extern void ioClose(FILE *);

#endif