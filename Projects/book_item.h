#ifndef BOOK_ITEM_H
#define BOOK_ITEM_H

#include "library_item.h"

class BookItem : public LibraryItem {
private:
    std::string author;
    std::string isbn;

public:
    BookItem(const std::string& title, const std::string& author, const std::string& isbn);
    void printDetails() const;
    double calculateLateFees(int daysOverdue) const;
    std::string getISBN() const; // Added for access
};

#endif // BOOK_ITEM_H