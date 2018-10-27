#include <stdio.h>
int get_int(void);


#define TIME 40//¼Ó°à
#define ADD 1.5

#define LIMIT1 300//Ë°ÂÊ
#define RATE1 0.15
#define LIMIT2 150
#define RATE2 0.20
#define RATE3 0.25

int main(void)
{
	 	printf("**********************************************************************\n");
	printf("1) $8.75/hr\t\t\t2) $9.33/hr\n");
	printf("3) $10.00/hr\t\t\t4) $11.20/hr\n");
	printf("5) quit\n");
	printf("**********************************************************************\n");

	double hours,total_wages,taxes,wages,base;
		while(1)
	{
			printf("Enter the number corresponding to the desired pay rate or action:\n");
			switch(get_int())
			{
				case 1:base = 8.75;
					      break;
				case 2:base = 9.33;
					      break;
				case 3:base = 10.00;
					      break;
				case 4:base = 11.20;
					      break;
				case 5:printf("quit!\n");
					      return 0;
				default:printf("please input the number : 1-5!\n");
					      continue;
			}
	printf("How many hours do you work in a week?\n");
	scanf("%lf",&hours);
	if(hours >=0 && hours <=40)
		total_wages = hours * base;
	else if(hours > 40)
		total_wages = 40 * base + (hours - 40) * ADD *base;
	if(total_wages <= 300)
		taxes = total_wages * RATE1;
	else if(total_wages <= 450)
		taxes = 300 * RATE1 + (total_wages - 300) * RATE2;
	else
		taxes = 300 * RATE1 + 150 * RATE2 + (total_wages - 450) * RATE3	;

	wages = total_wages - taxes;

	printf("total wages :%.2lf, taxes :%.2lf, wages :%.2lf\n", total_wages, taxes, wages);


	}
	
}
	int get_int(void)
{
    int num;
    char str[40];
    while(1!=scanf("%d",&num))
    {
    	gets(str);
    	printf("error!%s is not a number,input again!\n",str);
	}
	
	return num;
}


