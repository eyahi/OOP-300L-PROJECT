//This is the header for the patron record class.
#pragma once
#ifndef PATRONRECORD_H
#define PATRONRECORD_H
#include "BookItem.h"
#include <vector>
#include <string>

class PatronRecord {
private:
	std::string patronCardNumber;
	std::vector<BookItem>
checkedOutBooks;

public:
	PatronRecord(const std::string& cardNumber);
	void addBook(const BookItem& book);
	void removeBook(const std::string& bookTitle);
	void listCheckedOutBooks() const;
	int getBorrowedBookCount() const;
	bool hasOverdueBooks(const std::string& currentdate) const;
	double
		calculateTotalFees(const std::string& currentDate) const;
};
#endif