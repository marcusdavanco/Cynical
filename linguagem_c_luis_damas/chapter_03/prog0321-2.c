#include <stdio.h>

main()
{
	int num;

	printf("Insira um número ");
	scanf("%d", &num);

	switch(num == 0)
		{	
			case 1: printf("O número é zero.\n");
					      break;
			default: printf("O número NÃO é zero.\n");
		}
}
