#include "Base.hpp"
#include "FirstEmpty.hpp"
#include "SecondEmpty.hpp"
#include "ThirdEmpty.hpp"

#include <cstdlib>
#include <iostream>
#include <cstdio>

static Base *generate(void)
{
    srand (time(NULL));
    int i = rand() % 4;

    if (i == 0)
    {
        std::cout << "Returning Pointer to Base of FirstEmpty" << std::endl;
        return (new FirstEmpty);
    }
    else if (i == 1)
    {
        std::cout << "Returning Pointer to Base of SecondEmpty" << std::endl;
        return (new SecondEmpty);
    }
    else
    {
        std::cout << "Returning Pointer to Base of ThirdEmpty" << std::endl;
        return (new ThirdEmpty);
    }
}

// dynamic cast: Its purpose is to ensure that the result of the type conversion points 
// to a valid complete object of the destination pointer type

// test if it does not return a NULL pointer
static void identify(Base* p)
{
    if (dynamic_cast<FirstEmpty *>(p))
        std::cout << "Type Pointer: First Empty" << std::endl;
    else if (dynamic_cast<SecondEmpty *>(p))
        std::cout << "Type Pointer: Second Empty" << std::endl;
    else if (dynamic_cast<ThirdEmpty *>(p))
        std::cout << "Type Pointer: Third Empty" << std::endl;
}

static void identify(Base& p)
{
    Base first;
    Base second;
    Base third;

    try {
        first = dynamic_cast<FirstEmpty&>(p);
        std::cout << "Type ref: First Empty" << std::endl; 
        }
    catch (std::exception &e){};
     try {
        second = dynamic_cast<SecondEmpty&>(p);
        std::cout << "Type ref: Second Empty" << std::endl; 
        }
    catch (std::exception &e){};
     try {
        third = dynamic_cast<ThirdEmpty&>(p);
        std::cout << "Type ref: third Empty" << std::endl; 
        }
    catch (std::exception &e){};
}

int main(void)
{
    Base *ptr = generate();
    // Base *ref = generate();

    // std::cout << ptr << std::endl;

    identify(ptr);
    identify(*ptr);

    delete (ptr);
    // delet(ref);

    return(0);
}

// int main(void)
// {
//     main2();
//     while(1);
//     return (0);
// }