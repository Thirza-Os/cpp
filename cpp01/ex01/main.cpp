#include "Zombie.hpp"
//a pointer to a bound function may only be used to call the functionC/C++(300)
// means: missing ()

int main(void)
{
    int i;

    Zombie *zombie;
    zombie = zombieHorde(4, "hoi");

    for (i = 0; i < 4; i++)
    {
        zombie[i].announce();
    // delete zombie;
    }
    

    // delete zombie;
    // zombieHorde(4, "hoi");
    return (0);
}