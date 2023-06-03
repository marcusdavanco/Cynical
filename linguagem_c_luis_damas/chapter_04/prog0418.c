#include <stdio.h>

main()
{
	int i, n;

	printf("Introd. um Nº: "); scanf("%d", &n);

	for (i=n; ; i++) /* Laço infinito */
		{
			if (i%10 == 0) /* Múltiplo de 10 */
				break;
			else
				if (i%3 == 0)
					continue;
				printf("%d\n", i);
		}
}
