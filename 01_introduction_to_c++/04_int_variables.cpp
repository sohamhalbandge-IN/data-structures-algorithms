#include <iostream>
int main() {
    // int variable
    int num; // variable declaration
    num = 7; // assigning value 7 to variable

    // we can also declare and assign value in the same line
    // int num = 7;

    std::cout << num << std::endl; // 7

    num = 10; // re-assigning value 10 to variable
    std:: cout << num << std::endl; // 10

    num = 19; // re-assigning value 19 to variable
    std:: cout << num << std::endl; // 19

    // updation
    num = num + 10; // num = 19 + 10

    // we can also write in this way
    // num += 10 -> this mean num = num + 10 (different way of writing)

    std:: cout << num << std::endl; // 29

    return 0;
}