#include "VehicleManager.h"

std::unique_ptr<VehicleManager> VehicleManager::instance = nullptr;
std::mutex VehicleManager::mutex;

VehicleManager* VehicleManager::getInstance() {
    std::lock_guard<std::mutex> lock(mutex);  // Lock to make it thread-safe
    if (!instance) {
        instance = std::unique_ptr<VehicleManager>(new VehicleManager());
    }
    return instance.get();
}

void VehicleManager::addVehicle(const std::string& name, const std::string& type) {
    if (checkIfVehicleExists(name)) {
        std::cout << "Vehicle with the name " << name << " already exists!" << std::endl;
        return;
    }
    
    vehicles.emplace_back(std::make_shared<Vehicle>(name, type));
    std::cout << "Added vehicle: " << name << " | Type: " << type << std::endl;
}


void VehicleManager::listVehicles() const {
    std::cout << "Listing all vehicles:" << std::endl;
    for (const auto& vehicle : vehicles) {
        std::cout << vehicle->toString() << std::endl;
    }
}

void VehicleManager::printVehicleCount() const {
    std::cout << "Total number of vehicles: " << vehicles.size() << std::endl;
}

bool VehicleManager::checkIfVehicleExists(const std::string& name) const {
    for (const auto& vehicle : vehicles) {
        if (vehicle->getName() == name) {
            return true;
        }
    }
    return false;
}
