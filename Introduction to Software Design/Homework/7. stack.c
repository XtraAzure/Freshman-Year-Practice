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

	while (insert != 0)
	{
		scanf("%d", &insert);
		switch (insert)
		{
		case 0:
			break;
		case 1:
			scanf("%d", &push);
			stack.stack[index] = push;
			index++;
			break;
		case 2:
			stack.stack[index - 1] = NULL;
			index--;
			if (index <= 0)
				index = 0;
			break;
		default:
			printf("Insert between 0 to 2\n");
		}
	}

	printf("%d\n", index);
	printf("%d\n", stack.stack[index - 1]);
	for (i = index; 0 < i; i--)
		printf("%d ", stack.stack[i-1]);

	system("PAUSE");
	return 0;
}