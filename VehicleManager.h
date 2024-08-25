#ifndef VEHICLE_MANAGER_H
#define VEHICLE_MANAGER_H

#include <iostream>
#include <string>
#include <vector>
#include <memory>

// Vehicle class to represent each vehicle
class Vehicle {
private:
    std::string name;
    std::string type;

public:
    Vehicle(const std::string& name, const std::string& type) : name(name), type(type) {}

    std::string getName() const {
        return name;
    }

    std::string getType() const {
        return type;
    }

    void display() const {
        std::cout << "Vehicle: " << name << " | Type: " << type << std::endl;
    }
};

// Singleton VehicleManager class
class VehicleManager {
private:
    VehicleManager() {} // Private constructor
    static VehicleManager* instance;
    std::vector<std::shared_ptr<Vehicle>> vehicles; // Dynamically store vehicles

public:
    static VehicleManager* getInstance();

    void addVehicle(const std::string& name, const std::string& type);
    void listVehicles() const;
    void printVehicleCount() const;
};

#endif // VEHICLE_MANAGER_H
