#include<avr/io.h>
#define F_CPU16000000UL
#include<util/delay.h>
void main()
{
  DDRA=0b11111100;
  DDRB=0b11111111;
  while(1)
  {
	  if(PINA==0b00000011)
	  PORTB=0b00000101;//forward
	 else if(PINA==0b00000001)
	  {//m1
	  PORTB=0b0000001;//right
	  }
	  else if(PINA==0b00000010)
	  {//m2
	  PORTB=0b00000100;//left
	  }
	  else
	  	   PORTB=0b00000000;//stop
   }
}
