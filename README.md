# Vehicle Management System

This project is a simple implementation of a Singleton pattern to manage a collection of vehicles. It includes a `VehicleManager` class for centralized vehicle management and a `Vehicle` class that encapsulates individual vehicle properties like name and type.

## Features

- **Singleton Design Pattern**: The `VehicleManager` is implemented as a Singleton to ensure only one instance is managing the vehicles.
- **Dynamic Vehicle Storage**: The vehicles are stored dynamically using `std::vector` and managed through `std::shared_ptr` to handle memory safely.
- **Vehicle Details**: Each vehicle has properties such as name and type, which are encapsulated in a `Vehicle` class.

## Getting Started

### Prerequisites

- [C++ Compiler](https://gcc.gnu.org/) installed on your system

### Installation

1. Clone the repository:
```bash
git clone https://github.com/iNoles/vehicle-management.git
```

2. Compile and run the program:
```bash
cd vehicle-management
g++ main.cpp VehicleManager.cpp -o vehicle_manager
./vehicle_manager
```

## Usage

The main.cpp file demonstrates how to use the VehicleManager singleton to add vehicles and print the total number of vehicles.

## Contributing

Feel free to contribute by opening issues or pull requests. Follow the coding standards specified in the project.
