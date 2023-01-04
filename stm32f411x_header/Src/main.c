#include <stdint.h>
#include "stm32f411x.h"
#include "stdio.h"

void delay(int T)
{
	while(T--){
	for(uint32_t i = 0; i < 500000; i ++); }
}
int main(void)
{
	GPIO_Handle_t GpioLed;

	GpioLed.pGPIOx = GPIOA;
	GpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_5;
	GpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_LOW;
	GpioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GpioLed.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;

	GPIO_PeriClockControl(GPIOA,ENABLE);

	GPIO_Init(&GpioLed);

	while(1)
	{
		GPIO_ToggOutputPin(GPIOA,GPIO_PIN_NO_5);
		//GPIO_WriteOutputPin(GPIOA,GPIO_PIN_NO_5,1);
		//delay(5);
		//GPIO_WriteOutputPin(GPIOA,GPIO_PIN_NO_5,0);
		delay(5);
	}
	return 0;
}
