*******************************************************
*  **Name      :**  Ngoc Que Anh Tran      
*  **Student ID:**  110-355-603             
*  **Class     :**  CSCI 2312 Section 01           
*  **HW#       :**  7        
*  **Due Date  :**  DEC 13, 2022
*******************************************************

# Read Me  
##  Description of the program
* PA6: Develop the "Tiny Mart" product catalog system.  The company sells the following 3 major product types (Audio, Video, and Book) and under the Book product category, there are two sub-products (e-book and paper book)
* PA7: extend the PA6 by using Operator overloading ( + and << operators), STL (vector), Dynamically allocating Product objects, Run-time Polymorphism (virtual functions) testing, Handling pointer types, Exception handling

## Algorithm
* create the product class
* create the video produxt, audio product, game product and book product classes which inherited from the produc class
* inherited the book class by ebook product class and paper book product class
* create a cart class which add or remove an item as required, then print out the items in the cart
* create a customer class which has customer's information and has cross-referencing relationship with cart class
* use main.cpp to create a cart object, customer object and call other functions

##  Source files
## product.hpp 
1. define a struct NameType (first and last name)
2. declare a class named product
3. declare variables(prodID, price, reviewRate, prodName) and functions(setters and getters for private variables)
4. declare displayContentsInfo, displayProdInfo functions to display product's information later

## product.cpp 
1. define all the functions (getters, setters and display)
2. print out the content's information by the display functions
3. initialize a static variable nextID

## audioproduct.hpp 
1. Is a child class of product class. 
3. declare variables(prodID, price, reviewRate, prodName) and functions(setters and getters for private variables)
4. add two more variables (genre and singer's name)
5. override virtual displayContentsInfo, displayProdInfo functions

## audioproduct.cpp 
1. define all functions in the class
2. override the displayContentsInfo by displaying the genre and singer's name of the audio
3. override the product type by returning "Music"

## bookproduct.hpp
1. Is a child class of the product class, but also is a parent class of ebook and paper book classes
2. beside variables inherites from the product class, it also declares pages and author variables.

## bookproduct.cpp
1. define all the getter and setter function 
2. override the displayContentsInfo of the product class by printing out specific information of the book (author and number of pages)

## ebookproduct.hpp
1. Is a child class of book product class
2. override the product type function

## ebookproduct.cpp
2. return "ebook" for product type

## paperbookproduct.hpp
1. Is a child class of book product class
2. override the product type function

## paperbookproduct.cpp
2. return "paper book" for product type

## videoproduct.hpp
1. Is a child class of the product class
2. add on 4 variables (release year, run time, film rating and director)

## videoproduct.cpp
1. define all the getter and setter function 
2. override the displayContentsInfo of the product class by printing out specific information of the movie(author and number of pages)
## gameproduct.hpp
1. Is a child class of the product class
2. Has 2 new variables (version ans Console type)
3. define all getter and setter functions

## gameproduct.cpp
1. return "Game" for getProdType function
2. override the displayContentsInfo of the product class by printing out specific information of the game product(version and Console type)

## cart.hpp
1. declare a cart class
2. use cart class to add or remove an item
3. make exception handling in additem()
4. this class also can check if the cart is full or not
5. declare the displaycart function which will print out the list of items in the cart

##  cart.cpp
1. define constructor, getter, setter functions
2. define, cart is full or not function, additem and removeitem function
3. exception handling in addItem(), if the number of purchased products is larger than MAX_ITEMS => raise CartOverflowException then throw a catch within the same function
4. update the price of added item to the total balance whenever addItem() or removerItem successfully implements
5. define display cart function
6. add on an overloading operator to print out displayCart() by << in customter.cpp

## customer.hpp
1. add the cart class before customer class is declared and defined for forward referencing (cross-referencing between customer and cart classes)
2. This class has the customer's personal information and a Cart object
4. specific private variables(Customer's name, email, account balance and a pointer to Cart class)
5. display the customer's information by displayCustomerReport()
6. dclare a function named updateBalance() to keep customer's balancee updated
7. getter and setter functions are defined in here

##  customer.cpp
1. customer constructor will call setCustomer() (which is belong to cart class)
2. display Customer's information and cart's information by calling displayCart() and using << operator
3.  update the account balance by updateBalance(), this function will be called by addItem() and removeItem() in cart.cpp

## main.cpp
   **Main program**
  1. this is where all functions are called
  2. instantiate 1 Video, 1 Audio products
  3. dynamically allocating products using new operator
  4. add 8 items into the cart
  5. remove 2 items from the cart
  6. display customer and cart information

## output.txt
* copy of output when 8 items are added to the cart
* an error message(exception handling) will be printed out to the console window

##  Circumstances of programs
   * The program runs successfully.  
   * The program was developed and tested on replit.

##  How to build and run the program

1. You should see a directory named homework with the files:
	* main.cpp
	* audioproduct.hpp
   	* audioproduct.cpp
	* bookproduct.cpp
  	* bookproduct.hpp
	* cart.cpp
	* cart.hpp
	* ebookproduct.cpp
	* ebookproduct.hpp
   	* gameproduct.cpp
   	* gameproduct.hpp
	* paperbookproduct.cpp
	* paperbookproduct.hpp
	* product.cpp
	* product.hpp
	* videoproduct.cpp
	* videoproduct.hpp
	* readme file
	* output.txt
	   
3. Build the program.  

    Change to the directory that contains the file by:  
    > % cd [PA7] 

    Compile the program by:  
    > % make

4. Run the program by:  
   > % ./[main]

5. Delete the obj files, executables, and core dump by  
   > %./make clean

*******
