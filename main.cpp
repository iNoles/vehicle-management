#include "VehicleManager.h"

int main() {
    // Access the singleton instance
    VehicleManager* manager = VehicleManager::getInstance();

    // Initialize array of pointer
    const char* vehicles[4] = { "Car", "Motorcycle", "Boat", "Trucks" };
    const int num_vehicles = sizeof(vehicles) / sizeof(vehicles[0]);

    // Use the singleton to manage vehicles
    for (int i = 0; i < 4; i++)
      manager->addVehicle(vehicles[i]);

    // Example: print the total number of vehicles
    manager->printVehicleCount(num_vehicles);

    return 0;
}