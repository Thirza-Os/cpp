#include "Bureaucrat.hpp"

// build a good test main!!

int main()
{
    // number to high
   try 
   {
        Form form1("form1", 0, 10);
   }
   catch (std::exception & e)
   {
        std::cout << e.what();
   }
   std::cout << std::endl;

   // number too low
   try 
   {
        Form form2("form2", 20, 200);
   }
   catch (std::exception & e)
   {
        std::cout << e.what();
   }
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "....................................................." << std::endl;

    // testing operator overload
     Form form3("Form3", 30, 40);
     std::cout << form3 << std::endl;

    std::cout << std::endl;
    std::cout << "....................................................." << std::endl;

    // testing valid sign
     Bureaucrat karel(9, "Karel");
     form3.beSigned(karel);

    std::cout << std::endl;
    std::cout << "....................................................." << std::endl;

//     // testing invalid sign
     Form form4("Form3", 30, 40);
     Bureaucrat bennie(140, "Bennie");
     try 
     {
          form4.beSigned(bennie);
     }
     catch(std::exception & e)
     {
          std::cout << e.what();
     }
}