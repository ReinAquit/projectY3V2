/*
 * ui.h
 *
 *  Created on: 21 May 2019
 *      Author: aquit
 */

#ifndef UI_H_
#define UI_H_

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

//Prototypes
char user_interface(void);
int user_interface_line(void);
void user_interface_bitmap(void);
void user_interface_rectangle(void);
void user_interface_clear(void);

char char_user_input(void);
int value_user_input(void);

#endif /* UI_H_ */
