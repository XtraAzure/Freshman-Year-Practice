#include <stdio.h>
#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40

void starbar(); // Prototype the function

int main()
{
	starbar(); // use the function
	printf("%s\n", NAME);
	printf("%s\n", ADDRESS);
	printf("%s\n", PLACE);
	starbar();

	system("PAUSE");
	return 0;
}

void starbar() // define the function
{
	int count;
	for (count = 1; count <= WIDTH; count++)
		putchar('*');
	putchar('\n');
}

