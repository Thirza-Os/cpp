#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include <string>
#include <iostream>

class PresidentialPardonForm: public Form
{
    private:
        std::string		_target;

    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string const &target);
        ~PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm &copy);
        PresidentialPardonForm const& operator=(const PresidentialPardonForm & other); 

	    std::string const getTarget(void) const;

        void    exec(void) const;
};

#endif