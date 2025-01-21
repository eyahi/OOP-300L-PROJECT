#include <iostream>
#include "patron_record.h"
#include <string>

void PatronRecord::addBook(const BookItem& book) {
    checkedOutBooks.push_back(book);
    std::cout << "Added book to patron's record: " << book.getTitle() << std::endl;
}

void PatronRecord::removeBook(const std::string& isbn) {
    for (size_t i = 0; i < checkedOutBooks.size(); ++i) {
        if (checkedOutBooks[i].getISBN() == isbn) {
            std::cout << "Removed book from patron's record: " << checkedOutBooks[i].getTitle() << std::endl;
            checkedOutBooks.erase(checkedOutBooks.begin() + i);
            return;
        }
    }
    std::cout << "Book with ISBN " << isbn << " not found in patron's record"<<std::endl;
}

std::vector<BookItem> PatronRecord::listCheckedOutBooks() const {
    std::cout << "Checked-out books:"<<std::endl;
    for (const auto& book : checkedOutBooks) {
        book.printDetails();
    }
    return checkedOutBooks;
}

int PatronRecord::getBorrowedBookCount() const {
    return checkedOutBooks.size();
}

bool PatronRecord::hasOverdueBooks() const {
    for (size_t i = 0; i < checkedOutBooks.size(); ++i) {
        // Replace with actual overdue logic if available
        if (/* checkedOutBooks[i].isOverdue() */ false) {
            return true;
        }
    }
    return false;
}

double PatronRecord::calculateTotalLateFees() const {
    double totalFees = 0.0;
    for (size_t i = 0; i < checkedOutBooks.size(); ++i) {
        // Replace 5 with actual overdue days logic if available
        totalFees += checkedOutBooks[i].calculateLateFees(/* daysOverdue */ 5);
    }
    return totalFees;
}