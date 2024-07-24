#include "Reservation.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

Reservation::Reservation(int res_id, int f_no, int cus_no, int seat_no, string res_time)
{
    this->reservation_ID = res_id;
    this->flight_ID = f_no;
    this->customer_ID = cus_no;
    this->seat_number = seat_no;
    this->reservation_time = res_time;
}

void Reservation::displayReservationInfo()
{
    cout << "Reservation ID: " << reservation_ID << endl;
    cout << "Flight ID: " << flight_ID << endl;
    cout << "Customer ID: " << customer_ID << endl;
    cout << "Seat Number: " << seat_number << endl;
    cout << "Reservation Time: " << reservation_time << endl;
}

void Reservation::updateReservationDetails(int f_no, int cus_no, int seat_no, string res_time)
{
    this->flight_ID = f_no;
    this->customer_ID = cus_no;
    this->seat_number = seat_no;
    this->reservation_time = res_time;
}

void Reservation::addReservation(vector<Reservation> &reservations, Reservation reservation)
{
    reservations.push_back(reservation);
}

void ::Reservation::updateReservation(vector<Reservation> &reservations, int res_id, Reservation newReservation)
{
    for (auto &it : reservations)
    {
        if (it.reservation_ID == res_id)
        {
            it = newReservation;
            break;
        }
    }
}

void Reservation::deleteReservation(vector<Reservation> &reservations, int res_id)
{
    for (auto it = reservations.begin(); it != reservations.end(); ++it)
    {
        if (it->reservation_ID = res_id)
        {
            reservations.erase(it);
            break;
        }
    }
}

Reservation *Reservation::searchReservation(const vector<Reservation> &reservations, int res_id)
{
    for (auto &it : reservations)
    {
        if (it.reservation_ID == res_id)
        {
            return const_cast<Reservation *>(&it);
        }
    }
    return nullptr;
}