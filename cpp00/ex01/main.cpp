#include "PhoneBook.hpp"
#include "Contact.hpp"

//instanciating PhonBook will call te constructer automatically

int main(void)
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
	return (0);
}
