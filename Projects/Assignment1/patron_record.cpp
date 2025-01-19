#include "patron_record.h"
#include <algorithm> // Include this header for std::remove_if

void PatronRecord::addBook(const BookItem& book) {
    checkedOutBooks.push_back(book);
}

void PatronRecord::removeBook(const std::string& isbn) {
    checkedOutBooks.erase(
        std::remove_if(
            checkedOutBooks.begin(),
            checkedOutBooks.end(),
            [&isbn](const BookItem& book) {
                return book.getISBN() == isbn;
            }
        ),
        checkedOutBooks.end()
    );
}

std::vector<BookItem> PatronRecord::listCheckedOutBooks() const {
    return checkedOutBooks;
}

int PatronRecord::getBorrowedBookCount() const {
    return checkedOutBooks.size();
}

bool PatronRecord::hasOverdueBooks() const {
    // Logic to check for overdue books
    return false;
}

double PatronRecord::calculateTotalLateFees() const {
    double totalFees = 0.0;
    for (const auto& book : checkedOutBooks) {
        // Calculate and add fees
    }
    return totalFees;
}


