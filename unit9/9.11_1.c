#include <stdio.h>
double min(double u,double v);
int main(void)
{
    double x, y;
    
    printf("Enter two numbers (q to quit): ");
    while (scanf("%lf %lf", &x, &y) == 2)
    {
        printf("The smaller number is %f.\n", min(x,y));
        printf("Next two values (q to quit): ");
    }

	return 0; 
}

double min(double u,double v)
{
   if(u<v)
      return u;
   else
      return v;
	
}

