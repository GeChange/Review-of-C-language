#include <stdio.h>
void chline(char ,int ,int );
int main(void)
{
	int x,y;
	char ch;
	printf("input a char:");
	scanf("%c",&ch);
	printf("input two int");
	scanf("%d%d",&x,&y);
	chline(ch,x,y);
	return 0;
	
}

void chline(char ch,int column,int row)
{
	int x,y;
		for(x=0;x<row;x++)
	{
		
		for(y=0;y<column;y++)
		{
			printf("%c",ch);		
		
		}
			printf("\n");
	}
	
}

