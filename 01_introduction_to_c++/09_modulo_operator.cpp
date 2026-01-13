#include <iostream>

int main() {
    // MODULO (%) in C++:
    // The modulo operator gives the REMAINDER after integer division.
    //
    // Think: a = (a / b) * b + (a % b)
    // where (a / b) is INTEGER division (it truncates toward zero in C++).
    //
    // Important rules (when b != 0):
    // 1) If a > b  : remainder is what's left after dividing a by b.
    // 2) If a == b : remainder is 0 (because it divides perfectly).
    // 3) If a < b  : remainder is a (because b doesn't fit even once).
    //
    // SIGN rule in C++ (very important):
    // - The remainder has the SAME SIGN as the LEFT operand (a).
    //   So:
    //     a % b  and  a % (-b)  have the same sign (because 'a' didn't change)
    //     (-a) % b is negative (because 'a' is negative)

    // Example: 7 / 4 = 1 (integer division), remainder = 7 - 1*4 = 3
    std::cout << 7 % 4 << std::endl; // 3

    // Example: 9 / 9 = 1, remainder = 9 - 1*9 = 0
    // Whenever a is exactly divisible by b, remainder is 0.
    std::cout << 9 % 9 << std::endl; // 0

    // If a < b: b fits 0 times, so remainder is just a.
    // Example: 2 / 4 = 0, remainder = 2 - 0*4 = 2
    std::cout << 2 % 4 << std::endl;  // 2
    std::cout << 2 % 20 << std::endl; // 2

    // Changing the sign of the RIGHT operand (b) does NOT change the remainder's sign.
    // Because in C++, the sign of (a % b) follows 'a' (the left operand).
    //
    // 99 / 4 = 24, remainder = 99 - 24*4 = 3
    std::cout << 99 % 4 << std::endl;   // 3
    // 99 / -4 = -24 (truncated toward zero), remainder still ends up 3
    std::cout << 99 % (-4) << std::endl; // 3

    // If the LEFT operand is negative, the remainder will be negative (or zero).
    // (-99) / 4 = -24 (toward zero), remainder = -99 - (-24*4) = -99 + 96 = -3
    std::cout << (-99) % 4 << std::endl; // -3

    // Both negative: remainder still follows the LEFT operand, so it's negative.
    // (-99) / (-4) = 24, remainder = -99 - 24*(-4) = -99 + 96 = -3
    std::cout << (-99) % (-4) << std::endl; // -3

    // NOTE:
    // - Modulo by 0 is INVALID and causes undefined behavior / crash-like issues.
    // - These examples are for integers. For floating-point, use std::fmod().

    return 0;
}