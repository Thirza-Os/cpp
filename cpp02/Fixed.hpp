#ifndef FIXED_HPP
#define FIXED_HH

#include <iostream>
#include <string>

class Fixed
{
private:
	int					fixed_val;
	static const int	fract_bits = 8;

public:
	Fixed();
	~Fixed();
};

Fixed::Fixed()
{
	this->fixed_val =
}

Fixed::~Fixed()
{
}


#endif