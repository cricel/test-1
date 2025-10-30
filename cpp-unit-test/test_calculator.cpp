// test_calculator.cpp
// -----------------------------
// Unit tests for the calculator functions using Catch2 v3.
// Uses the amalgamated header-only version (catch_amalgamated.hpp).

#include "catch_amalgamated.hpp"
#include "calculator.h"

TEST_CASE("Addition works", "[add]") {
    REQUIRE(add(2, 3) == 5);
    REQUIRE(add(-1, 1) == 0);
}

TEST_CASE("Subtraction works", "[subtract]") {
    REQUIRE(subtract(5, 3) == 2);
    REQUIRE(subtract(3, 5) == -2);
}

TEST_CASE("Multiplication works", "[multiply]") {
    REQUIRE(multiply(2, 4) == 8);
    REQUIRE(multiply(-2, 3) == -6);
}

TEST_CASE("Division works", "[divide]") {
    // Catch2 v3 requires Catch::Approx for approximate floating-point comparison.
    REQUIRE(divide(10, 2) == Catch::Approx(5.0));
    REQUIRE(divide(3, 2) == Catch::Approx(1.5));
}

TEST_CASE("Division by zero throws", "[divide]") {
    // Verify that dividing by zero throws the expected exception.
    REQUIRE_THROWS_AS(divide(5, 0), std::invalid_argument);
}