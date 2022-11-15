#include "Convert.hpp"
// add multiple ..... error handling

Convert::Convert()
{
    std::cout << "Constructor Convert called" << std::endl;
}

Convert::Convert(std::string const input): _input(input)
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

bool Convert::IsInt()
{
    for (size_t i = 0; i < this->_input.size(); ++i)
    {
        if (i == 0 && (this->_input[i] == '-' || this->_input[i] == '+')) continue;
        if (!isdigit(this->_input[i]))
            return(false);
    }
    return (true);
}

bool Convert::IsChar()
{
    if (isalpha(this->_input[0]))
    {
        if (this->_input.length() == 1)
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
        return (true);
    }
    return (false);
}

bool    Convert::ConvertInput()
{
    validateInput();
    if (!IsInt() && !IsChar() && !IsFloat() && !IsDouble())
        return (false);
    return (true);
}
