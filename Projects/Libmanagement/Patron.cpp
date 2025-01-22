#include "Patron.h"

Patron::Patron(const std::string& name, const std::string& libraryCardNumber)
    : name(name), libraryCardNumber(libraryCardNumber) {}

void Patron::updateContactInfo(const std::string& newContactInfo) {
    contactInfo = newContactInfo;
}

bool Patron::canBorrowMoreBooks(int currentBorrowedCount, int maxLimit) {
    return currentBorrowedCount < maxLimit;
}

std::string Patron::getName() const { return name; }
std::string Patron::getLibraryCardNumber() const { return libraryCardNumber; }