#include <stdio.h>
#include <stdlib.h>

int main()
{
	int count, sum;
	count = 0;
	sum = 0;

	while (count++ < 20)
		sum = sum + count;
	printf("sum = %d\n", sum);

	system("pause");
	return 0;
}