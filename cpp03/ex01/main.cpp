#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    // ClapTrap();
    ClapTrap THIRZA("THIRZA");
    // ScavTrap thirza;
    ScavTrap JELMER("JELMER"); 
    std::cout << "JELMER attack points     " << JELMER.getAttackDamage() << std::endl;
    std::cout << "JELMER hit points        " << JELMER.getHitPoints() << std::endl;
    std::cout << "JELMER energy points     " << JELMER.getEnergyPoints() << std::endl;
    std::cout << "THIRZA attack points     " << THIRZA.getAttackDamage() << std::endl;
    std::cout << "THIRZA hit points        " << THIRZA.getHitPoints() << std::endl;
    std::cout << "THIRZA energy points     " << THIRZA.getEnergyPoints() << std::endl;

    THIRZA.attack("THIRZA");
    JELMER.takeDamage(20);
    JELMER.beRepaired(2);
    JELMER.guardGate();

    std::cout << "JELMER attack points     " << JELMER.getAttackDamage() << std::endl;
    std::cout << "JELMER hit points        " << JELMER.getHitPoints() << std::endl;
    std::cout << "JELMER energy points     " << JELMER.getEnergyPoints() << std::endl;
    std::cout << "THIRZA attack points     " << THIRZA.getAttackDamage() << std::endl;
    std::cout << "THIRZA hit points        " << THIRZA.getHitPoints() << std::endl;
    std::cout << "THIRZA energy points     " << THIRZA.getEnergyPoints() << std::endl;
    // THIRZA.attack("JELMER");
    // JELMER.takeDamage(20);
    // ScavTrap MO("MO"); 
    // JELMER.attack("MO");

    return (0);
}