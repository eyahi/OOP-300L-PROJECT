#include <iostream>
#include <string>
using namespace std;
#ifndef PATRON_H
#define PATRON_H

class Patron {
private:
    string name;
    string lcn;
    string contact;
public:
    void setName(const string& NAME) {
        name = NAME;
    }
    string getName() {
        return name;
    }
    void setLcn(const string& LCN) {
        lcn = LCN;
    }
    string getLcn() {
        return lcn;
    }
    void updateContactInfo(const string& newContactInfo) {
        contact = newContactInfo;
    }
    string setContactInfo () {
        return contact;
    }
    void canBorrowMoreBooks(int currentBorrowedCount, int maxLimit = 3) {
        if (currentBorrowedCount >= maxLimit)
        {
            cout << "Cannot borrow more books!" << endl;
        }  
    }
};

#endif