#include <stdio.h>

long int n_segundos(int n_horas);

void main()
{
	printf("--> %ld\n", n_segundos(0));
	printf("--> %ld\n", n_segundos(1));
	printf("--> %ld\n", n_segundos(2));
}

long int n_segundos(int n_horas)
{
	return n_horas * 3600;
}
