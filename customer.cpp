#include <iostream>
#include <string>
#include "customer.hpp"
#include "cart.hpp"

// define constructor
Customer::Customer(NameType theName, Cart *theCart)
	: name(theName), cart(theCart) {
	//Cart setCustomer(Customer aCustomer);
	cart->setCustomer(this);
}

//display cart's and customer's information
void Customer::displayCustomerReport() {
	cout << *cart; // overloading <<
	//customer's information
	cout << "Email: " << email << endl;
	cout << "Current Balance: $" << balance << endl;
	
} 

// this function will kep track with the balance
void Customer::updateBalance(double delta) {
	balance += delta; // update balance
} 
// is called by Cart::additem and removeitem
