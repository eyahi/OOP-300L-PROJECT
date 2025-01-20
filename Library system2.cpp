#include "library.h"
#include <iostream>

int main() {
    Library library;

    library.addBook(Book("C++ Programming", "farida abubakar", "20230272"));
    library.addBook(Book("Introduction to OOP", "aisha", "20220282"));

    library.addPatron(Patron("emmanuel", "2025-01-17"));
    library.addPatron(Patron("haseena", "2025-01-18"));

    library.listBooks();

    library.borrowBook("20230272", "emmanuel");

    library.returnBook("20230272");

    library.listPatrons();

    return 0;
}
