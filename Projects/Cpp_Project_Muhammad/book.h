// Header: book.h
#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    std::string title; // Stores the title of the book
    std::string author; // Stores the author's name
    std::string isbn; // Stores the unique ISBN of the book

public:
    // Constructor to initialize the book's attributes
    Book(const std::string& title, const std::string& author, const std::string& isbn);

    // Getters to retrieve book attributes
    std::string getTitle() const;
    std::string getAuthor() const;
    std::string getISBN() const;

    // Setters to modify book attributes
    void setTitle(const std::string& title);
    void setAuthor(const std::string& author);
    void setISBN(const std::string& isbn);
};

#endif // BOOK_H