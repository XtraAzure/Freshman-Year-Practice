// binary_search.h
// Implement your binary_search.cc
#include <iostream>
#include <sstream>
#include <string>
#include <regex>
#ifndef __BINARY_SEARCH__
#define __BINARY_SEARCH__

class BinarySearch
{
public:
	BinarySearch();
	BinarySearch(int *_array, int _arrayCount);
	~BinarySearch();
	int GetIndex(int _element); // return -1 when element doesn't exist
	void SortArray(); // you can reuse your previous sort assignment

private:
	int *array_;
	int array_count_;

};

#endif
