#include "patron.h"

// Constructor
Patron::Patron(const std::string& name, const std::string& libraryCardNumber)
    : name(name), libraryCardNumber(libraryCardNumber) {}

// Getters
std::string Patron::getName() const {
    return name;
}

std::string Patron::getLibraryCardNumber() const {
    return libraryCardNumber;
}

// Setters
void Patron::setName(const std::string& name) {
    this->name = name;
}

void Patron::setLibraryCardNumber(const std::string& libraryCardNumber) {
    this->libraryCardNumber = libraryCardNumber;
}

// Functions
void Patron::updateContactInfo(const std::string& newContactInfo) {
    // Update contact info logic here
}

bool Patron::canBorrowMoreBooks(int currentBorrowedCount, int maxLimit) const {
    return currentBorrowedCount < maxLimit;
}
