#include "Iter.hpp"

int main (void)
{
    int intArr[3] = {1, 5, 8};
    char charArr[3] = {'A', 'B', 'C'};

    iter(intArr, 3, increment);
    iter(charArr, 3, increment);

    // pass by reference to the teplate function: referece uses their exact type.
    printArray(intArr);
    printArray(charArr);

}