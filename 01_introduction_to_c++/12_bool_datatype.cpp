#include <iostream>

int main() {
    // In C++, bool is a boolean type: it can store only two values:
    //   true  (logically "yes")
    //   false (logically "no")
    //
    // When you print a bool with std::cout (by default):
    //   true  is printed as 1
    //   false is printed as 0
    //
    // (You can change this behavior with std::boolalpha to print "true"/"false".)

    bool flag1 = true;   // explicitly true
    bool flag2 = false;  // explicitly false

    std::cout << flag1 << std::endl; // prints 1 (because flag1 is true)
    std::cout << flag2 << std::endl; // prints 0 (because flag2 is false)

    // Assigning numbers to a bool:
    //   - 0 becomes false
    //   - ANY non-zero value becomes true (1, 23, -5, 1000 ... all become true)
    //
    // So the value stored in a bool is still only true/false,
    // even if you assign a larger number.

    bool num1 = 23; // 23 is non-zero -> converted to true -> prints as 1
    bool num2 = 0;  // 0 -> converted to false -> prints as 0

    std::cout << num1 << std::endl; // prints 1
    std::cout << num2 << std::endl; // prints 0

    // If you want to see "true" and "false" instead of 1 and 0, use:
    // std::cout << std::boolalpha;

    return 0;
}