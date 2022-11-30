#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
// #include "Bureaucrat.hpp"

class Form;

RobotomyRequestForm::RobotomyRequestForm(void): Form::Form()
{
        std::cout << "Default constructor RobotomyRequestForm called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target): Form::Form("RobotForm", 25, 5), _target(target)
{
    std::cout << "Constructor RobotomyRequestForm called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Deconsructor RobotomyRequestForm called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm&  copy): Form::Form(copy)
{
    *this = copy;
    std::cout << "Copy consructor RobotomyRequestForm called" << std::endl;
}

RobotomyRequestForm const &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    if (this != &other)
    {
        Form::operator=(other);
    }
    std::cout << "Assignment operator RobotomyRequestForm called" << std::endl;
    return(*this);
}

std::string const RobotomyRequestForm::getTarget(void) const
{
    return (this->_target);
}

void    RobotomyRequestForm::exec(void) const
{
   static int randi;

    std::cout << "SOME DRILLING NOISES" << std::endl;
    srand(time(0));    //used to set the to 'start' (seed) otherwise same number
    randi = rand() % 2;
    if (randi)
        std::cout << this->getName() << " Succesfully robotomised" << std::endl;
    else
        std::cout << this->getName() << " Unsuccesfully robotomised" << std::endl;
}
