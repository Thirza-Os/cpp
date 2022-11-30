#include "Form.hpp"

// constructors/destructors
Form::Form(std::string name, const int gradeRequired, const int gradeExecute): _name(name), _gradeRequired(gradeRequired), _gradeExecute(gradeExecute), isSigned(0)
{
    if (_gradeRequired > 150 || _gradeExecute > 150)
        throw (TooLowException());
    if (_gradeRequired < 1 || _gradeExecute < 1)
        throw (TooHighException());
    std::cout << "Consructor Form called" << std::endl;
}

Form::~Form()
{
    std::cout << "Deconsructor Form called" << std::endl;
}

Form::Form(const Form&  copy): _name(copy._name),  _gradeRequired(copy._gradeRequired), _gradeExecute(copy._gradeExecute),isSigned(copy.isSigned)
{
    *this = copy;
    std::cout << "Copy consructor Form called" << std::endl;
}

Form& Form::operator=(const Form &other)
{
    this->isSigned = other.isSigned;
    std::cout << "Assignment operator Form called" << std::endl;
    return(*this);
}

// getters/setters
int const			&Form::getGradeRequired(void) const
{
    return(this->_gradeRequired);
}

int const			&Form::getGradeExecute(void) const
{
    return(this->_gradeExecute);
}

bool const			&Form::getIsSigned(void) const
{
    return(this->isSigned);
}

std::string const	&Form::getName(void) const
{
    return(this->_name);
}

std::ostream & operator<<(std::ostream & stream, const Form &inst)
{
    std::cout << inst.getName() << " Execute grade:   " << inst.getGradeExecute() << " Required grade:   " << inst.getGradeRequired() << " Signed:   " << inst.getIsSigned() << std::endl;
    return (stream);
}

// Member functions
void    Form::beSigned(Bureaucrat &buro)
{
    if (buro.getGrade() < this->getGradeRequired())
    {
        this->isSigned = true;
        std::cout << this->_name << " signed by " << buro.getName() << " --> issigned is now set to: " << this->getIsSigned() << std::endl;
    }
    else
         std::cout << this->_name << " could not be signed by " << buro.getName() << " --> issigned is still set as " << this->getIsSigned() << std::endl;

}