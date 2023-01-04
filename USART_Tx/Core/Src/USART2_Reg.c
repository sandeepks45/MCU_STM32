/*
 * 1. Protocol Select : USART2
 * 2. Enable APB1 clock with RCC
 * 3. Enable AHB1 clock with RCCn
 * 4. Alternative function of PA2 as USART2 Tx
 * 5. Alternative function of PA3 as USART2 Rx
 * USART2_Reg.c
 *
 *  Created on: November 23, 2022
 *      Author: PHY202209EF07
 */
#include"main.h"
void Sconfig_Init()
{
	RCC->APB1ENR |=0x20000; //USART2 is hanged on APB1 BUS and we need to Reset and control the clock for every peripheral
	RCC->AHB1ENR |=0x1;     //APB1 BUS is hanged on AHB1 BUS
	GPIOA->MODER |=0x20;    //For selecting the mode for particular port & pin
	GPIOA->AFR[0] |=0x700;  //For Converting GPIO Peripheral behavior to USART2 peripheral behavior
	USART2->BRR |=0x683;    //Hex value for 9600 Baud-rate
	USART2->CR1 |= 0x8; 	// For TE
	USART2->CR1 |= 0x2000;	// For UE
}
void USART2_Send(unsigned char *str)
{
	while(*str)
	{
		USART2_Tx(*str);
		str++;
	}
}
void USART2_Tx(unsigned char data)
{
	while(!(USART2->SR & 0x80)){}
	USART2 -> DR |= (data & 0xff);
}
char Data[10] = "Hello\r\n";
void delay(int T)
{
	int i;
	while(T--)
	{
		for(i=0;i<100000;i++);
	}
}
int main()
{
	Sconfig_Init();
	while(1)
	{
		USART2_Send("Hello\r\n");
//		USART2_Tx('h');
//		delay(500);
//		USART2_Tx('e');
//		delay(500);
//		USART2_Tx('l');
//		delay(500);
//		USART2_Tx('l');
//		delay(500);
//		USART2_Tx('o');
//		delay(500);
//		USART2_Tx('\t');
	}
}
