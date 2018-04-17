#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Execution examples:
******************************
'Number of divisors'
******************************
Input the first number : 12
Input the second number : 6
Number of divisors of first number is 6
Number of divisors of second number is 4
Result is : 10

******************************
'Number of divisors'
******************************
Input the first number : 5
Input the second number : 18
Number of divisors of first number is 2
Number of divisors of second number is 6
Result is : 8

******************************
'Number of divisors'
******************************
Input the first number : 2
Input the second number : 3
Number of divisors of first number is 2
Number of divisors of second number is 2
Result is : 4
*/

void Intro();

int main()
{
	int num1, num2;
	int div1 = 0, div2 = 0;
	int i;
	int result;

	// Insert two numbers
	Intro();
	printf("Input the first number : ");
	scanf("%d", &num1);
	printf("Input the second number : ");
	scanf("%d", &num2);

	// Get number of divisors from inserted two numbers and sum it up
	for (i = 1; num1 >= i; i++)
	{
		if (num1 % i == 0)
		{
			div1++;
		}
	}

	for (i = 1; num2 >= i; i++)
	{
		if (num2 % i == 0)
			div2++;
	}

	result = div1 + div2;

	// Print inserted number of divisors and result of divisors sum
	printf("Number of divisors of first number is %d\n", div1);
	printf("Number of divisors of second number is %d\n", div2);
	printf("Result is : %d\n", result);

	system("PAUSE");
	return 0;
}

void Intro()
{
	printf("******************************\n");
	printf("Number of divisors\n");
	printf("******************************\n");
}