#include <stdio.h>
#include <string.h>

struct point
{
	int x; // x-coordinate
	int y; // y-coordinate
};

void printPoint(point aPoint)
{
	printf("(%2d, %2d )", aPoint.x, aPoint.y);
}

point inputPoint()
{
	point inPoint;
	printf("please input the x- and y-coordinates: ");
	scanf("%d %d", &inPoint.x, &inPoint.y);
	return inPoint;
}

int main()
{
	point endpoint; //endpoint is a struct point variable
	endpoint = inputPoint(); 
	printPoint(endpoint);
	return 0;
}