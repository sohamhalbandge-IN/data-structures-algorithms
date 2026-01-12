#include <iostream>
int main() {
    // increment 
    int x = 5;
    std::cout << x << std::endl;   // prints 5

    // PRE-INCREMENT: ++x
    // - Increments the value FIRST
    // - Then uses/returns the updated value
    std::cout << ++x << std::endl; // x becomes 6, prints 6
    std::cout << x << std::endl;   // x is 6, prints 6

    // POST-INCREMENT: x++
    // - Uses/returns the current value FIRST
    // - Then increments the value AFTER
    std::cout << x++ << std::endl; // prints 6, then x becomes 7
    std::cout << x << std::endl;   // x is 7, prints 7

    // same works for DECREMENT
    // i.e. PRE-DECREMENT: --x (Decrements the value FIRST and then uses/returns the updated value)
    // i.e. POST-DECREMENT: x-- (Uses/returns the current value FIRST and then decrements the value AFTER)

    return 0;
}