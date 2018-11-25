#include<stdio.h>
double calculate(double ,double );

int main(void)
{
 double a,b;
 printf("input two doubles:");
 scanf("%lf%lf",&a,&b);
 printf("1/( (1/x+1/y) / 2 )   =    %0.3lf\n",calculate(a,b) );
 return 0;
}

double calculate(double x,double y)
{
 return 1/( (1/x+1/y) / 2 );
}

