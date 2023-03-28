
#include <iostream>
#include <string>
#include "product.hpp"
#include "ebookproduct.hpp"

//define the constructor
EBookProduct::EBookProduct(string aProdName, double aPrice, NameType anAuthor, int pageNum) : BookProduct(aProdName, aPrice, anAuthor, pageNum){} 

//return "Ebook" for product type getter function
string EBookProduct::getProdTypeStr(){
	return "Ebook";
}


