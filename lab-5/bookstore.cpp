#include <iostream>
#include <string>
using namespace std;

class Book{
private:
    string Title;
    string Author;
    double price;
public:
    Book(){
        cout << "Enter the Title: ";
        getline(cin, Title);
        cout << "Enter the Author: ";
        getline(cin, Author);
        cout << "Enter the price: ";
        cin >> price;
    }
    void showbook();
};

class Textbook:public Book{
    string Subject;
public:
    Textbook(){
        cout << "Enter the subject of the book: ";
        cin >> Subject;
    }
    void show();
};

void Book::showbook(){
    cout << "Title : " << Title << " Author : " << Author << " Price : " << price;
}
void Textbook::show(){
    showbook();
    cout << " Subject : " << Subject << endl;
};

int main(){
    Textbook book1;
    book1.show();
}