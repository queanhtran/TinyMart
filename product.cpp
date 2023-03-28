#include <iostream>
#include <string>
#include "product.hpp"

// Initializing static member variables
prod_id_t Product::nextID = 0;

//define product constructor
Product::Product (string aProdName , double aPrice) : prodName(aProdName), price(aPrice) {
	aProdName = "!None!"; // default
	//product's price need to be greater than 0 and less than 100
	if (aPrice < 0 || aPrice > 100) 
		aPrice = 0; //otherwise it will be 0
	
	prodID = createNewID();//make an unique ID
}

//create a new ID everytime
prod_id_t Product::createNewID(){
	return nextID++; // create an unique ID everytime
}
//getter functions for private variables
prod_id_t Product::getProdID(){
	return prodID;
};

string Product::getProdName(){
	return prodName;
};

double Product::getPrice (){
	return price;
};

float Product::getReviewRate(){
	return reviewRate;
};

//setter function for private members
void Product::setProdID(prod_id_t theID){
	prodID = theID;

};

void Product::setProdName(string theName){
	prodName = theName;
};
void Product::setPrice (double thePrice){
	price = thePrice;
};
void Product::setReviewRate(float theRate){
	reviewRate = theRate;
};

//print out the essential information about each item
void Product::displayProdInfo(){
	cout << "[" << getProdTypeStr() << "]"<< endl;
	cout << "Product ID: " << prodID << "	Product Name: " << prodName << endl;
	cout << "Price: $" << price << "		Product Rate Review: " << reviewRate << endl;
	//Product::displayContentsInfo();
};  // displays product information. 

std::ostream& operator<< (std::ostream& os, Product&  aProduct){
	aProduct.displayProdInfo(); //The operator operating function simply invokes the existing displayProdInfo() function 
	return os;
}

