#include<stdio.h>
void large_of(double *,double *);

int main(void)
{
 double a,b;
 printf("input two doubles:");
 scanf("%lf%lf",&a,&b);
 large_of(&a,&b);
 printf("the result is: a = %0.3lf, b = %0.3lf\n",a,b );
 return 0;
}

void large_of(double *x,double *y)
{
 *x=*y=* x>*y?*x:*y;
}

