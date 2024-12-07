#include "stm32f10x.h"                  // Device header
int main()
{
		RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC,ENABLE);//开启gpioc的时钟
		GPIO_InitTypeDef GPIO_InitStructure;
		GPIO_InitStructure.GPIO_Mode=GPIO_Mode_Out_PP;
		GPIO_InitStructure.GPIO_Pin=GPIO_Pin_13;
		GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
		GPIO_Init(GPIOC,&GPIO_InitStructure);//初始化为推挽输出，不然硬件结构无法片选
		GPIO_SetBits(GPIOC,GPIO_Pin_13);//设置为高电平
		




}