#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
// #include "Bureaucrat.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(): Form::Form()
{
        std::cout << "Defaultconsructor ShrubberyCreationForm called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target): Form::Form("ShrubberyForm", 145, 137), _target(target)
{
    std::cout << "Constructor ShrubberyCreationForm called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Deconsructor ShrubberyCreationForm called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy): Form::Form(copy)
{
    *this = copy;
    std::cout << "Copy consructor ShrubberyCreationForm called" << std::endl;
}

ShrubberyCreationForm const &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    if (this != &other)
    {
        Form::operator=(other);
    }
    return(*this);
    std::cout << "Assignment operator ShrubberyCreationForm called" << std::endl;
}

std::string const ShrubberyCreationForm::getTarget(void) const
{
    return (this->_target);
}

void    ShrubberyCreationForm::exec(void) const
{
    std::string fileName;

    fileName = this->getName();
    fileName.append("_shrubbery");

    std::ofstream file(fileName);
    file << "   888      88     \n" 
            "  88888    8888    \n"
            "888888888   88     \n"
            " 8888888    ||     \n" 
            "  88888            \n"
            "   ||              \n"
            "   ||     ASCII    \n"
            "   ||    Trees?!   \n"             
            "                   \n";
    file.close();
}
