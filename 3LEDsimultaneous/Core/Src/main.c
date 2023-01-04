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
    RCC->AHB1ENR |= 7;
    GPIOA->MODER = 0x10000;  //For PA8 Pin LED1
    GPIOB->MODER = 0x10000;  //For PB8 Pin Buzzer
    GPIOC->MODER = 0x40000;  //For PC9 Pin LED2
    while(1)
    {
        GPIOA->ODR |= 0x100;
        delay(100);
        GPIOB->ODR |= 0x100;
        delay(100);
        GPIOC->ODR |= 0x200;
        delay(100);
        GPIOA->ODR &= ~0x100;
        delay(100);
        GPIOB->ODR &= ~0x100;
        delay(100);
        GPIOC->ODR &= ~0x200;
        delay(100);
    }
}
