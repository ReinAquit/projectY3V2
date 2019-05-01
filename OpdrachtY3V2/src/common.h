/*
 * common.h
 *
 *  Created on: 17 Apr 2019
 *      Author: Rein Lenting
 */

#ifndef COMMON_H_
#define COMMON_H_

//Includes
#include "stm32f4xx.h"
#include <stm32_ub_vga_screen.h>

//System clock in Hzzzz
#define sysclock 168000000

//True and false used for quick 1 & 0
#define TRUE  1
#define FALSE 0

//Macro's used for bit setting
#define _BV(bit)                (1 << (bit))
#define BIT_CLR(reg,bit)        do { (reg) &= ~ _BV(bit); } while (0)
#define BIT_SET(reg,bit)        do { (reg) |=   _BV(bit); } while (0)
#define BIT_TST(reg,bit)        (((reg) & _BV(bit)) != 0)

#endif /* COMMON_H_ */
