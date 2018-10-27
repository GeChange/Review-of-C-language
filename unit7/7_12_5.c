#include <stdio.h>

int main(void)
{
	int num;
	int odd = 0;
	int even = 0;
	int sum_odd = 0;
	int sum_even = 0;
	float aver_odd, aver_even;

	printf("Enter some number;enter 0 to quit.\n");
	scanf("%d", &num);
	while( num != 0 )
	{
		switch(num%2)
		{
			case 0 :even++;
			        sum_even += num;
					break;
			case 1 :odd++;
			        sum_odd += num;
					break;
		}
		scanf("%d", &num);	
	}
	aver_odd = (float)sum_odd/odd; 
	aver_even = (float)sum_even/even;
	printf("total number of odd:%d,total number of even:%d\n",odd, even);
	printf("the average of odd number:%.2f,the average of even number:%.2f\n",aver_odd, aver_even);
	return 0;


}
