
#include <iostream>
#include <string>
#include "product.hpp"
#include "bookproduct.hpp"

//define boook product class's constructor
BookProduct::BookProduct(string aProdName, double aPrice, NameType anAuthor, int pageNum) : Product(aProdName, aPrice), author(anAuthor), pages(pageNum){
}

//getter functions to access private variables
NameType BookProduct::getAuthor(){
	return author;
}
int BookProduct::getPages(){
	return pages;
}

//setter functions 
void BookProduct::setAuthor(NameType aAuthor){
	author = aAuthor;
}
void BookProduct::setPages(int aPages){
	pages = aPages;
}


void BookProduct::displayProdInfo(){
	Product::displayProdInfo(); // invoke the base function
}
void BookProduct::displayContentsInfo() {
	cout << "Author: " << author.firstname << " " << author.lastname << endl;
	cout << "Pages: " << pages << endl;
}; // Audio product private attributes information, singer name, and genre

