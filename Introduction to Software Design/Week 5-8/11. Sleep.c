#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
	printf("Loading.\n");
	Sleep(3000); //3.000 sec
	printf("Loading..\n");
	Sleep(2000);
	printf("Loading...\n");
	Sleep(1000);
	printf("Loading Complete!\n");

	system("PAUSE");
	return 0;

}