#pragma once
#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    std::string title;
    std::string author;
    std::string isbn;

public:
    
    Book(const std::string& title, const std::string& author, const std::string& isbn);

    
    std::string getTitle() const;
    void setTitle(const std::string& newTitle);

    std::string getAuthor() const;
    void setAuthor(const std::string& newAuthor);

    std::string getISBN() const;
    void setISBN(const std::string& newISBN);
};

#endif 