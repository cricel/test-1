#include "calculator.h"
#include <stdexcept>

// calculator.cpp
// -----------------------------
// Implementation of basic arithmetic functions.

// Adds two integers.
int add(int a, int b) {
    return a + b;
}

// Subtracts second integer from the first.
int subtract(int a, int b) {
    return a - b;
}

// Multiplies two integers.
int multiply(int a, int b) {
    return a * b;
}

// Divides first integer by second.
// Throws std::invalid_argument if division by zero is attempted.
double divide(int a, int b) {
    if (b == 0)
        throw std::invalid_argument("Cannot divide by zero");
    return static_cast<double>(a) / b;
}

// double power (xxx){
//     return x power of abs(x)
// }

// // 2 power of 3
// // 2 power of -3

double power(double a, int b) {
    // // Handle 0^0 case (undefined, but often treated as 1 in programming)
    // if (a == 0 && b == 0) {
    //     cout << "Warning: 0^0 is undefined. Returning 1 by convention.\n";
    //     return 1;
    // }

    // // Handle 0 raised to a positive power
    // if (a == 0 && b > 0) {
    //     return 0;
    // }

    // // Handle 0 raised to a negative power (division by zero)
    // if (a == 0 && b < 0) {
    //     cout << "Error: division by zero in 0^negative.\n";
    //     return INFINITY; // or throw an error
    // }

    // // Handle any number raised to the power 0
    // if (b == 0) {
    //     return 1;
    // }

    // Compute power using iterative multiplication
    double result = 1;
    int exp = abs(b);
    for (int i = 0; i < exp; ++i) {
        result *= a;
    }

    // Handle negative exponent
    if (b < 0) {
        result = 1 / result;
    }

    return result;
}