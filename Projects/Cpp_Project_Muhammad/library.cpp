// Source: library.cpp
#include "library.h"
#include <iostream>
#include <algorithm>

// Adds a book to the library's collection
void Library::addBook(const BookItem& book) {
    books.push_back(book);
}

// Registers a new patron and initializes their record
void Library::addPatron(const Patron& patron) {
    patrons.push_back(patron);
    patronRecords.emplace_back();
}

// Allows a patron to borrow a book if available
void Library::borrowBook(const std::string& isbn, const std::string& patronCardNumber) {
    // Find the book by ISBN and check availability
    auto bookIt = std::find_if(books.begin(), books.end(),
        [&isbn](const BookItem& book) { return book.getISBN() == isbn && !book.getIsCheckedOut(); });

    if (bookIt == books.end()) {
        std::cout << "Book not available for borrowing.\n";
        return;
    }

    // Find the patron by library card number
    auto patronIt = std::find_if(patrons.begin(), patrons.end(),
        [&patronCardNumber](const Patron& patron) { return patron.getLibraryCardNumber() == patronCardNumber; });

    if (patronIt == patrons.end()) {
        std::cout << "Patron not found.\n";
        return;
    }

    // Borrow the book and update the patron's record
    int patronIndex = std::distance(patrons.begin(), patronIt);
    bookIt->checkOut("2025-01-18"); // Example due date
    patronRecords[patronIndex].addBook(*bookIt);
    std::cout << "Book borrowed successfully.\n";
}

// Processes the return of a borrowed book
void Library::returnBook(const std::string& isbn, const std::string& patronCardNumber) {
    // Find the patron by library card number
    auto patronIt = std::find_if(patrons.begin(), patrons.end(),
        [&patronCardNumber](const Patron& patron) { return patron.getLibraryCardNumber() == patronCardNumber; });

    if (patronIt == patrons.end()) {
        std::cout << "Patron not found.\n";
        return;
    }

    // Remove the book from the patron's record
    int patronIndex = std::distance(patrons.begin(), patronIt);
    patronRecords[patronIndex].removeBook(isbn);

    // Mark the book as returned in the library's collection
    auto bookIt = std::find_if(books.begin(), books.end(),
        [&isbn](const BookItem& book) { return book.getISBN() == isbn; });

    if (bookIt != books.end()) {
        bookIt->returnItem();
        std::cout << "Book returned successfully.\n";
    }
}

// Lists all books in the library
void Library::listBooks() const {
    std::cout << "Library Books:\n";
    for (const auto& book : books) {
        std::cout << "Title: " << book.getTitle() 
                  << ", Author: " << book.getAuthor() 
                  << ", ISBN: " << book.getISBN() 
                  << ", Checked Out: " << (book.getIsCheckedOut() ? "Yes" : "No") 
                  << "\n";
    }
}

// Lists all patrons in the library
void Library::listPatrons() const {
    std::cout << "Library Patrons:\n";
    for (const auto& patron : patrons) {
        std::cout << "Name: " << patron.getName() 
                  << ", Library Card Number: " << patron.getLibraryCardNumber() 
                  << "\n";
    }
}

// Lists all overdue books in the library
void Library::listOverdueBooks() const {
    for (const auto& book : books) {
        if (book.getIsCheckedOut()) {
            // Placeholder: Logic for checking overdue books
            std::cout << book.getTitle() << " is overdue.\n";
        }
    }
}

// Notifies patrons with overdue books
void Library::notifyPatronsWithOverdueBooks() const {
    for (size_t i = 0; i < patrons.size(); ++i) {
        if (patronRecords[i].hasOverdueBooks()) {
            std::cout << "Notify " << patrons[i].getName() << " about overdue books.\n";
        }
    }
}

// Generates a summary report of the library's current state
void Library::generateLibraryReport() const {
    int availableBooks = std::count_if(books.begin(), books.end(),
        [](const BookItem& book) { return !book.getIsCheckedOut(); });

    std::cout << "Library Report:\n";
    std::cout << "Total Books: " << availableBooks << "\n";
    std::cout << "Total Patrons: " << patrons.size() << "\n";
}

// Adds default books and patrons
void Library::addDefaultData() {
    // Adding books with personalization
    addBook(BookItem("CPE 303 Object Oriented Programming", "Muhammad Awwal Muhammad", "20222052"));
    addBook(BookItem("CPE 303 Object Oriented Programming", "Rayyan Akindele", "20221151"));
    addBook(BookItem("CPE 303 Object Oriented Programming", "Tobi Opemipo Awoniyi", "20220848"));
    addBook(BookItem("CPE 303 Object Oriented Programming", "Boniface Nnajiofor", "20221874"));
    addBook(BookItem("CPE 303 Object Oriented Programming", "Christian Chiaha", "20220424"));

    // Adding lecturer as a patron
    addPatron(Patron("Dr. Ali Emmanuel", "18012025"));
}