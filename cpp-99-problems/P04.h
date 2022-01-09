#pragma once
#include <list>
namespace P04
{
	int listSize(std::list<int> intList);

	template<typename T, int N>
	int arraySize(T(&arr1)[N]) //Passing the array by reference 
	{
		return sizeof(arr1) / sizeof(arr1[0]);
	}
}