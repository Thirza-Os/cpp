#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
private:
    const std::string   name;
    int                 _grade;

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
    Bureaucrat(int grade);
    Bureaucrat(Bureaucrat&  copy);
    Bureaucrat& operator=(Bureaucrat &other);
    ~Bureaucrat();

    // getters/setters
    int         getGrade(void) const;
    const       std::string& getName(void) const;

    // public member functions
    void        incrementGrade();
    void        decrementGrade();
};
    // << operator overload
std::ostream & operator<<(std::ostream & stream, const Bureaucrat &inst);

#endif