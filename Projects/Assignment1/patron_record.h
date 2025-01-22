#ifndef PATRON_RECORD_H
#define PATRON_RECORD_H

#include <vector>
#include "book_item.h"

class PatronRecord {
private:
    std::vector<BookItem> checkedOutBooks;

public:
    void addBook(const BookItem& book);
    void removeBook(const std::string& isbn);
    std::vector<BookItem> listCheckedOutBooks() const;
    int getBorrowedBookCount() const;
    bool hasOverdueBooks() const;
    double calculateTotalLateFees() const;
};

#endif // PATRON_RECORD_H

