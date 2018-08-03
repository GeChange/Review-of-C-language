#include <stdio.h>
int main(void)
{
	float i,j;
	printf("Please enter two float value:");
	while(scanf("%f%f",&i,&j)==2)
	{
		
		printf("%f\n",(i-j)/(i*j));
		printf("Please enter next value(q to quit):");
	} 
	return 0;
} 
