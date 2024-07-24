#ifndef FLIGHT_H
#define FLIGHT_H

#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Flight
{
    public:
    //member variables
    int flight_ID;
    string flight_number;
    string departure_city;
    string arrival_city;
    string departure_time;
    string arrival_time;
    int total_seats;
    int available_seats;

    //constructor function defination
    Flight(int f_id,string f_no,string dep_city,string arr_city,string dep_time, string arr_time,int tot_seats,int avl_seats);
    

    void displayFlightInfo();

    void UpdateFlightDetails(string number,string dep_city,string arr_city,string dep_time, string arr_time,int tot_seats,int avl_seats);
    
    //adding core functions

    static void addFlight(vector<Flight>& flights,Flight flight);
    static void updateFlight(vector<Flight>&flights,int f_id,Flight newFlight);
    static void deleteFlight(vector<Flight>&flights,int f_id);
    static Flight* searchFlight(const vector<Flight>&flights,int f_id);
};

#endif