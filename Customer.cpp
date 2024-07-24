#include "Customer.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;

Customer::Customer(int cus_no,string name,string contact)
{
    this->customer_ID=cus_no;
    this->customer_name=name;
    this->contact_info=contact;
}

void Customer::displayCustomerInfo()
{
    cout<<"Customer ID: "<<customer_ID<<endl;
    cout<<"Customer Name: "<<customer_name<<endl;
    cout<<"Customer Contact Info: "<<contact_info<<endl;
}

void Customer::UpdateCustomerInfo(string name,string contact)
{
    this->customer_name=name;
    this->contact_info=contact;
}

void Customer::addCustomer(vector<Customer>& customers,Customer customer)
{
    customers.push_back(customer);
}

void Customer::updateCustomer(vector<Customer>&customers,int cus_id,Customer newCustomer)
{
    for(auto &it:customers)
    {
        if(it.customer_ID==cus_id)
        {
            it=newCustomer;
            break;
        }
    }
}

void Customer::deleteCustomer(vector<Customer>&customers,int cus_id)
{
    for(auto it=customers.begin();it!=customers.end();++it)
    {
        if(it->customer_ID==cus_id)
        {
            customers.erase(it);
            break;
        }
    }
}

Customer* Customer::searchCustomer(const vector<Customer>&customers,int cus_id)
{
    for(const auto&it:customers)
    {
        if(it.customer_ID==cus_id)
        {
            return const_cast<Customer*>(&it);
        }
    }
    return nullptr;
}