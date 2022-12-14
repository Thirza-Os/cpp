#include "ZombieHorde.hpp"

// allocate N size on the heap in an array, fill array with named zombies
Zombie  *zombieHorde(int N, std::string name)
{
    int i;
    Zombie  *horde = new Zombie[N];

    for (i=0; i < N; i++)
    {
        horde[i].name_zombie(name);
    }
    return(horde);
}