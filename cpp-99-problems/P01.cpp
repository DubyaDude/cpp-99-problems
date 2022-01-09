#include <list>

namespace P01
{
	int lastListElement(std::list<int> intList)
	{
		return intList.back();
	}

	int lastArrayElemant(int *intArray, int arrSize)
	{
		return intArray[arrSize - 1];
	}
}