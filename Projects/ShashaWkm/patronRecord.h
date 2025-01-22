#include <iostream>
#include <string>
#include <vector>
using namespace std;

#ifndef PATRONRECORD_H
#define PATRONRECORD_H

#include "bookItem.h"

class PatronRecord {
private:
    vector<int> checkedOutBooks;

public:
    PatronRecord() : checkedOutBooks() {}

    void addBook(const string& title) {
        LibraryItem l_item;
        BookItem b_item;
        b_item.setAuthor(title);

        checkedOutBooks.emplace_back(l_item.getTitle(),b_item.getAuthor(),b_item.getIsbn(),l_item.getDueDate());
    }
    void subBook() {
        checkedOutBooks.resize(checkedOutBooks.size() - 4);
    }
    void listCheckedOutBooks() const {
        for (int list : checkedOutBooks) {
            cout << "Here is a list of all your checked out books: " << endl;
            cout << endl;
            cout << list << endl;
        }
    }
    void getBorrowedCount() {
        cout << "You have checked out " << checkedOutBooks.size() / 4 << " Books" << endl;
    }
    
};

#endif