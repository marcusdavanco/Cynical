#include <stdio.h>

main()
{
	int num = 0;
	
	while(num < 1 || num > 100)
	{
		printf("Insira um nº: ");
		scanf("%d", &num);
	}
}
