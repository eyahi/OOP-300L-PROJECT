#include <iostream>
#include "library.h"

int main() {
    // Personalized Book
    BookItem courseBook("CPE303: Introduction to Object-Oriented Programming", 
                        "Alamin Danjuma Abbas", 
                        "20221061");

    // Lecturer as Patron
    Patron lecturer("Dr. Emmanuel", "2025-01-20");

    Library library;
    library.addBook(courseBook);
    library.addPatron(lecturer);

    library.generateLibraryReport();

    return 0;
}
