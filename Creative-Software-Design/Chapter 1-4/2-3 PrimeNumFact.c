#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int number;
	int div = 2;
	int count = 0;

	scanf("%d", &number);

	while (number != 0) {
		if (number%div != 0)
		{
			if (count == 0)
			{
				div = div + 1;
				count = 0;
			}
			else
			{
				printf("%d^%d ", div, count);
				div = div + 1;
				count = 0;
				if (number == 1)
				{	
					break;
				}
				else {
					printf("x ");
				}
			}
		}
		else 
		{
			number = number / div;
			count++;
		}
	}

	system("PAUSE");
	return 0;
}