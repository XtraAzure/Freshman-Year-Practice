#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	unsigned int grade;
	printf("What is your score?\n");
	scanf("%d", &grade);
	printf("%d\n", grade);
	if (grade >= 90)
	{
		printf("Your grade: A\n");
	}
	if (grade < 90 && grade >= 80)
	{
		printf("Your grade: B\n");
	}
	if (grade < 80 && grade >= 70)
	{
		printf("Your grade: C\n");
	}
	if (grade < 70 && grade >= 60)
	{
		printf("Your grade: D\n");
	}
	if (grade < 60)
	{
		printf("Your grade: F\n");
	}

	system("PAUSE");
	return 0;
}