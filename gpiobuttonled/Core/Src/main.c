#include"stm32f4xx.h"
void led_init()  //Inbuilt LED is Connected to PA5
{
	RCC->AHB1ENR |= 0x1;
	GPIOA->MODER |= 0x400;
}
void sw_init()  //Inbuilt LED is Connected to PC13
{
	RCC->AHB1ENR |= 0x4;
	GPIOC->MODER |= 0x0;
}
void operation()  //Continuous On-Off means Toggling
{
	if(GPIOC->IDR & 0x2000)  //Button is Pressed
	{
		GPIOA->BSRR |= 0x200000;  //By Default LED is on High State, so we need to Bit-Reset it First(Off State)
	}
	else
	{
		GPIOA->BSRR |= 0x20;  //Bit-Set(On State)
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
