/*
 * main.c
 *
 *  Created on: Aug 30, 2019
 *      Author: Mariam
 */

#include"std_types.h"
#include"Bit_calc.h"
#include"util/delay.h"
#include"DIO_interface.h"
#include"KPD_interface.h"

void main (void)
{
	DIO_vidSetPortDirection(PORTA,OUTPUT);
	DIO_vidSetPortDirection(PORTB,INPUT);
	DIO_vidSetPortValue(PORTA,0xFF);
	DIO_vidSetPortValue(PORTB,0xFF);
while(1)
{

	if(KPD_u8GetPressedKey()==5)
		{
			DIO_vidSetPinValue(PORTA,PIN3,LOW);
			_delay_ms(200);
			DIO_vidSetPinValue(PORTA,PIN3,HIGH);
			_delay_ms(200);

		}

}
}
