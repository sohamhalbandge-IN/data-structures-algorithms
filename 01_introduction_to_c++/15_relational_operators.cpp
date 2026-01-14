#include <iostream>
int main() {
    // relational operators

    // <, <=, >, >=, ==, !=

    int x = 10;
    int y = 12;

    // the answer will be written in 0 and 1

    std::cout << (x < y) << std::endl; // 1
    std::cout << (x <= y) << std::endl; // 1
    std::cout << (x > y) << std::endl; // 0
    std::cout << (x >= y) << std::endl; // 0

    // checks whether x and y are both equal
    std::cout << (x == y) << std::endl; // 0

    // checks whether x is not equal to y
    std::cout << (x != y) << std::endl; // 1

    return 0;
}