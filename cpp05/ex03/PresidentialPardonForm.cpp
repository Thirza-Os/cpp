#include "PresidentialPardonForm.hpp"
# include "AForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): Form::Form()
{
    std::cout << "Default constructor PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target): Form::Form("PresidentForm", 25, 5), _target(target)
{
    std::cout << "Constructor PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Deconsructor PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy): Form::Form(copy)
{
    *this = copy;
    std::cout << "Copy consructor PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm const &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    if (this != &other)
    {
        Form::operator=(other);
    }
    return(*this);
    std::cout << "Assignment operator PresidentialPardonForm called" << std::endl;
}

std::string const PresidentialPardonForm::getTarget(void) const
{
    return (this->_target);
}

void    PresidentialPardonForm::exec(void) const
{
    std::cout << "Zaphod Beeblebrox approved." << std::endl;
}
