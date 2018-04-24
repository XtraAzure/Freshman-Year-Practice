#include <iostream>

using namespace std;

void MyFunc();

int main()
{
	cout << "hello world\n";
	MyFunc();

	// Pointer
	int a = 10;
	int *p = &a;
	cout << "*p == " << *p << endl; // Outputs 10.
	*p = 20;
	cout << "a = " << a << endl; // Outputs 20.

	int array[3] = { 1,2,3 };
	p = array;
	int *q = &array[2];
	int **pp = &p;
	cout << "**pp = " << **pp << endl; //Outputs 1.
	pp = &q;
	cout << "**pp = " << **pp << endl; // Outputs 3.

	system("PAUSE");
	return 0;
}

void MyFunc()
{
	int a = 0, b = 1;
	{
		int a = 2, c = 3;
		cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
	}
	cout << "a  " << a << ", b = " << b << endl;
}

void TestFunction(int n)
{
	// malloc (n) : allocate n bytes of mem block and return ptr to the block
	int * variable_size_array = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; ++i)
	{
		cout << variable_size_array[i] << endl;
  	}

	// free(ptr): deallocate the allocated mem block; if skip, mem leak will occur
	free(variable_size_array);
	/*
	int fixed_size_array[20];
	int variable_size_array[n]; // Compile error

	for (int i = 0; i < n; ++i)
	{
		cout << fixed_size_array[i] << ", " // SEGFAULT if n > 20
			<< variable_size_array[i];
	}
	*/

	// Same but used new and delete
	int *int_instance = new int;
	int *variable_size_array = new int[n]; // [] for allocate array

	*int_instance = 10;
	for (int i = 0; i < n; ++i)
		cin >> variable_size_array[i];

	delete int_instance;
	delete[] variable_size_array; //[] for deallocate array
}