#include <iostream>
#include <stdexcept>
#include "calculator.h"

int main() {
    std::cout << "=== Simple Calculator ===\n";
    std::cout << "Available operations: add, subtract, multiply, divide\n";
    std::cout << "Type 'exit' to quit.\n\n";

    while (true) {
        std::string op;
        std::cout << "Enter operation: ";
        std::cin >> op;

        if (op == "exit") {
            std::cout << "Goodbye!\n";
            break;
        }

        if (op != "add" && op != "subtract" && op != "multiply" && op != "divide") {
            std::cout << "Invalid operation. Try again.\n\n";
            continue;
        }

        double a, b;
        std::cout << "Enter first number: ";
        std::cin >> a;
        std::cout << "Enter second number: ";
        std::cin >> b;

        try {
            double result = 0.0;

            if (op == "add") result = add(a, b);
            else if (op == "subtract") result = subtract(a, b);
            else if (op == "multiply") result = multiply(a, b);
            else if (op == "divide") result = divide(a, b);

            std::cout << "Result: " << result << "\n\n";
        } 
        catch (const std::exception& e) {
            std::cout << "Error: " << e.what() << "\n\n";
        }
    }

    return 0; 
}
