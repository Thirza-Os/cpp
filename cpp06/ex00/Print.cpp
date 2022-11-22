#include "Print.hpp"

enum Types {
    intType, 
    doubleType, 
    charType, 
    floatType,
    nanType,
	infinityTypeMin,
	infinityTypeMax,
    undefined
    };

Print::Print(std::string input, int type): _input(input), _type(type)
{
    std::cout << "Constructor Print called" << std::endl;
}


Print::~Print()
{
    std::cout << "Destructor Print called" << std::endl;
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

void    Print::printDouble(double doubleType)
{
    this->_doubleType = doubleType;

	// doubles can not be conferted to chars
    this->_charType = '\0';
    this->_floatType = (float)doubleType;
    this->_intType = (int)doubleType;

    std::cout << "Print  with doubleType called" << std::endl;
}

void    Print::printInt(int intType)
{
    this->_intType = intType;

    this->_charType = (char)intType;
    this->_floatType = (float)intType;
    this->_doubleType = (double)intType;

    std::cout << "Print  with intType called" << std::endl;
}

void    Print::printFloat(float floatType)
{
    this->_floatType = floatType;

    this->_charType = (char)floatType;
    this->_doubleType = (double)floatType;
    this->_intType = (int)floatType;

    std::cout << "Print  with floatType called" << std::endl;
}

void    Print::printChar(char charType)
{
    this->_charType = charType;

    this->_doubleType = (char)charType;
    this->_floatType = (float)charType;
    this->_intType = (int)charType;

    std::cout << "Print  with charType called" << std::endl;
}

void    Print::printTypes(void) const
{
    if (!this->_charType || !isprint(this->_charType))
        std::cout << "Char:     " << "Non displayable" << std::endl;
    else if (this->_type >= 4)
        std::cout << "Char:		" << "Impossible" << std::endl;
    else
        std::cout << "Char:		" << this->_charType << std::endl;
    if (this->_type >= 4)
            std::cout << "Int:		" << "Impossible" << std::endl;
    else
        std::cout << "Int:		" << this->_intType << std::endl;
    std::cout << "Float:		" << this->_floatType << "f" << std::endl;
	std::cout << std::setprecision(1) << std::fixed;
    std::cout << "Double:		" << this->_doubleType << std::endl;
}

bool    Print::savePrint()
{
    double nan (const char* tagp);
    if (this->_type == 0)
    {
        try {printInt(std::stoi(this->_input));}
        catch (const std::exception& e) {return (0);}
    }
    else if (this->_type == 1)
    {
        try {printDouble(std::stod(this->_input));}
        catch (const std::exception& e) {return (0);}
    }
    else if (this->_type == 3)
    {
        try {printFloat(std::stof(_input));}
        catch (const std::exception& e) {return (0);}
    }
    else if (this->_type == 2)
        printChar(_input[0]);
    else if (this->_type == 4)
    {
        this->_doubleType = std::numeric_limits<double>::quiet_NaN();
        this->_floatType = std::numeric_limits<float>::quiet_NaN();
    }
		else if (this->_type == 5)
    {
        this->_doubleType = - std::numeric_limits<double>::infinity();
        this->_floatType = - std::numeric_limits<float>::infinity();
    }
	else if (this->_type == 6)
    {
        this->_doubleType = std::numeric_limits<double>::infinity();
        this->_floatType = std::numeric_limits<float>::infinity();
    }
    printTypes();
    return (1);
}
