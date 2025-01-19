//This is the source file for the Book Item class.
#include "BookItem.h"
#include <iostream>
//These are the constructors below:
BookItem::BookItem(const std::string& title, const std::string& author, const std::string& isbn): LibraryItem(title), author(author), isbn(isbn)
{
}

void BookItem::printDetails() const
{
	std::cout << "Title: " << title << "\nAuthor: " << author << "\nISBN: " << isbn
		<< "\nChecked Out: " << (isCheckedOut ? "Yes" : "No") << "\nDue Date: " << "18/01/2025" << "\n";
}

double BookItem::calculateLateFees(int daysOverdue) const
{
	return daysOverdue*0.5;//This is an example rate of 0.5.
}
