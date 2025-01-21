#include <iostream>
#include "library.h"
#include "book_item.h"
#include "patron.h"

int main() {
    Library library;

    // Create some books and add them to the library
    BookItem book1("CPE 303: Introduction to Object-Oriented Programming", "John Doe", "1234567890");
    BookItem book2("CPE 304: Data Structures", "Jane Smith", "0987654321");
    library.addBook(book1);
    library.addBook(book2);

    // Create a patron and add it to the library
    Patron patron1("Alice Johnson", "P12345");
    library.addPatron(patron1);

    // Display available books
    std::cout << "Available books in the library:\n";
    library.searchBooksByTitle("CPE 303: Introduction to Object-Oriented Programming");
    library.searchBooksByTitle("CPE 304: Data Structures");

    // Borrow a book
    std::cout << "\n" << patron1.getName() << " is borrowing 'CPE 303: Introduction to Object-Oriented Programming'.\n";
    library.borrowBook("1234567890", patron1.getLibraryCardNumber());

    // List checked-out books for the patron
    std::cout << "\nChecked out books for " << patron1.getName() << ":\n";
    library.viewTransactionHistory(patron1.getLibraryCardNumber());

    // Return the book
    std::cout << "\n" << patron1.getName() << " is returning 'CPE 303: Introduction to Object-Oriented Programming'.\n";
    library.returnBook("1234567890", patron1.getLibraryCardNumber());

    // List checked-out books again
    std::cout << "\nChecked out books for " << patron1.getName() << " after returning:\n";
    library.viewTransactionHistory(patron1.getLibraryCardNumber());

    // Attempt to borrow a book that is already checked out
    std::cout << "\nAttempting to borrow 'CPE 303: Introduction to Object-Oriented Programming' again:\n";
    library.borrowBook("1234567890", patron1.getLibraryCardNumber());

    return 0;
}