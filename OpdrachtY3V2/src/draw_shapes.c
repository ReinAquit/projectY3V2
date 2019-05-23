/*
 * draw_shapes.c
 *
 *  Created on: 23 mei 2019
 *      Author: Lietje
 */

// Signum function
int sgn(int data) {
	if (data < 0)
		return -1;
	if (data > 0)
		return 1;
	return 0;
}

/* Line function
 * Draws a line on the screen from x1,y1 to x2,y2.
 * Based on Bresenham's algorithm.
 */
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

/* Rectangle function
 * Draws a rectangle on screen by using the line function.
 * Coordinate x1,y1 is the left upper corner and x2,y2 is the right lower corner.
 */
void rectangle(int x1, int x2, int y1, int y2, int colour) {
	int i;
	for (i = x1; i < x2; i++) line(i, i, y1, y2, colour);
}

/* Border of rectangle function
 * Draws the border of a rectangle on screen.
 * Coordinate x1,y1 is the left upper corner and x2,y2 is the right lower corner.
 */
void empty_rectangle(int x1, int x2, int y1, int y2, int colour) {
	line(x1, x1, y1, y2, colour);
	line(x2, x2, y1, y2, colour);
	line(x1, x2, y1, y1, colour);
	line(x1, x2 + 1, y2, y2, colour);
}

/* Clear screen function
 * Removes all shapes from Screen
 */
void clearscrn(int colour) {
	if (colour != 0) {
		UB_VGA_FillScreen(colour);
		background = colour;
	} else
		UB_VGA_FillScreen(background);
}
