#include "patron.h"

// Constructor
Patron::Patron(const std::string& name, const std::string& libraryCardNumber)
    : name(name), libraryCardNumber(libraryCardNumber) {}

// Update contact information (not implemented)
void Patron::updateContactInfo(const std::string& newContactInfo) {
    // Logic to update contact info (not specified)
}

// Check if the patron can borrow more books
bool Patron::canBorrowMoreBooks(int currentBorrowedCount, int maxLimit) const {
    return currentBorrowedCount < maxLimit;
}

// Get the name of the patron
std::string Patron::getName() const {
    return name;
}

// Get the library card number of the patron
std::string Patron::getLibraryCardNumber() const {
    return libraryCardNumber;
}