"""
main.py
----------------------------------------
A simple command-line calculator that demonstrates
the use of functions defined in calculator.py.

It allows users to choose an operation, enter two numbers,
and see the result in the terminal.
"""

from calculator import add, subtract, multiply, divide

def main():
    """Main interactive loop for the calculator."""
    print("=== Simple Calculator ===")
    print("Available operations: add, subtract, multiply, divide")
    print("Type 'exit' to quit.\n")

    while True:
        operation = input("Enter operation: ").strip().lower()
        if operation == "exit":
            print("Goodbye!")
            break

        if operation not in ["add", "subtract", "multiply", "divide"]:
            print("Invalid operation. Try again.\n")
            continue

        try:
            a = float(input("Enter first number: "))
            b = float(input("Enter second number: "))

            if operation == "add":
                result = add(a, b)
            elif operation == "subtract":
                result = subtract(a, b)
            elif operation == "multiply":
                result = multiply(a, b)
            elif operation == "divide":
                result = divide(a, b)

            print(f"Result: {result}\n")

        except ValueError as e:
            print(f"Error: {e}\n")


if __name__ == "__main__":
    main()
