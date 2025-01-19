#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "book_item.h"
#include "patron.h"
#include "patron_record.h"

class Library {
private:
    std::vector<BookItem> books;
    std::vector<Patron> patrons;
    std::vector<PatronRecord> patronRecords;

public:
    // Functions to add books and patrons
    void addBook(const BookItem& book);
    void addPatron(const Patron& patron);

    // Functions to borrow and return books
    void borrowBook(const std::string& isbn, const std::string& patronCardNumber);
    void returnBook(const std::string& isbn, const std::string& patronCardNumber);

    // Search functionalities
    std::vector<BookItem> searchBooksByTitle(const std::string& title);
    std::vector<BookItem> searchBooksByAuthor(const std::string& author);
    std::vector<Patron> searchPatronByName(const std::string& name);

    // Overdue management
    std::vector<BookItem> listOverdueBooks();
    void notifyPatronsWithOverdueBooks();

    // Report generation
    void generateLibraryReport();

    // Book availability and reservations
    bool isBookAvailable(const std::string& isbn);
    void reserveBook(const std::string& isbn, const std::string& patronCardNumber);

    // Transaction history
    std::vector<std::string> viewTransactionHistory(const std::string& patronCardNumber);
};

#endif // LIBRARY_H

