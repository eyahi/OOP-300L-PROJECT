// // Header: book.h
// #ifndef BOOK_H
// #define BOOK_H

// #include <string>

// class Book {
// private:
//     std::string title; // Stores the title of the book
//     std::string author; // Stores the author's name
//     std::string isbn; // Stores the unique ISBN of the book

// public:
//     // Constructor to initialize the book's attributes
//     Book(const std::string& title, const std::string& author, const std::string& isbn);

//     // Getters to retrieve book attributes
//     std::string getTitle() const;
//     std::string getAuthor() const;
//     std::string getISBN() const;

//     // Setters to modify book attributes
//     void setTitle(const std::string& title);
//     void setAuthor(const std::string& author);
//     void setISBN(const std::string& isbn);
// };

// #endif // BOOK_H

// // Source: book.cpp
// #include "book.h"

// // Constructor implementation
// Book::Book(const std::string& title, const std::string& author, const std::string& isbn)
//     : title(title), author(author), isbn(isbn) {}

// // Getter for the book title
// std::string Book::getTitle() const { return title; }

// // Getter for the author's name
// std::string Book::getAuthor() const { return author; }

// // Getter for the ISBN
// std::string Book::getISBN() const { return isbn; }

// // Setter for the book title
// void Book::setTitle(const std::string& title) { this->title = title; }

// // Setter for the author's name
// void Book::setAuthor(const std::string& author) { this->author = author; }

// // Setter for the ISBN
// void Book::setISBN(const std::string& isbn) { this->isbn = isbn; }

// // Header: patron.h
// #ifndef PATRON_H
// #define PATRON_H

// #include <string>

// class Patron {
// private:
//     std::string name; // Patron's name
//     std::string libraryCardNumber; // Unique library card number for the patron

// public:
//     // Constructor to initialize the patron's details
//     Patron(const std::string& name, const std::string& libraryCardNumber);

//     // Getters to retrieve patron details
//     std::string getName() const;
//     std::string getLibraryCardNumber() const;

//     // Setters to modify patron details
//     void setName(const std::string& name);
//     void setLibraryCardNumber(const std::string& libraryCardNumber);

//     // Method to update the patron's contact information
//     void updateContactInfo(const std::string& newContactInfo);

//     // Checks if the patron can borrow more books based on their limit
//     bool canBorrowMoreBooks(int currentBorrowedCount, int maxLimit) const;
// };

// #endif // PATRON_H

// // Source: patron.cpp
// #include "patron.h"

// // Constructor implementation
// Patron::Patron(const std::string& name, const std::string& libraryCardNumber)
//     : name(name), libraryCardNumber(libraryCardNumber) {}

// // Getter for the patron's name
// std::string Patron::getName() const { return name; }

// // Getter for the library card number
// std::string Patron::getLibraryCardNumber() const { return libraryCardNumber; }

// // Setter for the patron's name
// void Patron::setName(const std::string& name) { this->name = name; }

// // Setter for the library card number
// void Patron::setLibraryCardNumber(const std::string& libraryCardNumber) {
//     this->libraryCardNumber = libraryCardNumber;
// }

// // Placeholder for updating contact information
// void Patron::updateContactInfo(const std::string& newContactInfo) {
//     // Logic for updating contact information can be added here
// }

// // Checks if the patron can borrow more books
// bool Patron::canBorrowMoreBooks(int currentBorrowedCount, int maxLimit) const {
//     return currentBorrowedCount < maxLimit;
// }

// // Header: library_item.h
// #ifndef LIBRARY_ITEM_H
// #define LIBRARY_ITEM_H

// #include <string>

// class LibraryItem {
// private:
//     std::string title; // Title of the library item
//     bool isCheckedOut; // Status indicating if the item is checked out
//     std::string dueDate; // Due date for the item

// public:
//     // Constructor to initialize the library item
//     LibraryItem(const std::string& title);

//     // Getters to retrieve item details
//     std::string getTitle() const;
//     bool getIsCheckedOut() const;
//     std::string getDueDate() const;

//     // Setters to modify item details
//     void setTitle(const std::string& title);
//     void setIsCheckedOut(bool status);
//     void setDueDate(const std::string& dueDate);

//     // Methods for library item management
//     void checkOut(const std::string& dueDate);
//     void returnItem();
//     void renewItem(int extraDays);
//     void markAsLost();
// };

// #endif // LIBRARY_ITEM_H

// // Source: library_item.cpp
// #include "library_item.h"

// // Constructor implementation
// LibraryItem::LibraryItem(const std::string& title)
//     : title(title), isCheckedOut(false), dueDate("") {}

// // Getter for the title
// std::string LibraryItem::getTitle() const { return title; }

// // Getter for the checkout status
// bool LibraryItem::getIsCheckedOut() const { return isCheckedOut; }

// // Getter for the due date
// std::string LibraryItem::getDueDate() const { return dueDate; }

