#ifndef VEHICLE_MANAGER_H
#define VEHICLE_MANAGER_H

#include <iostream>
#include <string>

class VehicleManager {
private:
    VehicleManager() {} // Private constructor

    static VehicleManager* instance; // Private instance of the class

public:
    static VehicleManager* getInstance(); // Public method to access the instance

    // Other methods for managing vehicles can be added here
    void addVehicle(const std::string& vehicleName);
    void printVehicleCount();
};

#endif // VEHICLE_MANAGER_H
