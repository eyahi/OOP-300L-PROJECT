#ifndef PATRON_H
#define PATRON_H

#include <string>

class Patron {
private:
    std::string name;
    std::string libraryCardNumber;
    std::string contactInfo;

public:
    Patron(const std::string & name, const std::string &libraryCardNumber);

    // Getters
    std::string getName() const;
    std::string getLibraryCardNumber() const;
    std::string getContactInfo() const;

    // Setters
    void setContactInfo(const std::string &newContactInfo);

    // Functionalities
    bool canBorrowMoreBooks(int currentBorrowedCount, int maxLimit) const;
};

#endif // PATRON_H
