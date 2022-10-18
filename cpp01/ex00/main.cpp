#include "Zombie.hpp"

// When on the stack the constructor and destructor is called.
// When on the heap, constructor is called but the destructor has to be called manually (delete)

int main(void)
{
    Zombie  zombiones = Zombie("thirza");

    zombiones.announce();
    Zombie *another = newZombie("Jelmer");
    another->announce();
    delete (another);
    randomChump("idiot");
    return (0);
}