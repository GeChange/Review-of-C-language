#include <stdio.h>
#define PREIOD '.'
int main(void)
{
	int ch;
	int charcount =0;
	while((ch=getchar())!=  PREIOD )
	{
		if(ch!='""'&&ch!='\'')
			charcount++;
	}
	printf("There are %d non-quote characters.\n",charcount);
	
	return 0;	
} 
