#include <iostream>
#include <string>
#include "cart.hpp"
#include "customer.hpp"

//Exception Handling
CartOverflowException::CartOverflowException(const string& message) : std::logic_error("\nPrecondition Violated Exception" + message) {};

//setter and getter function to access private variable
int Cart::getItemNum(){
	return itemNum;
}
void Cart::setitemNum(int aItemNum){
	itemNum = aItemNum;
}

//return true if the cart is full function
bool Cart::isCartFull(){
	//if itemNum is equal to MAX_ITEMS, the cart is full
	if (itemNum == MAX_ITEMS){
		return true;
	}
	else 
		return false;//if the cart is not full
} // check if this cart is full or not


//the function will add and item to the cart array
//return true if succcessfully adds an item to the cart
//otherwise it returns false
bool Cart::addItem(Product *theProduct){
	//exception handling
	try{
		if ((isCartFull() == true) || (getItemNum() > MAX_ITEMS)){
			throw CartOverflowException(". Cart is full.\n");
		}
			
		else {
			purchasedItems.push_back(theProduct); // add an item by using push_back
			customer->updateBalance(purchasedItems[itemNum]->getPrice()); //keep track with the balance
			itemNum++;// increment itemNum to move to the next index
			return true;
		}
	}
	catch(CartOverflowException e)
		{
			std::cerr << e.what() << endl; // print out default message of exception handling
			
			//information of the item couldn't be added to the cart
			std::cerr << "Cart overflow: " << theProduct->getProdName() << endl;
			std::cerr << "Prod ID: " << (theProduct->getProdID()) << " couldn't be added to the cart."<< endl;
			std::cerr << "Max items: 7" << endl;
			return false;
		}
}

//this function will remove an item from the cart
bool Cart::removeItem(prod_id_t theProductID) {
	//scan through the cart
	for (int i = 0; i < 7; i++){
		// if the given item is in the cart
		// adjust all the indexes of the later items
		if (purchasedItems[i]->getProdID() == theProductID){
			for (int j = i; j < itemNum; j++){
				purchasedItems[j] = purchasedItems[j+1];// update index, shift the elements 
			}
			//negate the price if removing an item
			customer->updateBalance(-(purchasedItems[i]->getPrice()));
			itemNum--;// adjust the itemNum after removing an item
			return true;
		}
	}
	//error message if the item is not found
	cout << "Unable to find and remove the given item.\n";
	return false; //default 
}

//invoke addItem by operator +
Cart& Cart::operator+ (Product* theProduct){
	this->addItem(theProduct);
	return *this;
}

//display the cart
void Cart::displayCart(){
	cout << "\n\n"; 
	cout << "==========Tesing Cart============\n";
	
	//use a loop to print out all tiems
	for (int i = 0; i < itemNum; i++){
		cout << endl; // new line
		purchasedItems[i]->displayProdInfo();// call display functions
		purchasedItems[i]->displayContentsInfo();
	}
	//display the summary of the cart 
	//From PA6
	cout << "\n===== Summary of Purchase ======" << endl;
	cout << "Total number of purchases: " <<  itemNum << endl;
	cout << "Total purchasing amount: $" << customer->getBalance() << endl;
	cout << "Average cost: $" << customer->getBalance()/itemNum << endl;
	//print out customer's name
	cout << "\n===== Customer's information ======" << endl;
	cout << "Cart owner: " << customer->getName().firstname << " " << customer->getName().lastname << endl; //updated
}

//overloading opertator << 
std::ostream& operator<< (std::ostream& os, Cart&  aCart){
	aCart.displayCart();//The operator operating function simply invokes the existing displayCart() function
	return os;
} 

