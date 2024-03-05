#include "smart_pointer.h"

int var = 5;


SmartPointer::SmartPointer()
{
    // **new** key allocate memory on the heap (Dynamic memory) despite of the stack (Static memory)

    /* The heap is used for allocating memory dynamicly during the execusion of the program  Programs
     * can request memory from the heap at runtime, allowing for flexible memory management */

    /* The stack has a fixed memory size and used for static allocation, memory needs to be determined at compile-time */

    /* In C++ when using **new** we allocate memory dynamicly, and deallocate it with the **delete** keyword
     * In C when using **malloc** we allocate memory dynamicly, and deallocate it with **free** keyword */

    /* Smart pointers [unique_ptr, shared_ptr and weak_ptr] are class that use raw pointers, that was created to automate
     * the process of allocating memory dynamicly and deleting it */

    /* unique_ptr : are scoped pointers, means if a pointer is out of a scope, it will get destroyed,
     * you can't copy a unique_ptr, because if you do so, when it will be free, the copied entity will point at
     * a free memory */

    std::cout << "Smart pointer is created" << std::endl;


}

SmartPointer::~SmartPointer()
{
    std::cout << "Smart pointer is destroyed" << std::endl;
}
