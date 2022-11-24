#include <iostream>

// defining function template: present list of types in <> used in funciton.
// T: joker to use multiple types
// const if we dont change the content

template <typename T>
void swap(T & x, T & y)
{
    T temp;

    temp = x;
    x = y;
    y = temp;
}

int main(void)
{
     int a = 21;
     int b = 42;

    //  float a = 90.0f;
    //  float b = 80.0f;
    //  char a = 'o';
    //  char b = 'p';

    std::cout << "Before swap: " << a << " and " << b << std::endl;
    // swap<int>(a, b);                                                // explicit instantiation
    std::cout << "After swap: " << a << " and " << b << std::endl;
    swap(a, b);                                                     // implicit inatantiation
    std::cout << "After swap: " << a << " and " << b << std::endl;
}