#ifndef VEHICLE_MANAGER_H
#define VEHICLE_MANAGER_H

#include <iostream>

class VehicleManager {
private:
    // Private constructor to prevent instantiation
    VehicleManager() {}

    // Private instance of the class
    static VehicleManager* instance;

public:
    // Public method to access the instance
    static VehicleManager* getInstance() {
        if (!instance) {
            instance = new VehicleManager();
        }
        return instance;
    }

    // Other methods for managing vehicles can be added here

    void addVehicle(const std::string& vehicleName) {
        std::cout << "Added vehicle: " << vehicleName << std::endl;
    }

    // Example method
    void printVehicleCount() {
        std::cout << "Total number of vehicles: 5" << std::endl;
    }
};

#endif // VEHICLE_MANAGER_H
