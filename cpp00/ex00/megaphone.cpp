#include <iostream>
#include <string>
#include <cctype>

int main2(int argc, char *argv[])
{
	std::string	ret;
	int		i;

	if (argc > 1)
	{
		if (argv[1][0] == '\0')
			return (0);
		else if (argc == 1)
			std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		else
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
	}
	return (0);
}
