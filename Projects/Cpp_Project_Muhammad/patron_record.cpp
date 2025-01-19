// Source: patron_record.cpp
#include "patron_record.h"
#include <algorithm>

// Adds a book to the patron's checked-out list
void PatronRecord::addBook(const BookItem& book) {
    checkedOutBooks.push_back(book);
}

// Removes a book from the checked-out list by matching ISBN
void PatronRecord::removeBook(const std::string& isbn) {
    checkedOutBooks.erase(std::remove_if(checkedOutBooks.begin(), checkedOutBooks.end(),
        [&isbn](const BookItem& book) { return book.getISBN() == isbn; }),
        checkedOutBooks.end());
}

// Returns the list of currently checked-out books
std::vector<BookItem> PatronRecord::listCheckedOutBooks() const {
    return checkedOutBooks;
}

// Returns the count of books currently checked out
int PatronRecord::getBorrowedBookCount() const {
    return checkedOutBooks.size();
}

// Placeholder for checking overdue books
bool PatronRecord::hasOverdueBooks() const {
    // Logic for checking overdue books can be added here
    return false;
}

// Calculates total late fees for all overdue books
double PatronRecord::calculateTotalLateFees() const {
    double totalFees = 0.0;
    for (const auto& book : checkedOutBooks) {
        // Placeholder: Assume all books are overdue by 5 days for testing
        totalFees += book.calculateLateFees(5);
    }
    return totalFees;
}