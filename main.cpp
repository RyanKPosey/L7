/*
    Programmer: Ryan Posey
    Assignment: L7
    Purpose: Practice using nested structs
    Due date: 9/16/2025
*/

#include <iostream>
#include <cctype>
#include <iomanip>

using namespace std;

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

void printVehicle(vehicleType vehicle) {
    // Format and print vehicle details
    cout << endl << right << setw(12) << "Make:" << setw(12) << vehicle.make << endl <<
        setw(12) << "Model:" << setw(12) << vehicle.model << endl <<
        setw(12) << "Year:" << setw(12) << vehicle.year << endl <<
        setw(12) << "Weight (Ibs):" << setw(12) << vehicle.weightInIbs << endl <<
        setw(12) << "Engine: " << endl <<
        setw(6) << "CylinderCount: " << setw(6) << vehicle.engine.cylinderCount << endl <<
        setw(6) << "Manufacturer: " << setw(6) << vehicle.engine.manufacturer << endl <<
        setw(6) << "Fuel capacity (Liters): " << setw(6) << 
        vehicle.engine.fuelCapacityInLiters << endl;
}

