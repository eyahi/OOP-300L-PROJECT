//This is the header for the patron class.
#pragma once
#ifndef PATRON_H
#define PATRON_H

#include <string>

class Patron {
private:
	std::string name;
	std::string libraryCardNumber;
	std::string contactInfo;
public:
	Patron(const std::string& name, const std::string& libraryCardNumber);
	Patron();

	std::string getName() const;
	void setName(const std::string& name);

	std::string getLibraryCardNumber() const;
	void setLibraryCardNumber(const std::string& libraryCardNumber);

	void updateContactInfo(const std::string& newContactInfo);
	bool canBorrowMoreBooks(int currentBorrowedCount, int maxLimit)
		const;
};
#endif