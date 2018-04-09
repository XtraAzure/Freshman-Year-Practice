#include <stdio.h>

int main()
{
	int guess = 1;

	printf("Pick an integer from 1 to 100. I will try to guess ");
	printf("it.\nRespond with a y if my guess is right and with");
	printf("\nn n if it is wrong.\n");
	printf("Uh...is your number %d?\n", guess);

	while (getchar() != 'y') // get response, compare to y
		printf("Well, then, is it %d\n", ++guess);
	printf("I knew I could do it!\n");

	system("PAUSE");
	return 0;
}