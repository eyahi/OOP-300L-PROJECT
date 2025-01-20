#include "library.h"
#include <iostream>

void Library::addBook(const Book& book) {
    books.push_back(book);
}

void Library::addPatron(const Patron& patron) {
    patrons.push_back(patron);
}

void Library::borrowBook(const std::string& isbn, const std::string& patronName) {
    for (auto& book : books) {
        if (book.getISBN() == isbn) {
            std::cout << patronName << " borrowed \"" << book.getTitle() << "\"\n";
            return;
        }
    }
    std::cout << "Book with ISBN " << isbn << " not found!\n";
}

void Library::returnBook(const std::string& isbn) {
    std::cout << "Book with ISBN " << isbn << " returned to the library.\n";
}

void Library::listBooks() {
    std::cout << "Books in the library:\n";
    for (const auto& book : books) {
        std::cout << "Title: " << book.getTitle()
            << ", Author: " << book.getAuthor()
            << ", ISBN: " << book.getISBN() << "\n";
    }
}

void Library::listPatrons() {
    std::cout << "Patrons in the library:\n";
    for (const auto& patron : patrons) {
        std::cout << "Name: " << patron.getName()
            << ", Library Card Number: " << patron.getLibraryCardNumber() << "\n";
    }
}