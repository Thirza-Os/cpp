#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap();
    ClapTrap THIRZA("THIRZA");
    ScavTrap thirza;
    ScavTrap JELMER("JELMER"); 
    JELMER.attack("THIRZA");
    THIRZA.takeDamage(0);
    THIRZA.attack("JELMER");
    JELMER.takeDamage(20);
    ScavTrap MO("MO"); 
    JELMER.attack("MO");

    return (0);
}