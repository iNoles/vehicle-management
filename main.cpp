#include "VehicleManager.h"

int main() {
    VehicleManager* manager = VehicleManager::getInstance();

    // Add vehicles with more details
    manager->addVehicle("Car", "Sedan");
    manager->addVehicle("Motorcycle", "Sport");
    manager->addVehicle("Boat", "Yacht");
    manager->addVehicle("Truck", "Pickup");
    manager->addVehicle("Bike", "Mountain");

    // List all vehicles
    manager->listVehicles();

    // Print the total number of vehicles
    manager->printVehicleCount();

    return 0;
}
