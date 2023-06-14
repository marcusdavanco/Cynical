#include <stdio.h>

int is_special(int x);

void main()
{
	printf("2 --> %d\n", is_special(2));
	printf("3 --> %d\n", is_special(3));
}

int is_special(int x)
{
	return x * 2 == x * x;
}
