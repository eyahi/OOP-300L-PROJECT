#ifndef PATRON_H
#define PATRON_H

#include <string>

class Patron {
private:
    std::string name;
    std::string libraryCardNumber;

public:
    Patron(const std::string& name, const std::string& libraryCardNumber);
    void updateContactInfo(const std::string& newContactInfo);
    bool canBorrowMoreBooks(int currentBorrowedCount, int maxLimit) const;
    std::string getName() const;
    std::string getLibraryCardNumber() const;
};

#endif // PATRON_H