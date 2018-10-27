#include <stdio.h>

#define BASE 10//基本工资

#define TIME 40//加班
#define ADD 1.5

#define LIMIT1 300//税率
#define RATE1 0.15
#define LIMIT2 150
#define RATE2 0.20
#define RATE3 0.25

int main(void)
{
	double hours,total_wages,taxes,wages;
	
	printf("How many hours do you work in a week?\n");
	scanf("%lf",&hours);

	if(hours >=0 && hours <=40)
		total_wages = hours * BASE;
	else if(hours > 40)
		total_wages = 40 * BASE + (hours - 40) * ADD *BASE;
	if(total_wages <= 300)
		taxes = total_wages * RATE1;
	else if(total_wages <= 450)
		taxes = 300 * RATE1 + (total_wages - 300) * RATE2;
	else
		taxes = 300 * RATE1 + 150 * RATE2 + (total_wages - 450) * RATE3	;

	wages = total_wages - taxes;

	printf("total wages :%.2lf, taxes :%.2lf, wages :%.2lf\n", total_wages, taxes, wages);

	return 0;
}

