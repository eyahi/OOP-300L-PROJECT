//This is the main driver file that is used to implement and test the program.
#include "Library.h"
#include <iostream>

int main() {
	Library library;
	//The code below adds different books to the library:
	library.addBook(BookItem("Object Oriented Programming", "Abubakar Kana", "20221203"));
	library.addBook(BookItem("Programming for beginners", "Abdallah Mukhtar Usman", "20221969"));
	library.addBook(BookItem("Advanced C Plus Plus", "Oluwatobiloba Olumodeji", "20220900"));
	library.addBook(BookItem("Programming", "Chukwuemeka Okereke", "20221230"));
	library.addBook(BookItem("C++ in Artificial Intelligence", "Utomi Emerim Onyekachukwu", "20221653"));

	//The code below adds different patrons to the library:
	library.addPatron(Patron("Mr.Emmanuel", "18/01/2025"));
	library.addPatron(Patron("Mr.Simon", "18/01/2025"));
	library.addPatron(Patron("Mr.Messi", "18/01/2025"));
	library.addPatron(Patron("Mr.Coutinho", "18/01/2025"));
	library.addPatron(Patron("Mr.Yamal", "18/01/2025"));

	//The code below borrows multiple books which exceeds the maximum limit of less than three books. Hence, it fails.
	library.borrowBook("20221203", "18/01/2025");
	library.borrowBook("20221969", "18/01/2025");
	library.borrowBook("20221230", "18/01/2025");

	//The code below searches for a book using its title and displays its report:	
	std::cout << "The Search Results for 'Object Oriented Programming': \n";
	library.searchBooksByTitle("Object Oriented Programming");

	//The code below searches for a non-existent book using the authors name, so it will display nothing.
	library.searchBooksByAuthor("Lionel Messi");

	//The code below displays the library report for all the books:
	std::cout << "\n Library Report: \n";
	library.generateLibraryReport();
	return 0;
}