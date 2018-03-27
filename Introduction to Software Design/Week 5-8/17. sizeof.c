#include <stdio.h>
#include <stdlib.h>

// uses C99 %z modifier -- try %u or %lu if you lack %zd

int main()
{
	int n = 0;
	size_t intsize;

	intsize = sizeof(int);
	printf("n = %d, n has %zd bytes; all ints have %zd bytes.\n", n, sizeof n, intsize);
	printf("n = %u, n has %u bytes; all ints have %u bytes.\n", n, sizeof n, intsize);

	system("pause");
	return 0;
}