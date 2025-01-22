#include "library_item.h"

// Constructor
LibraryItem::LibraryItem(const std::string& title)
    : title(title), isCheckedOut(false), dueDate("") {}

// Getters
std::string LibraryItem::getTitle() const {
    return title;
}

bool LibraryItem::getIsCheckedOut() const {
    return isCheckedOut;
}

std::string LibraryItem::getDueDate() const {
    return dueDate;
}

// Setters
void LibraryItem::setTitle(const std::string& title) {
    this->title = title;
}

void LibraryItem::checkOut() {
    isCheckedOut = true;
    // Set due date logic here
}

void LibraryItem::returnItem() {
    isCheckedOut = false;
    // Reset due date logic here
}

void LibraryItem::renewItem(int extraDays) {
    // Extend the due date logic here
}

void LibraryItem::markAsLost() {
    isCheckedOut = true; // Assuming lost items are still marked as checked out
    // Additional lost item logic here
}
