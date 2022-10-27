#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap constructor is called! " << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_attackDamage = 30;
	this->_energyPoints = 100;
	this->_hitPoints = 100;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap deconstructor is called! " << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap& other)
{
    if (this != &other)
    {
        this->_name = other._name;
        this->_attackDamage = other._attackDamage;
        this->_energyPoints = other._energyPoints;
        this->_hitPoints = other._hitPoints;
    }
    std::cout << "assignment operator called" << std::endl;
    return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "High fives plszssszsz?!?!??" << std::endl;
}
