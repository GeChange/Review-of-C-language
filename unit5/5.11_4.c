#include <stdio.h>
#define CM_TO_FEET 30.48
#define CM_TO_INCH 2.54
int main(void)
{
	float cm,inch;
	int feet;
	while(cm > 0)
	{
	printf("Enter a height in centimeters:");
	scanf("%f",&cm);
	feet = cm/CM_TO_FEET;
	inch = (cm - feet*CM_TO_FEET) / CM_TO_INCH;
	printf("%3.0f cm = %d feet,%2.1f inches\n",cm,feet,inch);
	printf("Enter a height in centimeters (<=0 to quit):");
	scanf("%f",&cm);
	
	}
	printf("bye");
	return 0;

} 
