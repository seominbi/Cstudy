#include <stdio.h>
#pragma warning (disable:4996)
int main() 
{
	int i = 10, j = 20;
	int* p;

	p = &i;
	*p = 40;

	p = &j;
	*p = 60;

	printf("i : %d\n", i);
	printf("j : %d\n", j);
}