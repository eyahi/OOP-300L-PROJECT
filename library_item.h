#ifndef LIBRARY_ITEM_H
#define LIBRARY_ITEM_H
#include <string>
#include<iostream>

class LibraryItem {
private:
    std::string title;  
    std::string isbn;     
    std::string author;
    bool isCheckedOut;        
    int dueDate;     

public:
   LibraryItem(const std::string& title, const std::string& author,const std::string& isbn)
    : title(title), author(author),isCheckedOut(false), dueDate(0),isbn(isbn) {}
     
    std::string getTitle() const{return title;};
    bool getIsCheckedOut() const{return isCheckedOut;};
    int getDueDate() const{return dueDate;};
    std::string getISBN() const{return isbn;};
    std::string getAuthor() const{return author;};
    
    void setTitle(const std::string& title){this->title =title;};
    void setIsCheckedOut(bool status){isCheckedOut = status;};
    void setDueDate(const int& dueDate){this->dueDate = dueDate; };
    void setISBN(const std::string& isbn){this->isbn = isbn; };
    void setAuthor(const std::string& author){this-> author= author; };
    
    
    
    virtual void checkOut(){};
    virtual void returnItem(){};
    virtual void renewItem(int extraDays){};
    virtual void markAsLost(){};
    virtual void printDetails() const=0;
    virtual int calculateLateFees(int daysOverdue) const=0;


    virtual ~LibraryItem() {};
};

#endif