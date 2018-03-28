#include <stdio.h>
#include "hotel.h"

int main()
{
	int nights;
	double hotel_rate;
	int code;

	while ((code = menu()) != QUIT)
	{
		switch (code)
		{
		case 1: hotel_rate = HOTEL1;
			break;
		case 2: hotel_rate = HOTEL2;
			break;
		case 3: hotel_rate = HOTEL3;
			break;
		case 4: hotel_rate = HOTEL4;
			break;
		default: hotel_rate = 0.0;
			printf("Oops!\n");
			break;
		}
		nights = getnights();
		showprice(hotel_rate, nights);
	}
	printf("Thank you and goodbye.\n");

	system("PAUSE");
	return 0;
}

int getnights()
{
	int nights;

	printf("How many nights are needed? ");
	while (scanf("%d", &nights) != 1)
	{
		scanf("%*s");
		printf("Please enter an integer, such as 2.\n");
	}

	return nights;
}

void showprice(double rate, int nights)
{
	int n;
	double total = 0.0;
	double factor = 1.0;

	for (n = 1; n <= nights; n++, factor *= DISCOUNT)
		total += rate * factor;
	printf("The total cost will be $%0.2f.\n", total);
}