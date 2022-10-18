#include "Zombie.hpp"

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