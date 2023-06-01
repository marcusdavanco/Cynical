#include <stdio.h>
main()
{
	int year;
	
	printf("Insira um ano YYYY");
	scanf("%d", &year);

	if(year % 4 == 0)
		printf("É um ano bissexto\n");
	else
		printf("Não é um ano bissexto\n");
}
