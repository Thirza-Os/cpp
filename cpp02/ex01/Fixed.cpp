#include "Fixed.hpp"

// >> bitshifting moves each digit in a binary representation left(* 2^n) or right(times /2)

// CONSTRUCT/DESTRUCT

//default assigning 0 to _raw bits without func
Fixed::Fixed(): _raw_bits(0)
{
    std::cout << "Constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    this->setRawBits(copy.getRawBits());
}

Fixed::Fixed(const int i)
{
    std::cout << "Constructor with int called" << std::endl;
    this->setRawBits(i << this->_fract_bits);
}

// https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/

// calculate by floating input * 2^(fractional bits)
// roundf to round the float (cast to int)
Fixed::Fixed(const float f)
{
    std::cout << "Constructor with float called" << std::endl;
    this->setRawBits((int)roundf(f * (1 << this->_fract_bits)));
}

Fixed::~Fixed()
{
    std::cout << "Deconstructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_raw_bits = other.getRawBits();
    }
    return (*this);
}

// FUNCTIONS

int		Fixed::getRawBits(void) const
{
    return (this->_raw_bits);
}

void	Fixed::setRawBits(int const raw)
{
    this->_raw_bits = raw;
}

// calvulate by taking the int, divide by 2^ fract bits an cast to float
float	Fixed::toFloat(void) const
{
    return(this->_raw_bits / (float)(1 << this->_fract_bits));
}

int		Fixed::toInt(void) const
{
	return(this->_raw_bits >> this->_fract_bits);
}

// non-member function

// reference of the wanted outstream & of the current instance of the class
// constant because you dont change the class
// return ref on the ostream to output
std::ostream & operator<<(std::ostream & stream, const Fixed & inst)
{
    stream << inst.toFloat();
    return (stream);
}