/*C++ code to handle the error when we divide a number and a number is zero using exception handling
-Geshwar Kumar*/
#include <iostream>
#include <stdexcept>

// Integer division, catching divide by zero.

inline int intDivEx (int numerator, int denominator) {
    if (denominator == 0)
        throw std::overflow_error("Divide by zero exception");
    return numerator / denominator;
}

int main (void) {
    int i = 42;

    try {
        i = intDivEx (10, 2);
    } catch (std::overflow_error e) {
        std::cout << e.what() << " -> ";
    }
    std::cout << i << std::endl;

    try {
        i = intDivEx (10, 0);
    } catch (std::overflow_error e) {
        std::cout << e.what() << " -> ";
    }
    std::cout << i << std::endl;

    return 0;
}
