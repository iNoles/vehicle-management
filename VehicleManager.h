#ifndef VEHICLE_MANAGER_H
#define VEHICLE_MANAGER_H

#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <mutex> // For thread safety

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

    std::string toString() const {
        return "Vehicle: " + name + " | Type: " + type;
    }
};

// Singleton VehicleManager class
class VehicleManager {
private:
    VehicleManager() {} // Private constructor
    static std::unique_ptr<VehicleManager> instance;  // Use unique_ptr for automatic memory management
    static std::mutex mutex;  // Mutex for thread safety
    std::vector<std::shared_ptr<Vehicle>> vehicles; // Dynamically store vehicles

public:
    static VehicleManager* getInstance();

    void addVehicle(const std::string& name, const std::string& type);
    void listVehicles() const;
    void printVehicleCount() const;
    // Check if a vehicle exists by name
    bool checkIfVehicleExists(const std::string& name) const;
};

#endif // VEHICLE_MANAGER_H