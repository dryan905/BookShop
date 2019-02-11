#include "Book.h"
#include <iostream>
#include <string>
using namespace std;
using namespace bookShopData;

Book::Book()    //Default constructor
{
    title = "Empty";
    autherName = "Empty";
    price = 0;
    quantity = 0;
}

Book::Book(std::string inputTitle,std::string inputName)    //Constructor that sets the title and authers name to an input value
{
    title = inputTitle;
    autherName = inputName;
    price = 0;
    quantity = 0;


}

Book::Book(int inputPrice, int inputQuantity,std::string inputTitle,std::string inputName)  //Constructor that sets all data members to an input value
{
    title = inputTitle;
    autherName = inputName;
    if(inputPrice >=0 && quantity >= 0) //Makes sure that no negative value can be signed to price or quantity
    {
        price = inputPrice;
        quantity = inputQuantity;
    }
    else    //If a negative value is given then, price and quantity is set to 0
    {
        price = 0;
        quantity = 0;
    }


}


void Book::setPrice(int valueP) //Sets the price value
{
    if(valueP>=0)   //Makes sure a negative value is not assigned to price
    {
        price = valueP;
    }

}

void Book::setQuantity(int valueQ) //Makes sure a negative value is not assigned to quantity
{
    if(valueQ>=0)
    {
        quantity = valueQ;
    }
}


void Book::printToCout()    //Prints out the books information
{
    cout << title << " by " << autherName << " costs EUR " << price << " - " << quantity << " books are available." <<endl;
}
