#ifndef LIBRARY_ITEM_H
#define LIBRARY_ITEM_H

#include <string>

class LibraryItem {
private:
    std::string title;
    bool isCheckedOut;
    std::string dueDate; // Placeholder for due date management

public:
    LibraryItem(const std::string& title);
    void checkOut(const std::string& dueDate);
    void returnItem();
    bool getIsCheckedOut() const;
    std::string getTitle() const;
};

#endif // LIBRARY_ITEM_H