// // Setter for the title
// void LibraryItem::setTitle(const std::string& title) { this->title = title; }

// // Setter for the checkout status
// void LibraryItem::setIsCheckedOut(bool status) { isCheckedOut = status; }

// // Setter for the due date
// void LibraryItem::setDueDate(const std::string& dueDate) { this->dueDate = dueDate; }

// // Marks the item as checked out and sets the due date
// void LibraryItem::checkOut(const std::string& dueDate) {
//     isCheckedOut = true;
//     this->dueDate = dueDate;
// }

// // Marks the item as returned
// void LibraryItem::returnItem() {
//     isCheckedOut = false;
//     dueDate = "";
// }

// // Placeholder for renewing the item (extending the due date)
// void LibraryItem::renewItem(int extraDays) {
//     // Logic to extend the due date can be added here
// }

// // Marks the item as lost
// void LibraryItem::markAsLost() {
//     isCheckedOut = true;
//     dueDate = "Lost";
// }

// // Header: book_item.h
// #ifndef BOOK_ITEM_H
// #define BOOK_ITEM_H

// #include "library_item.h"

// class BookItem : public LibraryItem {
// private:
//     std::string author; // Author of the book
//     std::string isbn; // ISBN of the book

// public:
//     // Constructor to initialize book-specific details
//     BookItem(const std::string& title, const std::string& author, const std::string& isbn);

//     // Getters for book-specific details
//     std::string getAuthor() const;
//     std::string getISBN() const;

//     // Setters for book-specific details
//     void setAuthor(const std::string& author);
//     void setISBN(const std::string& isbn);

//     // Prints details of the book
//     void printDetails() const;

//     // Calculates late fees based on the number of overdue days
//     double calculateLateFees(int daysOverdue) const;
// };

// #endif // BOOK_ITEM_H

// // Source: book_item.cpp
// #include "book_item.h"
// #include <iostream>

// // Constructor implementation
// BookItem::BookItem(const std::string& title, const std::string& author, const std::string& isbn)
//     : LibraryItem(title), author(author), isbn(isbn) {}

// // Getter for the author's name
// std::string BookItem::getAuthor() const { return author; }

// // Getter for the ISBN
// std::string BookItem::getISBN() const { return isbn; }

// // Setter for the author's name
// void BookItem::setAuthor(const std::string& author) { this->author = author; }

// // Setter for the ISBN
// void BookItem::setISBN(const std::string& isbn) { this->isbn = isbn; }

// // Prints all details of the book, including availability status
// void BookItem::printDetails() const {
//     std::cout << "Title: " << getTitle() << "\n"
//               << "Author: " << author << "\n"
//               << "ISBN: " << isbn << "\n"
//               << "Checked Out: " << (getIsCheckedOut() ? "Yes" : "No") << "\n"
//               << "Due Date: " << getDueDate() << "\n";
// }

// // Calculates the late fees for overdue books
// double BookItem::calculateLateFees(int daysOverdue) const {
//     const double feePerDay = 0.5; // Fee rate per day
//     return daysOverdue * feePerDay;
// }

// // Header: patron_record.h
// #ifndef PATRON_RECORD_H
// #define PATRON_RECORD_H

// #include <vector>
// #include "book_item.h"

// class PatronRecord {
// private:
//     std::vector<BookItem> checkedOutBooks; // List of books currently checked out by the patron

// public:
//     // Adds a book to the patron's record
//     void addBook(const BookItem& book);

//     // Removes a book from the patron's record by ISBN
//     void removeBook(const std::string& isbn);

//     // Returns a list of all books currently checked out
//     std::vector<BookItem> listCheckedOutBooks() const;

//     // Returns the count of books currently borrowed
//     int getBorrowedBookCount() const;

//     // Checks if the patron has any overdue books
//     bool hasOverdueBooks() const;

//     // Calculates the total late fees for all overdue books
//     double calculateTotalLateFees() const;
// };

// #endif // PATRON_RECORD_H

// // Source: patron_record.cpp
// #include "patron_record.h"
// #include <algorithm>

// // Adds a book to the patron's checked-out list
// void PatronRecord::addBook(const BookItem& book) {
//     checkedOutBooks.push_back(book);
// }

// // Removes a book from the checked-out list by matching ISBN
// void PatronRecord::removeBook(const std::string& isbn) {
//     checkedOutBooks.erase(std::remove_if(checkedOutBooks.begin(), checkedOutBooks.end(),
//         [&isbn](const BookItem& book) { return book.getISBN() == isbn; }),
//         checkedOutBooks.end());
// }

// // Returns the list of currently checked-out books
// std::vector<BookItem> PatronRecord::listCheckedOutBooks() const {
//     return checkedOutBooks;
// }

// // Returns the count of books currently checked out
// int PatronRecord::getBorrowedBookCount() const {
//     return checkedOutBooks.size();
// }

// // Placeholder for checking overdue books
// bool PatronRecord::hasOverdueBooks() const {
//     // Logic for checking overdue books can be added here
//     return false;
// }

