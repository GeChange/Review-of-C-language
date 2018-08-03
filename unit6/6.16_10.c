#include <stdio.h>
#define SIZE 8
int main(void)
{
	int index,V[SIZE];
	printf("Please enter %d integer value:",SIZE);
	for(index = 0;index < SIZE;index++)
		scanf("%d",&V[index]);
	printf("The integer value read in are as follows:\n");
	for(index = SIZE-1;index>=0;index--)
		printf("%d\n",V[index]);
	return 0;
	
} 
