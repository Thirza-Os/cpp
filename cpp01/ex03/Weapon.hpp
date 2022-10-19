#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
private:
	std::string	_type;

public:
	Weapon(std::string const & type);
	~Weapon();

	void					setType(std::string type_name);
	std::string const & 	getType() const;
};

#endif