#ifndef LIBRARY_ITEM_H
#define LIBRARY_ITEM_H

#include <string>

class LibraryItem {
private:
    std::string title;
    bool isCheckedOut;
    std::string dueDate;

public:
    LibraryItem(const std::string& title);

    // Getters and Setters
    std::string getTitle() const;
    bool getIsCheckedOut() const;
    std::string getDueDate() const;

    void setTitle(const std::string& title);
    void setIsCheckedOut(bool isCheckedOut);
    void setDueDate(const std::string& dueDate);

    // Functions
    void checkOut();
    void returnItem();
    void renewItem(int extraDays);
    void markAsLost();
};

#endif // LIBRARY_ITEM_H

