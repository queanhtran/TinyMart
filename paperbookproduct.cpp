#include <iostream>
#include <string>
#include "paperbookproduct.hpp"
#include "product.hpp"

//define constructor
PaperBookProduct::PaperBookProduct(string aProdName, double aPrice, NameType anAuthor, int pageNum) : BookProduct(aProdName, aPrice, anAuthor, pageNum){} 

//override and return "Paper book"
string PaperBookProduct::getProdTypeStr(){
	return "Paper book";
}
