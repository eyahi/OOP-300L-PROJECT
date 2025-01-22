#ifndef BOOKITEM_H
#define BOOKITEM_H

#include "LibraryItem.h"
#include <string>
#include <iostream>

class BookItem : public LibraryItem {
private:
    std::string author;
    std::string isbn;

public:
    BookItem(const std::string& title, const std::string& author, const std::string& isbn);
    void printDetails() const;
    double calculateLateFees(int daysOverdue) const;

    std::string getISBN() const;

    // Getter methods
    std::string getTitle() const;  
    std::string getAuthor() const; 
};

#endif // BOOKITEM_H