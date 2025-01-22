// Header: library.h
#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "book_item.h"
#include "patron.h"
#include "patron_record.h"

class Library {
private:
    std::vector<BookItem> books; // Collection of all books in the library
    std::vector<Patron> patrons; // List of registered patrons
    std::vector<PatronRecord> patronRecords; // Records of books borrowed by each patron

public:
    // Adds a book to the library's collection
    void addBook(const BookItem& book);

    // Registers a new patron
    void addPatron(const Patron& patron);

    // Allows a patron to borrow a book by ISBN
    void borrowBook(const std::string& isbn, const std::string& patronCardNumber);

    // Processes the return of a borrowed book by ISBN
    void returnBook(const std::string& isbn, const std::string& patronCardNumber);

    // Lists all books in the library
    void listBooks() const;

    // Lists all patrons in the library
    void listPatrons() const;

    // Lists all overdue books
    void listOverdueBooks() const;

    // Notifies patrons with overdue books
    void notifyPatronsWithOverdueBooks() const;

    // Generates a summary report of the library's current state
    void generateLibraryReport() const;

    // Personalization: Add default books and patrons
    void addDefaultData();
};

#endif // LIBRARY_H