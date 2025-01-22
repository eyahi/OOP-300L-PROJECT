#include <iostream>
#include <vector>
#include "book.h"
#include "bookItem.h"
#include "library.h"
#include "libraryItem.h"
#include "patron.h"
#include "patronRecord.h"

int main()
{
    BookItem item;
    item.setAuthor("Shasha Wakama");
    item.setIsbn("20222024");
    LibraryItem item;
    item.setTitle("Object Oriented Programming");
    item.setDueDate("10");
    Patron pat;
    pat.setName("Lecturer");
    pat.setLcn("18012025");
    return 0;
}
