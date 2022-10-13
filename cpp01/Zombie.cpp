#include "Zombie.hpp"

// const and dest are producers: they dont return (return to show you are done)

Zombie::Zombie(std::string name): _name(name)
{
    std::cout << "ZOMBIE TIMEEEE: " << this->_name << " has risen from the dead" << std::endl;
    return ;
}

Zombie::~Zombie()
{
    std::cout << "ZOMBIE OUT: " << this->_name << " was not a zombie after all, just didnt sleep well last night." <<std::endl;
}

void    Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}

