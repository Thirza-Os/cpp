#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
// std::cout << a << std::endl;
// std::cout << ++a << std::endl;
// std::cout << a << std::endl;
// std::cout << a++ << std::endl;
// std::cout << a << std::endl;


// std::cout << b << std::endl;

// this call is without object argument: hence static function
// access static member function using class name and scope resolution
std::cout << Fixed::max( a, b ) << std::endl;
return 0;
}