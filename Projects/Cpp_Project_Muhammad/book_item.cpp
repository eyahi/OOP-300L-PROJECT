// Source: book_item.cpp
#include "book_item.h"
#include <iostream>

// Constructor implementation
BookItem::BookItem(const std::string& title, const std::string& author, const std::string& isbn)
    : LibraryItem(title), author(author), isbn(isbn) {}

// Getter for the author's name
std::string BookItem::getAuthor() const { return author; }

// Getter for the ISBN
std::string BookItem::getISBN() const { return isbn; }

// Setter for the author's name
void BookItem::setAuthor(const std::string& author) { this->author = author; }

// Setter for the ISBN
void BookItem::setISBN(const std::string& isbn) { this->isbn = isbn; }

// Prints all details of the book, including availability status
void BookItem::printDetails() const {
    std::cout << "Title: " << getTitle() << "\n"
              << "Author: " << author << "\n"
              << "ISBN: " << isbn << "\n"
              << "Checked Out: " << (getIsCheckedOut() ? "Yes" : "No") << "\n"
              << "Due Date: " << getDueDate() << "\n";
}

// Calculates the late fees for overdue books
double BookItem::calculateLateFees(int daysOverdue) const {
    const double feePerDay = 0.5; // Fee rate per day
    return daysOverdue * feePerDay;
}