#include <iostream>
#include <string>

using namespace std;

int Fibo(int seed);

int main()
{

	int seed;
	
	// Input seed number; if it is negative number, end process
	cin >> seed;
	if (seed < 0)
		return 0;

	// Execute Fibonacci algorithm in recursion and print it's number
	for (int i = 1; seed >= i; i++)
		cout << Fibo(i) << " ";
	cout << endl;

	//system("PAUSE");
	return 0;
}

int Fibo(int seed)
{
	// If seed number is 0 or 1, return seed number value
	if (seed == 0 || seed == 1)
		return seed;
	// Recursion of fibonnaci
	else
	{
		return Fibo(seed - 1) + Fibo(seed - 2);
	}
		
}