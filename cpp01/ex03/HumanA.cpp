#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon_a): _name(name), _weapon_a(weapon_a)
{
	this->_weapon_a = weapon_a;
	this->_name = name;
}

HumanA::~HumanA()
{
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_weapon_a.getType() << std::endl;
}