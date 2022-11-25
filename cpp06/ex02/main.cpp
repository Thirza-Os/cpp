#include <cstdio>
#include <cstdlib>
#include <iostream>

#include "A.hpp"
#include "B.hpp"
#include "Base.hpp"
#include "C.hpp"

static Base *generate(void)
{
    srand(time(NULL));
    int i = rand() % 4;

    if (i == 0)
    {
        std::cout << "Returning Pointer to Base of A" << std::endl;
        return (new A);
    }
    else if (i == 1)
    {
        std::cout << "Returning Pointer to Base of B" << std::endl;
        return (new B);
    }
    else
    {
        std::cout << "Returning Pointer to Base of C" << std::endl;
        return (new C);
    }
}

// dynamic cast: Its purpose is to ensure that the result of the type conversion
// points to a valid complete object of the destination pointer type

// test if it does not return a NULL pointer
static void identify(Base *p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "Type Pointer: A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "Type Pointer: B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "Type Pointer: C" << std::endl;
}

static void identify(Base &p)
{
    try
    {
        (void)dynamic_cast<A &>(p);
        std::cout << "Type reference: A" << std::endl;
    }
    catch (std::bad_cast &e)
    {
    };
    try
    {
        (void)dynamic_cast<B &>(p);
        std::cout << "Type reference: B" << std::endl;
    }
    catch (std::bad_cast &e)
    {
    };
    try
    {
        (void)dynamic_cast<C &>(p);
        std::cout << "Type reference: C" << std::endl;
    }
    catch (std::bad_cast &e)
    {
    };
}

int main(void)
{
    Base *ptr;
    ptr = (Base *)generate();
    // Base *ref = generate();

    // std::cout << ptr << std::endl;

    identify(ptr);
    identify(*ptr);

    delete (ptr);
    // delet(ref);

    return (0);
}

// int main(void)
// {
//     main2();
//     while (1)
//         ;
//     return (0);
// }