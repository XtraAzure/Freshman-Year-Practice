#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Execution Examples
********************
1. Only increasing
2. Only decreasing
3. Increasing and decreasing
4. Repeat increasing and decreasing 10 times.
********************
Input : 1
Height : 5
*
**
***
****
*****

********************
1. Only increasing
2. Only decreasing
3. Increasing and decreasing
4. Repeat increasing and decreasing 10 times.
********************
Input : 2
Height : 6
******
*****
****
***
**
*

********************
1. Only increasing
2. Only decreasing
3. Increasing and decreasing
4. Repeat increasing and decreasing 10 times.
********************
Input : 3
Height : 5
*
**
***
****
*****
****
***
**
*

********************
1. Only increasing
2. Only decreasing
3. Increasing and decreasing
4. Repeat increasing and decreasing 10 times.
********************
Input : 4
Height : 3
*
**
***
**
*
**
***
...etc of repeatition
*/

void Intro();
void InputOne(int height);
void InputTwo(int height);
void InputThree(int height);
void InputFour(int height);

int main()
{
	Intro();

	int input;
	int height;

	// Decide input number and height of asterisk
	printf("Input : ");
	scanf("%d", &input);
	printf("Height : ");
	scanf("%d", &height);

	// Execute one ofinput action
	switch (input)
	{
	case 1:
		InputOne(height);
		break;
	case 2:
		InputTwo(height);
		break;
	case 3:
		InputThree(height);
		break;
	case 4:
		InputFour(height);
		break;
	default:
		printf("Please select input number between 1 to 4");
	}

	system("PAUSE");
	return 0;
}

// Introduce what inserted number operates
void Intro()
{
	printf("********************\n");
	printf("1. Only increasing\n");
	printf("2. Only decreasing\n");
	printf("3. Increasing and decreasing\n");
	printf("4. Repeat increasing and decreasing 10 times.\n");
	printf("********************\n");
}

// If input number is 1
void InputOne(int height)
{
	int i,n;
	for (i = 1; height >= i; i++)
	{
		for (n = 0; i > n; n++)
			printf("*");
		printf("\n");
	}
}

// If input number is 2
void InputTwo(int height)
{
	int i, n;
	for (i = 0; height > i ; i++)
	{
		for (n = height; i < n; n--)
			printf("*");
		printf("\n");
	}
}

// if input number is 3
void InputThree(int height)
{
	int i, n;
	for (i = 1; height >= i; i++)
	{
		for (n = 0; i > n; n++)
			printf("*");
		printf("\n");
	}

	for (i = 1; height > i; i++)
	{
		for (n = height; i < n; n--)
			printf("*");
		printf("\n");
	}
}

// if input number is 4
void InputFour(int height)
{
	int i, n;
	int o = 0;
	while (o < 10)
	{
		for (i = 1; height >= i; i++)
		{
			for (n = 0; i > n; n++)
				printf("*");
			printf("\n");
		}

		for (i = 1; height > i; i++)
		{
			for (n = height; i < n; n--)
				printf("*");
			printf("\n");
		}
		o++;
	}
}