#include "patron_record.h"
#include <iostream>

// Add a book to the patron's record
void PatronRecord::addBook(const BookItem& book) {
    checkedOutBooks.push_back(book);
}

// Remove a book from the patron's record by ISBN
void PatronRecord::removeBook(const std::string& isbn) {
    for (auto it = checkedOutBooks.begin(); it != checkedOutBooks.end(); ++it) {
        if (it->getISBN() == isbn) {
            checkedOutBooks.erase(it);
            return;
        }
    }
}

// List all checked-out books for the patron
void PatronRecord::listCheckedOutBooks() const {
    if (checkedOutBooks.empty()) {
        std::cout << "No books checked out.\n";
        return;
    }
    for (const auto& book : checkedOutBooks) {
        book.printDetails();
    }
}

// Get the count of borrowed books
int PatronRecord::getBorrowedBookCount() const {
    return checkedOutBooks.size();
}

// Placeholder for checking overdue books
bool PatronRecord::hasOverdueBooks() const {
    // Implement logic to check for overdue books
    return false; // Placeholder
}

// Placeholder for calculating total late fees
double PatronRecord::calculateTotalLateFees() const {
    // Implement logic to calculate late fees
    return 0.0; // Placeholder
}