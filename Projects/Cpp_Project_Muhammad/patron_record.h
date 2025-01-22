// Header: patron_record.h
#ifndef PATRON_RECORD_H
#define PATRON_RECORD_H

#include <vector>
#include "book_item.h"

class PatronRecord {
private:
    std::vector<BookItem> checkedOutBooks; // List of books currently checked out by the patron

public:
    // Adds a book to the patron's record
    void addBook(const BookItem& book);

    // Removes a book from the patron's record by ISBN
    void removeBook(const std::string& isbn);

    // Returns a list of all books currently checked out
    std::vector<BookItem> listCheckedOutBooks() const;

    // Returns the count of books currently borrowed
    int getBorrowedBookCount() const;

    // Checks if the patron has any overdue books
    bool hasOverdueBooks() const;

    // Calculates the total late fees for all overdue books
    double calculateTotalLateFees() const;
};

#endif // PATRON_RECORD_H