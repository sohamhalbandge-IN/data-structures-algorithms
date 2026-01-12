#include <iostream>
int main() {
    int x = 5;
    int y = 2;

    std::cout << x + y << std::endl; // 7
    std::cout << x - y << std::endl; // 3
    std::cout << x * y << std::endl; // 10
    
    // when both operands are integer then result of division will also be an integer
    std::cout << x / y << std::endl; // 2

    return 0;
}