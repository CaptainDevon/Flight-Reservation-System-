#ifndef RESERVATION_H
#define RESERVATION_H

#include <iostream>
#include<string>
#include<vector>
using namespace std;

class Reservation
{
    public:
    //member variables
    int reservation_ID;
    int flight_ID;
    int customer_ID;
    int seat_number;
    string reservation_time;

    //constructor
    Reservation(int res_id,int f_no,int cus_no,int seat_no,string res_time);
    void displayReservationInfo();
    void updateReservationDetails(int f_no,int cus_no,int seat_no,string res_time);

    //core functions
    static void addReservation(vector<Reservation>&reservations,Reservation reservation);
    static void updateReservation(vector<Reservation>&reservations,int res_id,Reservation newReservation);
    static void deleteReservation(vector<Reservation>&reservations,int res_id);
    static Reservation* searchReservation(const vector<Reservation>&reservations,int res_id);
};

#endif