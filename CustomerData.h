//
//  CustomerData.h
//  PersonCustomerData project
//
//  Created by Jeff Wiseman on 4/24/19.
//  Copyright © 2019 Jeff Wiseman. All rights reserved.
//

#ifndef CustomerData_h
#define CustomerData_h
#include "PersonData.h"
#include <string>

using namespace std;

class CustomerData : public PersonData
{
private:
    //fields
    int customerNumber;
    bool mailingList;
    
public:
    CustomerData() : PersonData()
    {
        customerNumber = 0;
        mailingList = false;
    }
    
    //mutators
    void setCustomerNumber(int c)
    {
        customerNumber = c;
    }
    
    void setMailingList(bool m)
    {
        mailingList = m;
    }
    
    //accessors
    int getCustomerNumber() const
    {
        return customerNumber;
    }
    
    bool getMailingList()
    {
        return mailingList;
    }
};


#endif /* CustomerData_h */
