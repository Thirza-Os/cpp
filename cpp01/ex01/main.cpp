#include "ZombieHorde.hpp"
//a pointer to a bound function may only be used to call the functionC/C++(300)
// means: missing ()

// Call class: Zombie zombie (calls constructor and destructor)
// Call function: zombie = zombieHorde() (only calls constructor)

// New and delete calls constructor/destructor (malloc does not)

// for deleting an array use []

int main(void)
{
    // Zombie zombie;
    int i;

    Zombie *zombie;
    zombie = zombieHorde(4, "ZOMBIE-GUY");

    for (i = 0; i < 4; i++)
    {
        zombie[i].announce();
    }
    // delete entire array
    delete [] zombie;
    return (0);
}

                                // main for leaks checking

// int main(void)
// {
//     main2();
//     while(1);
//     return (0);
// }