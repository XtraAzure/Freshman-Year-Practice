#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int A;
	int B;
	printf("A: ");
	scanf("%d", &A);
	printf("B: ");
	scanf("%d", &B);
	printf("The sum of A and B: %d\n", A + B);

	system("PAUSE");
	return 0;
}

/*
Answer:

#include <stdio.h>
#include <stdlib.h>

int sum (int a, int b);

int main()
{
	int a = 10, b = 20;
	sum (a,b);

	system("PAUSE");
	return 0;
}

int sum (int a, int b) 
{
	printf("A: %d\n",a);
	printf("B: %d\n", b);
	printf("The sum of A and B: %d\n", a+b);
}
*/
