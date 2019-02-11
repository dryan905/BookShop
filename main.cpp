////////////////////////////////////////
//Programming Assignment
//
//Soultion to the Book shop exercise
//
//Author:   David Ryan (Student #: 15076253)
//Date:     14/11/2015
////////////////////////////////////////



#include <iostream>     //Inculde the iostream libary
#include <string>       //Inculde the string libary
#include "Book.h"       //Inulde the Book header
using namespace std;    //Make elements from the std namespace local
using namespace bookShopData;   //Make elements from the bookShopData namespace local

int main()
{
    Book listOfBooks[5]; //Create an array of listOfBooks

    listOfBooks[0].setTitle("Thinking C++");    //Set the title for book 1
    listOfBooks[0].setAuther("B. Eckel");       //Set the authers name in book 1
    listOfBooks[0].setPrice(55);                //Set the price for book 1
    listOfBooks[0].setQuantity(2);              //Set the quanity for book 1

    listOfBooks[1].setTitle("C++ from Ground Up");    //Set the title for book 2
    listOfBooks[1].setAuther("H. Schildt");           //Set the authers name in book 2
    listOfBooks[1].setPrice(60);                      //Set the price for book 2
    listOfBooks[1].setQuantity(8);                    //Set the quanity for book 2

    listOfBooks[2].setTitle("Problem Solving with C++");    //Set the title for book 3
    listOfBooks[2].setAuther("W. Savitch");                 //Set the authers name in book 3
    listOfBooks[2].setPrice(20);                            //Set the price for book 3
    listOfBooks[2].setQuantity(1);                          //Set the quanity for book 3

    listOfBooks[3].setTitle("Object-Oriented Programming"); //Set the title for book 4
    listOfBooks[3].setAuther("R. Johnsonbaugh, M. Kalin");  //Set the authers name in book 4
    listOfBooks[3].setPrice(75);                            //Set the price for book 4
    listOfBooks[3].setQuantity(9);                          //Set the quanity for book 4

    listOfBooks[4].setTitle("The C++ Programming Language");    //Set the title for book 5
    listOfBooks[4].setAuther("B. Stroustrup");                  //Set the authers name in book 5
    listOfBooks[4].setPrice(50);                                //Set the price for book 5
    listOfBooks[4].setQuantity(5);                              //Set the quanity for book 5

    listOfBooks[0].printToCout();   //Display information for book 1
    listOfBooks[1].printToCout();   //Display information for book 2
    listOfBooks[2].printToCout();   //Display information for book 3
    listOfBooks[3].printToCout();   //Display information for book 4
    listOfBooks[4].printToCout();   //Display information for book 5

    cout << endl;
    string ans; //stores the answer from the user
    cout << "Would you like to purchase a book (y/n)?" << endl; //prompt the user if he/she would like to buy a book
    cin >> ans; //store the users answer

    if(ans == "y")  //if the user said yes, run this section of code
    {
        int bookNum;     //int variable that stores what book number is selected
        int numOfCopies; //int variable that stores the number of copies
        cout << "What book would you like (Book 1,2,3,4,5)?" << endl; //prompt the user to input what book he/she wants
        cin >> bookNum; //store answer in bookNum
        cout << "How many copies?" << endl;  //prompt the user to input the number of copies he/she wants of the book
        cin >> numOfCopies; //store answer i numOfCopies

        int index = bookNum-1; //calculate the correct index for the array of books

        if(numOfCopies <= listOfBooks[index].getQuantity()) //Check to see in there is enough copies of the book requested
        {
            cout << endl;   //yes there is enough copies of the book
            cout << "You have bought " << numOfCopies << " copies of " << listOfBooks[index].getTitle() << endl; //display message stating the user has bought the book
        }
        else
        {
            cout << endl;   //no there is not enough copies of the book
            cout << "Unfortunately, there are not enough copies of " << listOfBooks[index].getTitle() << " in stock" << endl;   //disply message to inform the user there is not enough copies
        }

    }
    else //if the user said no, run section of code
    {
        cout << "Ok, Have a good day" << endl;  //display goodbye message
    }




    return 0;   //terminate program with no error
}
