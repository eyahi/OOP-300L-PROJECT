#include "library_item.h"

LibraryItem::LibraryItem(const std::string& title)
    : title(title), isCheckedOut(false) {}

std::string LibraryItem::getTitle() const { return title; }
bool LibraryItem::getIsCheckedOut() const { return isCheckedOut; }
std::string LibraryItem::getDueDate() const { return dueDate; }

void LibraryItem::setTitle(const std::string& title) { this->title = title; }
void LibraryItem::setIsCheckedOut(bool isCheckedOut) { this->isCheckedOut = isCheckedOut; }
void LibraryItem::setDueDate(const std::string& dueDate) { this->dueDate = dueDate; }

void LibraryItem::checkOut() { isCheckedOut = true; }
void LibraryItem::returnItem() { isCheckedOut = false; }
void LibraryItem::renewItem(int extraDays) {
    // Logic to extend the due date
}

void LibraryItem::markAsLost() {
    // Logic to mark item as lost
}

