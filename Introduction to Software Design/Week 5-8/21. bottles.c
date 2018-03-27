#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main()
{
	int count = MAX + 1;
	while (--count > 0)
	{
		printf("%d bottles of spring water on the wall, "
			"%d bottles of spring water!\n", count, count);
		printf("Take one down and pass it around,\n");
		printf("%d bottles of spring ater!\n\n", count - 1);
	}

	system("PAUSE");
	return 0;
}