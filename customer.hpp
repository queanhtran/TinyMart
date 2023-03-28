#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP

#include <iostream>
#include <string>
#include "product.hpp"

class Cart;

class Customer{
public:
	Customer(): balance(0){}//default constructor
	Customer(NameType theName, Cart* theCart ); //Cart& not Cart* class's constructor

	//getter and setter functions
	NameType getName(){return name;}
	string getEmail(){return email;}
	double getBalance(){return balance;}
	Cart* getCart(){return cart;} 
	void setCart(Cart* aCart){cart = aCart;}
	void setEmail(std::string anEmailAddr){email = anEmailAddr;}

//displays customer's information including cart information.  
	void displayCustomerReport();//use cart's "<<" operator to display the cart's information.
	void updateBalance(double delta); //keep the total balance updated 

private:
	NameType name; // last and first name of the customer
	string email; // customer's email
	double balance;  //account's balancee
	Cart *cart; //Cart class's object
};


#endif
