#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
private:
	int					_raw_bits;
	static const int	_fract_bits = 8;

public:
// Constructor
	Fixed();
// Copy constructor (new instance)
	Fixed(const Fixed& copy);
// constructor w int parameter
	Fixed(const int i);
// constructor w floating int parameter
	Fixed(const float f);
// Destructor
	~Fixed();
// Copy assignment operator overload (updating instance)
	Fixed & operator=(const Fixed& copy);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

	std::ostream & operator<<(std::ostream & stream, const Fixed & inst);

#endif