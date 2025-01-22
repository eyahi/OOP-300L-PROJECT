#include <iostream>
#include "book.h"
#include "book_item.h"
#include "library.h"
#include "library_item.h"
#include "patron.h"
#include "patron_record.h"

int main() {
    // Create some books
    BookItem book1("INTRODUCTION TO OBJECT ORIENTED PROGRAMMING", "ABDULAZEEZ ALIYU KAWU", "20221936");
    BookItem book2("INTRODUCTION TO OBJECT ORIENTED PROGRAMMING", "AHMAD BILAL", "20220227");
    BookItem book3("INTRODUCTION TO OBJECT ORIENTED PROGRAMMING", "SAMAILA AMINU DAHUWA", "20220948");
    BookItem book4("INTRODUCTION TO OBJECT ORIENTED PROGRAMMING", "BELLO SABIU MAHUTA", "20221197");
    BookItem book5("INTRODUCTION TO OBJECT ORIENTED PROGRAMMING", "SEAN CHUKWURAH", "20221125");

    // Create some patrons
    Patron patron1("DR Emmanuel Ali", "18-01-2025");

    // Create a library and add books and patrons
    Library library;
    library.addBook(book1);
    library.addBook(book2);
    library.addBook(book3);
    library.addBook(book4);
    library.addBook(book5);
    library.addPatron(patron1);

    // Example operations
    library.borrowBook("20221936", "18-01-2025");
    library.returnBook("20221936", "18-01-2025");

    // Search and display results
    auto searchResults = library.searchBooksByTitle("Programming");
    for (const auto& book : searchResults) {
        book.printDetails();
    }

    // Generate library report
    library.generateLibraryReport();

    return 0;
}

