#ifndef LIBRARYITEM_H
#define LIBRARYITEM_H

#include <string>

class LibraryItem {
public:
    std::string title;
    bool isCheckedOut;
    std::string dueDate;

public:
    LibraryItem(const std::string& title);
    virtual void checkOut();
    virtual void returnItem();
    virtual void renewItem(int extraDays);
    virtual void markAsLost();
     bool getIsCheckedOut() const;
};

#endif // LIBRARYITEM_H