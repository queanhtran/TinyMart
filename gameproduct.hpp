#ifndef GAMEPRODUCT_HPP
#define GAMEPRODUCT_HPP

#include <iostream>
#include <string>
#include "product.hpp"

//define a Consoletype enum 
enum ConsoleType {XBox, Playstation, Nintendo};
	
//create an game product class 
//it's is the product class's child
class GameProduct : public Product{
public: 
	GameProduct();//default constructor
	GameProduct(string aProdName, double aPrice, ConsoleType aConsole);//constructor

	//getter and setter functions
	ConsoleType getConsole(){return console;};
	string getVersion(){return version;};
	void setConsole(ConsoleType aConsole){console = aConsole; };
	void setVersion(std::string aVersion){version = aVersion; };

	//virtual functions
	virtual string getProdTypeStr() override;  // returns "Game"
	virtual void displayProdInfo() override ; //override a virtual function
	virtual void displayContentsInfo() override; // display specific contents belong to game product class

private:
	//private variables
	string version;
	ConsoleType console;
};

#endif
