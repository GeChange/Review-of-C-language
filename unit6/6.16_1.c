#include <stdio.h>
int main(void)
{
	char a[26];
	int i;
	char index = 'a';
	for(i=0;i<26;i++)
	{
		a[i]=index+i;
	}
	for(i=0;i<26;i++)
	{
		printf("%c",a[i]);
	} 
	return 0;
}
