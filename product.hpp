#ifndef PRODUCT_HPP
#define PRODUCT_HPP

#include <string>
#include <iostream>
using namespace std;

//create an alias of int
typedef int prod_id_t;

//a struct 
struct NameType{
	string firstname;
	string lastname;
};

// parent class, is inherited by other classes
class Product {
public:
	Product(); //default constructor
	Product(string aProdName , double aPrice);//prroduct's constructor
	prod_id_t getProdID();//getter functions to access private variables
	string getProdName();
	double getPrice ();
	float getReviewRate();
	void setProdID(prod_id_t theID);//setter functions to access private variables
	void setProdName(string theName);
	void setPrice (double thePrice);
	void setReviewRate(float theRate);
    virtual string getProdTypeStr() = 0; //pure virtual functions
    virtual void displayContentsInfo() = 0; //these virtual functions will be overriden later
    virtual void displayProdInfo();  // displays product information. 
	
	friend std::ostream& operator<< (std::ostream& os, Product&  aProduct); 


private: 
	int prodID;// unique ID of each item
	string prodName; // product's name
	double price;//price of each tem
	float reviewRate;//review rate 
	static prod_id_t nextID;// contains the next product id
    static prod_id_t createNewID();  //creating a Product-wise next product ID
};



#endif