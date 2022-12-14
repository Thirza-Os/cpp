#ifndef PRINT_HPP
# define PRINT_HPP

#include <string>
#include <iostream>
#include <limits>
#include <iomanip>

class   Print
{
    private:
	    std::string const	_input;
        int                 _type;
        double	            _doubleType;
		int		            _intType;
		float	            _floatType;
		char	            _charType;
		
    public:
        Print(std::string input, int type);
        ~Print();
        Print(Print &copy);
        Print& operator=(Print & other);

        void	printDouble(double const doubleType);
        void	printFloat(float const floatType);
       	void	printInt(int const intType);
        void	printChar(char charType);

		void	fillTypes(void);
		void	printTypes(void) const;
        void    printNans(void);
        bool    savePrint(void);
};

#endif