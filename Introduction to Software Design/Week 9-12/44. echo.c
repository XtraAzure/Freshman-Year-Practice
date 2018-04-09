#include <stdio.h>

int main()
{
	char ch;

	while ((ch = getchar()) != '#')
		putchar(ch);

	system("PAUSE");
	return 0;
}