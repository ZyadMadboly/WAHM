/*
 * LED.c
 *
 * Created: 2/6/2021 5:10:23 PM
 *  Author: Zeiad
 */ 
/*
1- Macros
2- Function Implementation
*/
void LED0_Init(void)
{
	/*Intialize LED0 PORT */
	SET_BIT(LED0_DDR,LED_PIN);
}
void LED0_ON(void)
{
	/*Turn LEAD0 ON*/
	SET_BIT(LED0_PORT,LED_PIN);
}
void LEAD0_OFF(void)
{
	/*Turn LEAD0 OFF */
	CLR_BIT(LED0_PORT,LED_PIN);
}
void LEAD0_TGL(void)
{
	/*TOGGLE LEAD0  */
	TGL_BIT(LED0_PORT,LED_PIN);

}

