#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(int grade, std::string name): _grade(grade), _name(name)
{
    if (grade > 150)
        throw (TooLowException());
    if (grade < 1)
        throw (TooHighException());
    std::cout << "Consructor Bureaucrat called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Deconsructor Bureaucrat called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat&  copy)
{
    *this = copy;
    std::cout << "Copy consructor Bureaucrat called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat &other)
{
    if (this != &other)
    {
        this->_grade = other.getGrade();
    }
    return(*this);
    std::cout << "Assignment operator Bureaucrat called" << std::endl;
}

void    Bureaucrat::incrementGrade()
{
    if (_grade == 150)
        throw (TooLowException());
    this->_grade--;
}

void    Bureaucrat::decrementGrade()
{
    if (_grade == 1)
        throw (TooHighException());
    this->_grade++;
}

int     Bureaucrat::getGrade(void) const
{
    return(this->_grade);
}

const std::string&  Bureaucrat::getName(void) const
{
    return(this->_name);
}

std::ostream & operator<<(std::ostream & stream, const Bureaucrat & inst)
{
    stream << "bureaucrat name " << inst.getName() << " Bureaucrat grade: "<< inst.getGrade(); 
    return (stream);
}