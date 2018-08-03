#include <stdio.h>
#define N 0.08
int main(void)
{
	double num = 100;
	int i=0;
	while(num > 0)
	{
	
		num +=num*N;
		num -= 10;
		i++; 
	}
	printf("After %d years Chuckie empty his money ",i);
	return 0;
}
