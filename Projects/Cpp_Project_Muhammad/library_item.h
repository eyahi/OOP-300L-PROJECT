// Header: library_item.h
#ifndef LIBRARY_ITEM_H
#define LIBRARY_ITEM_H

#include <string>

class LibraryItem {
private:
    std::string title; // Title of the library item
    bool isCheckedOut; // Status indicating if the item is checked out
    std::string dueDate; // Due date for the item

public:
    // Constructor to initialize the library item
    LibraryItem(const std::string& title);

    // Getters to retrieve item details
    std::string getTitle() const;
    bool getIsCheckedOut() const;
    std::string getDueDate() const;

    // Setters to modify item details
    void setTitle(const std::string& title);
    void setIsCheckedOut(bool status);
    void setDueDate(const std::string& dueDate);

    // Methods for library item management
    void checkOut(const std::string& dueDate);
    void returnItem();
    void renewItem(int extraDays);
    void markAsLost();
};

#endif // LIBRARY_ITEM_H