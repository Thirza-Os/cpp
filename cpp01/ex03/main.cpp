#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	// Human A will always have a weapon: Reference is used for an already existing weapon.
	// Reference to the weapon is passed as parameter.
	{
		std::cout << 	"HUMAN A" << std::endl;
		Weapon club = Weapon("cruse spiked club");
		std::cout << std::endl;

		HumanA bob("Bob", club);
		std::cout << std::endl;

		bob.attack();
		club.setType("some other type of club");
		bob.attack();
		std::cout << std::endl;

	}

	// Human B does not always have a weapon: a pointer can point to null.
	// An extra function is used to set the weapon.
	{
		std::cout << std::endl;
		std::cout << 	"HUMAN B" << std::endl;
		Weapon club = Weapon("crude spiked club");
		std::cout << std::endl;

		HumanB jim("Jim");
		std::cout << std::endl;

		// jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.setWeapon(club);
		jim.attack();
		std::cout << std::endl;

	}
	return (0);
}

// int main(void)
// {
// 	main2();
// 	while(1);
// }