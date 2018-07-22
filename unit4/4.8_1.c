#include <stdio.h>
int main(void)
{
	char name[30];
	char familyname[30];
	printf("Please enter your name!\n");
	scanf("%s",name);
	printf("Please enter your familyname\n");
	scanf("%s",familyname);
	printf("%s%s",name,familyname);
	return 0;
}


