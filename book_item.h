#include<iostream>
#ifndef BOOK_ITEM_H
#define BOOK_ITEM_H
#include "library_item.h"
#include <string>

class BookItem : public LibraryItem {
private:
    
    std::string author; // The author of the book
    std::string isbn;   // The ISBN of the book

public:
    // Constructor
    BookItem(std::string a, std::string i, std::string t, bool ic=false, int d=0) : LibraryItem(t, a, i){   
        author = a;
        isbn = i;
    };

    // Getters
    std::string getAuthor()const{
        return author;
    }; 
    
    std::string getISBN()const{
        return isbn;
    };

    // Setters
    void setAuthor(const std::string& author){};
    void setISBN(const std::string& isbn){};

    // Methods
    void printDetails() const{};              // Print details of the book
    int calculateLateFees(int daysOverdue)const{
        return daysOverdue;
    } ; // Calculate the late fees based on overdue days
};

#endif // BOOK_ITEM_H
