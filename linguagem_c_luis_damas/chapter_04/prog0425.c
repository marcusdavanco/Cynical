#include <stdio.h>

main()
{
	int i;
	char c;
	for (i=0; i<=255; i++){
		if(i % 20 == 0 && i > 0)
		{
			printf("Pressione uma tecla para continuar");
			c = getchar();

			if(c == '\n' || c == '\r'){
				continue;
			}
		}
		printf("%3d --> %c\n", i, (unsigned char) i);
	}

}
