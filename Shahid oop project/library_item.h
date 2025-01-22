#ifndef LIBRARY_ITEM_H
#define LIBRARY_ITEM_H

#include <string>

class LibraryItem {
private:
    std::string title;
    bool isCheckedOut;
    std::string dueDate;

public:
    // Constructor
    LibraryItem(const std::string& title);

    // Getters
    std::string getTitle() const;
    bool getIsCheckedOut() const;
    std::string getDueDate() const;

    // Setters
    void setTitle(const std::string& title);
    void checkOut();
    void returnItem();
    void renewItem(int extraDays);
    void markAsLost();
};

#endif // LIBRARY_ITEM_H
