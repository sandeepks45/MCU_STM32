#include"stm32f4xx.h"
void delay(int T)
{
	int i;
	while(T--)
	{
		for(i=0;i<5000;i++);
	}
}
int main()
{
	RCC->AHB1ENR |= 1;
	GPIOA->MODER |= 0x400;
	while(1)
	{
		GPIOA->OTYPER |= 0x20;
		//LED=1; //AFTER CHANGING IOC PA5 TO LED USER LABEL
		delay(100);
		GPIOA->OTYPER &= ~0x20;
		//LED=0; //AFTER CHANGING IOC PA5 TO LED USER LABEL
		delay(100);
	}
}
