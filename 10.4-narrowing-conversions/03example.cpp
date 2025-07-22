#include <iostream>

void print(unsigned int u) // unsigned
{
    std::cout << u << '\n';
}

int main()
{
    std::cout << "Enter an integral value: ";
    int n{};
    std::cin >> n;
    print(n);

    return 0;
}
