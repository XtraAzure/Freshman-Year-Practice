#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	char name[10];
	int guessedNum;
	int randomNum;
	int countDown = 0;

	srand(time(NULL));
	randomNum = (rand() % 20) + 1;

	printf("Hello! What is your name?\n");
	scanf("%s", name);
	printf("Well, %s, I am thinking of a number between 1 and 20.\n",name);
	while (countDown < 6)
	{
		printf("Take a guess.\n");
		scanf("%d", &guessedNum);
		if (guessedNum > randomNum)
		{
			printf("Your guess is too high.\n");
			countDown++;
		}
		else if (guessedNum < randomNum)
		{
			printf("Your guess is too low.\n");
			countDown++;
		}
		else
		{
			printf("Good job, %s! You guessed my number in %d guesses!\n", name, countDown);
			break;
		}
	}

	if (countDown == 6)
	{
		printf("Game Over, the number was %d.\n", randomNum);
	}

	system("PAUSE");
	return 0;
}
