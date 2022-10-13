#include "Zombie.hpp"

// new returns a pointer with allocated space for Zombie size
Zombie  *newZombie(std::string name)
{
    Zombie *new_zombie = new Zombie(name);
    return (new_zombie);
}