/*
 * Microcontrollers_Week4.c
 *
 * Created: 1-3-2018 15:38:47
 * Author : Rick Verstraten & Lars Moesman
 */ 

#include <avr/io.h>
#include "main.h"
#include <avr/delay.h>


void executeB1(){
	DDRF = 0x00;
	DDRB = 0xFF;
	DDRA = 0xFF;
	adcInit();
	while (1)
	{
		PORTB = ADCL;
		PORTA = ADCH;
		_delay_ms(500);
	}
		
	
}

void adcInit(){
	ADMUX = 0b01100001;
	ADCSRA = 0b11100110;
	
	
}

int main(void)
{
	executeB1();
    /* Replace with your application code */
    while (1) 
    {
    }
}

