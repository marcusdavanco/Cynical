#include <stdio.h>

main()
{
	char ch;
	printf("Introduza um Caractere: ");
	scanf("%c", &ch);
	printf("O caractere '%c' tem o ASCII no %d\n", ch, ch);
}
