//This is the header for the library class.
#pragma once
#ifndef LIBRARY_H
#define LIBRARYD_H
#include "BookItem.h"
#include "Patron.h"
#include "PatronRecord.h"
#include <vector>
#include <string>

class Library {
private:
	std::vector<BookItem> books;
	std::vector<Patron> patrons;
	std::vector<PatronRecord> patronRecords;

public:
	void addBook(const BookItem& book);
	void addPatron(const Patron& patron);
	bool borrowBook(const std::string& isbn, const std::string& patronCardNumber);
	void returnBook(const std::string& isbn, const std::string& patronCardNumber);

	void searchBooksByTitle(const std::string& title) const;
	void searchBooksByAuthor(const std::string& author) const;
	void searchPatronByName(const std::string& name) const;

	void generateLibraryReport() const;
};
#endif