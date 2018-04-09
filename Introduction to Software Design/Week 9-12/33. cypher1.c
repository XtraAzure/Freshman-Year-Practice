#include <stdio.h>
#include <stdlib.h>
#define SPACE ' ' // that's quote space quote

int main()
{
	char ch;

	ch = getchar(); // read a character
	while (ch != '\n') // while not end of line
	{
		if (ch == SPACE) //leave the space
			putchar(ch); // character unchanged
		else
			putchar(ch + 1); // change other character
		ch = getchar(); // get next character 
	}
	putchar(ch);  // print the newline

	system("PAUSE");
	return 0;
}

