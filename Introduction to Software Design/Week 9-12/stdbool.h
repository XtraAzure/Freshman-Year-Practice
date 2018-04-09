#pragma once
#include <stdio.h>

bool bad_limits(int begin, int end, int low, int high)
{
	bool not_good = false;
	if (begin > end)
	{
		printf("%d isn't smaller than %d.\n", begin, end);
		not_good = true;
	}
	if (begin < low || end < low)
	{
		printf("Values must be %d or greater.\n", low);
		not_good = true;
	}
	if (begin > high || end > high)
	{
		printf("Values must be %d or less.\n", high);
		not_good = true;
	}

	return not_good;

}