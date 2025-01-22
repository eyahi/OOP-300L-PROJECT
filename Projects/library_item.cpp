#include "library_item.h"

// Constructor
LibraryItem::LibraryItem(const std::string& title)
    : title(title), isCheckedOut(false) {}

// Check out the item
void LibraryItem::checkOut(const std::string& dueDate) {
    isCheckedOut = true;
    this->dueDate = dueDate; // Set the due date
}

// Return the item
void LibraryItem::returnItem() {
    isCheckedOut = false;
    dueDate.clear(); // Clear the due date when returning
}

// Check if the item is checked out
bool LibraryItem::getIsCheckedOut() const {
    return isCheckedOut;
}

// Get the title of the item
std::string LibraryItem::getTitle() const {
    return title;
}