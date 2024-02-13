#include "pointer.h"
#include <iostream>

Pointer::Pointer()
{
    // Difference between pointers and references
    int x = 2;
    int *y = &x;

    std::cout << x << std::endl; // 2
    std::cout << y  << std::endl; // address of x
    std::cout << *y << std::endl; // 2
    std::cout << &y << std::endl; // address of y
}

void Pointer::pointerWithArray()
{
    std::cout << __func__ << std::endl;
    int arr[] = {0, 1, 2};
    int *head = arr; // It points at the first address of the array, same as (int *head = &x[0])

    for(int i = 0; i < 3; i++) {
        head = arr + i;
        std::cout << head << std::endl; // Address of the elements of arr
        std::cout << *head << std::endl; // 0, 1, 2
    }

    /*
     *pointerWithArray
        0xc112bff964
        0
        0xc112bff968
        1
        0xc112bff96c
        2
     */
}
