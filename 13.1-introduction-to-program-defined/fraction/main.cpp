#include <iostream>
#include "Fraction.h"

// Declaring the function that was implemented apart
void printFraction(const Fraction& f);

int main()
{
    Fraction f{ 3, 4 };
    printFraction(f);  // O usa std::cout << f; si sobrecargaste <<

    return 0;
}

