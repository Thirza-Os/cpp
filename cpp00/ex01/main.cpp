#include "PhoneBook.hpp"
// #include "Contact.hpp"

//instanciating PhoneBook will call te constructer automatically

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		PhoneBook	MyBook;
		std::string	input;

		MyBook.welcome();
		while (std::cout << "MyPhoneBook$> ", std::getline(std::cin, input))
		{
			if (!input.compare("ADD"))
				MyBook.add_contact();
			else if (!input.compare("SEARCH"))
				MyBook.search_contact();
			else if (!input.compare("EXIT"))
				return (0);
			else
				std::cout << "Please enter \"ADD\" \"SEARCH\" or \"EXIT\"" << std::endl;
		}
	}
	else
		for(int i = 1; i < argc; i++)
			std::cout << argv[i] << ";";
		std::cout << " Phonebook takes no arguments" << std::endl;
	return (0);
}
