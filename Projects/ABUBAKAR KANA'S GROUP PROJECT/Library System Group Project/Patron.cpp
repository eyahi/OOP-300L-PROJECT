//This is the source file for the patron class.
#include "Patron.h"
//These are the constructors below:
Patron::Patron(const std::string& name, const std::string& libraryCardNumber): name(name), libraryCardNumber(libraryCardNumber), contactInfo("")
{
}

Patron::Patron(): name(""),
libraryCardNumber(""),
contactInfo("")
{
}
// These are the getters and setters below:
std::string Patron::getName() const
{
	return name;
}

void Patron::setName(const std::string& name)
{
	this->name = name;
}

std::string Patron::getLibraryCardNumber() const
{
	return libraryCardNumber;
}

void Patron::setLibraryCardNumber(const std::string& libraryCardNumber)
{
	this->libraryCardNumber = libraryCardNumber;
}

void Patron::updateContactInfo(const std::string& newContactInfo)
{
	contactInfo = newContactInfo;
}

bool Patron::canBorrowMoreBooks(int currentBorrowedCount, int maxLimit) const
{
	return currentBorrowedCount < maxLimit;
}
