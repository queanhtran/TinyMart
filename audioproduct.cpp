#include <iostream>
#include <string>
#include "product.hpp"
#include "audioproduct.hpp"

//define audioproduct constructor
AudioProduct::AudioProduct(string aProdName, double aPrice, NameType aSinger) : Product(aProdName, aPrice), singer(aSinger){
}

//getter functions
NameType AudioProduct::getSinger() {
	return singer;
}

GenreType AudioProduct::getGenre() {
	return genre;
}

//setter functions
void AudioProduct::setSinger(NameType aSinger) {
	singer = aSinger;
}

void AudioProduct::setGenre(GenreType aGenre) {
	genre = aGenre;
}

//override funtions
// for audio product, the prooducct type function will return "Music"
string AudioProduct::getProdTypeStr() {
	return "Music";
}
//invokes the base funcion
void AudioProduct::displayProdInfo(){
		Product::displayProdInfo();
}

//overrride and print out add-on variables of the class
void AudioProduct::displayContentsInfo() {
	cout << "Singer Name: " << singer.firstname << " " << singer.lastname << endl;
	cout << "Genre: " << genre << endl;
}; // Audio product private attributes information, singer name, and genre
