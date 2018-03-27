#include <stdio.h>
#include <stdlib.h>

//Rules of operation order
int main()
{
	int top, score;

	top = score = -(2 + 5) * 6 + (4 + 3 * (2 + 3));

	printf("top = %d \n", top);

	system("pause");
	return 0;
}