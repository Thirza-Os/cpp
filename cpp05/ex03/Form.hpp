#ifndef FORM_HPP
# define FORM_HPP
#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

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

		class NotSignedException : public std::exception
		{
		public:
			virtual const char *what() const throw()
			{
				return "This form is not signed";
			}
		};

		// constructors/desctructor
		Form();
		Form(std::string const name, int gradeRequired, int gradeExecute);
		virtual ~Form();
		Form(const Form &copy);
		Form& operator=(const Form & other);

		// getters
		int const			&getGradeRequired(void) const;
		int const			&getGradeExecute(void) const;
		bool const			&getIsSigned(void) const;
		std::string const	&getName(void) const;

		// member functions
		void 				beSigned(Bureaucrat &buro);

		void				execute(Bureaucrat const & executor) const;
		virtual void    	exec(void) const = 0;
};

std::ostream & operator<<(std::ostream & stream, const Form &inst);

#endif