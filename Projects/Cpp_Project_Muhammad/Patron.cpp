// Source: patron.cpp
#include "patron.h"

// Constructor implementation
Patron::Patron(const std::string& name, const std::string& libraryCardNumber)
    : name(name), libraryCardNumber(libraryCardNumber) {}

// Getter for the patron's name
std::string Patron::getName() const { return name; }

// Getter for the library card number
std::string Patron::getLibraryCardNumber() const { return libraryCardNumber; }

// Setter for the patron's name
void Patron::setName(const std::string& name) { this->name = name; }

// Setter for the library card number
void Patron::setLibraryCardNumber(const std::string& libraryCardNumber) {
    this->libraryCardNumber = libraryCardNumber;
}

// Placeholder for updating contact information
void Patron::updateContactInfo(const std::string& newContactInfo) {
    // Logic for updating contact information can be added here
}

// Checks if the patron can borrow more books
bool Patron::canBorrowMoreBooks(int currentBorrowedCount, int maxLimit) const {
    return currentBorrowedCount < maxLimit;
}