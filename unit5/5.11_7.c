#include <stdio.h>
float cu(float n);
int main(void)
{
	float a,cube;
	printf("Please enter a float value!");
	scanf("%f",&a);
	cube = cu(a);
	printf("The value %.2f 's cube is %.2f",a,cube);
	return 0;
}
float cu(float n)
{
	float a;
	a=n*n*n;
	return a;
}
