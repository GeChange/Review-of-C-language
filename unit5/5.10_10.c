#include <stdio.h>
#define MESG "COMPUTER BYTES DOG"
/**
原来的题目少了花括号，对n起不到限制作用，导致while语句进入了死循环，程序一直
打印 COMPUTER BYTES DOG，修改后如下 
*/

int main(void)
{
	int n = 0;
	while(n<5)
	{
	
		printf("%s\n",MESG);
		n++;
	}	
	printf("Thar's all.\n");
	return 0;
	
} 
