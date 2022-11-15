#include "Convert.hpp"
// add multiple ..... error handling

enum Types {
    intType, 
    doubleType, 
    charType, 
    floatType,
    undefined
    };

Convert::Convert()
{
    std::cout << "Constructor Convert called" << std::endl;
}

Convert::Convert(std::string const input): _input(input), _type(undefined)
{
    std::cout << "Constructor with parameter convert called" << std::endl;
}

Convert::~Convert()
{
    std::cout << " Destructor Convert called" << std::endl;
}

Convert::Convert(const Convert &copy)
{
    *this = copy;
    std::cout << "Copy const Convert called" << std::endl;
}

Convert& Convert::operator=(const Convert & other)
{
    std::cout << "Assign operator Convert called" << &other << std::endl;
    return (*this);
}

const int& Convert::getType(void) const
{
    return (this->_type);
}

bool Convert::validateInput()
{
    int count = 0;

    for (size_t i = 0; i < this->_input.length(); i++)
        if (this->_input[i] == '.') count++;
    if (count > 1)
        return (false);
    if (!isalpha(this->_input[0]) && !isdigit(this->_input[0]) && this->_input[0] != '-' && this->_input[0] != '+')
        return (false);
    if ((this->_input[0] == '-' || this->_input[0] == '+'))
        if (this->_input.length() == 1 || !isdigit(this->_input[1]))
            return (false);
    return (true);
}

// Continue skips the occurances
bool Convert::IsInt()
{
    for (size_t i = 0; i < this->_input.size(); i++)
    {
        if (i == 0 && (this->_input[i] == '-' || this->_input[i] == '+')) continue;
        if (!isdigit(this->_input[i]))
            return(false);
    }
    this->_type = intType;
    return (true);
}

bool Convert::IsChar()
{
    if (isalpha(this->_input[0] && this->_input.length() == 1))
    {
        this->_type = charType;
        return (true);
    }
    return (false);
}

bool Convert::IsFloat()
{
    if (this->_input.back() == 'f')
    {
        for (size_t i = 0; i < this->_input.size() - 1; i++)
        {
            if (i == 0 && (this->_input[i] == '-' || this->_input[i] == '+')) continue;
            if (this->_input[i] == '.' && this->_input[i + 1] != 'f') continue;
            if (!isdigit(this->_input[i]))
                return (false);
        }
        this->_type = floatType;
        return (true);
    }
    return (false);
}

bool Convert::IsDouble()
{
    if (this->_input.back() == 'd')
    {
        for (size_t i = 0; i < this->_input.size() - 1; i++)
        {
            if (i == 0 && (this->_input[i] == '-' || this->_input[i] == '+')) continue;
            if (this->_input[i] == '.' && this->_input[i + 1] != 'd') continue;
            if (!isdigit(this->_input[i]))
                return (false);
        }
        this->_type = doubleType;
        return (true);
    }
    return (false);
}

bool    Convert::ConvertInput()
{
    if (!validateInput())
        return (false);
    if (!IsInt() && !IsChar() && !IsFloat() && !IsDouble())
        return (false);
    return (true);
}
