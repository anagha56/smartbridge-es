/*
 * IR sensor using LED.c
 *
 * Created: 11-Jun-19 3:35:15 PM
 * Author : ANAGHA
 */ 

#ifndef F_CPU
#define F_CPU 16000000UL //16mhz clock speed
#endif
#include <avr/io.h>

#define LED_OUTPUT PORTB
#define PIR_INPUT PINC
 


int main(void)
{
    DDRC=0x00;
	DDRB=0xFF;   
    while (1) 
    {
		LED_OUTPUT=PIR_INPUT;
    }
}

