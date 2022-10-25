#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name)
{
    this->_attackDamage	= 0;
    this->_energyPoints	= 10;
    this->_hitPoints	= 10;
    std::cout << this->_name << " joined the party" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << this->_name << " exits the party" << std::endl;
}

// call with ClapTrap sample_2(sample_1) or ClapTrap example3 = example_2;
// new instance
ClapTrap::ClapTrap(const ClapTrap& copy)
{
    std::cout << "copy constructor called" << std::endl;
    this->_name = copy._name;
    this->_attackDamage = copy._attackDamage;
    this->_energyPoints = copy._energyPoints;
    this->_hitPoints = copy._hitPoints;
    // *this = copy;
}

//call with example3 = example_2;
ClapTrap& ClapTrap::operator=(ClapTrap& other)
{
    std::cout << "assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_name = other._name;
        this->_attackDamage = other._attackDamage;
        this->_energyPoints = other._energyPoints;
        this->_hitPoints = other._hitPoints;
    }
    return (*this);
}

void    ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints)
	{
		std::cout << this->_name << " attacks " << target << " " << this->_attackDamage << " amount of damage!!!" << std::endl;
		this->_energyPoints--;
	}
	else
		std::cout << " Not enough energy points brahvosky" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_name << " takes " << amount  << " amount of damage!!!" << std::endl;
	int new_hit = this->_hitPoints - amount;
	if (new_hit > 0)
		this->_hitPoints = new_hit;
	else 
		std::cout << "AHW NAAHHH " << this->_name << " died :(" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0)
	{
		std::cout << this->_name << " gets " << amount << " of points back" << std::endl;
		int new_hit = this->_hitPoints + amount;
		this->_hitPoints = new_hit;
		this->_energyPoints--;
	}
	else
		std::cout << " Not enough energypoints brah" << std::endl;
}