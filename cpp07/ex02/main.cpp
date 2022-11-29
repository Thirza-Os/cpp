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
}