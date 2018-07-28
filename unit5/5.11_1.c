#include <stdio.h>
#define SIXTY 60
int main(void)
{
	int minutes,hour,minute;
	printf("Please input minutes!\n");
	scanf("%d",&minutes);
	while(minutes>0)
	{
	hour = minutes/SIXTY;
	minute = minutes%SIXTY;
	printf("It's %d hours %d minutes\n",hour,minute);
	printf("Next:");
	scanf("%d",&minutes); 
	}
	printf("Done\n");
		return 0;	

}
