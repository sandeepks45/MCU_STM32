#include"stm32f4xx.h"
void led_init()
{
	RCC->AHB1ENR |= 7;
	GPIOA->MODER |= 0x10000; //LED FOR PIN PA8
	GPIOB->MODER |= 0x10000; //LED FOR PIN PB8
	GPIOC->MODER |= 0x40000; //POTENTIOMETER FOR PIN PC9
}
void sw_init()
{
	RCC->AHB1ENR |= 0x4;
	GPIOC->MODER |= 0x0;
}
void operation()
{
	if(GPIOC->IDR & 0x2000)
			{
				GPIOA->BSRR |= 0x100;
				GPIOB->BSRR |= 0x100;
			}
			else
			{
				GPIOA->BSRR |= 0x1000000;
				GPIOB->BSRR |= 0x1000000;
			}
}
int main()
{
	led_init();
	sw_init();
	while(1)
	{
		operation();
	}
}
