/*
 * pinyincmp.h
 * Copyright (C) 2006-2007 Li XianJing <xianjimli@hotmail.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330, 
 * Boston, MA 02111-1307, USA.
 */

#ifndef PINYIN_CMP_H
#define PINYIN_CMP_H

int pinyin_charcmp(unsigned short wch1, unsigned short wch2);
int pinyin_strncmp(const unsigned short* str1, const unsigned short* str2, unsigned long length);
int pinyin_strcmp(const unsigned short* str1, const unsigned short* str2);

int pinyin_charcasecmp(unsigned short wch1, unsigned short wch2);
int pinyin_strncasecmp(const unsigned short* str1, const unsigned short* str2, unsigned long length);
int pinyin_strcasecmp(const unsigned short* str1, const unsigned short* str2);

#endif/*PINYIN_CMP_H*/

