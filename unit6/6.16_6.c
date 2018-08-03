#include <stdio.h>
#include <string.h>

int main(void)
{
	char word[15];
	int i;
	printf("Please enter a word:\n");
	scanf("%s",&word);
	for(i=strlen(word)-1;i>=0;i--)
	printf("%c",word[i]);
	printf("\n");
	return 0;
}
