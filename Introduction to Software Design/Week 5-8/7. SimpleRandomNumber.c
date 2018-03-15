#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int num;

	srand(time(NULL)); //Make the number total random
	num = (rand() % 50) + 1; //Between 0 to 50

	printf("<Generation of a random number between 1 and 50>\n");
	printf("Random number: %d\n", num);

	system("PAUSE");
	return 0;
}