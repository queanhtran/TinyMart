#ifndef AUDIOPRODUCT_HPP
#define AUDIOPRODUCT_HPP

#include <iostream>
#include <string>
#include "product.hpp"

//define a genretype enum 
enum GenreType {Blues, Classical, Country, Folk, Jazz, Metal, Pop, RnB, Rock};

//create an audio product class 
//it's is the product class's child
class AudioProduct : public Product{
public: 
	AudioProduct();//default constructor
	AudioProduct(string aProdName, double aPrice, NameType aSinger);//constructor
	NameType getSinger();//getter function to access private variable
	GenreType getGenre();
	void setSinger(NameType aSinger);
	void setGenre(GenreType aGenre);
	virtual string getProdTypeStr() override;  // returns "Music"
	virtual void displayProdInfo() override ; //override a virtual function
	virtual void displayContentsInfo() override; // display specific contents belong to audio product class

private:
	//private variables
	GenreType genre;
	NameType singer;

};

#endif
