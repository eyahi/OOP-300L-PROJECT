//This is the header for the book class.
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
	Book(const std::string& t, const std::string& a, const  std::string& i);
	Book();

	std::string getTitle() const;
	void setTitle(const std::string& t);

	std::string getAuthor() const;
	void setAuthor(const std::string& a);

	std::string getISBN() const;
	void setISBN(const std::string& i);
};
#endif