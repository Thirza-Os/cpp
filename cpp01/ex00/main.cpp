#include "Zombie.hpp"

// When on the stack the constructor and destructor is called.
// When on the heap, constructor is called but the destructor has to be called manually (delete)

int main(void)
{
    // stack (initiate class with constructor)
    Zombie  thirza = Zombie("thirza");
    thirza.announce();

    Zombie  trying = Zombie("trying");
    trying.announce();


    // heap (initiate zombie with dynamic memory allocation)
    Zombie *dead_person = newZombie("Dead_person");
    dead_person->announce();
    delete (dead_person);

    // stack (same as first but announces itself)
    randomChump("idiot");
    return (0);
}