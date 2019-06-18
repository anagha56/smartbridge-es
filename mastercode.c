/*
 * master code.c
 *
 * Created: 14-Jun-19 12:26:04 PM
 * Author : ANAGHA
 */ 

void SPI_Init()//SPI initialize function

{
	DDRB|=(1<<MOSI)|(1<<SCK)|(1<<SS); //output pins
	DDRB&=~(1<<MISO);//input pin
	PORTB|=(1<<SS); //makeSS high
	SPCR=(1<<SPE)|(1<<MSTR)|(1<<SPR0);//enable SPI in master mode with Fosc/16
	SPSR&=~(1<<SPT2X);//disable speed doubler
	 
}
//SPI write function
void SPI_Write(char data)//SPI write data function/
{
	
	char flush_buffer;
	SPDR=data; //write data to SPI data register /
	while(!(SPSR&(1<<SPIF)));//wait till transmission complete//
	flush_buffer=SPDR; //flush received data
}
char SPI_Read() //SPI read data function//
{
	SPDR=0xFF;
	while(!(SPSR & (1<<SPIF))); //wait till reception complete//
	return(SPDR);//return received data
}

void SPI_init()//SPI Initialize function
{
	DDRB|=(1<<MOSI)|(1<<SCK)|(1<<SS); //make MOSI, SCK , SS as input pins//
	DDRB&=~(1<<MISO);//make MISO pin as output pin//
	
	SPCR=(1<<SPE);//enable SPI in slave mode
}

///SPI_Receive function///
 //return value it returns received data type//
  char SPI_Recieved() //SPI receive data function //
  {
	  
	  while(!(SPSR & (1<<SPIF))); //wait till reception complete//
	  return(SPDR);//Return received data
  }