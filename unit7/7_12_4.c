#include <stdio.h>
int main(void)
{
	char ch;
	int count_1=0;
	int count_2=0;
	printf("input a string,# to quit:");
	while((ch=getchar())!='#')
	{
		if('.'==ch)
		{
			count_1++;
			putchar('!');
		}
		else if('!'==ch)
		{
			count_2++;
			putchar('!');
			putchar('!');
		}
		else
			putchar(ch);
	}
	printf("the times of '.'replaced by '!':%d\n",count_1);
	printf("the times of '!'replaced by '!!':%d\n",count_2);
	return 0;

}
