#ifndef PATRON_H
#define PATRON_H
#include <string>


class Patron {
private:
    std::string name;
    std::string libraryCardNumber;
    std::string contactInfo;

public:
    Patron(const std::string& name, const std::string& libraryCardNumber,const std::string& contactInfo): name(name),libraryCardNumber(libraryCardNumber),contactInfo(contactInfo){};
    std::string getName() const;
    std::string getLibraryCardNumber() const;
    void setName(const std::string& newName){};
    void setContactInfo(const std::string& contactInfo){};  
    void setLibraryCardNumber(const std::string& newCardNumber){};
    void updateContactInfo(const std::string& newContactInfo){};
    bool canBorrowMoreBooks(int currentBorrowedCount, int maxLimit) const {
        return currentBorrowedCount < maxLimit;  
    };
};

#endif // PATRON_H