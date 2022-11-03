#include "Fixed.hpp"

int main( void ) {
    Fixed a;

	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << "\t\tis a at start\n" << std::endl;
	std::cout << ++a << "\tis a at ++a\n" << std::endl;
	std::cout << a << "\tis a after ++a\n" << std::endl;
	std::cout << a++ <<"\tis a at a++\n" << std::endl;
	std::cout << a << "\tis a after a++\n" << std::endl;

	std::cout << b << "\t\tvalue of b\n" << std::endl;

	std::cout << Fixed::max(a, b) << "\t\tthe max of a and b\n" << std::endl;
	std::cout << Fixed::min(a, b) << "\tthe min of a and b\n" << std::endl;

	std::cout << "\nADDITIONAL MAIN\n";
	std::cout << "-----------------\n";
	Fixed c = a;
	std::cout << Fixed::min(c, b) << std::endl; // 0.0078125
	std::cout << (b / Fixed(2)) << std::endl; // 5.05078
	std::cout << b + Fixed(-3.14f) << std::endl; // 6.96094
	std::cout << b - Fixed(18) << std::endl; // -7.89844
	std::cout << (c != a) << std::endl; // 0
	std::cout << (c == a) << std::endl; // 1
    return 0;
}