#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#define MAX_X 1024
#define MAX_Y 1024


char g_screen[MAX_Y][MAX_X];

int xStorage[MAX_X];
int yStorage[MAX_Y];
int xmax = 0;
int ymax = 0;
int storage = 0;
/**
* draws a point given parameters as "*" and fills others as "."
* @param[in] x x coordinate of a point
* @param[in] y y coordinate of a point
* @return true if given coordinate can be presented at the scrren
*/
bool DrawPoint(int x, int y) {
	char dot = '.';
	char star = '*';
	char temp1, temp2;

	if (xmax < x)
	{
		xmax = x;
	}
	if (ymax < y)
	{
		ymax = y;
	}

	if (x >= 0 && y >= 0)
	{
		xStorage[storage] = x;
		yStorage[storage] = y;
		storage++;

		for (int i = 0; ymax >= i; i++)
		{
			for (int n = 0; xmax >= n; n++)
			{
				g_screen[i][n] = dot;
			}
		}

		//g_screen[y][x] = star;
		for (int i = 0; storage > i; i++)
		{
			//temp1 = xStorage[i];
			//temp2 = yStorage[i];
			g_screen[yStorage[i]][xStorage[i]] = star;
		}
		for (int i = 0; ymax >= i; i++)
		{
			for (int n = 0; xmax >= n; n++)
			{
				printf("%c", g_screen[i][n]);
			}
			printf("\n");
		}
		return true;
	}

	// When one of coordinate has negative value
	else
	{
		return false;

	}
	
}
int main() {
	int x;
	int y;
	while (true) {
		/* input of 2 integers from users to represent a point */
		scanf("%d %d", &x, &y);
		if (!DrawPoint(x, y)) {
			break;
		}
	}

	return 0;
}