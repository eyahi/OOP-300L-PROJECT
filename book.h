#ifdef BOOK_H
#define BOOK_H
#include <string>

class Book{
    private:
    std::string title;
    std::string author;
    std::string isbn;

    public:
    // Constructor
    Book(const std::string& title,const std::string& author,const std::string& isbn){};
    //Getters
    void gettitle()const{};
    void getauthor()const{};
    void getisbn()const{};

    //Setters
    void settitle(std::string& title){};
    void setauthor(std::string& author){};
    void setisbn(std::string& isbn){};

}
#endif