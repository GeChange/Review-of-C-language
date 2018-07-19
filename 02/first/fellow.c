#include <stdio.h>
void one(void);
void two(void);
int main(void)
{
	printf("for he's a jolly good fellow!\n");
	one();
	two();
	return 0;
}

void one(void)
{
	printf("for he's a jolly good fellow!\n");
	printf("for he's a jolly good fellow!\n");
}

void two(void)
{
	printf("which nobody can deny!");
}
