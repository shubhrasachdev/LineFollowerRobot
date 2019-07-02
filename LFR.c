#include<avr/io.h>
#define F_CPU 16000000UL
#include<util/delay.h>

void main()
{
	DDRA=0b11111100;  //for ir sensor
	DDRB=0b11111111;  //for motor
	while(1)
	{
		if((PINA&0b00000011)==0b00000000) PORTB=0b00001001; //forward
		else if((PINA&0b00000011)==0b00000001) PORTB=0b00001000; //left
			 else if((PINA&0b00000011)==0b00000010) PORTB=0b00000001; //right
			 	  else PORTB=0b00000000;
	}
}
