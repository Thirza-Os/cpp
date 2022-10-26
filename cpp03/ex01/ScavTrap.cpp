#include "ScavTrap.hpp"

	ScavTrap::ScavTrap()
	{	
		std::cout << "ScavTrap constructor is called! " << std::endl;
	}

	ScavTrap::ScavTrap(std::string name)
	{	
		this->_attackDamage	= 20;
    	this->_energyPoints	= 50;
    	this->_hitPoints	= 100;
		std::cout << "ScavTrap constructor is called! " << name << std::endl;
	}

	ScavTrap::~ScavTrap()
	{
		std::cout << "ScavTrap destructor is called!" << std::endl;
	}

void    ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0)
	{
		std::cout << this->_name << "		ScavTrap attacks " << target << " " << this->_attackDamage << " amount of damage!!!" << std::endl;
		this->_energyPoints--;
	}
	else
		std::cout << this->_name << "		ScavTrap not enough energy points brahvosky" << std::endl;
}

void 	ScavTrap::guardGate()
{
	std::cout << "Scavvy is in guard keeping mode" << std::endl;
}