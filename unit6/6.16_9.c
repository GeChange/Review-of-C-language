#include <stdio.h>
int main(void)
{
	int l,u,i,sum;
	printf("Enter lower and upper integer limits:");
	scanf("%d%d",&l,&u);
	while(l<u)
	{
		for(i=l,sum =0;i<=u;i++)
		{
			sum+=i*i;
		}
		
			printf("The sums of the squares from %d to %d is %d\n",l*l,u*u,sum);
			printf("Enter next set of limits:");
		    scanf("%d%d",&l,&u);
	
	}
	printf("Done");
	return 0;
}
