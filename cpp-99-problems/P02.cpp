#include <list>

namespace P02
{
	int secondLastListElement(std::list<int> intList)
	{
		intList.pop_back();
		return intList.back();;
	}

	int secondLastArrayElemant(int* intArray, int arrSize)
	{
		return intArray[arrSize - 2];
	}
}