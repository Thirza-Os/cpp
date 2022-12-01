#include "easyfind.hpp"
#include <string>
#include <iostream>
#include <stdexcept>

int main(void)
{
    std::string list = "hallo9";
    int i;

    // list.insert(1);
    // list.insert(8);
    // list.insert(6);
    // list.insert(2);
    i = 10;

    try { std::cout << *easyfind(list, i) << std::endl; }
    catch (std::invalid_argument &e){std::cerr << e.what() << std::endl;}

}
