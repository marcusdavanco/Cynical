#include <stdio.h>

int is_square(int x, int y);

main()
{
	printf("4 = 2 ^ 2  ?\n");
	printf("%d\n", is_square(4, 2));
}

int is_square(int x, int y)
{
	return x == y * y;
}
