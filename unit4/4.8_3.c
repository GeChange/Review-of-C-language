#include <stdio.h>
int main(void)
{
	float a;
	printf("Please input a float value!\n");
	scanf("%f",&a);
	printf("a.The input is %2.1f or %2.1e \n",a,a);
	printf("b.The input is %+2.3f or %2.3E\n ",a,a);
	return 0;
}
