#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

int main()
{
    // number to high
//    try 
//    {
//         Form form1("form1", 0, 10);
//    }
//    catch (std::exception & e)
//    {
//         std::cout << e.what();
//         std::cout << std::endl;
//    }
//    std::cout << std::endl;

//    // number too low
//    try 
//    {
//         Form form2("form2", 20, 200);
//    }
//    catch (std::exception & e)
//    {
//         std::cout << e.what();
//         std::cout << std::endl;
//    }
//     std::cout << std::endl;
//     std::cout << std::endl;
//     std::cout << "....................................................." << std::endl;

//     // testing operator overload
//      Form form3("Form3", 30, 40);
//      std::cout << form3 << std::endl;

//     std::cout << std::endl;
//     std::cout << "....................................................." << std::endl;

//     // testing valid sign
//      Bureaucrat karel(9, "Karel");
//      form3.beSigned(karel);

//     std::cout << std::endl;
//     std::cout << "....................................................." << std::endl;

// //     // testing invalid sign
//      Form form4("Form3", 30, 40);
     Bureaucrat bennie(140, "Bennie");
//      try 
//      {
//           form4.beSigned(bennie);
//      }
//      catch(std::exception & e)
//      {
//           std::cout << e.what();
//           std::cout << std::endl;
     //  }

     // testing form types

     ShrubberyCreationForm shrubbyform("shrub");
     shrubbyform.exec();
     std::cout << shrubbyform.getName() << std::endl;

     RobotomyRequestForm robbie("rob");
     robbie.exec();
     std::cout << robbie.getName() << std::endl;

     PresidentialPardonForm pressie("prez");
     pressie.exec();
     std::cout << pressie.getName() << std::endl;

     Bureaucrat trySigning(1, "good");
     pressie.beSigned(trySigning);
     pressie.execute(trySigning);

     Bureaucrat trySigning2(100, "noGood");
     pressie.beSigned(trySigning2);
     try
     {
          pressie.execute(trySigning2);
     }
     catch(std::exception & e)
     {
          std::cout << e.what();
          std::cout << std::endl;
     }

     // approved trying sign form
     std::cout <<"THIS IS IT, SHOULD BE APPROVED" << std::endl;
     trySigning.executeForm(pressie);

     std::cout <<"THIS IS IT, SHOULD NOT BE APPROVED" << std::endl;
     trySigning2.executeForm(pressie);

}


// 1 will work, 160 will not work 

// int main(void)
// {
// 	try
// 	{
// 		Bureaucrat human(1, "oliver");
// 		ShrubberyCreationForm myTree("mjung");
// 		RobotomyRequestForm robotomy("tommy");
// 		PresidentialPardonForm pardon("nice dog");

// 		// 사람 등급 출력
// 		std::cout << human << std::endl;

// 		 // 각각의 폼에 대한 정보 출력
// 		std::cout << robotomy << std::endl;
// 		std::cout << myTree << std::endl;
// 		std::cout << pardon << std::endl;

// 		// 각각의 폼에 싸인 시도
// 		myTree.beSigned(human);
// 		robotomy.beSigned(human);
// 		pardon.beSigned(human);

// 		// 각각의 폼에 싸인이 되었는지 확인
// 		human.signForm(myTree);
// 		human.signForm(robotomy);
// 		human.signForm(pardon);

// 		// 싸인이 되어있고, 실행등급이 충분하다면 실행
// 		// 권한 부족시 예외 처리
// 		myTree.execute(human);
// 		robotomy.execute(human);
// 		pardon.execute(human);
// 	}
// 	catch (std::exception & e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}

// 	return (0);
// }