#include <stdio.h>
main()
{
	int count = 1;
	while (count <= 20){
		if (count == 10){
			count += 1;
			continue;
		}
		printf("%d\n", count);
		count += 1;
	}
}
