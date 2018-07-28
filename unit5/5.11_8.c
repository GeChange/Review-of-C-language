#include <stdio.h>
void Temperatures(double);
const float A=1.8 ;
const float B=32.0;
const float C=273.16 ;
int main(void)
{
	double Fahrenheit,Celsius,Kelvin;
	int a;
	printf("Please enter Fahrenheit value:");
	a=scanf("%lf",&Fahrenheit);
	while(a ==1 )
	{
		Temperatures(Fahrenheit);
		printf("Please enter the Fahrenheit(q to quit): ");
		scanf("%lf",&Fahrenheit);
				

	}
	return 0;
}

void Temperatures(double Fahrenheit)
{
	double Celsius,Kelvin;
	Celsius = A*Fahrenheit+B;
	Kelvin = Celsius+C;
	printf("Fahrenheit:%.2lf,  Celsius:%.2lf,  Kelvin:%.2lf\n",Fahrenheit,Celsius,Kelvin);
}
