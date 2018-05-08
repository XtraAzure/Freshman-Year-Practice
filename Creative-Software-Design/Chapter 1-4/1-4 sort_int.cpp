#include <iostream>
#define MAX 100
using namespace std;

int main()
{
	int n;
	int array[MAX];
	int min, temp;
	cin >> n;

	// If input is not greater or equal to 0, the program will terminate
	if (n <= 0)
		return 0;

	// Input element(s) in the array
	for (int i = 0; n > i; i++)
		cin >> array[i];

	// Sort array in ascending order
	for (int i = 0; n>i;i++)
		for (int k = i; n > k; k++)
		{
			if (array[i] > array[k])
			{
				min = array[k];

				temp = array[i];
				array[i] = min;
				array[k] = temp;
			}
		}

	// Print sorted array
	for (int i = 0; n > i; i++)
		cout << array[i] << " ";
	cout << endl;

	return 0;
}