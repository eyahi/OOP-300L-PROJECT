#include "BookItem.h"
#include "Library.h"
#include "Patron.h"
#include "LibraryItem.h"
#include "PatronRecord.h"
#include "Book.h"
#include <iostream>

int main() {
    Library library;

    // Create some books
    BookItem* book1 = new BookItem("Object Oriented Programming 1", "Abdallah mukhtar ", "20221127");
    BookItem* book2 = new BookItem("Object Oriented Programming 2", "Abubakar mohammed lawal", "20220554");
    BookItem* book3 = new BookItem("Object Oriented Programming 3", "Otokpa Udenyi", "20220653");
    BookItem* book4 = new BookItem("Object Oriented Programming 4", "Bamikunle Opeyemi", "20221318");
    BookItem* book5 = new BookItem("Object Oriented Programming 5", "Charles Ebenezer", "20220820");

    // Add books to the library
    library.addBook(book1);
    library.addBook(book2);
    library.addBook(book3);
    library.addBook(book4);
    library.addBook(book5);

    // Create a patron
    Patron patron1("DR Emmanuel Ali", "18.01.2025");
    library.addPatron(patron1);
    Patron patron2("mark john", "18.01.2025");
    library.addPatron(patron2);
    Patron patron3("DR noah lille", "18.01.2025");
    library.addPatron(patron3);
    Patron patron4("dennis law", "18.01.2025");
    library.addPatron(patron4);
    Patron patron5("aaron james", "18.01.2025");
    library.addPatron(patron5);

    // Simulate borrowing a book
    library.borrowBook("20221127", "18.01.2025");

    // List checked out books
    library.viewTransactionHistory("18.01.2025");

    delete book1;
    
    return 0;
}