#include "stream.hpp"
//fix naming
//fix endl

std::string	find_replace(std::string & line, std::string & str_one, std::string & str_two)
{
	std::size_t found = std::string::npos;
	
	while((found = line.find(str_one)) != std::string::npos)
	{
		line.erase(found, str_one.length());
		line.insert(found, str_two);
	}
	return(line);
}

int	open_dup_file(char *argv, std::string str_one, std::string str_two)
{
	std::string 	line;
	std::string 	name = argv;
	name.append(".replace");

	std::ifstream 	in_file(argv);
	std::ofstream 	out_file(name);

	if (in_file && out_file)
	{
		while(std::getline(in_file, line))
		{
			line = find_replace(line, str_one, str_two);
			out_file << line << "\n";
		}
	}
	else
		return (1);
	in_file.close();
	out_file.close();
	std::cout << str_one << " " << str_two << std::endl;
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "incorrect input" << std::endl;
		return (1);
	}
	std::string str_one(argv[2]);
	std::string str_two(argv[3]);
	if (!str_one.empty() && !str_two.empty())
		open_dup_file(argv[1], str_one, str_two);
	else
	{
		std::cout << "incorrect input" << std::endl;
		return (1);
	}
			

	
}