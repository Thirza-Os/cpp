#include <string>
#include <iostream>

// ref can not ref to a void.
// ref is a constant.
// ref has no identity: it takes the address of the object it is bound to.

int	main(void)
{
	std::string 	brain = "HI THIS IS BRAIN";

	std::string*	stringPTR = &brain;
	std::string&	stringREF = brain;

	std::cout << &brain << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << brain << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}