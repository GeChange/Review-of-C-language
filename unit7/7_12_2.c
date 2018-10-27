#include <stdio.h>

int main(void)
{
	char c;
	int count=0;
    printf("Enter text to be analyzed(# to terminate)\n");
    while((c=getchar())!='#')
    {
    	    count++;
    	    printf("%c%4d",c,c);
    	    if(0==count%8)
        	printf("\n");
	}
	return 0;
	

	return 0;
	
	
}

