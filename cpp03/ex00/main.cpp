#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap THIRZA("THIRZA");
    ClapTrap JELMER("JELMER");
    ClapTrap MO("MO");
    // MO = JELMER;
    // example3 = example_2;

    std::cout << "JELMER attack points     " << JELMER.getAttackDamage() << std::endl;
    std::cout << "THIRZA attack points     " << THIRZA.getAttackDamage() << std::endl;
    std::cout << "MO attack points         " << MO.getAttackDamage() << std::endl;

    std::cout << "JELMER hit points        " << JELMER.getHitPoints() << std::endl;
    std::cout << "THIRZA hit points        " << THIRZA.getHitPoints() << std::endl;
    std::cout << "MO hit points            " << MO.getHitPoints() << std::endl;

    std::cout << "JELMER energy points     " << JELMER.getEnergyPoints() << std::endl;
    std::cout << "THIRZA energy points     " << THIRZA.getEnergyPoints() << std::endl;
    std::cout << "MO energy points         " << MO.getEnergyPoints() << std::endl;

    THIRZA.attack("JELMER");
    JELMER.takeDamage(0);
    JELMER.attack("THIRZA");
    THIRZA.takeDamage(0);
    MO.beRepaired(2);

    std::cout << "JELMER hit points        " << JELMER.getHitPoints() << std::endl;
    std::cout << "THIRZA hit points        " << THIRZA.getHitPoints() << std::endl;
    std::cout << "MO hit points            " << MO.getHitPoints() << std::endl;

    std::cout << "JELMER energy points     " << JELMER.getEnergyPoints() << std::endl;
    std::cout << "THIRZA energy points     " << THIRZA.getEnergyPoints() << std::endl;
    std::cout << "MO energy points         " << MO.getEnergyPoints() << std::endl;
    
    for (int i = 0; i < 10; i++)
        MO.beRepaired(2);

    std::cout << "JELMER hit points        " << JELMER.getHitPoints() << std::endl;
    std::cout << "THIRZA hit points        " << THIRZA.getHitPoints() << std::endl;
    std::cout << "MO hit points            " << MO.getHitPoints() << std::endl;

    std::cout << "JELMER energy points     " << JELMER.getEnergyPoints() << std::endl;
    std::cout << "THIRZA energy points     " << THIRZA.getEnergyPoints() << std::endl;
    std::cout << "MO energy points         " << MO.getEnergyPoints() << std::endl;
    

    return (0);
}