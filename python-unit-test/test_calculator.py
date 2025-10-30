"""
test_calculator.py
----------------------------------------
Unit tests for calculator.py using pytest.

This file contains a series of test functions
that validate each arithmetic operation under
normal and edge-case scenarios.
"""

import pytest
from calculator import add, subtract, multiply, divide


def test_add():
    """Verify addition works for positive, negative, and zero."""
    assert add(3, 2) == 5
    assert add(-1, 1) == 0
    assert add(0, 0) == 0


def test_subtract():
    """Verify subtraction handles positive and negative results."""
    assert subtract(10, 5) == 5
    assert subtract(0, 5) == -5


def test_multiply():
    """Verify multiplication works with positive, negative, and zero operands."""
    assert multiply(3, 4) == 12
    assert multiply(-2, 3) == -6
    assert multiply(0, 10) == 0


def test_divide():
    """Verify division works with normal operands."""
    assert divide(10, 2) == 5
    assert divide(-9, 3) == -3


def test_divide_by_zero():
    """Ensure divide() raises ValueError when dividing by zero."""
    with pytest.raises(ValueError, match="Cannot divide by zero"):
        divide(10, 0)
