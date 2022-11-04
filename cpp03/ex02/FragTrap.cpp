#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << "FragTrap constructor is called! " << std::endl;
}

// explicitely calling claptrap with parameter otherwise without is called
FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_attackDamage = 30;
	this->_energyPoints = 100;
	this->_hitPoints = 100;
    std::cout << "FragTrap constructor with parameter is called! " << name << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy)
{
    std::cout << "copy constructor FragTrap called" << std::endl;
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

FragTrap::~FragTrap()
{
	std::cout << "FragTrap deconstructor is called! " << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "High fives plszssszsz?!?!??" << std::endl;
}
