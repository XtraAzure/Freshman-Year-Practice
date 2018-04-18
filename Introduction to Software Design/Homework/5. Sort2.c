#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Execution Example
7
64 22 12 25 11 77 11
64 22 12 25 11 77 11
11 11 12 22 25 64 77
*/

int main()
{
	int i, n, m;
	int array[100]; // Maximum allowed input element is 101
	int min, temp;

	// Decide how many elements will exist and input value in each element in order
	scanf("%d", &n);
	for (i = 0; n > i; i++)
		scanf("%d", &array[i]);

	// Print the array's element in no order
	for (i = 0; n > i; i++)
		printf("%d ", array[i]);
	printf("\n");

	// Sort array's element in order
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

	// Print sorted array
	for (i = 0; n > i; i++)
		printf("%d ", array[i]);
	printf("\n");

	system("PAUSE");
	return 0;
}