#include<stdio.h>
int main(void)
{
	float height; 
	printf("请输入你的身高，以厘米为单位\n");
	scanf("%f",&height);
	printf("你的身高以厘米为单位是：%f cm,以英寸为单位是%f ft\n",height,height/2.54);
	return 0;
} 
