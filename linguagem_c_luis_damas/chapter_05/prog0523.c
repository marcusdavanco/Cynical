#include <stdio.h>

int Cubo(int x);

main()
{
	printf("2 --> %d\n", Cubo(2));
	printf("3 --> %d\n", Cubo(3));
	printf("4 --> %d\n", Cubo(4));
	printf("5 --> %d\n", Cubo(5));
}

int Cubo(int x)
{
	return x * x * x;
}
