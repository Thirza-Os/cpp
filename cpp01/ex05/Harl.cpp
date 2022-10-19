#include "Harl.hpp"

// pointer to member functions are different from regular functions because
// member have a this-> function on which they rest.
//  int (A::*x)(void) = &A::f;
// [] for making multiple pointers

Harl::Harl()
{
}

Harl::~Harl()
{
}

void    Harl::error(void)
{
    std::cout << "Wth brah this is not acceptable" << std::endl;
}

void    Harl::debug(void)
{
     std::cout << "Wth brah plsz change this" << std::endl;   
}

void    Harl::info(void)
{
     std::cout << "Wth brah gimme info" << std::endl;   
}

void    Harl::warning(void)
{
    std::cout << "Wth brah I would not do that" << std::endl;
}

void    Harl::complain(std::string level)
{
    // void (Harl::*point[])() = 
    {
        &Harl::warning,
        &Harl::info,
        &Harl::debug,
        &Harl::error     
    };

    std::string levels[] = {"WARNING", "INFO", "DEBUG", "ERROR"};

    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
            this->*point[i]();
    }
}