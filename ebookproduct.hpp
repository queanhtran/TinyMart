#ifndef EBOOKPRODUCT_HPP
#define EBOOKPRODUCT_HPP

#include <iostream>
#include <string>
#include "bookproduct.hpp"
#include "product.hpp"

//inherits from the book product class
class EBookProduct : public BookProduct{
public: 
	EBookProduct(); // default
	EBookProduct(string aProdName, double aPrice, NameType anAuthor, int pageNum);//ebook product constructor
	string getProdTypeStr() override; // override the product type funtion
};

#endif
