/*
    Programmer: Ryan Posey
    Assignment: L7
    Purpose: Practice using nested structs
    Due date: 9/110/2025
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
    cout << endl << right << setw(20) << "Make:" << right << setw(20) << vehicle.make << endl <<
        right << setw(20) << "Model:" << right << setw(20) << vehicle.model << endl <<
        right << setw(20) << "Year:" << right << setw(20) << vehicle.year << endl <<
        right << setw(20) << "Weight (Ibs):" << right << setw(20) << vehicle.weightInIbs << endl <<
        right << setw(20) << "Engine: " << endl <<
        right << setw(10) << "CylinderCount: " << right << setw(10) << vehicle.engine.cylinderCount << endl <<
        right << setw(10) << "Manufacturer: " << right << setw(10) << vehicle.engine.manufacturer << endl <<
        right << setw(10) << "Fuel capacity (Liters): " << right << setw(10) << 
        vehicle.engine.fuelCapacityInLiters << endl;
}

void readVehicleDetails(vehicleType& vehicle) {
    // Read user input for vehicle details

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