"""
calculator.py
----------------------------------------
Implements basic arithmetic operations:
addition, subtraction, multiplication, and division.

Each function is pure (no side effects) and returns
a numeric result. Division raises a ValueError for zero division.
"""

def add(a, b):
    """Return the sum of two numbers."""
    return a + b

def subtract(a, b):
    """Return the result of subtracting b from a."""
    return a - b

def multiply(a, b):
    """Return the product of two numbers."""
    return a * b

def divide(a, b):
    """
    Divide a by b and return the result.
    Raises:
        ValueError: If b is zero.
    """
    if b == 0:
        raise ValueError("Cannot divide by zero")
    return a / b
