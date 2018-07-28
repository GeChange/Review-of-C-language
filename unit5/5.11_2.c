#include <stdio.h>
#define TEN 10
int main(void)
{
	int int_value,i;
	printf("Please enter a intege value!\n");
	scanf("%d",&int_value);
	i = 1; 
	while(i<=TEN)
	{
	  int_value = int_value +1 ;
	  printf("int_value is %d\n",int_value);
	  i++;	
	}
	return 0; 
}
