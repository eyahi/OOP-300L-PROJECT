//This is the source file for the library item class.
#include "LibraryItem.h"
#include <iostream>
//These are the constructors below:
LibraryItem::LibraryItem(const std::string& t):title(t), isCheckedOut(false), dueDate("")
{
}

std::string LibraryItem::getTitle() const
{
	return title;
}

bool LibraryItem::getIsCheckedOut() const
{
	return isCheckedOut;
}

void LibraryItem::checkOut(const std::string& d)
{
	isCheckedOut = true;
	dueDate=d;
}

void LibraryItem::returnItem()
{
	isCheckedOut = false;
	dueDate = "";
}

void LibraryItem::renewItem(int extraDays)
{ //This will allow you to extend the date for returning an item.
	std::cout << "Renewed for " << extraDays << " extra days. \n";
}

void LibraryItem::markAsLost()
{
	isCheckedOut = false;
	std::cout << "Item marked as lost. \n";
}
