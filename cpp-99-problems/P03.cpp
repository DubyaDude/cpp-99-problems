#include <list>

namespace P03
{
	int listKthElement(std::list<int> intList, int index)
	{
		auto ptr = intList.begin();
		std::advance(ptr, index);
		return *ptr;
	}

	int arrayKthElemant(int* intArray, int index)
	{
		return intArray[index];
	}
}