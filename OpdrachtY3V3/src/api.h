/*
 * api.h
 *
 *  Created on: 27 May 2019
 *      Author: aquit
 */

#ifndef API_H_
#define API_H_

//Defines
#include <math.h>
#include <stdio.h>
#include <string.h>

#include "stm32_ub_vga_screen.h"
#include "test_letter.h"
#include "define_bitmap.h"

#include "main.h"

//Thalita's functies
void text(char zin[]);
void byte_to_pixel(char byte, int x, int y, int colour);
int sgn(int data);
void line(int x1, int x2, int y1, int y2, int colour);
void rectangle(int x1, int x2, int y1, int y2, int colour);
void empty_rectangle(int x1, int x2, int y1, int y2, int colour);
void circle(int x, int y, int radius, int colour);
void clearscrn(int colour);
void delay(int sec);
void show_qrcode(int x, int y);
void show_arrow(int x, int y, int colour);
void show_smiley(int x, int y);

/*
//Opdracht functies
//Verplicht:
int API_draw_text (int x_lup, int y_lup, int color, char *text, char *fontname,
int fontsize, int fontstyle, int reserved); // fontsize:1 small, 2 big
int API_draw_line (int x_1, int y_1, int x_2, y_2, int color, int weight, int reserved);
int API_draw_rectangle (int x, int y, int width, int height, int color, int filled,
int reserved, int reserved); // e.g.: weight, bordercolor
int API_draw_bitmap (int x_lup, int y_lup, int bm_nr);
int API_clearscreen (int color);

//Optionele functies (bonuspunten):
int API_wait (int msecs);
int API_repeat_commands (int nr_previous_commands, int iterations, int reserved);
int API_execute (void);
int API_draw_circle (int x, int y, int radius, int color, int reserved);
int API_draw_figure (int x_1, int y_1, int x_2, int y_2, int x_3, int y_3, int x_4, int y_4,
int x_5, int y_5, int color, int reserved);
*/
#endif /* API_H_ */
