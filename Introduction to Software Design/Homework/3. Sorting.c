#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
input N : 3
3
2
1
Result : 1 2 3

input N : 5
3
1
4
2
5
Result : 1 2 3 4 5
*/

int main()
{
	int N, i, n;
	int Array[100]; // Maximum number is 101
	int min, temp, temp2;
	
	// Decide how many numbers are you going to insert
	printf("input N : ");
	scanf("%d", &N);
	
	// Insert number in array
	for (i = 0; N > i; i++)
	{
		scanf("%d", &Array[i]);
	}

	// Sort array numbers in minimum to maximum
	for (i = 0; N > i; i++) // Compare element's size in order (0 to N)
	{
		for (n = i; N > n; n++) // Compare elemnt's size from (1 to N) with Array[i]
		{
			if (Array[i] > Array[n]) // Find smaller value than Array[i]
			{
				min = Array[n];

				// Swap Array[i] value from Array[n] to sort array to become increment
				temp = Array[i];
				Array[i] = min;
				Array[n] = temp;
			}
		}
		

	}

	// Print the result of increment array
	printf("Result : ");
	for (i = 0; N > i; i++)
		printf("%d ", Array[i]);
	system("PAUSE");
	return 0;
}

