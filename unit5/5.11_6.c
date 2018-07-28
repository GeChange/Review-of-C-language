#include <stdio.h>
int main(void)
{
	int count,sum,limit,t;
	count = 0;
	sum = 0;
	printf("Plese enter a limit value:");
	scanf("%d",&limit);
	while(count++<limit)
	{
		t = count*count;
		sum = sum+t;
		printf("The %d day is $%d \n",count,sum);
		
	}
	return 0;
}
