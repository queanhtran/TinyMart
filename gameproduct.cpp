#include <iostream>
#include <string>
#include "product.hpp"
#include "gameproduct.hpp"

//define gameproduct constructor
GameProduct::GameProduct(string aProdName, double aPrice, ConsoleType aConsole) : Product(aProdName, aPrice), console(aConsole){
}

//override funtions
//for game product, the prooducct type function will return "Game"
string GameProduct::getProdTypeStr() {
	return "Game";
}
//invokes the base funcion
void GameProduct::displayProdInfo(){
		Product::displayProdInfo();
}

//override and print out add-on variables of the class
void GameProduct::displayContentsInfo() {
	cout << "Version: " << version << endl;
	cout << "console type: " << console << endl;
}; // display specific information of GameProduct
