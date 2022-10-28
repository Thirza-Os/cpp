#include <iostream>
#include <string>
#include <cctype>

int main(int argc, char *argv[])
{
	std::string	buffer;

	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		if (argv[i] == '\0')
			i++;
		buffer += argv[i];
	}
	for (size_t i = 0; i < buffer.length(); i++)
		std::cout << (char)std::toupper(buffer[i]);
	if (!buffer.empty())
		std::cout << std::endl;
	return (0);
}
