#include "book_item.h"
#include <iostream>

BookItem::BookItem(const std::string& title, const std::string& author, const std::string& isbn)
    : LibraryItem(title), author(author), isbn(isbn) {}

std::string BookItem::getAuthor() const { return author; }
std::string BookItem::getISBN() const { return isbn; }

void BookItem::setAuthor(const std::string& author) { this->author = author; }
void BookItem::setISBN(const std::string& isbn) { this->isbn = isbn; }

void BookItem::printDetails() const {
    std::cout << "Title: " << getTitle() << "\n"
              << "Author: " << author << "\n"
              << "ISBN: " << isbn << "\n"
              << "Status: " << (getIsCheckedOut() ? "Checked Out" : "Available") << "\n";
}

double BookItem::calculateLateFees(int daysOverdue) const {
    return daysOverdue * 1.0; // Example fee calculation
}

