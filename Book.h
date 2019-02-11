#ifndef BOOK_H      //guards to stop re-declaration
#define BOOK_H

#include <string>
namespace bookShopData //create namespace bookShopData
{
    class Book  //Create class book
    {
        public:
            Book(); //default constructor
            Book(std::string inputTitle,std::string inputName); //constructor that sets the names of the books and authers
            Book(int inputPrice, int inputQuantity,std::string inputTitle,std::string inputName); //constructor that sets all data members to a certain value

            void setTitle(std::string valueT) {title = valueT;}         //Prototype for setTitle. Sets title to an input value
            void setAuther(std::string valueA) {autherName = valueA;}   //Prototype for setAuther. Sets autherName to an input value
            void setPrice(int valueP);  //Prototype for setPrice
            void setQuantity(int valueQ); //Prototype for setQuantity

            std::string getTitle() {return title;}  //return value of title
            std::string getAuther() {return autherName;}    //returns value of autherName
            int getPrice() {return price;}          //returns the value of price
            int getQuantity(){return quantity;}     //returns value for quantity
            void printToCout();                     //Prototype for printToCout. Displays book information

        protected:
        private:
            std::string title;          //Holds the title of the book
            std::string autherName;     //Holds the auther name of the book
            int price;                  //Holds the price of the book
            int quantity;               //Holds the number of books in stock
    };
}
#endif // BOOK_H
