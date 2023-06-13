#include <stdio.h>

long int num(int n_horas, char tipo);

main()
{
	printf("--> %ld\n", num(3, 'h'));
	printf("--> %ld\n", num(3, 'm'));
	printf("--> %ld\n", num(3, 's'));
}

long int num(int n_horas, char tipo)
{
	switch(tipo)
	{
		case 'h': 
			return n_horas;
		case 'm':
			return n_horas * 60;
		case 's': 
			return n_horas * 60 * 60;
	}
}
