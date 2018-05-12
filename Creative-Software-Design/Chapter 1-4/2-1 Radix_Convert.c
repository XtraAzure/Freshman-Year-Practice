#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int radix;
	int number;
	char result[100];

	printf("Please type the radix number\n"); 
	scanf("%d", &radix);

	// If radix is greater than 36 or less than 2, execute the program
	if (radix > 36 || radix < 2)
		return 0;

	printf("Please type the number to convert decimal number to typed radix number\n");
	scanf("%d", &number);

	itoa(number, result, radix);
	printf("%s\n", result);

	system("PAUSE");
	return 0;
}
