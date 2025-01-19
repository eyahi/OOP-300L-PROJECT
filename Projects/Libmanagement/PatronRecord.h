#ifndef PATRONRECORD_H
#define PATRONRECORD_H

#include <vector>
#include <string>
#include "BookItem.h"

class PatronRecord {
private:
    std::vector<BookItem*> checkedOutBooks;

public:
    void addBook(BookItem* book);
    void removeBook(BookItem* book);
    void listCheckedOutBooks() const;
    size_t getBorrowedBookCount() const;
    bool hasOverdueBooks() const;
    double calculateTotalLateFees() const;
    // Implement a method to check if a book is overdue
};

#endif // PATRONRECORD_H