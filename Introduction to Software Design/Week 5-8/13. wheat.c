#include <stdio.h>
#include <stdlib.h>
#define SQUARE 64
#define CROP 1E15

int main()
{
	double current, total;
	int count = 1;

	printf("square    grains    total    ");
	printf("fraction of \n");
	printf("          added     grains      ");
	printf("US total\n");

	total = current = 1.0;
	printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / CROP);

	while (count < SQUARE)
	{
		count = count + 1;
		current = 2.0 * current; // double grains on next square
		total = total + current; // update total
		printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / CROP);
	}

	printf("That's all.\n");

	system("PAUSE");
	return 0;
}