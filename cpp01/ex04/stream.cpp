#include "Stream.hpp"

std::string	find_replace(std::string & line, std::string & str_one, std::string & str_two)
{
	std::size_t found = std::string::npos;	// find the end of the line
	while((found = line.find(str_one)) != std::string::npos)	// loop through line until end
	{
		line.erase(found, str_one.length());	// erase the old string.
		line.insert(found, str_two);			// paste the new string.
	}
	line.insert(0, "\n");	// add a new line before every new line input (gets erased by getline)
	return(line);
}

int	open_dup_file(char *argv, std::string str_one, std::string str_two)
{
	int i = 0;
	std::string 	line;
	std::string 	name = argv;
	name.append(".replace");

	std::ifstream 	in_file(argv);	// set instream (read) to first str in argv.
	std::ofstream 	out_file(name);	// set outstream (write) to the new str.

	if (in_file && out_file) // checkif the in and outfile exist.
	{
		while(std::getline(in_file, line))	//get lines from the infile, save in temp line string.
		{
			line = find_replace(line, str_one, str_two);
			out_file << line;	// add every line to the out_file.
			i++;
		}
	}
	else
		return (1);
	in_file.close();	//don't forget to close the files when done!
	out_file.close();
	return (1);
}

// program that accepts three parameters: filnename, s1, s2.
int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "incorrect input" << std::endl;
		return (1);
	}
	// Make strings of input
	std::string str_one(argv[2]);
	std::string str_two(argv[3]);
	// check if the strings have input
	if (!str_one.empty() && !str_two.empty())
		open_dup_file(argv[1], str_one, str_two);
	else
	{
		std::cout << "incorrect input" << std::endl;
		return (1);
	}
}