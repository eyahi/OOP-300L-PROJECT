// Header: patron.h
#ifndef PATRON_H
#define PATRON_H

#include <string>

class Patron {
private:
    std::string name; // Patron's name
    std::string libraryCardNumber; // Unique library card number for the patron

public:
    // Constructor to initialize the patron's details
    Patron(const std::string& name, const std::string& libraryCardNumber);

    // Getters to retrieve patron details
    std::string getName() const;
    std::string getLibraryCardNumber() const;

    // Setters to modify patron details
    void setName(const std::string& name);
    void setLibraryCardNumber(const std::string& libraryCardNumber);

    // Method to update the patron's contact information
    void updateContactInfo(const std::string& newContactInfo);

    // Checks if the patron can borrow more books based on their limit
    bool canBorrowMoreBooks(int currentBorrowedCount, int maxLimit) const;
};

#endif // PATRON_H