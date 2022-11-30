#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"

// otherwise: unknown typename "Form"
class Form;

class Bureaucrat
{
private:
    int                 _grade;
    const std::string   _name;

public:
    // exception classes overloading the std::exeption 
    class TooHighException : public std::exception
    {
    public:
        virtual const char *what() const throw()
        {
            return "This nr is too high";
        }
    };

    class TooLowException : public std::exception
    {
    public:
        virtual const char *what() const throw()
        {
            return "This nr is too low";
        }
    };

    // constructors/destructors
    Bureaucrat(int grade, std::string name);
    Bureaucrat(Bureaucrat&  copy);
    Bureaucrat& operator=(const Bureaucrat &other);
    ~Bureaucrat();

    // getters
    int const         &getGrade(void) const;
    std::string const &getName(void) const;

    // setters
    void    setGrade(const int grade);

    // public member functions
    void        incrementGrade();
    void        decrementGrade();

    // extra member function for form class
    void        signForm(Form &form);
    void        executeForm(Form const &form);
};
    // << operator overload
std::ostream & operator<<(std::ostream & stream, const Bureaucrat &inst);

#endif