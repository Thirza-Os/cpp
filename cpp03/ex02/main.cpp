#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    // ClapTrap();
    ClapTrap THIRZA("THIRZA");
    // ScavTrap thirza; //making scavtrap with scavtrap constructor -> without name so will output empty exit
    ScavTrap JELMER("JELMER"); 
    // FragTrap MO; // making fragtrap with fragtrap constructor -> without name so will output empty exit
    FragTrap MO = FragTrap("MO");
    FragTrap test(MO);
    MO.operator=(test);
    MO = test;
    std::cout << "JELMER attack points		" << JELMER.getAttackDamage() << std::endl;
    std::cout << "JELMER hit points		" << JELMER.getHitPoints() << std::endl;
    std::cout << "JELMER energy points		" << JELMER.getEnergyPoints() << std::endl;
    std::cout << "THIRZA attack points		" << THIRZA.getAttackDamage() << std::endl;
    std::cout << "THIRZA hit points		" << THIRZA.getHitPoints() << std::endl;
    std::cout << "THIRZA energy points		" << THIRZA.getEnergyPoints() << std::endl;
    std::cout << "MO attack points		" << MO.getAttackDamage() << std::endl;
    std::cout << "MO hit points			" << MO.getHitPoints() << std::endl;
    std::cout << "MO energy points		" << MO.getEnergyPoints() << std::endl;

   THIRZA.attack("THIRZA");
   JELMER.takeDamage(20);
    MO.highFivesGuys();
    JELMER.beRepaired(2);
    JELMER.guardGate();
    MO.attack("JELMER");
    JELMER.takeDamage(30);

    std::cout << "JELMER attack points		" << JELMER.getAttackDamage() << std::endl;
    std::cout << "JELMER hit points		" << JELMER.getHitPoints() << std::endl;
    std::cout << "JELMER energy points		" << JELMER.getEnergyPoints() << std::endl;
    std::cout << "THIRZA attack points		" << THIRZA.getAttackDamage() << std::endl;
    std::cout << "THIRZA hit points		" << THIRZA.getHitPoints() << std::endl;
    std::cout << "THIRZA energy points		" << THIRZA.getEnergyPoints() << std::endl;
    std::cout << "MO attack points		" << MO.getAttackDamage() << std::endl;
    std::cout << "MO hit points			" << MO.getHitPoints() << std::endl;
    std::cout << "MO energy points		" << MO.getEnergyPoints() << std::endl;
    THIRZA.attack("JELMER");
    JELMER.takeDamage(20);
    JELMER.attack("MO");

    return (0);
}