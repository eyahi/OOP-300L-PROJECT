#include "library.h"
#include <iostream>

int main() {
    Library library;

    // Add default books and patrons
    library.addDefaultData();

    // Display initial books and patrons
    library.listBooks();
    library.listPatrons();

    // Display the library report
    library.generateLibraryReport();

    // Borrow a book by ISBN for a patron
    std::cout << "\nAttempting to borrow a book:\n";
    library.borrowBook("20222052", "18012025");

    library.listBooks();

    // Display updated library report
    std::cout << "\nUpdated Library Report:\n";
    library.generateLibraryReport();

    // Return a book by ISBN for a patron
    std::cout << "\nAttempting to return a book:\n";
    library.returnBook("20222052", "18012025");

    // Display the final library report
    std::cout << "\nFinal Library Report:\n";
    library.generateLibraryReport();

    // List overdue books
    std::cout << "\nListing overdue books:\n";
    library.listOverdueBooks();

    // Notify patrons with overdue books
    std::cout << "\nNotifying patrons with overdue books:\n";
    library.notifyPatronsWithOverdueBooks();

    return 0;
}
