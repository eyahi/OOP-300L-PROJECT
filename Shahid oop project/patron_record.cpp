#include "patron_record.h"

// Functions for managing checked out books
void PatronRecord::addBook(const BookItem& book) {
    checkedOutBooks.push_back(book);
}

void PatronRecord::removeBook(const std::string& isbn) {
    // Logic to remove a book by ISBN
}

void PatronRecord::listCheckedOutBooks() const {
    // Logic to list all checked out books
}

int PatronRecord::getBorrowedBookCount() const {
    return checkedOutBooks.size();
}

bool PatronRecord::hasOverdueBooks() const {
    // Logic to check for overdue books
    return false; // Placeholder
}

double PatronRecord::calculateTotalLateFees() const {
    // Logic to calculate total late fees
    return 0.0; // Placeholder
}
