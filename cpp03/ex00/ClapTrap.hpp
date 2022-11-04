#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
private:
    std::string	_name;
    int			_hitPoints;
    int			_energyPoints;
    int			_attackDamage;

public:
    // constructors/destructors
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap& copy);
    ~ClapTrap();
    ClapTrap&   operator=(const ClapTrap& other);

    // member functions
    void    attack(const std::string& target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);

    //getters
    // used to access the private member functions from outside the class
    std::string getName(void) const;
    int         getHitPoints(void) const;
    int         getEnergyPoints(void) const;
    int         getAttackDamage(void) const;

    // setters
    // used to set member functions
    void    setName(std::string name);
    void    setHitPoints(int hitPoints);
    void    setEnergyPoints(int energyPoints);
    void    setAttackDamage(int attackDamage);


};

#endif