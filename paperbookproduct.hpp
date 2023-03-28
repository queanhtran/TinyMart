#ifndef PAPERBOOKPRODUCT_HPP
#define PAPERBOOKPRODUCT_HPP

#include <iostream>
#include <string>
#include "bookproduct.hpp"
#include "product.hpp"

//inherits from book product class
class PaperBookProduct : public BookProduct{
public: 
	
	PaperBookProduct();
	PaperBookProduct(string aProdName, double aPrice, NameType anAuthor, int pageNum);
	string getProdTypeStr() override;
};

#endif
