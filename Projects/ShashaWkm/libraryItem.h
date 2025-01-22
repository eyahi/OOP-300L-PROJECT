#include <iostream>
#include <string>
using namespace std;
#ifndef LIBRARYITEM_H
#define LIBRARYITEM_H

class LibraryItem {
private:
    string title;
    bool isCheckedOut;
    string dueDate;

public:
    LibraryItem() : isCheckedOut(false) {}

    void setCheckOut (bool check) {
        isCheckedOut = check;
    }
    bool getCheckOut() const {
        return isCheckedOut;
    }
    void Checkout() {
        if (isCheckedOut = false)
        {
            cout << "Book is Available" << endl;
        } else {
            cout << "Book is not Available" << endl;
        }
    }
    void returnItem() {
        cout << "Item Returned" << endl;
    }
    void renewItem(int extraDays) {
        cout << dueDate << "+ " << extraDays << " Days" << endl;
    }
    void markAsLost() {
        cout << "Item is lost" << endl;
    }
    void setTitle(const string& TITLE) {
        title = TITLE;
    }
    string getTitle() {
        return title;
    }
    void setDueDate(const string& DUE) {
        dueDate = DUE;
    }
    string getDueDate() {
        return dueDate;
    }
};

#endif