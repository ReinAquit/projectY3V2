/*
 * ui.c
 *
 *  Created on: 21 May 2019
 *      Author: Rein Lenting
 */

#include "ui.h"

//Main User interface.
//Puts the settings and asks for user input
//---------------------------------------------------------------------------------------------
char user_interface(void)
{
	char buffer = 0;

	while(buffer == 0)
	{
		UART_puts("	VGA scherm control interface\n");
		UART_puts("[1]Draw line\n");
		UART_puts("[2]Draw bitmap\n");
		UART_puts("[3]Draw rectangle\n");
		UART_puts("[4]Clear screen\n");

		buffer = char_user_input();

		switch(buffer)
		{
			case 49:
				user_interface_line();
				break;
			case 50:
				//user_interface_bitmap();
				break;
			case 51:
				user_interface_rectangle();
				break;
			case 52:
				user_interface_clear();
				break;
			default:
				UART_puts("bad input\n");
		}
	}
	return buffer;
}

int user_interface_line(void)
{
	char input = 0;
	int i = 0;

	char sbuffer[6];

	int point_x1 = 0;
	int point_x2 = 0;
	int point_y1 = 0;
	int point_y2 = 0;


	while(i == 0)
	{
		//Puts main  interface settings
		UART_puts("	Draw line settings\n");

		UART_puts("[1]Change line point x1, currently: ");
		itoa(point_x1,sbuffer,10);
		UART_puts(sbuffer);
		UART_puts("\n");

		UART_puts("[2]Change line point x2, currently: ");
		itoa(point_x2,sbuffer,10);
		UART_puts(sbuffer);
		UART_puts("\n");

		UART_puts("[3]Change line point y1, currently: ");
		itoa(point_y1,sbuffer,10);
		UART_puts(sbuffer);
		UART_puts("\n");

		UART_puts("[4]Change line point y2, currently: ");
		itoa(point_y2,sbuffer,10);
		UART_puts(sbuffer);
		UART_puts("\n");

		UART_puts("[5]Draw line\n");
		UART_puts("[6]Exit\n");

		//Waits for user input
		input = char_user_input();

		//Proceses user input
		switch(input)
		{
			case 49:
				UART_puts("Insert a number for point x1\n");
				point_x1 = value_user_input();
				break;
			case 50:
				UART_puts("Insert a number for point x2\n");
				point_x2 = value_user_input();
				break;
			case 51:
				UART_puts("Insert a number for point y1\n");
				point_y1 = value_user_input();
				break;
			case 52:
				UART_puts("Insert a number for point y2\n");
				point_y2 = value_user_input();
				break;
			case 53:
				//draw line function
				break;
			case 54:
				UART_puts("Returning to main screen\n");
				i = 1;
				break;
			default:
				UART_puts("Bad input, return to main screen");
				i = 1;
		}
	}

	return input;
}

//Function ready for programming
void user_interface_bitmap(void)
{

}

//Function ready for programming

void user_interface_rectangle(void)
{

}

//Function for the ui, clearing the screen
// Asks if u are shure.
void user_interface_clear(void)
{
	int input = 0;
	int colour = 0;
	char sbuffer[8];

	while(input == 0)
	{
		//Puts main interface text
		UART_puts("Are you sure you want to clear?\n");
		UART_puts("The clear colour (0 - 255) is :");
		itoa(colour,sbuffer,10);
		UART_puts(sbuffer);
		UART_puts("\n");

		UART_puts("[1]Change clear colour\n");
		UART_puts("[2]Yes\n");
		UART_puts("[3]No\n");

		//Waiting for user input
		input = char_user_input();

		//Proceses user input
		switch(input)
		{
			case 49:
				UART_puts("Insert a colour between 0 - 255\n");
				colour = value_user_input();
				input = 0;
				break;
			case 50:
				//Clear colour function
				break;
			case 51:
				UART_puts("Returning to main screen\n");
				input = 1;
				break;
			default:
				UART_puts("Bad input, return to main screen\n");
				input = 1;
		}
	}
}


//Function that wil wait for a user input.
//When user input detected will return the value as a char
//--------------------------------------------------------------------------------------------
char char_user_input(void)
{
	char buf = -1;

	while(buf ==255)
	{
		buf = UART_get();
	}
	return buf;
}

//Function that wil wait for a user input.
//When user input detected will return the value as a int
//--------------------------------------------------------------------------------------------
int value_user_input(void)
{
	int return_var = 0;
	char buffer[8];

	UART_gets(buffer, 1);

	return_var = atoi(buffer);

	return(return_var);
}


