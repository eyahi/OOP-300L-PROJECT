//This is the header for the Book Item class.
#pragma once
#ifndef BOOKITEM_H
#define BOOKITEM_H

#include "LibraryItem.h"

class BookItem: public LibraryItem {
private:
	std::string author;
	std::string isbn;
public:
	BookItem(const std::string& title, const std::string& author, const std::string& isbn);
	
	void printDetails() const;
	double calculateLateFees(int daysOverdue) const;
};
#endif