#ifndef CUSTOMER_H
#define CUSTOMER_H

#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Customer
{
    public:
    //member variables
    int customer_ID;
    string customer_name;
    string contact_info;

    //constructor
    Customer(int cus_no,string name,string contact);
    void displayCustomerInfo();
    void UpdateCustomerInfo(string name,string contact);
    //core functions 
    static void addCustomer(vector<Customer>& customers,Customer customer);
    static void updateCustomer(vector<Customer>&customers,int cus_id,Customer newCustomer);
    static void deleteCustomer(vector<Customer>&customers,int cus_id);
    static Customer* searchCustomer(const vector<Customer>&customers,int cus_id);
};

#endif