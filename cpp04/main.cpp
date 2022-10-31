#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

// int main(void)
// {
//     Animal firstAnimal;
//     Dog     firstDog;
//     Cat     firstCat;

//     firstAnimal.makeSound();
//     firstDog.makeSound();
//     firstCat.makeSound();

//     std::string info = firstAnimal.getType();
//     std::cout << "firstAnimal has this type:    " << info << std::endl;

//     std::string infoDog = firstDog.getType();
//     std::cout << "firstDog has this type:       " << infoDog << std::endl;

//     std::string infoCat = firstCat.getType();
//     std::cout << "firstCat has this type:       " << infoCat << std::endl;


//     // Animal();
// }

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
const WrongAnimal* k = new WrongCat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout << k->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
k->makeSound();
meta->makeSound();
return 0;
}