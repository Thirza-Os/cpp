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

// Operator overloading is a compile-time polymorphism: give special meaning to an operator.
// change content rawbits to the other, return ref
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

float	Fixed::toFloat(void) const
{
    return ((float)this->_raw_bits / (1 << this->_fract_bits));
}

int		Fixed::toInt(void) const
{
	return (this->_raw_bits >> this->_fract_bits);
}

std::ostream & operator<<(std::ostream & stream, const Fixed & inst)
{
    stream << inst.toFloat();
    return (stream);
}

// FUNCTIONS EX02
// comparison functions

bool    Fixed::operator>(const Fixed& another) const
{
    return (this->getRawBits() > another.getRawBits());
}

bool    Fixed::operator<(const Fixed& another) const
{
    return (this->getRawBits() < another.getRawBits());
}

bool    Fixed::operator>=(const Fixed& another) const
{
    return (this->getRawBits() >= another.getRawBits());
}

bool    Fixed::operator<=(const Fixed& another) const
{
    return (this->getRawBits() <= another.getRawBits());
}

bool    Fixed::operator==(const Fixed& another) const
{
    return (this->getRawBits() == another.getRawBits());
}

bool    Fixed::operator!=(const Fixed& another) const
{
    return (this->getRawBits() != another.getRawBits());
}

// Artihmetic operators: arythmatic with float numbers: return immediatly otherwise expression result unused.

Fixed   Fixed::operator+(const Fixed& another)
{
    return(this->toFloat() + another.toFloat());
}

Fixed   Fixed::operator-(const Fixed& another)
{
    return(this->toFloat() - another.toFloat());
}

Fixed   Fixed::operator*(const Fixed& another)
{
    return(this->toFloat() * another.toFloat());
}

Fixed   Fixed::operator/(const Fixed& another)
{
    return(this->toFloat() / another.toFloat());
}

// Postfix increment/decrement
// Give instance, saving instance because post inc,
Fixed   Fixed::operator++( int )
{
    Fixed temp(*this);
    this->_raw_bits++;
    return (temp);
}

Fixed   Fixed::operator--( int )
{
    Fixed temp(*this);
    this->_raw_bits--;
    return (temp);
}

// prefix increment/decrement
// give instance, add/substract from object, return current instance
Fixed & Fixed::operator++()
{
   ++this->_raw_bits;
    return (*this);
}

Fixed & Fixed::operator--()
{
    --this->_raw_bits;
    return (*this);
}

// public oveloaded member functions 

Fixed	&	Fixed::min(Fixed& first, Fixed& second)
{
    if (first < second)
        return (first);
    else 
        return (second);
}

Fixed	&	Fixed::max(Fixed& first, Fixed& second)
{
    if (first > second)
        return (first);
    else 
        return (second);
}

// public overloaded member functions const

Fixed const&	Fixed::min(const Fixed& first, const Fixed& second)
{
    if (first < second)
        return (first);
    else 
        return (second);
}

Fixed const&	Fixed::max(const Fixed& first, const Fixed& second)
{
    if (first > second)
        return (first);
    else 
        return (second);
}