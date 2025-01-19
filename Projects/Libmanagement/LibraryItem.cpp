#include "LibraryItem.h"

LibraryItem::LibraryItem(const std::string& title)
    : title(title), isCheckedOut(false) {}

void LibraryItem::checkOut() { isCheckedOut = true; }
void LibraryItem::returnItem() { isCheckedOut = false; }
void LibraryItem::renewItem(int extraDays) {
    // Update dueDate logic here
}
void LibraryItem::markAsLost() { isCheckedOut = true; /* Possibly update status */ }

bool LibraryItem::getIsCheckedOut() const { // Implement the getter
    return isCheckedOut;
}