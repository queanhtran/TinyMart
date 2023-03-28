
#include <iostream>
#include <string>
#include "product.hpp"
#include "videoproduct.hpp"

//define video product constructor
VideoProduct::VideoProduct(string aProdName, double aPrice, NameType aDirectorName, int aReleaseYear, int aRunTime) : Product(aProdName, aPrice), director(aDirectorName.firstname + " " + aDirectorName.lastname), releaseYear(aReleaseYear), runTime(aRunTime) {
};

//getter functions
FilmRateType VideoProduct::getFilmRate(){
	return filmRate;
};
string VideoProduct::getDirector(){
	return director;
};

int VideoProduct::getreleaseYear(){
	return releaseYear;
};
int VideoProduct::getrunTime(){
	return runTime;
};

//setter functions
void VideoProduct::setDirector(string aDirector){
	director = aDirector;
};
void VideoProduct::setFilmRate(FilmRateType aFilmRate){
	filmRate = aFilmRate;
};
void VideoProduct::setreleaseYear(int areleaseYear){
	releaseYear = areleaseYear;
};
void VideoProduct::setrunTime(int arunTime){
	runTime = arunTime;
};

//override the product type function and return "Movie"
string VideoProduct::getProdTypeStr() {
		return "Movie";
} // returns "Music"

//invoke the base function
void VideoProduct::displayProdInfo() {
	Product::displayProdInfo();
} 

//check if the item is new release
//return true if it is new release
bool VideoProduct::isNewRelease(int theYear){
	if (theYear >= 2022)
		return true;
	return false; 
} // if the video was released in 2022, it's a new release

//print out the special contents of video products
void VideoProduct::displayContentsInfo(){
	cout << "Release Year: " << releaseYear << endl;
	cout << "Film Rating: " << filmRate << endl;
	cout << "Run Time: " << runTime << endl;
	cout << "Director: " << director << endl;

	//if the item is new release, print out a message
	if (isNewRelease(releaseYear) == true){
		cout << "New release video.\n";
	}
} 

