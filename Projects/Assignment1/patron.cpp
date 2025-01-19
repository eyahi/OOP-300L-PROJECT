#include "patron.h"

Patron::Patron(const std::string& name, const std::string& libraryCardNumber)
    : name(name), libraryCardNumber(libraryCardNumber) {}

std::string Patron::getName() const { return name; }
std::string Patron::getLibraryCardNumber() const { return libraryCardNumber; }

void Patron::setName(const std::string& name) { this->name = name; }
void Patron::setLibraryCardNumber(const std::string& libraryCardNumber) { this->libraryCardNumber = libraryCardNumber; }

void Patron::updateContactInfo(const std::string& newContactInfo) {
    // Update contact info logic
}

bool Patron::canBorrowMoreBooks(int currentBorrowedCount, int maxLimit) const {
    return currentBorrowedCount < maxLimit;
}

