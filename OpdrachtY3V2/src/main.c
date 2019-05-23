//--------------------------------------------------------------
// File     : main.c
// Datum    : 30.03.2016
// Version  : 1.0
// Autor    : UB
// mods by	: J.F. van der Bent
// CPU      : STM32F4
// IDE      : CooCox CoIDE 1.7.x
// Module   : CMSIS_BOOT, M4_CMSIS_CORE
// Function : VGA_core DMA LIB 320x240, 8bit color
//--------------------------------------------------------------

#include "main.h"
#include "stm32_ub_vga_screen.h"
#include "stdio.h"
#include <math.h>
//#include "define_letter.h"
#include "test_letter.h"

int background = VGA_COL_CYAN;

int sgn(int data);
unsigned char* read_bmp(char* filename);

int main(void) {
	//  uint32_t n;

	SystemInit(); // System speed to 168MHz

	UB_VGA_Screen_Init(); // Init VGA-Screen

	UB_VGA_FillScreen(background);
	UB_VGA_SetPixel(10, 10, 10);

	show_qrcode(10, 10);

	while (1) {
	}
}

void text(char zin[]) {
	int i, j, k, a, width;
	char letter, letter_data;
	int offsetx = 10;
	int offsety = 20;
	int n = strlen(zin);
	for (i = 0; i < n; i++) {
		letter = zin[i];
		if (letter == 32)
			offsetx += 8;
		else {
			a = 0;
			width = letter_tabel[letter - 65].h;
			if (width > 16) {
				for (j = 0; j < 24; j++) {
					for (k = 0; k < 3; k++) {
						letter_data = letter_tabel[letter - 65].data[a];
						int x = 8 * k + offsetx;
						int y = offsety + j;
						byte_to_pixel(letter_data, x, y, VGA_COL_BLUE);
						a++;
					}
				}
			} else if (width > 8) {
				for (j = 0; j < 24; j++) {
					for (k = 0; k < 2; k++) {
						letter_data = letter_tabel[letter - 65].data[a];
						int x = 8 * k + offsetx;
						int y = offsety + j;
						byte_to_pixel(letter_data, x, y, VGA_COL_BLUE);
						a++;
					}
				}
			} else {
				for (j = 0; j < 24; j++) {
					letter_data = letter_tabel[letter - 65].data[j];
					byte_to_pixel(letter_data, offsetx, offsety + j,
					VGA_COL_BLUE);
				}
			}
			offsetx += width;
		}

	}
}

void byte_to_pixel(char byte, int x, int y, int colour) {
	if (byte == 0)
		return;
	if (byte & 1 << 7)
		UB_VGA_SetPixel(x, y, colour);
	if (byte & 1 << 6)
		UB_VGA_SetPixel(x + 1, y, colour);
	if (byte & 1 << 5)
		UB_VGA_SetPixel(x + 2, y, colour);
	if (byte & 1 << 4)
		UB_VGA_SetPixel(x + 3, y, colour);
	if (byte & 1 << 3)
		UB_VGA_SetPixel(x + 4, y, colour);
	if (byte & 1 << 2)
		UB_VGA_SetPixel(x + 5, y, colour);
	if (byte & 1 << 1)
		UB_VGA_SetPixel(x + 6, y, colour);
	if (byte & 1)
		UB_VGA_SetPixel(x + 7, y, colour);
}

int sgn(int data) {
	if (data < 0)
		return -1;
	if (data > 0)
		return 1;
	return 0;
}

//functie lijn
void line(int x1, int x2, int y1, int y2, int colour) {
	int i, dx, dy, sdx, sdy, dxabs, dyabs, x, y, px, py;
	dx = x2 - x1; /* the horizontal distance of the line */
	dy = y2 - y1; /* the vertical distance of the line */
	dxabs = abs(dx);
	dyabs = abs(dy);
	sdx = sgn(dx);
	sdy = sgn(dy);
	x = dy >> 1;
	y = dx >> 1;
	px = x1;
	py = y1;

	if (dxabs >= dyabs) /* the line is more horizontal than vertical */
	{
		for (i = 0; i < dx; i++) {
			y += dyabs;
			if (y >= dx) {
				y -= dx;
				py += sdy;
			}
			UB_VGA_SetPixel(px, py, colour);
			px += sdx;
		}
	} else /* the line is more vertical than horizontal */
	{
		for (i = 0; i < dyabs; i++) {
			x += dx;
			if (x >= dyabs) {
				x -= dy;
				px += sdx;
			}
			UB_VGA_SetPixel(px, py, colour);
			py += sdy;
		}
	}
}

