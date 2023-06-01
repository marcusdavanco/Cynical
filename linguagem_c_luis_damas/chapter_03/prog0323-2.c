#include <stdio.h>

int main()
{
	int month;

	printf("Enter the month (1-12): ");
	scanf("%d", &month);

	switch(month) {
		case 2: 
			printf("February has 28 days.\n");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("The month has 30 days.\n");
			break;
		default:
			printf("The month has 31 days.\n");
	}
}
