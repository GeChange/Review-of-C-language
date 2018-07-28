#include <stdio.h>
#define DAYS_TO_WEEK 7
int main(void)
{
	int days ,weeks;
	printf("Please enter days!\n");
	scanf("%d",&days);
	while(days>0)
	{
		printf("%d days are %d weeks,%d days\n",days,days/DAYS_TO_WEEK,days%DAYS_TO_WEEK);
		printf("next:");
		scanf("%d",&days);
	} 
	return 0;
} 
