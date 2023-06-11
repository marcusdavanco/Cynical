#include <stdio.h>

int Abs(int x);

void main()
{
	printf("%d", Abs(-50));
	printf("\n");
	printf("%d", Abs(-20));
	printf("\n");
}

int Abs(int x)
{
	if(x < 0)
	{
		return x * -1;
	}

	return x;
}

