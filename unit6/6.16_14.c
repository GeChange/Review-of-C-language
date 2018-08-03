#include <stdio.h>
#define L 20

int main(void)
{
	char string[L];
	int index;
	printf("please input:");
	for(index = 0; index < L; index++)
		scanf("%c",&string[index]);
	printf("   Reverse  :");
	for(index = L-1; index >= 0; index--)
		printf("%c",string[index]);
	printf("\n");
	
	return 0;
}










