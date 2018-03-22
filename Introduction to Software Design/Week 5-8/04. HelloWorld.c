#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char name[10];
	printf("Hello world!\n");
	printf("What is your name?\n");
	scanf("%s", name);
	printf("It is good to meet you, %s\n", name);

	system("PAUSE");
	return 0;
}
