#include "Phonebook.hpp"
#include "Contact.hpp"

int main(void)
{
	Phonebook	MyBook;
	std::string	input;

    MyBook.welcome();
	while (std::cout << "MyPhonebook$> ", std::getline(std::cin, input))
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
	return (0);
}
