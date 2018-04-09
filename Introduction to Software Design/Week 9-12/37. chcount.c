#include <stdio.h>
#include <stdlib.h>
#define PERIOD '.'

int main()
{
	int ch;
	int charcount = 0;
	while ((ch = getchar()) != PERIOD)
	{
		if (ch != '"' && ch != '\'')
			charcount++;
	}

	printf("There are %d non-quote characters.\n", charcount);

	system("PAUSE");
	return 0;
}