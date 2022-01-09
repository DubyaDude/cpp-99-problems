// cpp-99-problems.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


#include <iostream>
#include "gtest/gtest.h";
#include "P1.h";

int main(int argc, char* argv[])
{
    testing::InitGoogleTest(&argc, argv);
    std::cout << "Time to run tests!\n";
    return RUN_ALL_TESTS();
}

TEST(P1, Array)
{
    int testArray1[] = { 3 };
    int testArray2[] = { 3, 1 };
    int testArray3[] = { 3, 1, 6, 2, 9 };

    ASSERT_EQ(P1::lastArrayElemant(testArray1, sizeof(testArray1) / sizeof(*testArray1)), 3);
    ASSERT_EQ(P1::lastArrayElemant(testArray2, sizeof(testArray2) / sizeof(*testArray2)), 1);
    ASSERT_EQ(P1::lastArrayElemant(testArray3, sizeof(testArray3) / sizeof(*testArray3)), 9);
}

TEST(P1, List)
{
    std::list<int> testList1 = { 3 };
    std::list<int> testList2 = { 3, 1 };
    std::list<int> testList3 = { 3, 1, 6, 2, 9 };

    ASSERT_EQ(P1::lastListElement(testList1), 3);
    ASSERT_EQ(P1::lastListElement(testList2), 1);
    ASSERT_EQ(P1::lastListElement(testList3), 9);
}