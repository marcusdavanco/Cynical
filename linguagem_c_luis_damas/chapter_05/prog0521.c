#include <stdio.h>

int Minus(int valor);

main()
{
	printf("10 --> %d\n", Minus(10));
	printf("-10 --> %d\n", Minus(-10));
}

int Minus (int valor)
{
	return valor < 0 ? valor : valor * -1;
}
