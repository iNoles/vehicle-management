# Vehicle Management System

This project implements a Singleton pattern to manage a collection of vehicles, using C++11 extensions for a clean and efficient design. It features a VehicleManager class for centralized management and a Vehicle class that encapsulates individual vehicle properties.

## Features

- **Singleton Design Pattern**: The `VehicleManager` is implemented as a Singleton to ensure only one instance is managing the vehicles.
- **Dynamic Vehicle Storage**: The vehicles are stored dynamically using `std::vector` and managed through `std::shared_ptr` to handle memory safely.
- **Vehicle Details**: Each vehicle has properties such as name and type, which are encapsulated in a `Vehicle` class.

## Getting Started

### Prerequisites

- A C++11 compatible compiler (e.g., GCC version 4.8 or later).

### Installation

1. Clone the repository:
```bash
git clone https://github.com/iNoles/vehicle-management.git
```

2. Compile and run the program:
```bash
cd vehicle-management
g++ -std=c++11 main.cpp VehicleManager.cpp -o vehicle_manager
./vehicle_manager
```

## Usage

The main.cpp file demonstrates how to use the VehicleManager singleton to add vehicles and print the total number of vehicles.

## Contributing

Feel free to contribute by opening issues or pull requests. Follow the coding standards specified in the project.
