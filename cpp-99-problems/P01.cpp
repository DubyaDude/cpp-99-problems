#include <list>

namespace P01
{
	int listLastElement(std::list<int> intList)
	{
		return intList.back();
	}

	int arrayLastElemant(int *intArray, int arrSize)
	{
		return intArray[arrSize - 1];
	}
}