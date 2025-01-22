#include "PatronRecord.h"
#include <iostream>

void PatronRecord::addBook(BookItem* book) {
    checkedOutBooks.push_back(book);
}

void PatronRecord::removeBook(BookItem* book) {
    checkedOutBooks.erase(std::remove(checkedOutBooks.begin(), checkedOutBooks.end(), book), checkedOutBooks.end());
}

void PatronRecord::listCheckedOutBooks() const {
    for (const auto& book : checkedOutBooks) {
        book->printDetails();
    }
}

size_t PatronRecord::getBorrowedBookCount() const {
    return checkedOutBooks.size();
}

bool PatronRecord::hasOverdueBooks() const {
    // Check if any of the books are overdue
    return false; // Placeholder
}

double PatronRecord::calculateTotalLateFees() const {
    double totalFees = 0.0;
    for (const auto& book : checkedOutBooks) {
        totalFees += book->calculateLateFees(0); // Placeholder for actual overdue days
    }
    return totalFees;
}