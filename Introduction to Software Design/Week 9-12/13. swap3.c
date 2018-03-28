#include <stdio.h>

void interchange(int *u, int *v);

int main()
{
	int x = 5, y = 10;

	printf("Originally x = %d and y = %d.\n", x, y);
	interchange(&x, &y); // send addresses to function
	printf("Now x = %d and y = %d.\n", x, y);

	system("PAUSE");
	return 0;
}

void interchange(int *u, int *v)
{
	int temp;
	temp = *u; // temp gets value that u points to
	*u = *v;
	*v = temp;
}