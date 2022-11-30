#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

// const data members dont get copied in copy constructor

Intern::Intern(void)
{
        std::cout << "Default constructor Intern called" << std::endl;
}

Intern::~Intern()
{
    std::cout << "Deconsructor Intern called" << std::endl;
}

Intern::Intern(const Intern&  copy)
{
    *this = copy;
    std::cout << "Copy consructor Intern called" << std::endl;
}

Intern const& Intern::operator=(const Intern &other)
{
    std::cout << "Assignment operator Intern called" << &other << std::endl;
    return(*this);
}

static Form		*makePres(std::string const target)
{
   return new PresidentialPardonForm(target);
}

static Form *makeRobot(std::string const target)
{
    return new RobotomyRequestForm(target);
}

static Form		*makeShrub(std::string const target)
{
    return new ShrubberyCreationForm(target);
}

Form    *Intern::makeForm(std::string const &name, std::string const &target) const
{
    std::string formNames [] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
    	Form *(*forms[])(const std::string target) = {&makeShrub, &makeRobot, &makePres};

    for (int i = 0; i < 3; i++)
        if (name == formNames[i])
        {
            std::cout << "Intern creates " << name << "With target " << target << std::endl;
            return forms[i](target);
        }
    std::cout << "This is not a correct form name!" << std::endl;
    return (NULL);
}
