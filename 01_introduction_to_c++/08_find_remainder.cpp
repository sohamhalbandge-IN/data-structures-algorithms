#include <iostream>
int main() {
    int dividend = 14;
    int divisor = 3;

    int quotient = dividend / divisor;

    // dividend = divisor * quotient + remainder
    int remainder = dividend - (divisor * quotient);

    std::cout << "The remainder = " << remainder << std::endl;

    return 0;
}