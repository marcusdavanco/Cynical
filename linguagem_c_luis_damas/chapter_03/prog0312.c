#include <stdio.h>

main()
{
	char Est_Civil;
	printf("Qual o estado Cvil: ");
	scanf(" %c", &Est_Civil); /* ou Est_Civil = getchar(); */
	switch(Est_Civil)
		{
			case 'C': printf("Casado\n");
			case 'S': printf("Sotleiro\n");
			case 'D': printf("Divorciado\n");
			case 'V': printf("Viúvo\n");
								break;
			default : printf("Estado Civil Incorreto\n");
		}
}
