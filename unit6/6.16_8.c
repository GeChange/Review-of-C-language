#include <stdio.h>
float calculate(float,float);
int main(void)
{
	float i,j;
	printf("Please enter two float value:");
	while(scanf("%f%f",&i,&j)==2)
	{
		
		printf("%f\n",calculate(i,j));
		printf("Please enter next value(q to quit):");
	} 
	return 0;
} 
float calculate(float x,float y)
{
 return( (x-y) / (x*y) );
}

