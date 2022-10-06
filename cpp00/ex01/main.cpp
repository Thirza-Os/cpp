#include "phonebook.hpp"

int main(void)
{
	Phonebook	MyBook;
	std::string	input;

    std::cout << "What is your name: ";
	std::cin >> input;

	// MyBook.num = 10;
	MyBook.Contacts[0].first_name = input;

	return (0);
}
