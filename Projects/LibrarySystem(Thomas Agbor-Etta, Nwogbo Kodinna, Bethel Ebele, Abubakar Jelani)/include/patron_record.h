#ifndef PATRON_RECORD_H
#define PATRON_RECORD_H

#include <vector>
#include "book_item.h"

class PatronRecord {
private:
    std::vector<BookItem> checkedOutBooks;

public:
    // Declaration of Functions
    void addBook(const BookItem& book);
    void removeBook(const std::string& isbn);
    void listCheckedOutBooks() const;
    int getBorrowedBookCount() const;
    bool hasOverdueBooks() const;
    double calculateTotalLateFees() const;
};

#endif // PATRON_RECORD_H
