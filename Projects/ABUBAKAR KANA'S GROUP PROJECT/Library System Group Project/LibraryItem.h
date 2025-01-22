//This is the header for the library item class.
#pragma once
#ifndef LIBRARYITEM_H
#define LIBRARYITEM_H

#include <string>

class LibraryItem {
protected:
	std::string title;
	bool isCheckedOut;;
	std::string dueDate;
public:
	LibraryItem(const std::string& title);
	virtual ~LibraryItem(){}

	std::string getTitle() const;
	bool getIsCheckedOut() const;
	void checkOut(const std::string& dueDate);
	void returnItem();
	void renewItem(int extraDays);
	void markAsLost();
};
#endif