#include "library.h"

// Add a book to the library
void Library::addBook(const BookItem& book) {
    books.push_back(book);
}

// Add a patron to the library
void Library::addPatron(const Patron& patron) {
    patrons.push_back(patron);
    patronRecords.push_back(PatronRecord()); // Initialize a new PatronRecord for the new patron
}

// Check if a book is available
bool Library::isBookAvailable(const std::string& isbn) const {
    for (const auto& book : books) {
        if (book.getISBN() == isbn && !book.getIsCheckedOut()) {
            return true;
        }
    }
    return false;
}

// Borrow a book
void Library::borrowBook(const std::string& isbn, const std::string& patronCardNumber) {
    if (!isBookAvailable(isbn)) {
        std::cout << "The book with ISBN " << isbn << " is not available for borrowing.\n";
        return;
    }

    for (auto& book : books) {
        if (book.getISBN() == isbn) {
            book.checkOut("Due Date Placeholder"); // You can implement a real due date logic
            std::cout << "Book borrowed: " << book.getTitle() << "\n";
            // Find the corresponding PatronRecord and add the book
            for (size_t i = 0; i < patrons.size(); ++i) {
                if (patrons[i].getLibraryCardNumber() == patronCardNumber) {
                    patronRecords[i].addBook(book);
                    return;
                }
            }
        }
    }
}

// Return a book
void Library::returnBook(const std::string& isbn, const std::string& patronCardNumber) {
    for (auto& book : books) {
        if (book.getISBN() == isbn && book.getIsCheckedOut()) {
            book.returnItem();
            std::cout << "Book returned: " << book.getTitle() << "\n";
            // Find the corresponding PatronRecord and remove the book
            for (size_t i = 0; i < patrons.size(); ++i) {
                if (patrons[i].getLibraryCardNumber() == patronCardNumber) {
                    patronRecords[i].removeBook(isbn);
                    return;
                }
            }
        }
    }
}

// Search for books by title
void Library::searchBooksByTitle(const std::string& title) const {
    for (const auto& book : books) {
        if (book.getTitle() == title) {
            book.printDetails();
        }
    }
}

// View transaction history for a patron
void Library::viewTransactionHistory(const std::string& patronCardNumber) const {
    for (size_t i = 0; i < patrons.size(); ++i) {
        if (patrons[i].getLibraryCardNumber() == patronCardNumber) {
            patronRecords[i].listCheckedOutBooks();
            return;
        }
    }
    std::cout << "No transaction history found for patron with card number: " << patronCardNumber << "\n";
}