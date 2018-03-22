#include <stdio.h>

int main()
{
	printf("1 x 1 = %d\n", 1 * 1);
	printf("2 x 2 = %d\n", 2 * 2);
	printf("3 x 3 = %d\n", 3 * 3);
	printf("4 x 4 = %d\n", 4 * 4);
	printf("5 x 5 = %d\n", 5 * 5);
	printf("6 x 6 = %d\n", 6 * 6);
	printf("7 x 7 = %d\n", 7 * 7);
	printf("8 x 8 = %d\n", 8 * 8);
	printf("9 x 9 = %d\n", 9 * 9);

	system("PAUSE");
	return 0;

	/*
	Answer:
	int num = 1;

	while (num < 10)
	{
		printf("	%d x %d = %d\n", num, num, num*num);
		num = num + 1;
	}

	system("PAUSE");
	return 0;
	*/
}
