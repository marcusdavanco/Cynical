#include <stdio.h>

int isVogal(char c);

main()
{
	printf("a é vogal --> %d\n", isVogal('a'));
	printf("b é vogal --> %d\n", isVogal('b'));
	printf("c é vogal --> %d\n", isVogal('c'));
	printf("d é vogal --> %d\n", isVogal('d'));
	printf("e é vogal --> %d\n", isVogal('e'));
}

int isVogal(char c)
{
	switch(c)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			return 1;
		default:
			return 0;
	}
}
