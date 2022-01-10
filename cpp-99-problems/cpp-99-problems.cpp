#include <iostream>
#include "gtest/gtest.h"
#include "Helper.h"
#include "P01.h"
#include "P02.h"
#include "P03.h"
#include "P04.h"

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

TEST(P03, Array)
{
    int testArray1[] = { 3 };
    int testArray2[] = { 3, 1 };
    int testArray3[] = { 3, 1, 6, 2, 9 };

    ASSERT_EQ(P03::arrayKthElemant(testArray1, 0), 3);
    ASSERT_EQ(P03::arrayKthElemant(testArray2, 1), 1);
    ASSERT_EQ(P03::arrayKthElemant(testArray3, 3), 2);
    ASSERT_EQ(P03::arrayKthElemant(testArray3, 4), 9);
}

TEST(P03, List)
{
    std::list<int> testList1 = { 3 };
    std::list<int> testList2 = { 3, 1 };
    std::list<int> testList3 = { 3, 1, 6, 2, 9 };


    ASSERT_EQ(P03::listKthElement(testList1, 0), 3);
    ASSERT_EQ(P03::listKthElement(testList2, 1), 1);
    ASSERT_EQ(P03::listKthElement(testList3, 3), 2);
    ASSERT_EQ(P03::listKthElement(testList3, 4), 9);
}

TEST(P04, Array)
{
    int testArray1[] = { 3 };
    int testArray2[] = { 3, 1 };
    int testArray3[] = { 3, 1, 6, 2, 9 };

    ASSERT_EQ(P04::arraySize(testArray1), 1);
    ASSERT_EQ(P04::arraySize(testArray2), 2);
    ASSERT_EQ(P04::arraySize(testArray3), 5);
}

TEST(P04, List)
{
    std::list<int> testList1 = { 3 };
    std::list<int> testList2 = { 3, 1 };
    std::list<int> testList3 = { 3, 1, 6, 2, 9 };


    ASSERT_EQ(P04::listSize(testList1), 1);
    ASSERT_EQ(P04::listSize(testList2), 2);
    ASSERT_EQ(P04::listSize(testList3), 5);
}