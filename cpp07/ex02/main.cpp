#include "Array.hpp"

#include <iostream>

int main(void)
{
    // requires template argument to instantiate the class
    Array<int>   A;
    int *a = new int();
    std::cout << a << std::endl;
    
    Array<int>  B(5);
    std::cout << B[5] << std::endl;

    Array<int>  Q(10);
    std::cout << Q[10] << std::endl;

    std::cout << "A This size: " << A.Size() << std::endl;
    std::cout << "B This size: " << B.Size() << std::endl;

    // Call copy constructor
    Array<int> C = B;

    std::cout << "B This size after copy: " << B.Size() << std::endl;
    std::cout << "C This size after copy: " << C.Size() << std::endl;
    // Call = operator overload
    B = A;
    // check if the copy constructor does everyting correctly
    std::cout << "B This size after copy after altering B (C should not change): " << B.Size() << std::endl;
    std::cout << "C This size after copy after altering B (C should not change): " << C.Size() << std::endl;

    A = Q;
    // check if the assignment overload works correctly
    std::cout << "A This size after altering A (B should not change): " << A.Size() << std::endl;
    std::cout << "B This size after altering A (B should not change): " << B.Size() << std::endl;
}