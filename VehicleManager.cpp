#include "VehicleManager.h"

VehicleManager* VehicleManager::instance = nullptr;

VehicleManager* VehicleManager::getInstance() {
    if (!instance) {
        instance = new VehicleManager();
    }
    return instance;
}

void VehicleManager::addVehicle(const std::string& name, const std::string& type) {
    vehicles.push_back(std::make_shared<Vehicle>(name, type));
    std::cout << "Added vehicle: " << name << " | Type: " << type << std::endl;
}

void VehicleManager::listVehicles() const {
    std::cout << "Listing all vehicles:" << std::endl;
    for (const auto& vehicle : vehicles) {
        vehicle->display();
    }
}

void VehicleManager::printVehicleCount() const {
    std::cout << "Total number of vehicles: " << vehicles.size() << std::endl;
}
