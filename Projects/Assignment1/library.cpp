#include "library.h"
#include <iostream>
#include <algorithm> // Include this header for std::count_if

void Library::addBook(const BookItem& book) {
    books.push_back(book);
}

void Library::addPatron(const Patron& patron) {
    patrons.push_back(patron);
    patronRecords.push_back(PatronRecord());
}

void Library::borrowBook(const std::string& isbn, const std::string& patronCardNumber) {
    auto bookIt = std::find_if(books.begin(), books.end(), [&isbn](const BookItem& book) {
        return book.getISBN() == isbn && !book.getIsCheckedOut();
    });

    if (bookIt == books.end()) {
        std::cout << "Book not available or already checked out.\n";
        return;
    }

    auto patronIt = std::find_if(patrons.begin(), patrons.end(), [&patronCardNumber](const Patron& patron) {
        return patron.getLibraryCardNumber() == patronCardNumber;
    });

    if (patronIt == patrons.end()) {
        std::cout << "Patron not found.\n";
        return;
    }

    int index = std::distance(patrons.begin(), patronIt);
    PatronRecord& record = patronRecords[index];

    if (record.getBorrowedBookCount() >= 5) { // Example limit
        std::cout << "Patron cannot borrow more books.\n";
        return;
    }

    bookIt->checkOut();
    record.addBook(*bookIt);
    std::cout << "Book borrowed: \"" << bookIt->getTitle() << "\" by " << bookIt->getAuthor() << " (ISBN: " << bookIt->getISBN() << ")\n"
              << "Patron: " << patronIt->getName() << " (Library Card: " << patronIt->getLibraryCardNumber() << ")\n";
}

void Library::returnBook(const std::string& isbn, const std::string& patronCardNumber) {
    auto bookIt = std::find_if(books.begin(), books.end(), [&isbn](const BookItem& book) {
        return book.getISBN() == isbn && book.getIsCheckedOut();
    });

    if (bookIt == books.end()) {
        std::cout << "Book not found or not checked out.\n";
        return;
    }

    auto patronIt = std::find_if(patrons.begin(), patrons.end(), [&patronCardNumber](const Patron& patron) {
        return patron.getLibraryCardNumber() == patronCardNumber;
    });

    if (patronIt == patrons.end()) {
        std::cout << "Patron not found.\n";
        return;
    }

    int index = std::distance(patrons.begin(), patronIt);
    PatronRecord& record = patronRecords[index];

    auto bookInRecord = std::find_if(record.listCheckedOutBooks().begin(), record.listCheckedOutBooks().end(), [&isbn](const BookItem& book) {
        return book.getISBN() == isbn;
    });

    if (bookInRecord == record.listCheckedOutBooks().end()) {
        std::cout << "Book not found in patron's record.\n";
        return;
    }

    bookIt->returnItem();
    record.removeBook(isbn);
    std::cout << "Book returned: \"" << bookIt->getTitle() << "\" by " << bookIt->getAuthor() << " (ISBN: " << bookIt->getISBN() << ")\n"
              << "Patron: " << patronIt->getName() << " (Library Card: " << patronIt->getLibraryCardNumber() << ")\n";
}

std::vector<BookItem> Library::searchBooksByTitle(const std::string& title) {
    std::vector<BookItem> results;
    for (const auto& book : books) {
        if (book.getTitle().find(title) != std::string::npos) {
            results.push_back(book);
        }
    }
    return results;
}

std::vector<BookItem> Library::searchBooksByAuthor(const std::string& author) {
    std::vector<BookItem> results;
    for (const auto& book : books) {
        if (book.getAuthor().find(author) != std::string::npos) {
            results.push_back(book);
        }
    }
    return results;
}

std::vector<Patron> Library::searchPatronByName(const std::string& name) {
    std::vector<Patron> results;
    for (const auto& patron : patrons) {
        if (patron.getName().find(name) != std::string::npos) {
            results.push_back(patron);
        }
    }
    return results;
}

std::vector<BookItem> Library::listOverdueBooks() {
    std::vector<BookItem> overdueBooks;
    // Logic to list overdue books
    return overdueBooks;
}

void Library::notifyPatronsWithOverdueBooks() {
    // Logic to notify patrons with overdue books
}

void Library::generateLibraryReport() {
    std::cout << "Library Report:\n"
              << "Total Books: " << books.size() << "\n"
              << "Books Available: " << std::count_if(books.begin(), books.end(), [](const BookItem& book) { return !book.getIsCheckedOut(); }) << "\n"
              << "Books Checked Out: " << std::count_if(books.begin(), books.end(), [](const BookItem& book) { return book.getIsCheckedOut(); }) << "\n"
              << "Total Patrons: " << patrons.size() << "\n";
}

bool Library::isBookAvailable(const std::string& isbn) {
    for (const auto& book : books) {
        if (book.getISBN() == isbn && !book.getIsCheckedOut()) {
            return true;
        }
    }
    return false;
}

void Library::reserveBook(const std::string& isbn, const std::string& patronCardNumber) {
    // Logic to reserve a book
}

std::vector<std::string> Library::viewTransactionHistory(const std::string& patronCardNumber) {
    std::vector<std::string> history;
    // Logic to view transaction history
    return history;
}

