#include "Phonebook.hpp"
#include "Contact.hpp"

int main(void)
{
	Phonebook	MyBook;
	std::string	input;

	while (std::cout << "MyPhonebook$> ", std::getline(std::cin, input))
	{
		if (input == "ADD")
			MyBook.add_contact();
	}
	return (0);
}
