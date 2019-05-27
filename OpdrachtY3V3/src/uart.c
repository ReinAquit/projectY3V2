/*
 * uart.c
 *
 *  Created on: 22 May 2019
 *      Author: aquit
 */

#include"uart.h"

#define TRUE 1
#define LF 10
#define CR 13

void UART_init(void)
{

  /* --------------------------- System Clocks Configuration -----------------*/
  /* USART2 clock enable */
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_USART2, ENABLE);

  /* GPIOA clock enable */
  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE);

  GPIO_InitTypeDef GPIO_InitStructure;

  /*-------------------------- GPIO Configuration ----------------------------*/
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2 | GPIO_Pin_3;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF;
  GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
  GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_Init(GPIOA, &GPIO_InitStructure);

  /* Connect USART pins to AF */
  GPIO_PinAFConfig(GPIOA, GPIO_PinSource2, GPIO_AF_USART2);   // USART2_TX
  GPIO_PinAFConfig(GPIOA, GPIO_PinSource3, GPIO_AF_USART2);	  // USART2_RX

  USART_InitTypeDef USART_InitStructure;

/* USARTx configuration ------------------------------------------------------*/
/* USARTx configured as follow:
      - BaudRate = 115200 baud
      - Word Length = 8 Bits
      - One Stop Bit
      - No parity
      - Hardware flow control disabled (RTS and CTS signals)
      - Receive and transmit enabled
*/
  USART_InitStructure.USART_BaudRate = 9600;
  USART_InitStructure.USART_WordLength = USART_WordLength_8b;
  USART_InitStructure.USART_StopBits = USART_StopBits_1;
  USART_InitStructure.USART_Parity = USART_Parity_No;
  USART_InitStructure.USART_HardwareFlowControl = USART_HardwareFlowControl_None;

  USART_InitStructure.USART_Mode = USART_Mode_Rx | USART_Mode_Tx;

	USART_Init(USART2, &USART_InitStructure);
	USART_ITConfig(USART2,USART_IT_RXNE,ENABLE);

	USART_Cmd(USART2, ENABLE);

	}

	void UART_putchar(char c)
	{
			while(USART_GetFlagStatus(USART2, USART_FLAG_TXE) == RESET); // Wait for Empty
			USART_SendData(USART2, c);
	}

	void UART_puts(char *s)
	{
		volatile unsigned int i;
		for (i=0; s[i]; i++)
		{
			UART_putchar(s[i]);
		}
	}

	// Ontvang een karakter via de UART
	// niet echt nodig als routine maar als wrapper voor compatabiliteit. Let op geen -1 als er geen char is ontvangen!
	char UART_get(void)
	{
	    char uart_char = -1;
	    if (USART_GetFlagStatus(USART2, USART_FLAG_RXNE)== SET)  // check for data available
	    	 uart_char= USART2->DR & 0xFF; // and read the data from peripheral
	    return uart_char;
	}

	// void UART_gets
	// args: char *readbuffer
	//       int   echo, when TRUE, send read-char to UART
	// remark: ARM sends -1 if buffer is empty
	//         LF is cleared if set in terminal-program
	void UART_gets(char *s, int echo)
	{
		while (TRUE)
		{
		 	*s = UART_get();

		 	if (*s==-1)             // check for data available
		 		continue;

		 	if (*s==0xff || *s==LF) // if no data or LF, continue
				continue;

			if (echo)              // if output-flag set
				UART_putchar(*s);  // to read what u entered

			if (*s==CR)            // if enter pressed
			{
				*s = '\0';         // ignore char and close string
			    return;            // buf ready, exit loop
			}
			s++;
		}
	}
