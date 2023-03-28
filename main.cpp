#include <iostream>
#include "product.hpp"
#include "audioproduct.hpp"
#include "bookproduct.hpp"
#include "ebookproduct.hpp"
#include "paperbookproduct.hpp"
#include "videoproduct.hpp"
#include "cart.hpp"
#include "gameproduct.hpp"
#include "customer.hpp"

//include all hpp files

int main() {
	// create the various product objects: 3 AudioProduct objects, 2
	// VideoProduct objects, 1 ebook and 1 paper book objects
	//assign objetcs' names, price, singer/director, genre/ film rate type and review rate
	//Adjustments for PA7
	// create and set up a cart and a customer
	NameType aName = {"John", "Smith"};
	Cart* myCart = new Cart;
	Customer me(aName, myCart); 
	me.setEmail("me1234@gmail.com");
	
	//dynamically allocating products using new operator
	NameType aName1 = {"Beetles", ""};
    AudioProduct* music1 = new AudioProduct ("Yesterday", 16.5, aName1);
    music1->setGenre(GenreType::Pop);
    music1->setReviewRate(9.8);

	NameType aName3{"Robert", "Wise"};
	VideoProduct* movie1 = new VideoProduct("Sound of Music", 22, aName3, 1965, 175);
	movie1->setFilmRate(FilmRateType::G);
	movie1->setReviewRate(9.2);

	NameType aName4{"Ernest", "Hemmingway"};
	EBookProduct* ebook1 = new EBookProduct("The old Man and the Sea", 8.3, aName4, 127);
	ebook1->setReviewRate(9.2);
	
	NameType aName5{"George", "Lucas"};
	VideoProduct* movie2 = new VideoProduct("Star Wars", 22, aName5, 1977, 120);
	movie2->setFilmRate(FilmRateType::PG);
	movie2->setReviewRate(8.5);
	movie2->isNewRelease(1977);
	
	NameType aName6{"Zac", "Efron"};
	AudioProduct* music3 = new AudioProduct("Rewrite The Stars", 3.4, aName6);
	music3->setGenre(GenreType::Pop);
	music3->setReviewRate(8.9);
	
	NameType aName7{"Julia", "Quinn"};
	PaperBookProduct* paper1 = new PaperBookProduct("Bridgerton", 10, aName7, 433);
	paper1->setReviewRate(8.2);

	NameType aName8{"Colleen", "Hover"};
	PaperBookProduct* paper2 = new PaperBookProduct("Reminders of Him: A Novel", 8.65, aName8, 133);
	paper2->setReviewRate(9.4);

	GameProduct* aGame1 = new GameProduct("Mario Brothers", 19.99, ConsoleType::Nintendo);
	aGame1->setVersion("2");
	aGame1->setReviewRate(9.3);
	
	// Add the products into the cart using overloaded + operator
	// add all items into the cart
	*myCart = *myCart + music1 + movie1 + ebook1  + movie2 + music3 + paper1 + aGame1 + paper2; // dereferencing the cart
		
	// remove 2 items from the cart
	myCart->removeItem(music1->getProdID());
	myCart->removeItem(paper1->getProdID());
	
	// display customer and cart information. 
	me.displayCustomerReport();	
}