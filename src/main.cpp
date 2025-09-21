#include <iostream>

#include <function.hpp>

int main() {
    unsigned int firstTerm, lastTerm;
    std::cin >> firstTerm >> lastTerm;
    std::cout << Function(firstTerm, lastTerm);
    return 0;
}
