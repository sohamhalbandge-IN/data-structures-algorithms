#include <iostream>

int main() {
    int a = 10;   // '=' assigns 10 to variable a
    std::cout << "Initial value of a: " << a << std::endl;

    a += 5;       // a = a + 5
    std::cout << "After a += 5: " << a << std::endl;

    a -= 3;       // a = a - 3
    std::cout << "After a -= 3: " << a << std::endl;

    a *= 2;       // a = a * 2
    std::cout << "After a *= 2: " << a << std::endl;

    a /= 4;       // a = a / 4  (integer division)
    std::cout << "After a /= 4: " << a << std::endl;

    a %= 3;       // a = a % 3  (remainder; only for integers)
    std::cout << "After a %= 3: " << a << std::endl;

    return 0;
}