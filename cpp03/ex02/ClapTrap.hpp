#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

// SUPER CLASS
class ClapTrap
{
protected:
    std::string	_name;
    int			_hitPoints;
    int			_energyPoints;
    int			_attackDamage;

public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap& copy);
    ~ClapTrap();
    ClapTrap&   operator=(ClapTrap& other);

    void    attack(const std::string& target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);

    //getters
    int     getHitPoints(void);
    int     getEnergyPoints(void);
    int     getAttackDamage(void);
};

#endif