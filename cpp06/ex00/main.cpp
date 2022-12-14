#include "Convert.hpp"
#include "Print.hpp"
#include <string>
#include <iostream>

int main(int argc, char *argv[])
{
    if (argc != 2 || argv[1][0] == '\0')
    {
        std::cerr << " Not valid input" << std::endl;
        return (1);
    }
    std::string input(argv[1]);
    Convert Conv(input);
    if (!Conv.ConvertInput())
    {
        std::cerr << "Not a valid input" << std::endl;
        exit (1);
    }
    Print print(input, Conv.getType());
    if (!print.savePrint())
    {
        std::cerr << "Not a valid input: Out of range" << std::endl;
        exit (1);
    }

}