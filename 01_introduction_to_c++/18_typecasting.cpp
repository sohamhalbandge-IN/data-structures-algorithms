#include <iostream>
int main() {
    // int, float, bool, char -> typecasting
    float x = 7.1;
    int y;

    // typecasting
    y = (int)x;
    std::cout << y << std::endl; // 7

    bool flag = false;
    std::cout << flag + 9 << std::endl; // 9 since flag is 0 so 0 + 9 = 9

    std::cout << (int)'a' << std::endl; // 97

    std::cout << (int)('a' + 10) << std::endl; // 107

    return 0;
}