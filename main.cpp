/*
    Programmer: Ryan Posey
    Assignment: L7
    Purpose: Practice using nested structs
    Due date: 9/16/2025
*/

#include <iostream>
#include <cctype>
#include <iomanip>

// init structures

struct engineType {
    int cylinderCount;
    std::string manufacturer;
    double fuelCapacityInLiters;
};

struct vehicleType {
    std::string make;
    std::string model;
    std::string year;
    double weightInIbs;
    engineType engine;
};