// // Calculates total late fees for all overdue books
// double PatronRecord::calculateTotalLateFees() const {
//     double totalFees = 0.0;
//     for (const auto& book : checkedOutBooks) {
//         // Placeholder: Assume all books are overdue by 5 days for testing
//         totalFees += book.calculateLateFees(5);
//     }
//     return totalFees;
// }

// // Header: library.h
// #ifndef LIBRARY_H
// #define LIBRARY_H

// #include <vector>
// #include "book_item.h"
// #include "patron.h"
// #include "patron_record.h"

// class Library {
// private:
//     std::vector<BookItem> books; // Collection of all books in the library
//     std::vector<Patron> patrons; // List of registered patrons
//     std::vector<PatronRecord> patronRecords; // Records of books borrowed by each patron

// public:
//     // Adds a book to the library's collection
//     void addBook(const BookItem& book);

//     // Registers a new patron
//     void addPatron(const Patron& patron);

//     // Allows a patron to borrow a book by ISBN
//     void borrowBook(const std::string& isbn, const std::string& patronCardNumber);

//     // Processes the return of a borrowed book by ISBN
//     void returnBook(const std::string& isbn, const std::string& patronCardNumber);

//     // Lists all overdue books
//     void listOverdueBooks() const;

//     // Notifies patrons with overdue books
//     void notifyPatronsWithOverdueBooks() const;

//     // Generates a summary report of the library's current state
//     void generateLibraryReport() const;
// };

// #endif // LIBRARY_H

// // Source: library.cpp
// #include "library.h"
// #include <iostream>
// #include <algorithm>

// // Adds a book to the library's collection
// void Library::addBook(const BookItem& book) {
//     books.push_back(book);
// }

// // Registers a new patron and initializes their record
// void Library::addPatron(const Patron& patron) {
//     patrons.push_back(patron);
//     patronRecords.emplace_back();
// }

// // Allows a patron to borrow a book if available
// void Library::borrowBook(const std::string& isbn, const std::string& patronCardNumber) {
//     // Find the book by ISBN and check availability
//     auto bookIt = std::find_if(books.begin(), books.end(),
//         [&isbn](const BookItem& book) { return book.getISBN() == isbn && !book.getIsCheckedOut(); });

//     if (bookIt == books.end()) {
//         std::cout << "Book not available for borrowing.\n";
//         return;
//     }

//     // Find the patron by library card number
//     auto patronIt = std::find_if(patrons.begin(), patrons.end(),
//         [&patronCardNumber](const Patron& patron) { return patron.getLibraryCardNumber() == patronCardNumber; });

//     if (patronIt == patrons.end()) {
//         std::cout << "Patron not found.\n";
//         return;
//     }

//     // Borrow the book and update the patron's record
//     int patronIndex = std::distance(patrons.begin(), patronIt);
//     bookIt->checkOut("2025-01-10"); // Example due date
//     patronRecords[patronIndex].addBook(*bookIt);
//     std::cout << "Book borrowed successfully.\n";
// }

// // Processes the return of a borrowed book
// void Library::returnBook(const std::string& isbn, const std::string& patronCardNumber) {
//     // Find the patron by library card number
//     auto patronIt = std::find_if(patrons.begin(), patrons.end(),
//         [&patronCardNumber](const Patron& patron) { return patron.getLibraryCardNumber() == patronCardNumber; });

//     if (patronIt == patrons.end()) {
//         std::cout << "Patron not found.\n";
//         return;
//     }

//     // Remove the book from the patron's record
//     int patronIndex = std::distance(patrons.begin(), patronIt);
//     patronRecords[patronIndex].removeBook(isbn);

//     // Mark the book as returned in the library's collection
//     auto bookIt = std::find_if(books.begin(), books.end(),
//         [&isbn](const BookItem& book) { return book.getISBN() == isbn; });

//     if (bookIt != books.end()) {
//         bookIt->returnItem();
//         std::cout << "Book returned successfully.\n";
//     }
// }

// // Lists all overdue books in the library
// void Library::listOverdueBooks() const {
//     for (const auto& book : books) {
//         if (book.getIsCheckedOut()) {
//             // Placeholder: Logic for checking overdue books
//             std::cout << book.getTitle() << " is overdue.\n";
//         }
//     }
// }

// // Notifies patrons with overdue books
// void Library::notifyPatronsWithOverdueBooks() const {
//     for (size_t i = 0; i < patrons.size(); ++i) {
//         if (patronRecords[i].hasOverdueBooks()) {
//             std::cout << "Notify " << patrons[i].getName() << " about overdue books.\n";
//         }
//     }
// }

// // Generates a summary report of the library's current state
// void Library::generateLibraryReport() const {
//     std::cout << "Library Report:\n";
//     std::cout << "Total Books: " << books.size() << "\n";
//     std::cout << "Total Patrons: " << patrons.size() << "\n";
// }
