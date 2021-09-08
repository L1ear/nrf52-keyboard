/*
Copyright 2012,2013 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

/**
 * 键盘矩阵基配置文件
 * 
 * 定义各个按键的位置，方便编写Keymap
 */
#pragma once

#include <stdint.h>
#include "keymap.h"
#include "config.h"

extern const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS];
extern const action_t fn_actions[];

/* GH60 keymap definition macro
 * K2C, K31 and  K3C are extra keys for ISO
 */
#define KEYMAP( \
	K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K00A, K00B, K00C, K00D, K00E, K00F, K010, K011, K012, K013, \
	K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K10A, K10B, K10C,       K10E, K10F, K110, K111, K112, K113, \
	K200,       K202, K203, K204, K205, K206, K207, K208, K209, K20A, K20B, K20C, K20D, K20E, K20F, K210, K211, K212,       \
	K300,       K302, K303, K304, K305, K306, K307, K308, K309, K30A, K30B, K30C, K30D,       K30F, K310, K311, K312, K313, \
	      K401, K402, K403, K404, K405, K406, K407, K408, K409, K40A, K40B,       K40D, K40E, K40F, K410, K411, K412,       \
	K500, K501,       K503,             K506,                   K50A, K50B, K50C, K50D, K50E, K50F,       K511, K512, K513  \
) { \
	{ K000,   K001,   K002,   K003,   K004,   K005,   K006,   K007,   K008,   K009,   K00A,   K00B,   K00C,   K00D,   K00E,   K00F,   K010,   K011,   K012,   K013 }, \
	{ K100,   K101,   K102,   K103,   K104,   K105,   K106,   K107,   K108,   K109,   K10A,   K10B,   K10C,   KC_NO,  K10E,   K10F,   K110,   K111,   K112,   K113 }, \
	{ K200,   KC_NO,  K202,   K203,   K204,   K205,   K206,   K207,   K208,   K209,   K20A,   K20B,   K20C,   K20D,   K20E,   K20F,   K210,   K211,   K212,   KC_NO }, \
	{ K300,   KC_NO,  K302,   K303,   K304,   K305,   K306,   K307,   K308,   K309,   K30A,   K30B,   K30C,   K30D,   KC_NO,  K30F,   K310,   K311,   K312,   K313 }, \
	{ KC_NO,  K401,   K402,   K403,   K404,   K405,   K406,   K407,   K408,   K409,   K40A,   K40B,   KC_NO,  K40D,   K40E,   K40F,   K410,   K411,   K412,   KC_NO }, \
	{ K500,   K501,   KC_NO,  K503,   KC_NO,  KC_NO,  K506,   KC_NO,  KC_NO,  KC_NO,  K50A,   K50B,   K50C,   K50D,   K50E,   K50F,   KC_NO,  K511,   K512,   K513 }  \
}

/* ANSI variant. No extra keys for ISO */
#define KEYMAP_ANSI( \
	K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K00A, K00B, K00C, K00D, K00E, K00F, K010, K011, K012, K013, \
	K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K10A, K10B, K10C,       K10E, K10F, K110, K111, K112, K113, \
	K200,       K202, K203, K204, K205, K206, K207, K208, K209, K20A, K20B, K20C, K20D, K20E, K20F, K210, K211, K212,       \
	K300,       K302, K303, K304, K305, K306, K307, K308, K309, K30A, K30B, K30C, K30D,       K30F, K310, K311, K312, K313, \
	      K401, K402, K403, K404, K405, K406, K407, K408, K409, K40A, K40B,       K40D, K40E, K40F, K410, K411, K412,       \
	K500, K501,       K503,             K506,                   K50A, K50B, K50C, K50D, K50E, K50F,       K511, K512, K513  \
) KEYMAP( \
	K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K00A, K00B, K00C, K00D, K00E, K00F, K010, K011, K012, K013, \
	K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K10A, K10B, K10C,       K10E, K10F, K110, K111, K112, K113, \
	K200,       K202, K203, K204, K205, K206, K207, K208, K209, K20A, K20B, K20C, K20D, K20E, K20F, K210, K211, K212,       \
	K300,       K302, K303, K304, K305, K306, K307, K308, K309, K30A, K30B, K30C, K30D,       K30F, K310, K311, K312, K313, \
	      K401, K402, K403, K404, K405, K406, K407, K408, K409, K40A, K40B,       K40D, K40E, K40F, K410, K411, K412,       \
	K500, K501,       K503,             K506,                   K50A, K50B, K50C, K50D, K50E, K50F,       K511, K512, K513  \
)


#define KEYMAP_HHKB( \
	K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K00A, K00B, K00C, K00D, K00E, K00F, K010, K011, K012, K013, \
	K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K10A, K10B, K10C,       K10E, K10F, K110, K111, K112, K113, \
	K200,       K202, K203, K204, K205, K206, K207, K208, K209, K20A, K20B, K20C, K20D, K20E, K20F, K210, K211, K212,       \
	K300,       K302, K303, K304, K305, K306, K307, K308, K309, K30A, K30B, K30C, K30D,       K30F, K310, K311, K312, K313, \
	      K401, K402, K403, K404, K405, K406, K407, K408, K409, K40A, K40B,       K40D, K40E, K40F, K410, K411, K412,       \
	K500, K501,       K503,             K506,                   K50A, K50B, K50C, K50D, K50E, K50F,       K511, K512, K513  \
) KEYMAP( \
	K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K00A, K00B, K00C, K00D, K00E, K00F, K010, K011, K012, K013, \
	K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K10A, K10B, K10C,       K10E, K10F, K110, K111, K112, K113, \
	K200,       K202, K203, K204, K205, K206, K207, K208, K209, K20A, K20B, K20C, K20D, K20E, K20F, K210, K211, K212,       \
	K300,       K302, K303, K304, K305, K306, K307, K308, K309, K30A, K30B, K30C, K30D,       K30F, K310, K311, K312, K313, \
	      K401, K402, K403, K404, K405, K406, K407, K408, K409, K40A, K40B,       K40D, K40E, K40F, K410, K411, K412,       \
	K500, K501,       K503,             K506,                   K50A, K50B, K50C, K50D, K50E, K50F,       K511, K512, K513  \
)
