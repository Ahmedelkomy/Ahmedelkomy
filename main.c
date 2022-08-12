#include <avr/io.h>
#include <util/delay.h>

int main(void)
{


DDRA |=(1<<1);
DDRA |=(1<<2);
DDRC |=(1<<7);
DDRC |=(1<<6);
DDRA &=~(1<<0);
PORTA |=(1<<0);
while(1)
{
	PORTA |=(1<<1);
	PORTA |=(1<<2);
	PORTC |=(1<<6);
	PORTC |=(1<<7);
	if ((PINA &(1<<0))==0)
	{
		for(char i=1;i<3;i++)
		{
			PORTA &=~(1<<i);
			_delay_ms(100);
			PORTA |=(1<<i);
			_delay_ms(100);


		}

	}



}


return 0;
}
