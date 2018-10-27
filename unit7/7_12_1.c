#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define STOP '#'


int main(void)
{
	char c;
	long n_chars =0;
	int n_lines =1;
	int space =0;
	
    printf("Enter text tobe analyzed(# to terminate)\n");
    while((c=getchar())!=STOP)
    {
    	n_chars++;
    	if(c=='\n')
    	 n_lines++;
    	if(!isspace(c))
    	{
    		space++;
		}
	}
	
	printf("n_chars=%d,n_lines=%d,space=%d",n_chars,n_lines,space);
	return 0;
	
	
}
