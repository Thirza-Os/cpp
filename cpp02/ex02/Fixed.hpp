#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
private:
	int					_raw_bits;
	// static members belong to the class rather than to objects of the class
	// const so can only be invoked by const member functions
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
// Copy assignment operator overload (updating an already existing instance)
	Fixed & operator=(const Fixed& copy);

	void	setRawBits(int const raw);
	// const: denied to change value of data members of their class
	int		getRawBits(void) const;
	float	toFloat(void) const;
	int		toInt(void) const;

	// FUNCTIONS EX02
	// comparison operators: compare two instances (both const, no permission for changes)
	bool	operator>(const Fixed& another) const;
	bool	operator<(const Fixed& another) const;
	bool	operator>=(const Fixed& another) const;
	bool	operator<=(const Fixed& another) const;
	bool	operator==(const Fixed& another) const;
	bool	operator!=(const Fixed& another) const;

	//Artihmetic operators: return updated instance: only parameter class is const (made both const for testing)
	Fixed operator+(const Fixed& another) const;
	Fixed operator-(const Fixed& another) const;
	Fixed operator*(const Fixed& another) const;
	Fixed operator/(const Fixed& another) const;

	// postfix increment/decrement (return old value cuz it happens later)
	Fixed	operator++( int );
	Fixed	operator--( int );
	// prefix increment/decrement (return new value cuz it happens before)
	Fixed &	operator++();
	Fixed & operator--();

	// public overloaded member functions
	// if not static error: call to non-static member function without an object argument
	// By declaring a function member as static, you make it independent of any particular object of the class.
	static Fixed &	min(Fixed& first, Fixed& second);
	static Fixed &	max(Fixed& first, Fixed& second);

	static const Fixed & min(const Fixed& first, const Fixed& second);
	static const Fixed & max(const Fixed& first, const Fixed& second);


};

	std::ostream & operator<<(std::ostream & stream, Fixed const & inst);

#endif