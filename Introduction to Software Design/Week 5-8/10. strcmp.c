#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str[5];

	printf("Do you want to play a game? <Yes or No>\n");
	scanf("%s", str);

	//strcmp() function compares 2 strings' char and returns value 
	if (strcmp(str, "Yes") == 0) // return 0 if 2 strings are equal
		printf("Hello! Let's play the game\n");
	else if (strcmp(str, "No") == 0)
		printf("Good bye!\n");
	//if 1st string is less than 2nd string, return negative value, else opposite, return positive value

	system("PAUSE");
	return 0;
}


/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
char str[5];
printf("Do you want to paly a game? <Yes or No>\n");
scanf("%s", str);

if (strcmp(str, "Yes" == 0))
	printf("Hello! Let's play the game\n");
else if (strcmp(str, "No") == 0)
	printf("Good bye!\n");

system("PAUSE");
return 0;
}
*/