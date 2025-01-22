#include "BookItem.h"

BookItem::BookItem(const std::string& title, const std::string& author, const std::string& isbn)
    : LibraryItem(title), author(author), isbn(isbn) {}

void BookItem::printDetails() const {
    std::cout << "Title: " << title << ", Author: " << author << ", ISBN: " << isbn
        << ", Checked Out: " << (isCheckedOut ? "Yes" : "No") << std::endl;
}

double BookItem::calculateLateFees(int daysOverdue) const
{
    return 0.0;
}

std::string BookItem::getISBN() const {
    return isbn; // Return the ISBN
}

std::string BookItem::getTitle() const {
    return title; // Return the title
}

std::string BookItem::getAuthor() const {
    return author; // Return the author
}