#include "library.h"
#include <iostream>
#include <vector>
#include <algorithm>



void Library::addBook(const BookItem& book) {
    books.push_back(book);
    std::cout << "Added book: " << book.getTitle() << std::endl;
};

void Library::addPatron(const Patron& patron) {
    patrons.push_back(patron);
    std::cout << "Added patron: " << patron.getName() << std::endl;
};

void Library::borrowBook(const std::string& isbn, const std::string& patronCardNumber) {
    auto bookIt = std::find_if(books.begin(), books.end(),
                               [&](const BookItem& book) { return book.getISBN() == isbn; });

    if (bookIt != books.end() && !bookIt->getIsCheckedOut()) {
        bookIt->checkOut(); 
        for (int  i = 0; i < patrons.size(); ++i) {
            if (patrons[i].getLibraryCardNumber() == patronCardNumber) {
                patronRecords[i].addBook(*bookIt);
                break;
            }
        }
    } else {
        std::cout << "Book is unavailable.\n";
    }
}

void Library::returnBook(const std::string& isbn, const std::string& patronCardNumber) {
    for (int i = 0; i < patrons.size(); ++i) {
        if (patrons[i].getLibraryCardNumber() == patronCardNumber) {
            patronRecords[i].removeBook(isbn);
            break;
        }
    }

    auto bookIt = std::find_if(books.begin(), books.end(),
                               [&](const BookItem& book) { return book.getISBN() == isbn; });

    if (bookIt != books.end()) {
        bookIt->returnItem();
    }
}

void Library::searchBooksByTitle(const std::string& title) const {
    for (const auto& book : books) {
        if (book.getTitle().find(title) != std::string::npos) {
            book.printDetails();
        }
    }
}

void Library::searchBooksByAuthor(const std::string& author) const {
    for (const auto& book : books) {
        if (book.getAuthor().find(author) != std::string::npos) {
            book.printDetails();
        }
    }
}