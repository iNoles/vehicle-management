#include "VehicleManager.h"

VehicleManager* VehicleManager::instance = nullptr; // Initialize the static instance to nullptr

VehicleManager* VehicleManager::getInstance() {
    if (!instance) {
        instance = new VehicleManager();
    }
    return instance;
}

void VehicleManager::addVehicle(const std::string& vehicleName) {
    std::cout << "Added vehicle: " << vehicleName << std::endl;
}

void VehicleManager::printVehicleCount() {
    std::cout << "Total number of vehicles: 5" << std::endl;
}
