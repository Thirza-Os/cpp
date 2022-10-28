#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{
	this->_name = name;
	std::cout << "constructer HumanB called" << std::endl;
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon_b = &weapon;
}

void	HumanB::attack(void)
{
	if (!_weapon_b)
		std::cout << this->_name << " is unarmed" << std::endl;
	else
	std::cout << this->_name << " attacks with their " << _weapon_b->getType() << std::endl;
}