#include <string>
#include <iostream>

// reference is an alias for an alrady existing variable

// ref can not ref to a void.
// ref is a constant.
// ref has no identity: it takes the address of the object it is bound to.

int	main(void)
{
	std::string 	brain = "HI THIS IS BRAIN";
	
	//string pointer
	std::string*	stringPTR = &brain;
	//string reference
	std::string&	stringREF = brain;

	// printing memory addresses
	std::cout << &brain << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	// printing values held by the string/pointer/ref
	std::cout << brain << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}