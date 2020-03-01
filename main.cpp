//
//  main.cpp
//  PersonCustomerData project
//
//  Created by Jeff Wiseman on 4/18/19.
//  Copyright © 2019 Jeff Wiseman. All rights reserved.
//

#include <iostream>
#include <string>
#include <iomanip>
#include "PersonData.h"
#include "CustomerData.h"

using namespace std;

//function prototype
void displayData(CustomerData);

//main function
int main()
{
    CustomerData customer1;
    customer1.setLastName("Wiseman");
    customer1.setFirstName("Jefferson");
    customer1.setAddress("8675 Kingwood Drive");
    customer1.setCity("Kingwood");
    customer1.setState("Texas");
    customer1.setZip(77339);
    customer1.setPhoneNumber("281-330-8004");
    displayData(customer1);
    
    
    
    
}

//display function
void displayData(CustomerData customer1)
{
    cout << "LastName: " << customer1.getLastName() << endl;
    cout << "FirstName: " << customer1.getFirstName() << endl;
    cout << "Address: " << customer1.getAddress() << endl;
    cout << "City: " << customer1.getCity() << endl;
    cout << "State: " << customer1.getState() << endl;
    cout << "Zip: " << customer1.getZip() << endl;
    cout << "Phone Number: " << customer1.getPhoneNumber() << endl;
    
}
