#include "book_item.h"

// Constructor
BookItem::BookItem(const std::string& title, const std::string& author, const std::string& isbn)
    : LibraryItem(title), author(author), isbn(isbn) {}

// Getters
std::string BookItem::getAuthor() const {
    return author;
}

std::string BookItem::getISBN() const {
    return isbn;
}

// Setters
void BookItem::setAuthor(const std::string& author) {
    this->author = author;
}

void BookItem::setISBN(const std::string& isbn) {
    this->isbn = isbn;
}

// Overridden functions
void BookItem::printDetails() const {
    // Print book details logic here
}

double BookItem::calculateLateFees(int daysOverdue) const {
    // Calculate late fees logic here
    return 0.0; // Placeholder
}
