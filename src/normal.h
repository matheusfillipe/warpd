/* Copyright © 2019 Raheman Vaiya.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#ifndef _H_DISCRETE_
#define _H_DISCRETE_

#include <stdint.h>
#include "common.h"

struct normal_keys {
	uint16_t up;
	uint16_t down;
	uint16_t left;
	uint16_t right;

	uint16_t right_word;
	uint16_t left_word;
	uint16_t down_word;
	uint16_t up_word;

	uint16_t home;
	uint16_t middle;
	uint16_t last;
	uint16_t beginning;
	uint16_t end;

	uint16_t scroll_down;
	uint16_t scroll_up;
	uint16_t scroll_left;
	uint16_t scroll_right;
	uint16_t exit[MAX_EXIT_KEYS];
};

uint16_t normal_mode(uint16_t start_key);

void init_normal(Display *_dpy,
		   const int _increment,
		   const int _word_increment,
		   struct normal_keys *_keys,
		   const char *indicator_color,
		   size_t _indicator_sz,
		   float _scroll_fling_timeout,
		   float _scroll_velocity,
		   float _scroll_acceleration,
		   float _scroll_fling_velocity,
		   float _scroll_fling_acceleration,
		   float _scroll_fling_deceleration);

#endif
