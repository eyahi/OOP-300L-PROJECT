#ifndef LIBRARY_ITEM_H
#define LIBRARY_ITEM_H

#include <string>

class LibraryItem {
protected:
    std::string title;
    bool isCheckedOut;
    std::string dueDate;

public:
    LibraryItem(const std::string &title);

    // Getters and Setters
    std::string getTitle() const;
    bool getIsCheckedOut() const;
    std::string getDueDate() const;

    void setDueDate(const std::string &date);

    // Functionalities
    virtual void checkOut();
    virtual void returnItem();
    virtual void renewItem(int extraDays);
    virtual void markAsLost();
    virtual ~LibraryItem() {}
};

#endif // LIBRARY_ITEM_H
