/*
 * main.c
 *
 *  Created on: Sep 27, 2021
 *      Author: TOSHIBA PC
 */


#include "usart.h"

int main(void)
{
	uint8_t data;
	Usart_ConfigType configuration = {ON,EIGHT,DISABLED,ONE,9600};
	UART_init(&configuration);
	while(1)
	{
		data = UART_receiveByte();   /* Recieving data from the first terminal */
		UART_sendByte(data);         /* Sending data to the second terminal */
	}

}
