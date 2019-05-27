//--------------------------------------------------------------
// File     : main.c
// Datum    : 30.03.2016
// Version  : 1.0
// Autor    :
// CPU      : STM32F4
// IDE      : Atollic
// Module   : CMSIS_BOOT, M4_CMSIS_CORE
// Function : VGA_core DMA LIB 320x240, 8bit color
//--------------------------------------------------------------

#include "main.h"

#define ERROR 66

int main(void)
{
	int i;
	char input;

	//system init's
	SystemInit();
	//UART init's
    UART_init();

  while(1)
  {
	  input = user_interface();

  }
}
