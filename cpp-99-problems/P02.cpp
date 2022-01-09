#include <list>

namespace P02
{
	int listSecondLastElement(std::list<int> intList)
	{
		intList.pop_back();
		return intList.back();
	}

	int arraySecondLastElemant(int* intArray, int arrSize)
	{
		return intArray[arrSize - 2];
	}
}