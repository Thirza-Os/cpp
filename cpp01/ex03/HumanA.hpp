#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

// by making weapon a reference (&) it will ref to the object. 
// If not, the object stays the same after calling settype:: thus always armed

class HumanA
{
private:
	std::string _name;
	// reference to a weapon class object
	Weapon	&_weapon_a;

public:
	// constructor taking two parameters: name and the weapon
	HumanA(std::string name, Weapon &weapon_a);
	~HumanA();

	//member function
	void	attack(void);
};

#endif