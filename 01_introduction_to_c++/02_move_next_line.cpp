#include <iostream>
int main() {
    // Output: Hello, World!Hello, C++
    std::cout << "Hello, World!";
    std::cout << "Hello, C++" << std::endl;

    // Output:
    // Hello, World!
    // Hello, C++

    // we can use either '\n' or std::endl
    std::cout << "Hello, World!" << '\n';
    std::cout << "Hello, C++" << std::endl;

    return 0;
}