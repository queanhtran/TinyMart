#ifndef BOOKPRODUCT_HPP
#define BOOKPRODUCT_HPP

#include <iostream>
#include <string>
#include "product.hpp"

//book product inherits from the product class
//it's also an abstract class
class BookProduct : public Product{
public: 
	BookProduct();//default constructor
	BookProduct(string aProdName, double aPrice, NameType anAuthor, int pageNum);// specific constructor for bookproducct class
	NameType getAuthor();//getter functions
	int getPages();
	void setAuthor(NameType aAuthor);//setter functions
	void setPages(int aPages);
	virtual void displayProdInfo() override ; // override the base class's function
	virtual void displayContentsInfo() override; // Audio product private attributes information, singer name, and genre

private:
	//private variables
	NameType author; // author's name
	int pages; // number of pages
};

#endif
