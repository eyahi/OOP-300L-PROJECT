#pragma once
#ifndef LIBRARY_H
#define LIBRARY_H

#include "book.h"
#include "patron.h"
#include <vector>
#include <string>

class Library {
private:
    std::vector<Book> books;
    std::vector<Patron> patrons;

public:
    void addBook(const Book& book);
    void addPatron(const Patron& patron);
    void borrowBook(const std::string& isbn, const std::string& patronName);
    void returnBook(const std::string& isbn);
    void listBooks();
    void listPatrons();
};

#endif 