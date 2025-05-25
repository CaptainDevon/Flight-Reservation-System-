# CLI-Based Flight Reservation System

## Description

This project is a Command-Line Interface (CLI) based Flight Reservation System developed using C++ and Object-Oriented Programming (OOP) concepts. The application allows users to perform various operations for managing customer information, flight details, and reservations.

## File Structure

- **`Customer.h`**: Header file defining the `Customer` class, which includes attributes and methods related to customer management.
- **`Customer.cpp`**: Implementation file for the `Customer` class, containing method definitions and functionality.
- **`Flight.h`**: Header file defining the `Flight` class, which manages flight-related attributes and operations.
- **`Flight.cpp`**: Implementation file for the `Flight` class, detailing method implementations and functionalities.
- **`Reservation.h`**: Header file defining the `Reservation` class, responsible for managing reservation details and operations.
- **`Reservation.cpp`**: Implementation file for the `Reservation` class, providing the actual code for the methods defined in `Reservation.h`.
- **`main.h`**: Header file containing declarations for the main function and other utility functions used in the application.

## OOP Concepts Used

This application utilizes key OOP concepts to ensure modularity and maintainability:

- **Encapsulation**: Each class encapsulates its data and methods.
- **Abstraction**: Complex operations are abstracted into methods and functions within each class.

### Class and Member Functions

- **Class Definition**: Each class (`Customer`, `Flight`, `Reservation`) is defined with specific attributes and member functions.
- **Member Function Declarations**: Methods are declared in header files to provide interfaces for manipulating data.
- **Member Function Implementations**: Methods are implemented in source files to perform the actual logic and operations.

## Features

- **Display Information**: View details of customers, flights, and reservations.
- **Update Information**: Modify existing customer, flight, and reservation data.
- **Add Records**: Insert new customer, flight, and reservation entries.
- **Delete Records**: Remove existing customer, flight, and reservation entries.
- **Search Records**: Find specific customer, flight, and reservation details based on criteria.

## How to Run

1. Ensure you have a C++ compiler installed.
2. Compile the source files using a command like:
   ```bash
   g++ -o flight_reservation_system main.cpp Customer.cpp Flight.cpp Reservation.cpp
