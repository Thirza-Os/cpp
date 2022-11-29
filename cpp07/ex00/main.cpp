#include "whatever.hpp"
#include <iostream>

// defining function template: present list of types in <> used in funciton.
// T: joker to use multiple types
// const if we dont change the content

// int main(void)
// {
//      int a = 21;
//      int b = 42;
//      char c = 'o';
//      char d = 'p';

//     // Testing swap
//     std::cout << "Before swap: " << a << " and " << b << std::endl;
//     swap<int>(a, b);                                                // explicit instantiation
//     std::cout << "After swap: " << a << " and " << b << std::endl;
//     swap(c, d);                                                     // implicit inatantiation
//     std::cout << "After swap: " << a << " and " << b << std::endl;

//     // Testing min
//     std::cout << "The min value (explicit) : " << min<int>(a, b) << std::endl;
//     std::cout << "The min value (implicit) : " << min(c, d) << std::endl;

//     // Testing max
//     std::cout << "The max value (explicit) : " << max<int>(a, b) << std::endl;
//     std::cout << "The max value (implicit) : " << max(c, d) << std::endl;
// }

// Main of the subject
int main( void ) {
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}