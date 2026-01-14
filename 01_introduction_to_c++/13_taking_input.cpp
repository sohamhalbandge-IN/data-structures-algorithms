#include <iostream>
int main() {
    int x;
    std::cout << "Enter a number: ";
    std::cin >> x;  // user will give 'x' a value

    int y = x * x;
    std::cout << "Square of the number " << x << " is " << y << std::endl;

    return 0;
}