#include <stdio.h>
void IsPrime(int i);

void IsPrime(int i)
{
	int k;
	int count=0;
	for(k=1;k*k<=i;k++)
	{
		if(0==i%k)
		     count++;
	}
	if(1==count)
	  printf("%d",i);
	
}
int main(void)
{
	int value,i;
	printf("please input an integer(q to quit):");
	while(1 == scanf("%d",&value))
	{
		printf("All the primes <= %d are:",value);
		for(i = 2; i <= value; i++)
			IsPrime(i);
		printf("\nplease input an integer(q to quit):");
	}
	return 0;
}

