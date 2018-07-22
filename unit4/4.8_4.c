#include <stdio.h>
int main(void)
{
	char name[20];
	float height;
	printf("Please input your name!\n");
	scanf("%s",&name);
	printf("%s,Plese input your height In centimeter\n",name);
	scanf("%f",&height);
	printf("%s,you are %1.2f m tall\n",name,height/100);
	return 0;
}
