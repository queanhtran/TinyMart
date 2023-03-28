#ifndef CART_HPP
#define CART_HPP

#include <iostream>
#include <string>
#include <vector>
#include "product.hpp"
#include <stdexcept>    // std::exception

//a forward referencing of Customer class 
class Customer;

// cart class which control adding and removing items
class Cart{
public:
	Cart() : itemNum(0) {} //default constructor
	int getItemNum();//getter function
	void setitemNum(int aItemNum);//setter function
	bool addItem(Product* theProduct);// returns true if the specified item is successfully added, otherwise false (when the cart is full)
	bool removeItem(prod_id_t theProductID);//returns true if the specified item is successfully searched and  removed, otherwise false (when the item is not found or the cart is empty)
	void displayCart(); //display items in the cart

	//setter and getter function
	Customer* getCustomer(){return customer;}
	void setCustomer(Customer* aCustomer){ customer = aCustomer;}
	//overloading functions
	Cart& operator+ (Product* theProduct);
	friend std::ostream& operator<< (std::ostream& os, Cart&  aCart); 

private:
	bool isCartFull();// check if this cart is full or not
	NameType owner; // last and first name of the author
	static const int MAX_ITEMS = 7;
	int itemNum; // initialize
	std::vector<Product*> purchasedItems; // use vertor
	Customer* customer;
};

//exception handling
class CartOverflowException: public std::logic_error{
public:
	CartOverflowException(const string& amessage);
};

#endif