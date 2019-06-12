/*
 * code for stepper motor.c
 *
 * Created: 12-Jun-19 10:50:53 AM
 * Author : ANAGHA
 */ 


#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	
DDRA=0x0F;//make portA lower pins as output
int period=2;
while(1)

 //* Rotate stepper motor clockwise with half step sequence//
 {
	 for(int i=0;i<50;i++)
	 {
		  PORTA=0X09;
		  _delay_ms(period);
		  PORTA=0X08;
		  _delay_ms(period);
		  PORTA=0X0C;
		  _delay_ms(period);
		  PORTA=0X06;
		  _delay_ms(period);
	 PORTA=0X04;
	 _delay_ms(period);
	  PORTA=0X02;
	  _delay_ms(period);
	   PORTA=0X03;
	   _delay_ms(period);
	    PORTA=0X01;
	    _delay_ms(period);
	 }
	 PORTA=0x09;//last step to initial position//
	 _delay_ms(period);
	 _delay_ms(1000);
	 
 
 //Rotate stepper motor in anti clockwise with full step sequence//
 for(int i=0;i<50;i++)
 {
	 PORTA=0X01;
	 _delay_ms(period);
	 PORTA=0X03;
	 _delay_ms(period);
	 PORTA=0X02;
	 _delay_ms(period);
	 PORTA=0X06;
	 _delay_ms(period);
	 PORTA=0X04;
	 _delay_ms(period);
	 PORTA=0X0C;
	 _delay_ms(period);
	 PORTA=0X08;
	 _delay_ms(period);
	 PORTA=0X09;
	 _delay_ms(period);
	 
 }
 PORTA=0x09;
 _delay_ms(period);
  _delay_ms(1000);
  
}
}