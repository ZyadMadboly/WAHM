/*
 * Interfacing_Modules_AMIT_B27.c
 *
 * Created: 2/5/2021 5:36:37 PM
 * Author : Zeiad
 */ 
#include "LED.h"

int main(void)
{
	SET_BIT(DDRC,7); //Define Direction as output
	SET_BIT(DDRD,3); //Define Direction as output
	SET_BIT(DDRD,2); //Define Direction as output
	SET_BIT(DDRA,2); //Define Direction as output

	
	
    /* Replace with your application code */
    while (1) 
    {
		SET_BIT(PORTC,2);
		SET_BIT(PORTA,3);
		_delay_ms(1000);
		CLR_BIT(PORTC,2);
		CLR_BIT(PORTA,3);
		_delay_ms(1000);
		

		

		
		
		
		

		
		
		
		
    }
}

