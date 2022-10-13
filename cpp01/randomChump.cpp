#include "Zombie.hpp"

void    randomChump(std::string name)
{
    Zombie idiot = Zombie(name);
    idiot.announce();
    return ;
}
