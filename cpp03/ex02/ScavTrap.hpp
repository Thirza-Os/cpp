#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

//DERIVED CLASS

class ScavTrap: public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap&   operator=(ScavTrap& other);

	void    attack(const std::string& target);
	void 	guardGate();
};

#endif