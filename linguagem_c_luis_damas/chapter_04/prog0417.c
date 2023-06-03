#include <stdio.h>

main()
{
	int i,j,n;
	char ch;

	printf("Introd. um Nº: "); scanf("%d", &n);
	printf("Introd. um Char: "); scanf(" %c", &ch);
	// Espaço em branco antes de %c para retirar o buffer do teclado

	for(i=1; i<=n; i++)
		{
			for (j=1; j<=n; j++)
				putchar(ch);
			putchar('\n');
		}
}
