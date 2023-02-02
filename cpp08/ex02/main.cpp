#include "MutantStack.hpp"
#include <list>

#include <iostream>
// int main()
// {
//     MutantStack<int> sp;
//     sp.push(1);
//     sp.push(2);

//     for (std::deque<int>::iterator it = sp.begin(); it != sp.end(); ++it) {
//     std::cout << *it << ' ';
//     }

//     int size = sp.size();


//     std::cout << size << std::endl;

// }

int main()
{
    // make stack
    MutantStack<int> first_stack;
    first_stack.push(5);
    first_stack.push(17);
    std::cout << "top of stack: " << first_stack.top() << std::endl;
    std::cout << "size of stack: " << first_stack.size() << std::endl;
    first_stack.pop();
    std::cout << "new size of stack: " << first_stack.size() << std::endl;
    std::cout << "new top of stack: " << first_stack.top() << std::endl;
    first_stack.push(3);
    first_stack.push(5);
    first_stack.push(737);
    // print stack
    std::cout << "printing entire first_stack" << std::endl;
    MutantStack<int>::iterator it = first_stack.begin();
    MutantStack<int>::iterator ite = first_stack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << "first_stack: " << *it << std::endl;
        ++it;
    }

    // make another stack
    MutantStack<int> another_stack;
    another_stack.push(6);
    another_stack.push(17);
    another_stack.push(30);
    another_stack.push(30);
    // //print
    std::cout << "printing second stack" << std::endl;
    MutantStack<int>::iterator it_2 = another_stack.begin();
    MutantStack<int>::iterator ite_2 = another_stack.end();
    while (it_2 != ite_2)
    {
        std::cout << "another_stack: " << *it_2 << std::endl;
        ++it_2;
    }

    // assignment operator
    another_stack = first_stack;
    // print
    std::cout << "printing another stack after assignment" << std::endl;
    MutantStack<int>::iterator it_3 = another_stack.begin();
    MutantStack<int>::iterator ite_3 = another_stack.end();
    while (it_3 != ite_3)
    {
    std::cout << "another_stack: " << *it_3 << std::endl;
    ++it_3;
    }

    return 0;
}

// int main()
// {
//     // make stack
//     std::list<int> first_stack;
//     first_stack.push_back(5);
//     first_stack.push_back(17);
//     std::cout << "top of stack: " << first_stack.front() << std::endl;
//     std::cout << "size of stack: " << first_stack.size() << std::endl;
//     first_stack.remove(17);
//     std::cout << "new size of stack: " << first_stack.size() << std::endl;
//     std::cout << "new top of stack: " << first_stack.front() << std::endl;
//     first_stack.push_back(3);
//     first_stack.push_back(5);
//     first_stack.push_back(737);
//     // print stack
//     std::cout << "printing entire first_stack" << std::endl;
//     std::list<int>::iterator it = first_stack.begin();
//     std::list<int>::iterator ite = first_stack.end();
//     ++it;
//     --it;
//     while (it != ite)
//     {
//         std::cout << "first_stack: " << *it << std::endl;
//         ++it;
//     }

//     // make another stack
//     std::list<int> another_stack;
//     another_stack.push_back(6);
//     another_stack.push_back(17);
//     another_stack.push_back(30);
//     another_stack.push_back(30);
//     // //print
//     std::cout << "printing second stack" << std::endl;
//     std::list<int>::iterator it_2 = another_stack.begin();
//     std::list<int>::iterator ite_2 = another_stack.end();
//     while (it_2 != ite_2)
//     {
//         std::cout << "another_stack: " << *it_2 << std::endl;
//         ++it_2;
//     }

//     // assignment operator
//     another_stack = first_stack;
//     // print
//     std::cout << "printing another stack after assignment" << std::endl;
//     std::list<int>::iterator it_3 = another_stack.begin();
//     std::list<int>::iterator ite_3 = another_stack.end();
//     while (it_3 != ite_3)
//     {
//     std::cout << "another_stack: " << *it_3 << std::endl;
//     ++it_3;
//     }

//     return 0;
// }