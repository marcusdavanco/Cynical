#include <stdio.h>

int Entre(int x, int lim_inf, int lim_sup);

main()
{
	printf("Dados os limites 2 e 6, 4 está entre estes limites?\n");
	printf("%d\n", Entre(4, 2, 6));
	printf("Dados os limites 2 e 4, 6 está entre estes limites?\n");
	printf("%d\n", Entre(2, 4, 6));
}

int Entre(int x, int lim_inf, int lim_sup)
{
	return x >= lim_inf && x <= lim_sup;
}
