#ifndef LIBRARY_H
#define LIBRARY_H
#include <vector>
#include "bookItem.h"
#include "patron.h"
#include "patronRecord.h"

class Library {
private:
std::vector<BookItem> books;
std::vector<Patron> patrons;
std::vector<PatronRecord> patronRecords;

public:
    BookItem book;
    void searchBooksByTitle( const string& title) {
        bool found = false;
        for (const auto& BookItem : books) {
            if (book.getTitle().find(title) != string::npos) {
                book.printDetails();
                found = true;
            }
        }
        if (!found) {
            cout << "Book not found" << endl;
        }
    }
    void searchBooksByAuthor( const string& author) {
        bool found = false;
        for (const auto& BookItem : books) {
            if (book.getAuthor().find(author) != string::npos) {
                book.printDetails();
                found = true;
            }
        }
        if (!found) {
            cout << "Book not found" << endl;
        }
    }
    Patron pat;
    PatronRecord pat2;
    void searchPatronByName( const string& name) {
        bool found = false;
        for (const auto& Patron : patrons) {
            if (pat.getName().find(name) != string::npos) {
                pat.getName();
                pat2.listCheckedOutBooks();
                found = true;
            }
        }
        if (!found) {
            cout << "Patron not found" << endl;
        }
    }
    void listOverdueBooks() {
        
    }
};


#endif