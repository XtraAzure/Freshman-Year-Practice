#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Execution Example
abcdefg
abcdefg
gabcdef
fgabcde
efgabcd
defgabc
cdefgab
bcdefga
*/

int main()
{
	char str[500]; // Maximum length to 501
	char temp;
	int i, n,length;
	
	// Insert string and measure its length
	scanf("%s", str);
	length = strlen(str);
	
	// Increment the array element by 1 and move final element to first element
	/* for (i = 0; length > i; i++)
	{
		temp = str[length - 1];
		for (n = 0; length> n; n++)
		{
			str[n] = str[n + 1];
			str[0] = temp;
		}
		printf("%s\n", str);
	} */
	
	// Print current string
	printf("%s\n", str);

	
	// Circular process execute and print string as circular process happens each time
	for (i = 0; length-1 > i; i++)
	{
		temp = str[length - 1];
		for (n = length; 0 < n; n--)
		{
			str[n-1] = str[n - 2];
			//printf("%c\n", temp);
		}
		str[0] = temp;
		printf("%s\n", str);
	}

	system("PAUSE");
	return 0;
}
