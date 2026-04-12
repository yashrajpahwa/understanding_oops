#include <iostream>
#include <string>
using namespace std;
class Library;
class Book{
    private:
    string title;
    string author;
    string ISBN;
    friend class Library;
    public:
    Book(string title = "", string author = "" , string ISBN = "");
    Book(const Book& obj);
    void putData();
};

class Library{
    private:
    static int bookIndex;
    Book B[100];
    public:
    bool addNewBook(const Book& b);
    bool removeBooks(const string& ISBN);
    void displayDetails();
};

Book::Book(string title, string author, string ISBN):title(title), author(author), ISBN(ISBN){}
/*alternatively
Book::Book(std::string title = "", std::string author = "" , std::string ISBN = ""){
    this ->title = title;
    this -> author = author;
    this -> ISBN = ISBN;
    }
*/

void Book::putData(){
    cout << "Enter the title: " << endl; 
    getline(cin, this ->title);
    cout << "Enter the author: " << endl; 
    getline(cin, this ->author);
    cout << "Enter the ISBN: " << endl; 
    getline(cin, this ->ISBN);
}
Book::Book(const Book& obj){
    title = obj.title;
    author = obj.author;
    ISBN = obj.ISBN;
}

bool Library::addNewBook(const Book& b){
    if(bookIndex < 100){
        ((this -> B) + bookIndex) -> title = b.title;
        ((this -> B) + bookIndex) -> author = b.author;
        ((this -> B) + bookIndex) -> ISBN = b.ISBN;
        bookIndex++;
        std::cout << "Book added!" << std::endl;
        return 1;
    }else{
        std::cout << "Library full!" << std::endl;
        return 0;
    }
}

bool Library::removeBooks(const std::string& ISBN){
    for(auto& i : B){
        if((i.Book::ISBN) == ISBN){
            i.title = "";
            i.Book::author = "";
            i.Book::ISBN = "";
            std::cout << "Book removed!" << std::endl;
            return 1;
        }
    }
    std::cout << "No book of the mentioned ISBN in Library" << std::endl;
    return 0;
}

void Library::displayDetails(){
    for(auto& i : B){
        if((i.Book::ISBN) != ""){
            std::cout << "Title : " << i.title << " Author : " << i.author << " ISBN : " << i.ISBN << std :: endl;
        }
    }
    return;
}

int Library::bookIndex = 0;

int main(){
    Book b1("book1", "auth1", "isbn1");
    Book b2("book2", "auth2", "isbn2");
    cout << 1 << endl;
    Book b3(b1);
    Library l;
    cout << 2 << endl;
    Book arr1[3] = {{"book4", "auth5", "auth6"}, Book("book5", "auth5", "isbn5"), Book(b3)};
    Book *arr2 = new Book[3];
    arr2[0].putData();
    arr2[1].putData();
    arr2[2].putData();
    l.addNewBook(arr2[0]);
    
    return 0;
}