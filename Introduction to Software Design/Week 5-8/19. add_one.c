#include <stdio.h>
#include <stdlib.h>

int main()
{
	int ultra = 0, super = 0;

	while (super < 5)
	{
		super++;
		++ultra;

		printf("super = %d, ultra = %d \n", super, ultra);
	}

	system("PAUSE");
	return 0;
}