#include "A_Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
    // Calling solely animal is not possible anymore, it is now only usefull as base class
    // const A_Animal* meta = new A_Animal();
    const A_Animal* pointerDog = new Dog();
    const A_Animal* pointerCat = new Cat();

    // std::cout << meta->getType() << " " << std::endl;
    std::cout << pointerCat->getType() << " " << std::endl;
    std::cout << pointerDog->getType() << " " << std::endl;

    pointerCat->makeSound(); //will output the cat sound!
    pointerDog->makeSound();
    // meta->makeSound();

    // delete meta;
    delete pointerDog;
    delete pointerCat;

    Cat normalCat;
    normalCat.setBrainIdea("o", 200);
    // deep copy verus shallow copy: deep copy copies pointer addresses

    return (0);
}


// int main(void)
// {
//     const Animal* AnimalArray[20];

//     for (int i = 0; i < 11; i++)
//         AnimalArray[i] = new Dog;
//     for (int i = 11; i <= 20; i++)
//         AnimalArray[i] = new Cat;

//     for (int i = 0; i <= 20; i++)
//         delete AnimalArray[i];

//     return (0);
// }

// int main(void)
// {
//     main2();
//     while(1);
// }