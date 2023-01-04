/*
 * USART2_reg.c
 *
 *  Created on: Dec 2, 2022
 *      Author: PHY202209EF06
 */

#include "stm32f4xx.h" // Device header
void delay(int sec);
void USART2_Init(void);
char USART2_Read(void);
void USART2_Write(char data);
int main(void)
{
	volatile char ch;
	USART2_Init();
	while(1)
	{
		ch=USART2_Read();
		USART2_Write(ch);
	}
	return 0;
}
void USART2_Init(void)
{
	RCC->APB1ENR |= 0x20000; //Enable APB1ENR
	RCC->AHB1ENR |= 0x1; //Enable GPIOA
	GPIOA->MODER &= ~0xF0; //clear PA2 and PA3
	GPIOA->MODER |= 0xA0; //Alernate Function at PA2 AND PA3
	GPIOA->AFR[0] &= ~0xFF00; //clear PA2 and PA3
	GPIOA->AFR[0] |= 0x7700; //Enable USART2 FOR PA2 and PA3
	USART2->BRR |= 0x683; //9600 Baud Rate
	USART2->CR1 |= 0x4; //Rx Mode PA3
	USART2->CR1 |=0x8; //Tx Mode PA2
	USART2->CR1 |= 0x2000; //USART2 Enable
}
char USART2_Read(void)
{
	while(!(USART2->SR & 0x20)){} //Check the status register for Rx Buffer
	return USART2->DR; //Return Data registers
}
void USART2_Write(char data)
{
	while(!(USART2->SR & 0x80)) {} //if 0 enters loops if 1 exits //This loop is for Tx buffer
	USART2->DR = (data & 0xFF); //Sending data to data register
}
void delay(int sec)
{
	for(;sec>0;sec--)
	{
		for(int count1=0;count1<100000;count1++);
	}
}
