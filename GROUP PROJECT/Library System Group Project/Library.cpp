//This is the source file for the library class.
#include "Library.h"
#include <iostream>
//The code below demonstrates adding a book to the library.
void Library::addBook(const BookItem& book)
{
	books.push_back(book);
}
//The code below demonstrates adding a patron to the library.
void Library::addPatron(const Patron& patron)
{
	patrons.push_back(patron);
	patronRecords.emplace_back(patron.getLibraryCardNumber());
}

bool Library::borrowBook(const std::string& isbn, const std::string& patronCardNumber)
{
	for (auto& book : books) {
		if (!book.getIsCheckedOut() && book.getTitle() == isbn) {
			book.checkOut("19-01-2025"); //This is a simplified due date.
			for (auto& record : patronRecords) {
				if (record.getBorrowedBookCount() < 3) {
					//This is a simplified check.
					record.addBook(book);
					return true;
				}
				else {
					std::cout << "You can't borrow these number of books, kindly drop some now!!!!!" << std::endl;
				}
			}
		}
}
	return false;
}

void Library::returnBook(const std::string& isbn, const std::string& patronCardNumber)
{
	for (auto& record : patronRecords) {
		record.removeBook(isbn);
}
}

void Library::searchBooksByTitle(const std::string& title) const
{
	for (const auto& book : books) {
		if (book.getTitle() == title) {
			book.printDetails();
		}
}
}

void Library::searchBooksByAuthor(const std::string& author) const
{
	for (const auto& book : books) {
		if (book.getTitle() == author) {
			book.printDetails();
		}
}
}

void Library::searchPatronByName(const std::string& name) const
{
	for (const auto& book : books) {
		if (book.getTitle() == name) {
			book.printDetails();
		}
	}
}

void Library::generateLibraryReport() const
{
	
	for (const auto& book : books) {
		book.printDetails();
	}
}
