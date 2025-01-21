#include "library.h"
#include "book_item.h"
#include "patron.h"
#include <iostream>
#include <string>

int main() {
   Library library;

    // Add Books
    BookItem book1("The Syndicator", "Mariam Ajani", "20220014");
    BookItem book2("Object Oriented Programming", "Fawaz Okuwobi", "20221183");
    BookItem book3("King of Boys", "Adedayo Aminat", "20220114");
    BookItem book4("The wicked witch", "Favour Aguoru", "20232880");

    library.addBook(book1);
    library.addBook(book2);
    library.addBook(book3);
    library.addBook(book4);

    // Add Patrons
    Patron patron1("Chinaza Ihenacho", "20", "080000000");
    Patron patron2("king Wesley", "24", "08000099");

    library.addPatron(patron1);
    library.addPatron(patron2);

    // Search for books by author
    std::cout << "\nSearching books by author 'Mariam Ajani':"<<std::endl;
    library.searchBooksByAuthor("Mariam Ajani");

    // Search for books by title
    std::cout << "\nSearching books by title 'The Syndicator':"<<std::endl;
    library.searchBooksByTitle("The Syndicator");

    // Borrowing books
    std::cout << "\nBorrowing book with ISBN 20220014 by patron Chinaza Ihenacho: ";
    library.borrowBook("20220014", "20");

    std::cout << "\nBorrowing book with ISBN 20221183 by patron king Wesley: "<<std::endl;
    library.borrowBook("20221183", "24");

    // Return books
    std::cout << "\nReturning book with ISBN 20220014 by patron Chinaza Ihenacho : " <<std::endl;
    library.returnBook("20220014", "20");

    // List overdue books 
    std::cout << "\nListing all overdue books (if any): "<<std::endl;


    // Search for patrons by name
    std::cout << "\nSearching for patron by name 'Chinaza Ihenacho':\n";
    library.searchPatronByName("Chinaza Ihenacho");

    // Notify patrons with overdue books (placeholder)
    std::cout << "\nNotifying patrons with overdue books (if implemented):\n";

    // Generate library report (example)
    std::cout << "\nGenerating Library Report (available books):\n";
    library.searchBooksByTitle("The Syndictor"); // Here, we assume this lists available books

    return 0;
}