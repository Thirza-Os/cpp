#include "Bureaucrat.hpp"

// build a good test main!!

int main()
{
    // number to high
   try 
   {
        Bureaucrat buro(-10, "Thirza");
   }
   catch (std::exception & e)
   {
        std::cout << e.what();
   }
   std::cout << std::endl;

    // number too low
   try 
   {
        Bureaucrat buro(900, "Thirza");
   }
   catch (std::exception & e)
   {
        std::cout << e.what();
   }
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "....................................................." << std::endl;

    // testing operator overload
   Bureaucrat buro(9, "Thirza");
   std::cout << buro << std::endl;

    std::cout << std::endl;
    std::cout << "....................................................." << std::endl;

    // testing too low without catching
    // Bureaucrat karel(900, "Karel");
    // std::cout << karel << std::endl;

    std::cout << std::endl;
    std::cout << "....................................................." << std::endl;

    // testing too high without catching
    Bureaucrat bennie(-9, "Bennie");
    std::cout << bennie << std::endl;
}