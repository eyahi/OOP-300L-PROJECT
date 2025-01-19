#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include <string>
#include "BookItem.h"
#include "Patron.h"
#include "PatronRecord.h"

class Library {
private:
    std::vector<BookItem*> books;
    std::vector<Patron> patrons;
    std::vector<PatronRecord> patronRecords;

public:
    void addBook(BookItem* book);
    void addPatron(const Patron& patron);
    void borrowBook(const std::string& isbn, const std::string& patronCardNumber);
    void returnBook(const std::string& isbn, const std::string& patronCardNumber);
    void searchBooksByTitle(const std::string& title) const;
    void searchBooksByAuthor(const std::string& author) const;
    void searchPatronByName(const std::string& name) const;
    void listOverdueBooks() const;
    void notifyPatronsWithOverdueBooks() const;
    void generateLibraryReport() const;
    bool isBookAvailable(const std::string& isbn);
    void reserveBook(const std::string& isbn, const std::string& patronCardNumber);
    void viewTransactionHistory(const std::string& patronCardNumber);
    
private:
    PatronRecord* findPatronRecord(const std::string& patronCardNumber);
    BookItem* findBookByISBN(const std::string& isbn);
};

#endif // LIBRARY_H