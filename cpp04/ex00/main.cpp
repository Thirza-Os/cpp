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
    const Animal* pointerDog = new Dog();
    const Animal* pointerCat = new Cat();
    const WrongAnimal* pointer_WrongAnimal = new WrongCat();

    std::cout << meta->getType() << " " << std::endl;
    std::cout << pointer_WrongAnimal->getType() << " " << std::endl;
    std::cout << pointerCat->getType() << " " << std::endl;
    std::cout << pointerDog->getType() << " " << std::endl;

    pointerCat->makeSound(); //will output the cat sound!
    pointerDog->makeSound();
    pointer_WrongAnimal->makeSound();
    meta->makeSound();
    return 0;
}