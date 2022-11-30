#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(int grade, std::string name): _grade(grade), _name(name)
{
    if (grade > 150)
        throw (TooLowException());
    if (grade < 1)
        throw (TooHighException());
    std::cout << "Constructor Bureaucrat called" << std::endl;
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

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
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

// getters
const int& Bureaucrat::getGrade(void) const
{
    return(this->_grade);
}

const std::string&  Bureaucrat::getName(void) const
{
    return(this->_name);
}

//setters
void    Bureaucrat::setGrade(const int grade)
{
    this->_grade = grade;
}

std::ostream & operator<<(std::ostream & stream, const Bureaucrat & inst)
{
    stream << "bureaucrat name " << inst.getName() << " Bureaucrat grade: "<< inst.getGrade(); 
    return (stream);
}

// form function

void    Bureaucrat::signForm(Form &form)
{
    if (form.getIsSigned() == true)
        std::cout << this->_name << " signed " << form.getName() << " form" << std::endl;
}

void    Bureaucrat::executeForm(Form const & form)
{
    // only print if succesfull
    try
    {
        form.execute(*this);
        std::cout << this->getName() << " signed" << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
