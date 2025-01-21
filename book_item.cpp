#include <iostream>
#include <string>
#include "book_item.h"

class LibraryItem {

private:
std::string title;  
std::string isbn;     
std::string author;
bool isCheckedOut;        
int dueDate;  
bool isAvailable = true;   

public:
    
    LibraryItem(std::string t,bool ic,int d){
        title = t;
        isCheckedOut = ic;
        dueDate = d;
    };

    void printDetails() const {
        std::cout << "Title: " << title << std::endl;
        std::cout << "Availability: " << (isAvailable ? "Available" : "Not Available") << std::endl;
    }

    double calculateLateFees(int daysOverdue){};
};

class BookItem : public LibraryItem {
private:
    std::string author;
    std::string isbn;
    static constexpr double lateFeePerDay = 0.50;


    BookItem(std::string t, std::string author, const std::string& isbn, bool ic = true, int d=0)
        : LibraryItem(t, ic, d) {

        };

    void printDetails() {
        LibraryItem::printDetails();
        std::cout << "Author: " << author << std::endl;
        std::cout << "ISBN: " << isbn << std::endl;
    }

    double calculateLateFees(int daysOverdue) {
        return daysOverdue * lateFeePerDay;
    }
};