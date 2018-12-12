#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "Fibo.h"
TEST_CASE("Given 0 Return 0", "[fibo]")
{

    //Arrange
    int element = 0;
    Fibo f;

    //Act
    int result = f.Fib(element);

    //Assert
    REQUIRE(result == 0);
}

TEST_CASE("Given 1 Return 1", "[fibo]")
{

    //Arrange
    int element = 1;
    Fibo f;

    //Act
    int result = f.Fib(element);

    //Assert
    REQUIRE(result == 1);
}

TEST_CASE("Given 2 Return 1", "[fibo]")
{

    //Arrange
    int element = 2;
    Fibo f;

    //Act
    int result = f.Fib(element);

    //Assert
    REQUIRE(result == 1);
}

TEST_CASE("Given 3 Return 2", "[fibo]")
{

    //Arrange
    int element = 3;
    Fibo f;

    //Act
    int result = f.Fib(element);

    //Assert
    REQUIRE(result == 2);
}

TEST_CASE("Given 4 Return 3", "[fibo]")
{

    //Arrange
    int element = 4;
    Fibo f;

    //Act
    int result = f.Fib(element);

    //Assert
    REQUIRE(result == 3);
}