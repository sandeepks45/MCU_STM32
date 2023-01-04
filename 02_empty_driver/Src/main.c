#include <stdint.h>
#include "stm32f411x.h"
#include "stdio.h"

void delay(int T)
{
	while(T--)
	{
		for(uint32_t i = 0; i < 500000; i ++);
	}
}
int main()
{
	gpio_config();
	while(1)
	{
		GPIO_ToggOutputPin(GPIOA,GPIO_PIN_NO_5);
		delay(5);
	}
}
