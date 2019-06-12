/*
 * Relay module sensor.c
 *
 * Created: 11-Jun-19 4:02:39 PM
 * Author : ANAGHA
 */ 

#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>
#include <util/delay.h>
int main(void)
{
	
	DDRD=0xFF;
	while(1)
	{
		PORTD=0xFF;
		_delay_ms(220);
		PORTD=0x00;
		_delay_ms(220);
	}
}
 