#include "ClapTrap.hpp"

									// CONSTRUCTERS/DESTRUCTOR
ClapTrap::ClapTrap()
{
    std::cout << this->_name << "Claptrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << this->_name << "		joined the party" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << this->_name << "		exits the party" << std::endl;
}

// call with ClapTrap sample_2(sample_1) or ClapTrap example3 = example_2;
// new instance
ClapTrap::ClapTrap(const ClapTrap& copy)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = copy;
}

//call with example3 = example_2;
// uses getters to get the private members Is this necessary???
ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if (this != &other)
    {
        this->_name = other.getName();
        this->_attackDamage = other.getAttackDamage();
        this->_energyPoints = other.getEnergyPoints();
        this->_hitPoints = other.getHitPoints();
    }
    std::cout << "assignment operator called" << std::endl;
    return (*this);
}

									// PUBLIC MEMBER FUNCTIONS

void    ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0)
	{
		std::cout << this->_name << "		attacks " << target << " " << this->_attackDamage << " amount of damage!!!" << std::endl;
		this->_energyPoints--;
		if (_energyPoints == 0)
				std::cout << this->_name << "is now out of energy points" << std::endl;
	}
	else
		std::cout << this->_name << "		Not enough energy points brahvosky" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_name << "		takes " << amount  << " amount of damage!!!" << std::endl;
	int new_hit = this->_hitPoints - amount;
	if (new_hit > 0)
		this->_hitPoints = new_hit;
	else 
		std::cout << "AHW NAAHHH " << this->_name << "		died :(" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0)
	{
		std::cout << this->_name << "		repairs itself and gets " << amount << " points back" << std::endl;
		int new_hit = this->_hitPoints + amount;
		this->_hitPoints = new_hit;
		this->_energyPoints--;
		if (_energyPoints == 0)
			std::cout << this->_name << "is now out of energy points" << std::endl;
	}
	else
		std::cout << this->_name << "		Not enough energypoints brah" << std::endl;
}

									// GETTERS

std::string     ClapTrap::getName(void) const
{
		return (this->_name);
}

int     ClapTrap::getHitPoints(void) const
{
		return (this->_hitPoints);
}

int     ClapTrap::getEnergyPoints(void) const 
{
		return (this->_energyPoints);
}

int     ClapTrap::getAttackDamage(void)const
{
		return (this->_attackDamage);
}


								// SETTERS

void    ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void    ClapTrap::setHitPoints(int hitPoints)
{
	this->_hitPoints = hitPoints;
}

void    ClapTrap::setEnergyPoints(int energyPoints)
{
	this->_energyPoints = energyPoints;
}

void    ClapTrap::setAttackDamage(int attackDamage)
{
	this->_attackDamage = attackDamage;
}