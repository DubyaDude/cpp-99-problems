#pragma once

template<typename T, int N>
int arraySize(T(&arr1)[N]) //Passing the array by reference 
{
    return sizeof(arr1) / sizeof(arr1[0]);
}