#include "ScavTrap.hpp"

// constructor/destructor exlicitely calling the parent constructor and explicitely child constructors.
	ScavTrap::ScavTrap(): ClapTrap()
	{	
		std::cout << "ScavTrap default constructor is called! " << std::endl;
	}

	ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy)
	{
		std::cout << "copy constructor ScavTrap called" << std::endl;
	}

	ScavTrap::ScavTrap(std::string name): ClapTrap(name)
	{	
		this->_attackDamage	= 20;
    	this->_energyPoints	= 50;
    	this->_hitPoints	= 100;
		std::cout << name << "		ScavTrap joined the party" << std::endl;
	}


	ScavTrap& ScavTrap::operator=(ScavTrap& other)
	{
		if (this != &other)
			*this = other;
		std::cout << "assignment operator called" << std::endl;
		return (*this);
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
		if (_energyPoints == 0)
			std::cout << this->_name << "is now out of energy points" << std::endl;
	}
	else
		std::cout << this->_name << "		ScavTrap not enough energy points brahvosky" << std::endl;
}

void 	ScavTrap::guardGate()
{
	std::cout << this->_name << "		Scavvy is in guard keeping mode" << std::endl;
}