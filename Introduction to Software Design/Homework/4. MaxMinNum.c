#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Execution Example
6
1 3 10 2 12 4
1 3 10 2 12 4
12 1
*/

int main()
{
	int i, n, m;
	int array[100]; // Maximum element is 101
	int min, temp;

	// Decide number of elements in array; should be less than 10001
	scanf("%d", &n);
	if (n > 10000)
		printf("Please insert less than 10001 next time.\n");

	// Insert element(s) in array
	for (i = 0; n > i; i++)
		scanf("%d", &array[i]);

	// Print array's elements in no order
	for (i = 0; n > i; i++)
		printf("%d ", array[i]);
	printf("\n");

	// Sort the array's element in order
	for (i = 0; n > i; i++) // Compare element's size in order (0 to N)
	{
		for (m = i; n > m; m++) // Compare elemnt's size from (1 to N) with Array[i]
		{
			if (array[i] > array[m]) // Find smaller value than Array[i]
			{
				min = array[m];

				// Swap Array[i] value from Array[n] to sort array to become increment
				temp = array[i];
				array[i] = min;
				array[m] = temp;
			}
		}
	}

	// Print array's maximum and minimum element
	printf("%d %d\n", array[n-1], array[0]);

	system("PAUSE");
	return 0;
}