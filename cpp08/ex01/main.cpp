#include "Span.hpp"

#include <iostream>

// int main(void)
// {
//     Span sp = Span(200);
//     std::cout << sp.getSize() << std::endl;

//     for (int i = 0; i < 1; i++)
//         sp.addNumber(9);
//     sp.addNumber(20);
//     sp.addNumber(10);
//     std::cout << "Span size:        " << sp.getSize() << std::endl;
//     std::cout << "Shortest span:    " << sp.shortestSpan() << std::endl;
//     std::cout << "Longest span:     " << sp.longestSpan() << std::endl;

//     sp.addRange(1, 100);

//     sp.printRange();

// }

int main()
{
Span sp = Span(100000);
sp.addNumber(-0);
sp.addNumber(0);
// sp.addNumber(17);
// sp.addNumber(8);
// sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
std::cout << (unsigned int)-INT_MIN + (unsigned int)INT_MAX << std::endl;
return 0;
}