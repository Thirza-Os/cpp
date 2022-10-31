#include "ClapTrap.hpp"

									// CONSTRUCTERS/DESTRUCTOR
ClapTrap::ClapTrap()
{
	std::cout << "constructing clappy" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name)
{
    this->_attackDamage	= 0;
    this->_energyPoints	= 10;
    this->_hitPoints	= 10;
    std::cout << this->_name << "		joined the party (ClapTrap constructor)" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << this->_name << "ClapTrap destructor is called" << std::endl;
}

// call with ClapTrap sample_2(sample_1) or ClapTrap example3 = example_2;
// new instance
ClapTrap::ClapTrap(const ClapTrap& copy)
{
    this->_name = copy._name;
    this->_attackDamage = copy._attackDamage;
    this->_energyPoints = copy._energyPoints;
    this->_hitPoints = copy._hitPoints;
    std::cout << "copy constructor ClapTrap called" << std::endl;
    // *this = copy;
}

//call with example3 = example_2;
// Use of getters since the attributes are private: inaccessible outside the class
ClapTrap& ClapTrap::operator=(ClapTrap& other)
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
	}
	else
		std::cout << this->_name << "		Not enough energypoints brah" << std::endl;
}

									// GETTERS

std::string     ClapTrap::getName(void)
{
		return (this->_name);
}

int     ClapTrap::getHitPoints(void)
{
		return (this->_hitPoints);
}

int     ClapTrap::getEnergyPoints(void)
{
		return (this->_energyPoints);
}

int     ClapTrap::getAttackDamage(void)
{
		return (this->_attackDamage);
}
