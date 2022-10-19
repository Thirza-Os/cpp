#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

// by making weapon a reference (&) it will ref to the object. If not, the object stays the same after calling settype.

class HumanA
{
private:
	std::string _name;
	Weapon	&_weapon_a;

public:
	HumanA(std::string name, Weapon &weapon_a);
	~HumanA();

	void	attack(void);
};

#endif