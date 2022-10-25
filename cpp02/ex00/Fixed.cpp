#include "Fixed.hpp"

// The purpose of a copy assignment operator:
// Initialize an existing object to the values supplied by another existing object.

Fixed::Fixed()
{
    std::cout << "Constructor called" << std::endl;
    this->setRawBits(0);
}

//first option does not call assignment operator
Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    this->setRawBits(copy.getRawBits());
    // *this = copy;
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

int Fixed::getRawBits(void) const
{
    return (this->_raw_bits);
}

void Fixed::setRawBits(int const raw)
{
    this->_raw_bits = raw;
}