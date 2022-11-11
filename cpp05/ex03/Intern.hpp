#ifndef INTERN_HPP
# define INTERN_HPP

#include <string>
#include <fstream>
#include "Form.hpp"

class Form;

class Intern
{
    public:
		Intern();
        ~Intern();
        Intern(const Intern &copy);
        Intern const& operator=(const Intern & other);

        // Always use & references for const members
        Form    *makeForm(std::string const &name, std::string const &target) const;
};

#endif