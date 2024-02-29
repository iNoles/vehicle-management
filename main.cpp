#include "VehicleManager.h"

int main() {
    // Access the singleton instance
    VehicleManager* manager = VehicleManager::getInstance();

    // Initialize array of pointer
    const char* vehicles[5] = { "Car", "Motorcycle", "Boat", "Trucks", "Bike" };
    const int num_vehicles = sizeof(vehicles) / sizeof(vehicles[0]);

    // Use the singleton to manage vehicles
    for (int i = 0; i < num_vehicles; i++)
      manager->addVehicle(vehicles[i]);

    // Example: print the total number of vehicles
    manager->printVehicleCount(num_vehicles);

    return 0;
}
