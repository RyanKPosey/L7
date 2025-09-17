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

void printVehicleDetails(vehicleType vehicle) {
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

void readVehicleDetails(vehicleType vehicle) {
    // Read user input for vehicle details
    cin.ignore(); // Clear input stream as a safeguard

    cout << endl << "Enter the make of your vehicle: ";
    getline(cin, vehicle.make); // Use getline so whitespaces are allowed ex: Alfa Romeo
    
    cout << endl << "Enter the model of your vehicle: ";
    getline(cin, vehicle.model); // Same thing here

    cout << endl << "Enter the year that your vehicle was made (YYYY-MM-DD): ";
    getline(cin, vehicle.year);

    cout << endl << "Enter the weight of your vehicle in ibs: ";
    cin >> vehicle.weightInIbs;

    cin.ignore(); // Clear input stream
    
    cout << endl << "Enter the manufacterer of the vehicle's engine: ";
    getline(cin, vehicle.engine.manufacturer);
    
    cout << endl << "Enter the amount of cylinders the vehicle's engine has: ";
    cin >> vehicle.engine.cylinderCount;

    cout << endl << "Enter the fuel capacity the engine's fuel tanks has in liters: ";
    cin >> vehicle.engine.fuelCapacityInLiters;

    cin.ignore(); // Clear input stream
    
    cout << endl;
}

int main() {
    vehicleType vehicle1;
    vehicleType vehicle2;

    cout << endl << "Enter vehicle 1: ";
    readVehicleDetails(vehicle1);

    cout << "Enter vehicle 2:";
    readVehicleDetails(vehicle2);

    printVehicleDetails(vehicle1);
    printVehicleDetails(vehicle2);
}