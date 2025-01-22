#include <iostream>
#include "library.h"
#include "book_item.h"
#include "patron.h"

int main() {
    Library library;

    BookItem book1("Object Oriented Programming", "Shahid Mohammed", "211203027");
    BookItem book2("Data Structures", "Jane Smith", "0987654321");

    library.addBook(book1);
    library.addBook(book2);

    Patron patron("Emmanuel Ali", "18012025");

    library.addPatron(patron);
    library.borrowBook("211203027", "18012025");

    library.searchBooksByTitle("Object Oriented Programming");


    library.generateLibraryReport();
                                                                                                                                                                                                                                                                                                                                                                                                                        bg
    return 0;
}
