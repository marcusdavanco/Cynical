#include <stdio.h>

int Impar(int x);

void main()
{
	printf("28 é par?\n");
	printf("%d\n", Impar(28));
	printf("29 é par?\n");
	printf("%d\n", Impar(29));
}

int Impar(int x)
{
	return x % 2 == 0;
}
