#include <iostream>
#include <string>

class Weapon
{
private:
	std::string	type;

public:
	Weapon();
	~Weapon();

	Weapon&	getType();
	void	setType(Weapon& ref_weapon);
};
