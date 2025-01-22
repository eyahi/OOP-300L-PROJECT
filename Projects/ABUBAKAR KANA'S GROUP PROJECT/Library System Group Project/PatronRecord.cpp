//This is the source file for the patron record class.
#include "PatronRecord.h"
#include <iostream>
//These are the constructors below:
PatronRecord::PatronRecord(const std::string& cardNumber): patronCardNumber(cardNumber)
{
}

void PatronRecord::addBook(const BookItem& book)
{
	checkedOutBooks.push_back(book);
}

void PatronRecord::removeBook(const std::string& bookTitle)
{
	for (auto it = checkedOutBooks.begin(); it != checkedOutBooks.end(); ++it) {
		if (it->getTitle() == bookTitle) {
			checkedOutBooks.erase(it);
			break;
		}
}
}

void PatronRecord::listCheckedOutBooks() const
{
	for (const auto& book : checkedOutBooks) {
		book.printDetails();
}
}

int PatronRecord::getBorrowedBookCount() const
{
	return checkedOutBooks.size();
}

bool PatronRecord::hasOverdueBooks(const std::string& currentdate) const
{
	for (const auto& book : checkedOutBooks) {
		if (book.getIsCheckedOut() && book.getTitle() < currentdate) {
			return true;//This simplifies the date comparison.
		}
}
	return false;
}

double PatronRecord::calculateTotalFees(const std::string& currentDate) const
{
	double totalFees = 0.0;
	for (const auto& book : checkedOutBooks) {
		if (book.getIsCheckedOut() && book.getTitle() < currentDate) {
			totalFees += book.calculateLateFees(10); //This is the overdue days calculation.
		}
	}
	return totalFees;
}
