#include <list>
#include "P01.h"

namespace P02
{
	int secondLastListElement(std::list<int> intList)
	{
		intList.pop_back();
		return P01::lastListElement(intList);
	}

	int secondLastArrayElemant(int* intArray, int arrSize)
	{
		return intArray[arrSize - 2];
	}
}