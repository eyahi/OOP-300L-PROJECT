#include "book_item.h"
#include <iostream>

BookItem::BookItem(const std::string& title, const std::string& author, const std::string& isbn)
    : LibraryItem(title), author(author), isbn(isbn) {}

void BookItem::printDetails() const {
    std::cout << "Title: " << getTitle() << ", Author: " << author << ", ISBN: " << isbn
              << ", Checked Out: " << (getIsCheckedOut() ? "Yes" : "No") << std::endl;
}

double BookItem::calculateLateFees(int daysOverdue) const {
    const double lateFeePerDay = 0.50; // Example fee
    return daysOverdue * lateFeePerDay;
}

std::string BookItem::getISBN() const {
    return isbn;
}