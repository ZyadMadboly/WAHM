/*
 * _7SEGMENT.c
 *
 * Created: 2/7/2021 4:54:26 AM
 *  Author: khaled
 */ 

#include "7SEGMENT.h"

void _7SEG_init(void){
	SET_BIT(_7SEG_A_DATA_DDR , A_PIN);
	SET_BIT(_7SEG_B_DATA_DDR , B_PIN);
	SET_BIT(_7SEG_C_DATA_DDR , C_PIN);
	SET_BIT(_7SEG_D_DATA_DDR , D_PIN);
	SET_BIT(_7SEG_EN1_DDR , EN_1_PIN);
	SET_BIT(_7SEG_EN2_DDR , EN_2_PIN); 
};
void _7SEG_RESET (void){
	CLR_BIT(_7SEG_A_DATA_PORT, A_PIN);
	CLR_BIT(_7SEG_B_DATA_PORT, B_PIN);
	CLR_BIT(_7SEG_C_DATA_PORT, C_PIN);
	CLR_BIT(_7SEG_D_DATA_PORT, D_PIN);
}

void _7SEG_ON (Uint8t num , Uint8t position) {
	if (position == 'L'){
		CLR_BIT(_7SEG_EN2_PORT , EN_2_PIN);
		SET_BIT(_7SEG_EN1_PORT , EN_1_PIN);
		}else if (position == 'R'){
		CLR_BIT(_7SEG_EN1_PORT , EN_1_PIN);
		SET_BIT(_7SEG_EN2_PORT , EN_2_PIN);
		}
	if (num == 1){
		_7SEG_RESET();
		SET_BIT(_7SEG_A_DATA_PORT , A_PIN); 	
	}else if (num ==2 ){
		_7SEG_RESET();
		SET_BIT(_7SEG_B_DATA_PORT , B_PIN);
	}else if (num ==3 ){
		_7SEG_RESET();
		SET_BIT(_7SEG_A_DATA_PORT , A_PIN); 	
		SET_BIT(_7SEG_B_DATA_PORT , B_PIN);
	}else if (num ==4 ){
		_7SEG_RESET();
		SET_BIT(_7SEG_C_DATA_PORT , C_PIN);
	}else if (num ==5 ){
		_7SEG_RESET();
		SET_BIT(_7SEG_A_DATA_PORT , A_PIN);
		SET_BIT(_7SEG_C_DATA_PORT , C_PIN);
	}else if (num ==6 ){
		_7SEG_RESET();
		SET_BIT(_7SEG_B_DATA_PORT , B_PIN);
		SET_BIT(_7SEG_C_DATA_PORT , C_PIN);
	}else if (num ==7 ){
		_7SEG_RESET();
		SET_BIT(_7SEG_A_DATA_PORT , A_PIN);
		SET_BIT(_7SEG_B_DATA_PORT , B_PIN);
		SET_BIT(_7SEG_C_DATA_PORT , C_PIN);
	}else if (num ==8 ){
		_7SEG_RESET();
		SET_BIT(_7SEG_D_DATA_PORT , D_PIN);
	}else if (num ==9 ){
		_7SEG_RESET();
		SET_BIT(_7SEG_A_DATA_PORT , A_PIN);
		SET_BIT(_7SEG_D_DATA_PORT , D_PIN);
	}else if (num ==0 ){
		_7SEG_RESET();
	}
}
	
void _7SEG_DISPLAY(Uint8t left , Uint8t right , Uint16t time_){ 
	time_/=2 ; //cuz this function use 2ms (1ms for each 7seg)
	for ( ; time_>0 ; time_--){
		_7SEG_ON (left , 'L');
		_delay_ms(1);
		_7SEG_ON (right , 'R');
		_delay_ms(1);	
	}
}
