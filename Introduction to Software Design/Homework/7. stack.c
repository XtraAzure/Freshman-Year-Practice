#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Execution Example
1 10
1 15
1 20
2
2
1 100
1 150
1 200
0
4
200
200 150 100 10
0 = Exit program; print total number of element, top number, and rest of stacks
1 = Execute Push function
2 = Execute Pop function
*/

struct stack
{
	int stack[100]; // Max size 100
}stack;

int main()
{
	int insert = 99;
	int push;
	int index = 0;
	int i;
	
	// Run program until insert is 0
	while (insert != 0)
	{
		// Insert switch number
		scanf("%d", &insert);
		switch (insert)
		{
		//End program
		case 0:
			break;
		// Push the stack
		case 1:
			scanf("%d", &push);
			stack.stack[index] = push;
			index++;
			break;
		// Pull the stack
		case 2:
			stack.stack[index - 1] = NULL;
			index--;
			if (index <= 0)
				index = 0;
			break;
		// If switch number is not between 0 to 2 in integer
		default:
			printf("Insert between 0 to 2\n");
		}
	}

	// Print the rest of results; size of array, and rest of array
	printf("%d\n", index);
	printf("%d\n", stack.stack[index - 1]);
	for (i = index; 0 < i; i--)
		printf("%d ", stack.stack[i-1]);

	system("PAUSE");
	return 0;
}
