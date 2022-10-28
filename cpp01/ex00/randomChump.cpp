#include "Zombie.hpp"

// random chump creates a zombie class on the stack (no dynamic memory allocation)
void    RandomChump(std::string name)
{
    Zombie idiot = Zombie(name);
    idiot.announce();
    return ;
}
