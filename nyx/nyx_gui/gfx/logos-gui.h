/*
 * Copyright (c) 2018-2024 CTCaer
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _LOGOS_GUI_H_
#define _LOGOS_GUI_H_

#include <bdk.h>

#include <libs/lv_conf.h>
#include <libs/lvgl/lv_draw/lv_draw_img.h>

#define HEKATE_LOGO

const u8 touch_cursor_map[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04,
	0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x08,
	0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x08,
	0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x07,
	0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
	0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0c,
	0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x18,
	0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x1b,
	0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x17,
	0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x08,
	0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x08,
	0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x1f,
	0x00, 0x00, 0x00, 0x27, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x30,
	0x00, 0x00, 0x00, 0x33, 0x00, 0x00, 0x00, 0x33, 0x00, 0x00, 0x00, 0x33,
	0x00, 0x00, 0x00, 0x33, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x2c,
	0x00, 0x00, 0x00, 0x27, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x14,
	0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
	0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x17,
	0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x38,
	0x07, 0x07, 0x07, 0x44, 0x0d, 0x0d, 0x0d, 0x4c, 0x16, 0x16, 0x16, 0x53,
	0x1e, 0x1e, 0x1e, 0x54, 0x21, 0x21, 0x21, 0x57, 0x21, 0x21, 0x21, 0x57,
	0x18, 0x18, 0x18, 0x54, 0x10, 0x10, 0x10, 0x50, 0x07, 0x07, 0x07, 0x4c,
	0x04, 0x04, 0x04, 0x44, 0x00, 0x00, 0x00, 0x37, 0x00, 0x00, 0x00, 0x2b,
	0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x08,
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08,
	0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x2b,
	0x00, 0x00, 0x00, 0x38, 0x0a, 0x0a, 0x0a, 0x4b, 0x1d, 0x1d, 0x1d, 0x58,
	0x38, 0x38, 0x38, 0x64, 0x59, 0x59, 0x59, 0x6c, 0x73, 0x73, 0x73, 0x70,
	0x84, 0x84, 0x84, 0x74, 0x8b, 0x8b, 0x8b, 0x74, 0x86, 0x86, 0x86, 0x74,
	0x76, 0x76, 0x76, 0x73, 0x5c, 0x5c, 0x5c, 0x6f, 0x3a, 0x3a, 0x3a, 0x6b,
	0x1d, 0x1d, 0x1d, 0x60, 0x09, 0x09, 0x09, 0x53, 0x04, 0x04, 0x04, 0x44,
	0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x13,
	0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10,
	0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x30, 0x04, 0x04, 0x04, 0x44,
	0x15, 0x15, 0x15, 0x54, 0x41, 0x41, 0x41, 0x67, 0x7b, 0x7b, 0x7b, 0x74,
	0xb2, 0xb2, 0xb2, 0x7b, 0xe1, 0xe1, 0xe1, 0x7f, 0xf7, 0xf7, 0xf7, 0x7f,
	0xfd, 0xfd, 0xfd, 0x80, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0x7f,
	0xf9, 0xf9, 0xf9, 0x7f, 0xe5, 0xe5, 0xe5, 0x7f, 0xb9, 0xb9, 0xb9, 0x7c,
	0x80, 0x80, 0x80, 0x78, 0x46, 0x46, 0x46, 0x6f, 0x1b, 0x1b, 0x1b, 0x5f,
	0x03, 0x03, 0x03, 0x48, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x20,
	0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x03,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x1c,
	0x00, 0x00, 0x00, 0x30, 0x04, 0x04, 0x04, 0x47, 0x21, 0x21, 0x21, 0x5f,
	0x63, 0x63, 0x63, 0x70, 0xb9, 0xb9, 0xb9, 0x7b, 0xf5, 0xf5, 0xf5, 0x7f,
	0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xf9, 0xf9, 0xf9, 0x80, 0xc2, 0xc2, 0xc2, 0x7c, 0x6d, 0x6d, 0x6d, 0x74,
	0x27, 0x27, 0x27, 0x63, 0x07, 0x07, 0x07, 0x4b, 0x00, 0x00, 0x00, 0x34,
	0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x07,
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
	0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x2b,
	0x04, 0x04, 0x04, 0x43, 0x23, 0x23, 0x23, 0x5f, 0x7a, 0x7a, 0x7a, 0x74,
	0xdb, 0xdb, 0xdb, 0x7f, 0xfd, 0xfd, 0xfd, 0x7f, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xe3, 0xe3, 0xe3, 0x7f,
	0x87, 0x87, 0x87, 0x77, 0x2e, 0x2e, 0x2e, 0x63, 0x07, 0x07, 0x07, 0x4b,
	0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x0c,
	0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
	0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x38,
	0x1d, 0x1d, 0x1d, 0x57, 0x79, 0x79, 0x79, 0x73, 0xe5, 0xe5, 0xe5, 0x7f,
	0xfd, 0xfd, 0xfd, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xef, 0xef, 0xef, 0x7f, 0x86, 0x86, 0x86, 0x77, 0x26, 0x26, 0x26, 0x5f,
	0x04, 0x04, 0x04, 0x44, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x17,
	0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08,
	0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x2f, 0x0e, 0x0e, 0x0e, 0x4b,
	0x5d, 0x5d, 0x5d, 0x6b, 0xda, 0xda, 0xda, 0x7c, 0xfd, 0xfd, 0xfd, 0x7f,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xe5, 0xe5, 0xe5, 0x7f, 0x69, 0x69, 0x69, 0x70,
	0x15, 0x15, 0x15, 0x57, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x20,
	0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x0f,
	0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x3b, 0x30, 0x30, 0x30, 0x5b,
	0xb5, 0xb5, 0xb5, 0x78, 0xf9, 0xf9, 0xf9, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xc1, 0xc1, 0xc1, 0x7c,
	0x3c, 0x3c, 0x3c, 0x67, 0x07, 0x07, 0x07, 0x48, 0x00, 0x00, 0x00, 0x2c,
	0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x03,
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x17,
	0x00, 0x00, 0x00, 0x2c, 0x0a, 0x0a, 0x0a, 0x48, 0x6a, 0x6a, 0x6a, 0x6c,
	0xef, 0xef, 0xef, 0x7f, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xf9, 0xf9, 0xf9, 0x80,
	0x77, 0x77, 0x77, 0x74, 0x15, 0x15, 0x15, 0x57, 0x00, 0x00, 0x00, 0x38,
	0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x03,
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x1f,
	0x00, 0x00, 0x00, 0x38, 0x1d, 0x1d, 0x1d, 0x58, 0xa7, 0xa7, 0xa7, 0x77,
	0xf9, 0xf9, 0xf9, 0x7f, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xb4, 0xb4, 0xb4, 0x7b, 0x2a, 0x2a, 0x2a, 0x60, 0x04, 0x04, 0x04, 0x44,
	0x00, 0x00, 0x00, 0x27, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x04,
	0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x27,
	0x04, 0x04, 0x04, 0x44, 0x36, 0x36, 0x36, 0x64, 0xd6, 0xd6, 0xd6, 0x7c,
	0xfd, 0xfd, 0xfd, 0x7f, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xe5, 0xe5, 0xe5, 0x7f, 0x46, 0x46, 0x46, 0x6b, 0x07, 0x07, 0x07, 0x4c,
	0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x07,
	0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x2c,
	0x03, 0x03, 0x03, 0x4b, 0x4e, 0x4e, 0x4e, 0x6c, 0xeb, 0xeb, 0xeb, 0x7f,
	0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xf9, 0xf9, 0xf9, 0x7f, 0x60, 0x60, 0x60, 0x6f, 0x0a, 0x0a, 0x0a, 0x50,
	0x00, 0x00, 0x00, 0x2f, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x08,
	0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x2f,
	0x06, 0x06, 0x06, 0x4f, 0x5e, 0x5e, 0x5e, 0x6f, 0xf1, 0xf1, 0xf1, 0x80,
	0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0x71, 0x71, 0x71, 0x70, 0x0f, 0x0f, 0x0f, 0x53,
	0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x08,
	0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x2f,
	0x06, 0x06, 0x06, 0x4f, 0x63, 0x63, 0x63, 0x6f, 0xf3, 0xf3, 0xf3, 0x7f,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x7f, 0x74, 0x74, 0x74, 0x73, 0x0f, 0x0f, 0x0f, 0x53,
	0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x08,
	0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x2c,
	0x03, 0x03, 0x03, 0x4b, 0x5a, 0x5a, 0x5a, 0x6c, 0xf1, 0xf1, 0xf1, 0x7f,
	0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xfd, 0xfd, 0xfd, 0x7f, 0x6b, 0x6b, 0x6b, 0x70, 0x10, 0x10, 0x10, 0x50,
	0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x08,
	0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x28,
	0x04, 0x04, 0x04, 0x47, 0x45, 0x45, 0x45, 0x67, 0xe5, 0xe5, 0xe5, 0x7f,
	0xfd, 0xfd, 0xfd, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xf3, 0xf3, 0xf3, 0x7f, 0x57, 0x57, 0x57, 0x6c, 0x0a, 0x0a, 0x0a, 0x4c,
	0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x07,
	0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x20,
	0x00, 0x00, 0x00, 0x3c, 0x2e, 0x2e, 0x2e, 0x5f, 0xc7, 0xc7, 0xc7, 0x7b,
	0xfb, 0xfb, 0xfb, 0x7f, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xd4, 0xd4, 0xd4, 0x7c, 0x3d, 0x3d, 0x3d, 0x64, 0x04, 0x04, 0x04, 0x44,
	0x00, 0x00, 0x00, 0x27, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x07,
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x1b,
	0x00, 0x00, 0x00, 0x33, 0x16, 0x16, 0x16, 0x53, 0x8f, 0x8f, 0x8f, 0x74,
	0xf5, 0xf5, 0xf5, 0x7f, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xfd, 0xfd, 0xfd, 0x80,
	0x9f, 0x9f, 0x9f, 0x77, 0x23, 0x23, 0x23, 0x58, 0x00, 0x00, 0x00, 0x38,
	0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x04,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x14,
	0x00, 0x00, 0x00, 0x28, 0x07, 0x07, 0x07, 0x47, 0x4e, 0x4e, 0x4e, 0x68,
	0xdf, 0xdf, 0xdf, 0x7f, 0xfd, 0xfd, 0xfd, 0x7f, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xeb, 0xeb, 0xeb, 0x7f,
	0x5f, 0x5f, 0x5f, 0x6b, 0x0e, 0x0e, 0x0e, 0x4b, 0x00, 0x00, 0x00, 0x2f,
	0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x03,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x0c,
	0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x38, 0x1e, 0x1e, 0x1e, 0x57,
	0x93, 0x93, 0x93, 0x74, 0xf1, 0xf1, 0xf1, 0x7f, 0xff, 0xff, 0xff, 0x7f,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xf7, 0xf7, 0xf7, 0x80, 0xa4, 0xa4, 0xa4, 0x77,
	0x2b, 0x2b, 0x2b, 0x58, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x00, 0x00, 0x20,
	0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08,
	0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x2b, 0x04, 0x04, 0x04, 0x44,
	0x3c, 0x3c, 0x3c, 0x63, 0xbc, 0xbc, 0xbc, 0x7b, 0xf5, 0xf5, 0xf5, 0x80,
	0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xfb, 0xfb, 0xfb, 0x7f, 0xc9, 0xc9, 0xc9, 0x7b, 0x4d, 0x4d, 0x4d, 0x64,
	0x0f, 0x0f, 0x0f, 0x47, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x17,
	0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
	0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x33,
	0x0e, 0x0e, 0x0e, 0x4b, 0x54, 0x54, 0x54, 0x67, 0xc5, 0xc5, 0xc5, 0x7c,
	0xf3, 0xf3, 0xf3, 0x80, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xf7, 0xf7, 0xf7, 0x80,
	0xd2, 0xd2, 0xd2, 0x7c, 0x63, 0x63, 0x63, 0x6b, 0x14, 0x14, 0x14, 0x4c,
	0x00, 0x00, 0x00, 0x33, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x0f,
	0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
	0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x20,
	0x00, 0x00, 0x00, 0x34, 0x11, 0x11, 0x11, 0x4c, 0x54, 0x54, 0x54, 0x67,
	0xb8, 0xb8, 0xb8, 0x7b, 0xe9, 0xe9, 0xe9, 0x7f, 0xfd, 0xfd, 0xfd, 0x7f,
	0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0x80,
	0xfd, 0xfd, 0xfd, 0x80, 0xef, 0xef, 0xef, 0x7f, 0xc3, 0xc3, 0xc3, 0x7b,
	0x61, 0x61, 0x61, 0x68, 0x17, 0x17, 0x17, 0x4f, 0x00, 0x00, 0x00, 0x34,
	0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x07,
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x13,
	0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x34, 0x0e, 0x0e, 0x0e, 0x4b,
	0x3c, 0x3c, 0x3c, 0x63, 0x90, 0x90, 0x90, 0x74, 0xd2, 0xd2, 0xd2, 0x7c,
	0xe9, 0xe9, 0xe9, 0x7f, 0xf7, 0xf7, 0xf7, 0x7f, 0xfd, 0xfd, 0xfd, 0x7f,
	0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0x7f,
	0xfd, 0xfd, 0xfd, 0x80, 0xf7, 0xf7, 0xf7, 0x80, 0xeb, 0xeb, 0xeb, 0x7f,
	0xd9, 0xd9, 0xd9, 0x7f, 0x9b, 0x9b, 0x9b, 0x74, 0x46, 0x46, 0x46, 0x63,
	0x11, 0x11, 0x11, 0x4b, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x23,
	0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x03,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08,
	0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x33,
	0x04, 0x04, 0x04, 0x44, 0x1b, 0x1b, 0x1b, 0x54, 0x4a, 0x4a, 0x4a, 0x67,
	0x87, 0x87, 0x87, 0x73, 0xb8, 0xb8, 0xb8, 0x7b, 0xd2, 0xd2, 0xd2, 0x7c,
	0xdd, 0xdd, 0xdd, 0x7f, 0xdf, 0xdf, 0xdf, 0x7f, 0xdd, 0xdd, 0xdd, 0x7f,
	0xd5, 0xd5, 0xd5, 0x7f, 0xbf, 0xbf, 0xbf, 0x7b, 0x90, 0x90, 0x90, 0x73,
	0x53, 0x53, 0x53, 0x68, 0x23, 0x23, 0x23, 0x58, 0x07, 0x07, 0x07, 0x44,
	0x00, 0x00, 0x00, 0x33, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x13,
	0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
	0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x1c,
	0x00, 0x00, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x38, 0x07, 0x07, 0x07, 0x47,
	0x16, 0x16, 0x16, 0x53, 0x29, 0x29, 0x29, 0x5c, 0x3f, 0x3f, 0x3f, 0x67,
	0x4f, 0x4f, 0x4f, 0x6b, 0x57, 0x57, 0x57, 0x6c, 0x53, 0x53, 0x53, 0x6c,
	0x43, 0x43, 0x43, 0x67, 0x2e, 0x2e, 0x2e, 0x5f, 0x16, 0x16, 0x16, 0x53,
	0x07, 0x07, 0x07, 0x47, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x2b,
	0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x08,
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x0c,
	0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x28,
	0x00, 0x00, 0x00, 0x33, 0x00, 0x00, 0x00, 0x3c, 0x04, 0x04, 0x04, 0x47,
	0x03, 0x03, 0x03, 0x4b, 0x07, 0x07, 0x07, 0x4f, 0x07, 0x07, 0x07, 0x4c,
	0x04, 0x04, 0x04, 0x44, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x33,
	0x00, 0x00, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x17,
	0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04,
	0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x14,
	0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x28,
	0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x2f, 0x00, 0x00, 0x00, 0x2c,
	0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x1b,
	0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x08,
	0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x07,
	0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x13,
	0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x17,
	0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x0b,
	0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x03,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x07,
	0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x07,
	0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x03,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const lv_img_dsc_t touch_cursor = {
	.header.always_zero = 0,
	.header.w = 33,
	.header.h = 33,
	.data_size = 1089 * LV_IMG_PX_SIZE_ALPHA_BYTE,
	.header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
	.data = touch_cursor_map,
};

#ifdef HEKATE_LOGO

const lv_img_dsc_t hekate_logo = {
	.header.always_zero = 0,
	.header.w = 193,
	.header.h = 76,
	.data_size = 14668 * LV_IMG_PX_SIZE_ALPHA_BYTE,
	.header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
	.data = (const uint8_t *)(NYX_RES_ADDR + 0x1D900),
};

const lv_img_dsc_t ctcaer_logo = {
	.header.always_zero = 0,
	.header.w = 147,
	.header.h = 76,
	.data_size = 11172 * LV_IMG_PX_SIZE_ALPHA_BYTE,
	.header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
	.data = (const uint8_t *)(NYX_RES_ADDR + 0x2BF00),
};

#endif

#endif
