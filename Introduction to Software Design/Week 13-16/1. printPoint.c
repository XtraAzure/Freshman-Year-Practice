#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//struct point is a function parameter
struct point
{
	int x; // x-coordinate
	int y; // y-coordinate
};

void printPoint(struct point aPoint)
{
	printf("(%2d %2d", aPoint.x, aPoint.y);
}

// struct point is the return type
struct point inputPoint()
{
	struct point inPoint;
	printf("please input the x- and y-coordinates: ");
	scanf("%d %d", &inPoint.x, &inPoint.y);
	return inPoint;
}

int main()
{
	struct point endpoint; // endpoint is a struct point variable
	endpoint = inputPoint(); 
	printPoint(endpoint);

	system("PAUSE");
	return 0;
}