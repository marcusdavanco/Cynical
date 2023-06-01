#include <stdio.h>

int main()
{
	int month;

	printf("Enter the month (1-12): ");
	scanf("%d", &month);

	if(month == 2) {
		printf("February has 28 days. \n");
	} 
	
	else if (month == 4 || month == 6 || month == 9 || month == 11) {
	 printf("The month has 30 days.\n");
	}

	else {
		printf("The month has 31 days.\n");
	}
}	
