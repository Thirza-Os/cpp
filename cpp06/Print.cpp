#include "Print.hpp"

Print::Print(std::string input, int type)_input(input), _type(type)
{
    std::cout << "Constructor Print called" << std::endl;
}


Print::~Print()
{
    std::cout << " Destructor Print called" << std::endl;
}

Print::Print(Print &copy)
{
    *this = copy;
    std::cout << "Copy const Print called" << std::endl;
}

Print& Print::operator=(Print & other)
{
    std::cout << "Assign operator Print called" << &other << std::endl;
    return (*this);
}

void    Print::printDouble(double doubleType): _doubleType(doubleType)
{
    this->_charType = (char)doubleType;
    this->_floatType = (float)doubleType;
    this->_intType = (int)doubleType;

    std::cout << "Print  with doubleType called" << std::endl;
}

void    Print::printInt(int intType): _intType(intType)
{
    this->_charType = (char)intType;
    this->_floatType = (float)intType;
    this->_doubleType = (double)intType;

    std::cout << "Print  with intType called" << std::endl;
}

void    Print::printFloat(float floatType): _floatType(floatType)
{
    this->_charType = (char)floatType;
    this->_doubleType = (double)floatType;
    this->_intType = (int)floatType;

    std::cout << "Print  with floatType called" << std::endl;
}

void    Print::printChar(char charType): _charType(charType)
{
    this->_doubleType = (char)charType;
    this->_floatType = (float)charType;
    this->_intType = (int)charType;

    std::cout << "Print  with charType called" << std::endl;
}

void    Print::printTypes(std::string input, int type)
{
    
}

void    Print::printTypes(void) const
{
    std::cout << "Char:     " << this->_charType << std::endl;
    std::cout << "Int:      " << this->_intType << std::endl;
    std::cout << "Float:    " << this->_floatType << std::endl;
    std::cout << "Double:   " << this->_doubleType << std::endl;
}
