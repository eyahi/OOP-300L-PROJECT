// Source: library_item.cpp
#include "library_item.h"

// Constructor implementation
LibraryItem::LibraryItem(const std::string& title)
    : title(title), isCheckedOut(false), dueDate("") {}

// Getter for the title
std::string LibraryItem::getTitle() const { return title; }

// Getter for the checkout status
bool LibraryItem::getIsCheckedOut() const { return isCheckedOut; }

// Getter for the due date
std::string LibraryItem::getDueDate() const { return dueDate; }

// Setter for the title
void LibraryItem::setTitle(const std::string& title) { this->title = title; }

// Setter for the checkout status
void LibraryItem::setIsCheckedOut(bool status) { isCheckedOut = status; }

// Setter for the due date
void LibraryItem::setDueDate(const std::string& dueDate) { this->dueDate = dueDate; }

// Marks the item as checked out and sets the due date
void LibraryItem::checkOut(const std::string& dueDate) {
    isCheckedOut = true;
    this->dueDate = dueDate;
}

// Marks the item as returned
void LibraryItem::returnItem() {
    isCheckedOut = false;
    dueDate = "";
}

// Placeholder for renewing the item (extending the due date)
void LibraryItem::renewItem(int extraDays) {
    // Logic to extend the due date can be added here
}

// Marks the item as lost
void LibraryItem::markAsLost() {
    isCheckedOut = true;
    dueDate = "Lost";
}