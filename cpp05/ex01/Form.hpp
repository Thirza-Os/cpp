#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        std::string	const	_name;
		int const			_gradeRequired;
		int const			_gradeExecute;
        bool				isSigned;

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
		// constructors/desctructor
		Form();
		Form(const std::string name, int gradeRequired, int gradeExecute);
		~Form();
		Form(const Form &copy);
		Form& operator=(const Form & other);

		// getters
		int const			&getGradeRequired(void) const;
		int const			&getGradeExecute(void) const;
		bool const			&getIsSigned(void) const;
		std::string const	&getName(void) const;

		// member function
		void 				beSigned(Bureaucrat &buro);
};

std::ostream & operator<<(std::ostream & stream, const Form &inst);

#endif