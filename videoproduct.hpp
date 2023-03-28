#ifndef VIDEOPRODUCT_HPP
#define VIDEOPRODUCT_HPP

#include <iostream>
#include <string>
#include "product.hpp"

//define a film rate enum
enum FilmRateType {NotRated, G, PG, PG_13, R, NC_17};

//inherits from the product class
class VideoProduct : public Product{
public: 
	VideoProduct();//default constructor
	VideoProduct(string aProdName, double aPrice, NameType aDirectorName, int aReleaseYear, int aRunTime);//video product's constructor
	FilmRateType getFilmRate(); // getter functions
	string getDirector();
	int getreleaseYear();
	int getrunTime();
	void setDirector(string aDirector); // setter functions
	void setFilmRate(FilmRateType aFilmRate);
	void setreleaseYear(int areleaseYear);
	void setrunTime(int arunTime);
	virtual string getProdTypeStr() override;  // returns "Music"
	virtual void displayProdInfo() override ; //override the base function
	virtual void displayContentsInfo() override; // Audio product private attributes information, singer name, and genre
	bool isNewRelease(int theYear); // check if it is a new release

private:
	string director; // director name
	FilmRateType filmRate; // film rate
	int releaseYear; //year of release
	int runTime; // run time of the movie

};

#endif
