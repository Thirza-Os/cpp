#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main (void)
{
     Intern someRandomIntern;
     Form* rrf;
     rrf = someRandomIntern.makeForm("robotomy request", "Bender");
     return (0);
}