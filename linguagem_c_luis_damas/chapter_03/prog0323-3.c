#include <stdio.h>

main()
{
	int month, num_of_days;
		
	printf("Insert a month (1-12)");scanf("%d", &month);
	
	switch(month)
		{
			case 1: /* 31 dias */
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12: num_of_days = num_of_days + 1;
			case 4: /* 30 dias */
			case 6:
			case 9:
			case 11: num_of_days = num_of_days + 2;
			default: num_of_days = num_of_days + 28;
		}

	printf("O mês %d tem %d dias \n", month, num_of_days);
}
