#include<stdio.h>
void smile(void);
int main(void)
{
	for(int i=3;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{
			smile();
		}
		printf("\n");
	}
	return 0;
}
void smile(void)
{
	printf("Smile!");
}
