#include <iostream>
int main() {
    
    float num = 3.1415f;
    std::cout << num << std::endl;

    // if both the operands are integer datatype, then the result will also be an integer datatype
    std::cout << 5 / 2 << std::endl; // 2
    std::cout << 5.0f / 2 << std::endl; // 2.5
    std::cout << 5 / 2.0f << std::endl; // 2.5
    std::cout << 5.0f / 2.0f << std::endl; // 2.5

    return 0;
}