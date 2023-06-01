#include <stdio.h>

main()
{
	int day, month, year;

	printf("Data: dd mm aaaa: ");
	scanf("%d %d %d", &day, &month, &year);

	switch(month)
		{
			case 2: if(day >=1 && day <= 28 + ((year%4==0&&year%100!=0)|| year %400==0))
								printf("Data Válida\n");
							else
								printf("Data Inválida\n");
							break;
			case 4: 
			case 6:
			case 9:
			case 11: if (day >=1 && day <= 30)
								 printf("Data Válida\n");
							 else
								 printf("Data Inválida\n");
								 break;
			default: if (month < 1 || month > 12)
								 printf("Data Inválida\n");
							 else
								 if (day >= 1 && day <= 31)
									 printf("Data Válida\n");
								 else
									 printf("Data Inválida\n");
		}
}


