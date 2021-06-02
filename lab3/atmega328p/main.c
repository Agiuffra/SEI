/*
 * Prueba.c
 *
 * Created: 1/06/2021 22:57:04
 * Author : Usuario
 */ 

#define F_CPU 16000000

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    /* Replace with your application code */
    
	DDRD |= 0xFF;
	
	while (1) 
    {
		PORTD ^= 0b00110011;
		_delay_ms(100);
    }
}

