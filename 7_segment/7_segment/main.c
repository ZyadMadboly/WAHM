/*
 * 7_segment.c
 *
 * Created: 2/7/2021 4:47:35 AM
 * Author : khaled
 */ 



#include "CPU_CONFIG.h"

void display_number (Uint8t num);
Uint8t count = 0 ; 

int main(void)
{
    /* Replace with your application code */
	_7SEG_init(); 
    while (1) 
    {
		if (count >99) count=0 ; 
		display_number(count);
		count ++ ; 
    }
}

void display_number (Uint8t num){
	Uint8t left_num  = num/10 ; 
	Uint8t right_num = num- (left_num*10); 
	_7SEG_DISPLAY(left_num , right_num ,200);
}