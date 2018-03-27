#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 1, b = 1;
	int aplus, plusb;

	aplus = a++;
	plusb = ++b;
	printf("a   aplus   b   plusb \n");
	printf("%1d %5d %5d %d\n", a, aplus, b, plusb);

	system("PAUSE");
	return 0;
}