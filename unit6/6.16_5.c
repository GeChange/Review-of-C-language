#include <stdio.h>
int main(void)
{
	int I,J,i;
	printf("Please enter a Upper limit value:");
	scanf("%d",&J);
	printf("Please enter a Lower limit value:");
	scanf("%d",&I);
	for(i=I;i<J;i++)
	{
		printf("The value is%d,it's Square value is %d,it's Cubic value is%d\n",i,i*i,i*i*i);
	}
	
	return 0;
	
}
