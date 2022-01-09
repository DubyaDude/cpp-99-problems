#include <iostream>
#include "gtest/gtest.h";
#include "Helper.h";
#include "P01.h";
#include "P02.h";

int main(int argc, char* argv[])
{
    testing::InitGoogleTest(&argc, argv);
    std::cout << "Time to run tests!\n";
    return RUN_ALL_TESTS();
}

TEST(P01, Array)
{
    int testArray1[] = { 3 };
    int testArray2[] = { 3, 1 };
    int testArray3[] = { 3, 1, 6, 2, 9 };

    ASSERT_EQ(P01::arrayLastElemant(testArray1, arraySize(testArray1)), 3);
    ASSERT_EQ(P01::arrayLastElemant(testArray2, arraySize(testArray2)), 1);
    ASSERT_EQ(P01::arrayLastElemant(testArray3, arraySize(testArray3)), 9);
}

TEST(P01, List)
{
    std::list<int> testList1 = { 3 };
    std::list<int> testList2 = { 3, 1 };
    std::list<int> testList3 = { 3, 1, 6, 2, 9 };

    ASSERT_EQ(P01::listLastElement(testList1), 3);
    ASSERT_EQ(P01::listLastElement(testList2), 1);
    ASSERT_EQ(P01::listLastElement(testList3), 9);
}

TEST(P02, Array)
{
    int testArray2[] = { 3, 1 };
    int testArray3[] = { 3, 1, 6, 2, 9 };

    ASSERT_EQ(P02::arraySecondLastElemant(testArray2, arraySize(testArray2)), 3);
    ASSERT_EQ(P02::arraySecondLastElemant(testArray3, arraySize(testArray3)), 2);
}

TEST(P02, List)
{
    std::list<int> testList2 = { 3, 1 };
    std::list<int> testList3 = { 3, 1, 6, 2, 9 };

    ASSERT_EQ(P02::listSecondLastElement(testList2), 3);
    ASSERT_EQ(P02::listSecondLastElement(testList3), 2);
}