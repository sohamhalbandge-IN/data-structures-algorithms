#include <iostream>
int main() {
    // TODO: take input character from user and assign what number is the alphabetical order
    // for e.g. A -> 1, B -> 2, Z -> 26
    char ch;
    std::cout << "Enter capital alphabet: ";
    std::cin >> ch;

    int alphabet_order = (int)ch - 64;
    std::cout << "The alphabet " << ch << " is at " << alphabet_order << " position " << std::endl;

    return 0;
}