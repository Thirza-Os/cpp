#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <string>
#include <iostream>
#include <fstream>
// #include "Bureaucrat.hpp"

// class Bureaucrat;

class RobotomyRequestForm: public Form
{
    private:
        std::string     _target;

    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string const &target);
        ~RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &copy);
        RobotomyRequestForm const &operator=(const RobotomyRequestForm & other);

        std::string const getTarget(void) const;

        void    exec(void) const;

};

#endif