#include <stdio.h>
int main(void)
{
	int count,sum,limit;
	count = 0;
	sum = 0;
	printf("Plese enter a limit value:");
	scanf("%d",&limit);
	while(count++<limit)
	{
		sum = sum+count;
		printf("The %d day is $%d \n",count,sum);
		
	}
	return 0;
}
