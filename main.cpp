#include "Flight.h"
#include "Customer.h"
#include "Reservation.h"
#include <bits/stdc++.h>
using namespace std;

void displayMainMenu()
{
    cout << "Flight Management System" << endl;
    cout << "1) Manage Flights" << endl;
    cout << "2) Manage Customers" << endl;
    cout << "3) Manage Reservations" << endl;
    cout << "4)Exit" << endl;
    cout << "enter your choice: ";
}

void displayFilghtMenu()
{
    cout << "1) Add Flight" << endl;
    cout << "2) Update Flight" << endl;
    cout << "3) Delete Flight" << endl;
    cout << "4) Search Flight" << endl;
    cout << "5) Back to Main Menu" << endl;
    cout << "enter your choice: ";
}

void displayCustomerMenu()
{
    cout << "1) Add Customer" << endl;
    cout << "2) Update Customer" << endl;
    cout << "3) Delete Customer" << endl;
    cout << "4) Search CUstomer" << endl;
    cout << "5) Back to Main Menu" << endl;
    cout << "enter your choice: ";
}

void displayReservationMenu()
{
    cout << "1) Add Reservation" << endl;
    cout << "2) Update Reservation" << endl;
    cout << "3) Delete Reservation" << endl;
    cout << "4) Search Reservation" << endl;
    cout << "5) Back to Main Menu" << endl;
    cout << "enter your choice: ";
}

int main()
{
    vector<Flight> flights;
    vector<Customer> customers;
    vector<Reservation> reservations;

    int choice;

    while (true)
    {
        displayMainMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
            while (true)
            {
                displayFilghtMenu();
                cin >> choice;
                if (choice == 5)
                    break;
                int flight_ID, total_seats, available_seats;
                string flight_number, departure_city, arrival_city, departure_time, arrival_time;

                switch (choice)
                {
                case 1:
                    cout << "Enter Flight ID: ";
                    cin >> flight_ID;
                    cout << "Enter Flight Number: ";
                    cin >> flight_number;
                    cout << "Enter Departure City: ";
                    cin >> departure_city;
                    cout << "Enter Arrival City: ";
                    cin >> arrival_city;
                    cout << "Enter Departure Time: ";
                    cin >> departure_time;
                    cout << "Enter Arrival Time: ";
                    cin >> arrival_time;
                    cout << "Enter Total Seats: ";
                    cin >> total_seats;
                    cout << "Enter Available Seats: ";
                    cin >> available_seats;
                    Flight::addFlight(flights, Flight(flight_ID, flight_number, departure_city, arrival_city, departure_time, arrival_time, total_seats, available_seats));
                    break;

                case 2:
                    cout << "Enter new Flight ID: ";
                    cin >> flight_ID;
                    cout << "Enter new Flight Number: ";
                    cin >> flight_number;
                    cout << "Enter new Departure City: ";
                    cin >> departure_city;
                    cout << "Enter new Arrival City: ";
                    cin >> arrival_city;
                    cout << "Enter new Departure Time: ";
                    cin >> departure_time;
                    cout << "Enter new Arrival Time: ";
                    cin >> arrival_time;
                    cout << "Enter new Total Seats: ";
                    cin >> total_seats;
                    cout << "Enter new Available Seats: ";
                    cin >> available_seats;
                    Flight::updateFlight(flights, flight_ID, Flight(flight_ID, flight_number, departure_city, arrival_city, departure_time, arrival_time, total_seats, available_seats));
                    break;

                case 3:
                    cout << "Enter FLight ID to Delete: ";
                    cin >> flight_ID;
                    Flight::deleteFlight(flights, flight_ID);
                    break;

                case 4:
                    cout << "Enter Flight ID to Search: ";
                    cin >> flight_ID;
                    if (Flight *fleet = Flight::searchFlight(flights, flight_ID))
                    {
                        fleet->displayFlightInfo();
                    }
                    else
                    {
                        cout << "Flight not Found" << endl;
                    }
                    break;

                default:
                    cout << "Invalid Choice" << endl;
                    break;
                }
            }
            break;

        case 2:
            while (true)
            {
                displayCustomerMenu();
                cin >> choice;
                if (choice == 5)
                    break;
                int customer_id;
                string customer_name, contact_info;

                switch (choice)
                {
                case 1:
                    cout << "Enter Customer ID: ";
                    cin >> customer_id;
                    cout << "ENter Customer Name: ";
                    cin >> customer_name;
                    cout << "Enter Contact Info: ";
                    cin >> contact_info;
                    Customer::addCustomer(customers, Customer(customer_id, customer_name, contact_info));
                    break;

                case 2:
                    cout << "Enter New Customer ID: ";
                    cin >> customer_id;
                    cout << "ENter New Customer Name: ";
                    cin >> customer_name;
                    cout << "Enter New Contact Info: ";
                    cin >> contact_info;
                    Customer::updateCustomer(customers, customer_id, Customer(customer_id, customer_name, contact_info));
                    break;

                case 3:
                    cout << "Enter Customer ID to Delete: ";
                    cin >> customer_id;
                    Customer::deleteCustomer(customers, customer_id);
                    break;

                case 4:
                    cout << "Enter Customer ID to Search";
                    cin >> customer_id;
                    if (Customer *cust = Customer::searchCustomer(customers, customer_id))
                    {
                        cust->displayCustomerInfo();
                    }
                    else
                    {
                        cout << "Customer Not Found" << endl;
                    }
                    break;

                default:
                    cout << "Invalid Choice";
                    break;
                }
            }
            break;

        case 3:
            while (true)
            {
                displayReservationMenu();
                cin >> choice;
                if (choice == 5)
                    break;
                int reservation_id, flight_id, customer_id, seat_number;
                string reservation_time;

                switch (choice)
                {
                case 1:
                    cout << "Enter Reservation ID: ";
                    cin >> reservation_id;
                    cout << "Enter Flight ID: ";
                    cin >> flight_id;
                    cout << "Enter Customer ID: ";
                    cin >> customer_id;
                    cout << "Enter Seat Number: ";
                    cin >> seat_number;
                    cout << "Add Reservation Time";
                    cin >> reservation_time;
                    Reservation::addReservation(reservations, Reservation(reservation_id, flight_id, customer_id, seat_number, reservation_time));
                    break;

                case 2:
                    cout << "Enter New Reservation ID: ";
                    cin >> reservation_id;
                    cout << "Enter new Flight ID: ";
                    cin >> flight_id;
                    cout << "Enter New Customer ID: ";
                    cin >> customer_id;
                    cout << "Enter New Seat Number: ";
                    cin >> seat_number;
                    cout << "Add New Reservation Time";
                    cin >> reservation_time;
                    Reservation::updateReservation(reservations, reservation_id, Reservation(reservation_id, flight_id, customer_id, seat_number, reservation_time));
                    break;

                case 3:
                    cout << "Enter Reservation Id to Delete";
                    cin >> reservation_id;
                    Reservation::deleteReservation(reservations, reservation_id);
                    break;

                case 4:
                    cout << "Enter Reservation DI to Search";
                    cin >> reservation_id;
                    if (Reservation *res = Reservation::searchReservation(reservations, reservation_id))
                    {
                        res->displayReservationInfo();
                    }
                    else
                    {
                        cout << "Reservation Not Found" << endl;
                    }
                    break;

                default:
                    cout << "Invalid Choice" << endl;
                    break;
                }
            }
            break;

        case 4:
            cout << "Exiting the application..." << endl;
            return 0;

        default:
            cout << "Invalid Choice" << endl;
        }
    }
}