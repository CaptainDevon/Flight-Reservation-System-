#include "Flight.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;

//implementation of the constructor function for Flight class
Flight::Flight(int f_id,string f_no,string dep_city,string arr_city,string dep_time, string arr_time,int tot_seats,int avl_seats)
{
    this->flight_ID=f_id;
    this->flight_number=f_no;
    this->departure_city=dep_city;
    this->arrival_city=arr_city;
    this->departure_time=dep_time;
    this->arrival_time=arr_time;
    this->total_seats=tot_seats;
    this->available_seats=avl_seats;
}

void Flight::displayFlightInfo(){
    cout<<"Flight ID: "<<flight_ID<<endl;
    cout<<"Flight Number: "<<flight_number<<endl;
    cout<<"Departure City: "<<departure_city<<endl;
    cout<<"Arrival City: "<<arrival_city<<endl;
    cout<<"Departure Time: "<<departure_time<<endl;
    cout<<"Arrival Time: "<<arrival_time<<endl;
    cout<<"Total Seats: "<<total_seats<<endl;
    cout<<"Flight ID: "<<available_seats<<endl;
}

void Flight::UpdateFlightDetails(string number,string dep_city,string arr_city,string dep_time, string arr_time,int tot_seats,int avl_seats)
{
    this->flight_number=number;
    this->departure_city=dep_city;
    this->arrival_city=arr_city;
    this->departure_time=dep_time;
    this->arrival_time=arr_time;
    this->total_seats=tot_seats;
    this->available_seats=avl_seats;
}

void Flight::addFlight(vector<Flight>& flights,Flight flight)
{
    flights.push_back(flight);
}

void Flight::updateFlight(vector<Flight>&flights,int f_id,Flight newFlight)
{
    for(auto &it:flights)
    {
        if(it.flight_ID==f_id)
        {
            it=newFlight;
            break;
        }
    }
}

void Flight::deleteFlight(vector<Flight>&flights,int f_id)
{
    for(auto it=flights.begin();it!=flights.end();++it)
    {
        if(it->flight_ID==f_id)
        {
            flights.erase(it);
            break;
        }
    }
}

Flight* Flight::searchFlight(const vector<Flight>&flights,int f_id)
{
    for(const auto& it:flights)
    {
        if(it.flight_ID==f_id)
        {
            return const_cast<Flight*>(&it);
        }
    }
    return nullptr;
}