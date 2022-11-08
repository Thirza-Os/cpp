#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <string>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
    private:
        std::string		_target;

    public:
		ShrubberyCreationForm();
        ShrubberyCreationForm(std::string const &target);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm &copy);
        ShrubberyCreationForm const& operator=(const ShrubberyCreationForm & other); 

	    std::string const getTarget(void) const;

		void	exec(void) const;
};

#endif