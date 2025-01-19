#include <iostream>
#include <string>
using namespace std;

#ifndef BOOKITEM_H
#define BOOKITEM_H

#include "libraryItem.h"

class BookItem : public LibraryItem {
private:
    string author;
    string isbn;

public:
    void setAuthor(const string& AUTHOR) {
        author = AUTHOR;
    }
    string getAuthor() {
        return author;
    }
    void setIsbn(const string& ISBN) {
        isbn = ISBN;
    }
    string getIsbn() {
        return isbn;
    }
    void printDetails() {
        getTitle();
        getDueDate();
        getAuthor();
        getIsbn();
        Checkout();
    }
    double calculateLateFees(int daysOverdue) {
        return daysOverdue * 100.00;
    }
};

#endif