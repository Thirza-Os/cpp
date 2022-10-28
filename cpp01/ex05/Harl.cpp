#include "Harl.hpp"
// pointer to function: points to a function of a specific type.
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
        // pointer called point_t that points to the four different member functions
        void (Harl::*point_t[4])(void) = {
        &Harl::warning,
        &Harl::info,
        &Harl::debug,
        &Harl::error  
    };
    
    // string to traverse through in order to get the corresponding function (same order as above)
    std::string levels[] = {"WARNING", "INFO", "DEBUG", "ERROR"};

    // loop through the levels, execute the corresponding function with correct array index
    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
            (this->*point_t[i])();
    }
}
