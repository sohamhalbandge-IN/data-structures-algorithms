#include <iostream>
int main() {
    int num1, num2;

    std::cout << "Enter number1: ";
    std::cin >> num1; 

    std::cout << "Enter number2: ";
    std::cin >> num2;

    std::cout << "Sum of " << num1 << " and " << num2 << " is " << num1 + num2 << std::endl;
    return 0;
}