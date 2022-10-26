#include <iostream>
#include <string>
#include <cctype>

int main(int argc, char *argv[])
{
	std::string	ret;
	int		i;
	int		counter;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		i = 1;
		counter = 0;
		while (i < argc)
		{
			if (argv[i][0] == '\0')
			{
				counter++;
				i++;
			}
			else
				break;
		}
		if (counter == argc - 1)
			return (0);
		if (argc > 1)
		{
			for (i = 1; i < argc; i++)
			{
				if (argv[i] == '\0')
					i++;
				ret = ret + argv[i];
			}
			std::transform(ret.begin(), ret.end(), ret.begin(), ::toupper);
			std::cout << ret << std::endl;
		}
	return (0);
}
