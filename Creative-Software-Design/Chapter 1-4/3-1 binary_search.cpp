#include <iostream>
#include "binary_search.h"

using namespace std;

BinarySearch::BinarySearch() {
	// Function to be create class
}

BinarySearch::BinarySearch(int *array, int array_count) {
	// Apply class public variable from player's input (array and element)
	
	array_ = array;
	array_count_ = array_count;
}

BinarySearch::~BinarySearch() {
	// Deallocate array after execution
	delete[] array_;
}

void BinarySearch::SortArray() {
	int min, temp;


	for (int i = 0; array_count_>i; i++)
		for (int k = i; array_count_ > k; k++)
		{
			if (array_[i] > array_[k])
			{
				min = array_[k];

				temp = array_[i];
				array_[i] = min;
				array_[k] = temp;
			}
		}

	for (int i = 0; array_count_ > i; i++)
		cout << array_[i] << " ";
	cout << endl;
}

int BinarySearch::GetIndex(int element) {

	// Find same value from searching element's value from ascending order (0 to array_count)
	for (int i = 0; array_count_ > i; i++)
	{
		if (array_[i] == element)
			return i;
	}

	// Find the value doesn't exist, return -1
	return -1;
}