void rectangle(int x1, int x2, int y1, int y2, int colour) {
	int i;
	for (i = x1; i < x2; i++)
		line(i, i, y1, y2, colour);
}

void empty_rectangle(int x1, int x2, int y1, int y2, int colour) {
	line(x1, x1, y1, y2, colour);
	line(x2, x2, y1, y2, colour);
	line(x1, x2, y1, y1, colour);
	line(x1, x2 + 1, y2, y2, colour);
}

void circle(int x, int y, int radius, int colour) {
	double n = 0, invradius = (1 / (float) radius) * 0x10000L;
	int dx = 0, dy = radius - 1, i;
	int dxoffset, dyoffset, offset = (y << 8) + (y << 6) + x;

	while (dx <= dy) {
		dxoffset = radius - dx;
		dyoffset = radius - dy;
		for (i = dy; i >= dx; i--) {
			UB_VGA_SetPixel(offset + i, dyoffset, colour);
			UB_VGA_SetPixel(offset - i, dyoffset, colour);
			UB_VGA_SetPixel(offset + i, -dyoffset, colour);
			UB_VGA_SetPixel(offset - i, -dyoffset, colour);
			UB_VGA_SetPixel(dxoffset, dyoffset, colour);
			UB_VGA_SetPixel(dxoffset, dyoffset, colour);
			/*VGA[offset+i -dxoffset] = color;  /* octant 0 */
			//VGA[offset+dx-dyoffset] = color;  /* octant 1 */
			//VGA[offset-dx-dyoffset] = color;  /* octant 2 */
			//VGA[offset-i -dxoffset] = color;  /* octant 3 */
			//VGA[offset-i +dxoffset] = color;  /* octant 4 */
			//VGA[offset-dx+dyoffset] = color;  /* octant 5 */
			//VGA[offset+dx+dyoffset] = color;  /* octant 6 */
			//VGA[offset+i +dxoffset] = color;  /* octant 7 */
		}
		dx++;
		n += invradius;
		//dy = (int)((radius * SIN_ACOS[(int)(n>>6)]) >> 16);
		dy = (int) radius * sin(acos(n));
	}
}

void clearscrn(int colour) {
	if (colour != 0) {
		UB_VGA_FillScreen(colour);
		background = colour;
	} else
		UB_VGA_FillScreen(background);
}

void delay(int sec) {
	int i, j, k;
	for (i = 0; i < sec; i++) {
		for (j = 0; j < 0xFF; j++) {
			for (k = 0; k < 5126; k++) {
			}
		}
	}
}

/*unsigned char* read_bmp(char* filename)
 {
 FILE* img = fopen(filename, "r");
 unsigned char header[55];
 fread(header, sizeof(header), 0, img);
 int width = *(int*)&header[18];
 int height = *(int*)&header[22];
 fclose(img);
 }

 void DrawBmp(int x, int y, int bmp)
 {
 FILE* img = fopen("testbmp.bmp", "r");
 unsigned char header[54];
 fread(header, sizeof(unsigned char), 54, img);
 int width = *(int*)&header[18];
 int heigth = *(int*)&header[22];
 int i, j, colour, buffer[width];

 fread(buffer, 8, width, img);

 for (j=y; j<heigth; j++)
 {
 for(i=x; i<width; i++)
 {
 colour = buffer[i];
 if(colour != background) UB_VGA_SetPixel(i,j,colour);
 }
 }
 fclose(img);
 }
 */
void show_qrcode(int x, int y) {
	int i, j, a = 0;
	int x1 = x + 50;
	int y1 = y + 50;
	rectangle(x, x1, y, y1, 0);
	char data;
	for (j = 0; j < 50; j++) {
		for (i = 0; i < 7; i++) {
			data = qrcode[a];
			byte_to_pixel(data, 8 * i + 10, j + 10, VGA_COL_WHITE);
			a++;
		}
	}
}

/* Show arrow function
 * Draws arrow on screen in desired colour
 * A choice can be made between up, down, left or right
 */
void show_arrow(int x, int y, int colour) {
	int i, j, a = 0;
	for (j = 0; j < 25; j++) {
		for (i = 0; i < 2; i++) {
			data = qrcode[a];
			byte_to_pixel(data, 8 * i + 10, j + 10, colour);
			a++;
		}
	}
}

/* Show smiley
 * Draws a happy or a sad smiley on screen
 */
void show_smiley(int x, int y) {
	int i, j, a = 0;
	for (j = 0; j < 50; j++) {
		for (i = 0; i < 7; i++) {
			colour = smiley[a];
			UB_VGA_SetPixel(i, j, colour);
			a++;
		}
	}
}
