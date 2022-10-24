// c++ makes own default copy constructor (shallow copy) (a = b)
// in case of pointers / runtime allocation: define own cc (deep copy) (*a = *b):
//			pointers will point to new locations.

// copy constructor is called for a NEW object: two different objects.
// -1) When an object of the class is passed (to a function) by value as an argument. 
// -2) copy constructor is called when an object is constructed based on another object of the same class.

// assignment operator is called
// if an initialized object is assigned a new value from another existing object.

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
private:
	int					_raw_bits;
	static const int	_fract_bits = 8;

public:
// Constructor
	Fixed();
// Copy constructor
	Fixed(const Fixed& copy);
// Destructor
	~Fixed();
// Copy assignment operator overload
	Fixed& operator=(const Fixed& copy);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif