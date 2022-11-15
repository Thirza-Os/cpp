#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <string>
#include <iostream>

class   Convert
{
    private:
        std::string const	_input;
		
    public:
        Convert();
        Convert(std::string const input);
        ~Convert();
        Convert(const Convert &copy);
        Convert& operator=(const Convert & other);

        bool IsInt();
        bool IsChar();
        bool IsDouble();
        bool IsFloat();

        bool validateInput();

        bool    ConvertInput();
};

#endif