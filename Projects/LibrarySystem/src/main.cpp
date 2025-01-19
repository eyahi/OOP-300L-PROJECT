#include <iostream>
#include "../include/book_item.h"
#include "../include/patron.h"
#include "../include/library.h"

int main() {
    Library library;

    // Add Books
    BookItem book1("Object Oriented Programming", "Thomas Agbor-Etta", "20222029");
    BookItem book2("Object Oriented Programming", "Nwogbo Kodinna", "20221689");
    BookItem book3("Object Oriented Programming", "Abubakar Jelani", "20222238");
    BookItem book4("Object Oriented Programming", "Ebele Behtel", "20221469");

    library.addBook(book1);
    library.addBook(book2);
    library.addBook(book3);
    library.addBook(book4);

    // Add Patrons
    Patron patron1("Emmanuel Ali", "18-01-2025");
    Patron patron2("Obadaiah Ali", "17-01-2025");

    library.addPatron(patron1);
    library.addPatron(patron2);

    // Search for books by author
    std::cout << "\nSearching books by author 'Thomas Agbor-Etta':\n";
    library.searchBooksByAuthor("Thomas Agbor-Etta");

    // Search for books by title
    std::cout << "\nSearching books by title 'Object Oriented Programming':\n";
    library.searchBooksByTitle("Object Oriented Programming");

    // Borrowing books
    std::cout << "\nBorrowing book with ISBN 20222029 by patron Emmanuel Ali:\n";
    library.borrowBook("20222029", "18-01-2025");

    std::cout << "\nBorrowing book with ISBN 20221689 by patron Obadaiah Ali:\n";
    library.borrowBook("20221689", "17-01-2025");

    // Return books
    std::cout << "\nReturning book with ISBN 20222029 by patron Emmanuel Ali:\n";
    library.returnBook("20222029", "18-01-2025");

    // List overdue books 
    std::cout << "\nListing all overdue books (if any):\n";


    // Search for patrons by name
    std::cout << "\nSearching for patron by name 'Emmanuel Ali':\n";
    library.searchPatronByName("Emmanuel Ali");

    // Notify patrons with overdue books (placeholder)
    std::cout << "\nNotifying patrons with overdue books (if implemented):\n";

    // Generate library report (example)
    std::cout << "\nGenerating Library Report (available books):\n";
    library.searchBooksByTitle("Object Oriented Programming"); // Here, we assume this lists available books

    return 0;
}


// code to compile the program: g++ -std=c++11 -I./include src/main.cpp src/book_item.cpp src/patron.cpp src/library_item.cpp src/patron_record.cpp  src/library.cpp -o library_system;
// code to run the program: ./library_system