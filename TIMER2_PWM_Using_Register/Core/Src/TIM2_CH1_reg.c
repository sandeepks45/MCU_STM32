/*
 * TIM2_CH1_reg.c
 *
 *  Created on: Dec 6, 2022
 *      Author: PHY202209EF06
 */
#include"stm32f4xx.h"
void delayMs(int n);
int main(void)
{
	//Configure PA5 as output of TIM2_CH1
		RCC->AHB1ENR |= 1;					//Enable GPIOA Clock
		GPIOA->MODER &= ~(3<<10);			//Clear Pin Mode
		GPIOA->MODER |= (1<<11);		    //Set Pin to Alternate Function
		GPIOA->AFR[0] &= ~(0xF<<20);		//Clear Pin Alternate Function Bits
		GPIOA->AFR[0] |= 1<<20;				//Set Pin AF1 for TIM2_CH1


	//Setup TIM2
		RCC->APB1ENR |= 1;

}
