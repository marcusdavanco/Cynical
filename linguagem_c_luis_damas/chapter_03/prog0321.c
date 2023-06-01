#include <stdio.h>
main()
{
	int num;

	printf("Insira um número ");
	scanf("%d", &num);

	if(num == 0)
		printf("O número é zero.\n");
	else
		printf("O número NÃO é zero.\n");
}
