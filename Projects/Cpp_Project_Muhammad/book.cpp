// Source: book.cpp
#include "book.h"

// Constructor implementation
Book::Book(const std::string& title, const std::string& author, const std::string& isbn)
    : title(title), author(author), isbn(isbn) {}

// Getter for the book title
std::string Book::getTitle() const { return title; }

// Getter for the author's name
std::string Book::getAuthor() const { return author; }

// Getter for the ISBN
std::string Book::getISBN() const { return isbn; }

// Setter for the book title
void Book::setTitle(const std::string& title) { this->title = title; }

// Setter for the author's name
void Book::setAuthor(const std::string& author) { this->author = author; }

// Setter for the ISBN
void Book::setISBN(const std::string& isbn) { this->isbn = isbn; }