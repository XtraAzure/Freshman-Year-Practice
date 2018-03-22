#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <time.h>

void displayIntro();
int chooseCave();
int checkCave(int chooseCave);

void displayIntro()
{
	printf("You are in a land full of dragons. In front of you,\n");
	printf("you see two caves. In one cave, the dragon is friendly\n");
	printf("and will share his treasure with you. The other dragon\n");
	printf("is greedy and hungry, and will eat you on sight.\n\n");
}

int chooseCave()
{
	int cave;
	cave = 0;

	while (cave != 1 && cave != 2)
	{
		printf("Which cave will you go into? (1 or 2)\n");
		scanf("%d", &cave);
	}

	return cave;
}

int checkCave(int chooseCave)
{
	int friendlyCave;
	
	printf("You appraoch the cave...\n");
	Sleep(2000);
	printf("It is dark and spooky...\n");
	Sleep(2000);
	printf("A large dragon jumps out in front of you! He opens his jaws and...\n\n");
	Sleep(2000);

	srand(time(NULL));
	friendlyCave = (rand() % 2) + 1;

	if (chooseCave == friendlyCave)
		printf("Gives you his treasure!\n");
	else
		printf("Gobbles you down in one bite!\n");
}

int main()
{
	char playAgain[5] = "yes";
	int caveNumber;

	while (strcmp(playAgain, "yes") == 0 || (strcmp(playAgain, "y") == 0))
	{
		displayIntro();
		caveNumber = chooseCave();
		checkCave(caveNumber);

		printf("Do you want to play again? (yes or no)\n");
		scanf("%s", playAgain);
	}

	system("PAUSE");
	return 0;
}