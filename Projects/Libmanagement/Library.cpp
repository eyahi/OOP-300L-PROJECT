#include "Library.h"
#include "BookItem.h"
#include "Patron.h"
#include <iostream>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#define _CRT_SECURE_NO_WARNINGS

std::string getCurrentDateAsString() {
    time_t now = time(0); // Get the current time
    tm localtm; // Create a tm structure
    localtime_s(&localtm, &now); // Convert to local time
        char buffer[80];
    strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", &localtm); // Format the time
    return std::string(buffer); // Return as a string
    std::cout << "Curren date and time: " << getCurrentDateAsString() << std::endl;
}


 
    void Library::addBook(BookItem* book) {
    books.push_back(book);
}

void Library::addPatron(const Patron& patron) {
    patrons.push_back(patron);
    patronRecords.emplace_back(); // Add a new PatronRecord for the new patron
}

void Library::borrowBook(const std::string& isbn, const std::string& patronCardNumber) {
    BookItem* book = findBookByISBN(isbn);
    PatronRecord* record = findPatronRecord(patronCardNumber);

    if (book && record && isBookAvailable(isbn)) {
        book->checkOut();
        record->addBook(book);
        std::cout << "Book borrowed: " << book->getTitle() << " by " << patronCardNumber << std::endl;
    }
    else {
        std::cout << "Book is not available or invalid patron." << std::endl;
    }
}

void Library::returnBook(const std::string& isbn, const std::string& patronCardNumber) {
    BookItem* book = findBookByISBN(isbn);
    PatronRecord* record = findPatronRecord(patronCardNumber);

    if (book && record) {
        record->removeBook(book);
        book->returnItem();
        std::cout << "Book returned: " << book->getTitle() << " by " << patronCardNumber << std::endl;
    }
    else {
        std::cout << "Invalid return request." << std::endl;
    }
}

void Library::searchBooksByTitle(const std::string& title) const {
    for (const auto& book : books) {
        if (book->getTitle() == title) {
            book->printDetails();
        }
    }
}

void Library::searchBooksByAuthor(const std::string& author) const {
    for (const auto& book : books) {
        if (book->getAuthor() == author) {
            book->printDetails();
        }
    }
}

void Library::searchPatronByName(const std::string& name) const {
    for (const auto& patron : patrons) {
        if (patron.getName() == name) {
            std::cout << "Patron found: " << patron.getName() << ", Card Number: " << patron.getLibraryCardNumber() << std::endl;
        }
    }
}

void Library::listOverdueBooks() const {
    for (const auto& book : books) {
        // Add logic to check for overdue status
    }
}

void Library::notifyPatronsWithOverdueBooks() const {
    for (const auto& record : patronRecords) {
        if (record.hasOverdueBooks()) {
            // Notify the patron, e.g., print a message
        }
    }
}

void Library::generateLibraryReport() const {
    std::cout << "Library Report:" << std::endl;
    std::cout << "Available Books:" << std::endl;
    for (const auto& book : books) {
        if (!book->isCheckedOut) {
            book->printDetails();
        }
    }
    std::cout << "Checked-Out Books:" << std::endl;
    for (const auto& book : books) {
        if (book->isCheckedOut) {
            book->printDetails();
        }
    }
}

bool Library::isBookAvailable(const std::string& isbn) {
    BookItem* book = findBookByISBN(isbn);
    return book && !book->isCheckedOut;
}

void Library::reserveBook(const std::string& isbn, const std::string& patronCardNumber) {
    // Implement reservation logic
}

void Library::viewTransactionHistory(const std::string& patronCardNumber){
    PatronRecord* record = findPatronRecord(patronCardNumber);
    if (record) {
        record->listCheckedOutBooks();
    }
    else {
        std::cout << "Patron not found." << std::endl;
    }
}

PatronRecord* Library::findPatronRecord(const std::string& patronCardNumber) {
    for (size_t i = 0; i < patrons.size(); ++i) {
        if (patrons[i].getLibraryCardNumber() == patronCardNumber) {
            return &patronRecords[i];
        }
    }
    return nullptr;
}

BookItem* Library::findBookByISBN(const std::string& isbn) {
    for (auto& book : books) {
        if (book->getISBN() == isbn) {
            return book;
        }
    }
    return nullptr;
}
