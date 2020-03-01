//
//  PersonData.h
//  PersonCustomerData project
//
//  Created by Jeff Wiseman on 4/24/19.
//  Copyright © 2019 Jeff Wiseman. All rights reserved.
//

#ifndef PersonData_h
#define PersonData_h
#include <string>
#include <iomanip>

using namespace std;

class PersonData
{
    //fields
private:
    string lastName;
    string firstName;
    string address;
    string city;
    string state;
    int zip;
    string phoneNumber;
    
public:
    //Default Constructor
    PersonData()
    {
        lastName = "";
        firstName = "";
        address = "";
        city = "";
        state = "";
        zip = 0;
        phoneNumber = "";
    }
    //Mutators
    void setLastName(string l)
    {
        lastName = l;
    }
    
    void setFirstName(string f)
    {
        firstName = f;
    }
    
    void setAddress(string a)
    {
        address = a;
    }
    
    void setCity(string c)
    {
        city = c;
    }
    
    void setState(string s)
    {
        state = s;
    }
    
    void setZip(int z)
    {
        zip = z;
    }
    
    void setPhoneNumber(string p)
    {
        phoneNumber = p;
    }
    
    //accessors
    string getLastName() const
    {
        return lastName;
    }
    
    string getFirstName() const
    {
        return firstName;
    }
    
    string getAddress() const
    {
        return address;
    }
    
    string getCity() const
    {
        return city;
    }
    
    string getState() const
    {
        return state;
    }
    
    int getZip() const
    {
        return zip;
    }
    
    string getPhoneNumber()
    {
        return phoneNumber;
    }
};

#endif /* PersonData_h */
