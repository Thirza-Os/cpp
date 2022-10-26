#include "ClapTrap.hpp"

									// CONSTRUCTERS/DESTRUCTOR

ClapTrap::ClapTrap(std::string name): _name(name)
{
    this->_attackDamage	= 0;
    this->_energyPoints	= 10;
    this->_hitPoints	= 10;
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
    this->_name = copy._name;
    this->_attackDamage = copy._attackDamage;
    this->_energyPoints = copy._energyPoints;
    this->_hitPoints = copy._hitPoints;
    std::cout << "copy constructor called" << std::endl;
    // *this = copy;
}

//call with example3 = example_2;
ClapTrap& ClapTrap::operator=(ClapTrap& other)
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

int     ClapTrap::getHitPoints(void)
{
		return (_hitPoints);
}

int     ClapTrap::getEnergyPoints(void)
{
		return (_energyPoints);
}

int     ClapTrap::getAttackDamage(void)
{
		return (_attackDamage);
}
