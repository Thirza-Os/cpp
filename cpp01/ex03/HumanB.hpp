#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string _name;
	// pointer to a weapon class oject (no memory allocation needed, stack allocated)
	Weapon	*_weapon_b;

public:
	// constructor with one parameter: the name
	HumanB(std::string name);
	~HumanB();

	//member functions
	void	attack(void);
	// set weapon function: in case humanB is armed
	void	setWeapon(Weapon& _weapon_b);
};

#endif