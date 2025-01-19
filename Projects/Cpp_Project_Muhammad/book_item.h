// Header: book_item.h
#ifndef BOOK_ITEM_H
#define BOOK_ITEM_H

#include "library_item.h"

class BookItem : public LibraryItem {
private:
    std::string author; // Author of the book
    std::string isbn; // ISBN of the book

public:
    // Constructor to initialize book-specific details
    BookItem(const std::string& title, const std::string& author, const std::string& isbn);

    // Getters for book-specific details
    std::string getAuthor() const;
    std::string getISBN() const;

    // Setters for book-specific details
    void setAuthor(const std::string& author);
    void setISBN(const std::string& isbn);

    // Prints details of the book
    void printDetails() const;

    // Calculates late fees based on the number of overdue days
    double calculateLateFees(int daysOverdue) const;
};

#endif // BOOK_ITEM_H