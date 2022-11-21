#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <string>
#include <iostream>
#include <limits>

class   Convert
{
    private:
        std::string const	_input;
        int                 _type;
		bool				pointFlag;
		
    public:
        Convert();
        Convert(std::string const input);
        ~Convert();
        Convert(Convert &copy);
        Convert& operator=(Convert & other);

        int	const &getType(void) const;

		bool nanInput();
        bool IsInt();
        bool IsChar();
        bool IsDouble();
        bool IsFloat();

        bool validateInput();

        bool ConvertInput();
};

#endif