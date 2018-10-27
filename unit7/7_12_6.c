#include <stdio.h>

int main(void)
{
	char former,present;
	int count;
	count = 0;
	former = 0;
	while((present = getchar()) != '#')
	{
		if('e' == former && 'i' == present)
			count++;
		former = present;
	}

	printf("\"ei\"has apeared %d times.\n",count);
	
	return 0;
}

