#include <iostream>
#include <string>
using namespace std;
#ifndef BOOK_H
#define BOOK_H

class Book {
private:
    string title;
    string author;
    string isbn;
public:
    void setTitle(const string& TITLE) {
        title = TITLE;
    }
    string getTitle() {
        return title;
    }
    void setAuthor(const string& AUTHOR) {
        author = AUTHOR;
    }
    string getAuthor() {
        return author;
    }
    void setIsbn(const string& ISBN) {
        isbn = ISBN;
    }
    string getIsbn() {
        return isbn;
    }
};

#endif