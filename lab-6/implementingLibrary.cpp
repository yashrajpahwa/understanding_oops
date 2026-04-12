#include <iostream>
#include <string>
using namespace std;
class Library;
class Book{
    private:
    std::string title;
    std::string author;
    std::string ISBN;
    friend class Library; 
};

class Library{
    private:
    static int bookIndex;
    Book B[100];
    public:
    bool addNewBook(const std::string& title, const std::string& author, const std::string& ISBN);
    bool removeBooks(const std::string& ISBN);
    void displayDetails();
};

bool Library::addNewBook(const std::string& title, const std::string& author, const std::string& ISBN){
    if(bookIndex < 100){
        B[bookIndex].Book::title = title;
        B[bookIndex].Book::author = author;
        B[bookIndex].Book::ISBN = ISBN;
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
            i.Book::title = "";
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
}

int Library::bookIndex = 0;

int main(){
    Library l;
    int n;
    cout << "Enter number of books to be added: "<< endl;
    cin >> n;
    for(int i = 0; i < n;i++){
        string a, b, c;
        cout << "Enter the title:" << endl;
        getline(cin, a);
        cout << "Enter the author:" << endl;
        getline(cin, b);
        cout << "Enter the ISBN:" << endl;
        getline(cin, c);
        l.addNewBook(a, b, c);
    }
    l.removeBooks("isbn2");
    l.displayDetails();
    return 0;
}