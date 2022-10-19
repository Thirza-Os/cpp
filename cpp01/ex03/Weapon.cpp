#include "Weapon.hpp"

Weapon::Weapon(std::string const & type): _type(type)
{
	std::cout << "constructor weapon called" << std::endl;
	this->_type = type;
}

Weapon::~Weapon()
{
	std::cout << "destructor weapon called" << std::endl;
}

std::string const & Weapon::getType() const
{
	return(this->_type);
}

void Weapon::setType(std::string type_name)
{
	this->_type = type_name;
}