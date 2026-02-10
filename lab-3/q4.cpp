#include <iostream>
using namespace std;

class Book
{
public:
    string title;
    int pages;

    Book(string t = "", int p = 0)
    {
        title = t;
        pages = p;
        cout << "Book object created: " << title << endl;
    }

    ~Book()
    {
        cout << "Book object deleted: " << title << endl;
    }

    void display()
    {
        cout << "Title: " << title << ", Pages: " << pages << endl;
    }
};

int main()
{
    cout << "=== Dynamic Memory Allocation Demo ===" << endl;
    cout << endl;

    cout << "1. Integer variable:" << endl;
    int* intPtr = new int(42);
    cout << "   Allocated value: " << *intPtr << endl;
    delete intPtr;
    cout << "   Deleted" << endl;
    cout << endl;

    cout << "2. Float variable:" << endl;
    float* floatPtr = new float(3.14);
    cout << "   Allocated value: " << *floatPtr << endl;
    delete floatPtr;
    cout << "   Deleted" << endl;
    cout << endl;

    cout << "3. Integer array:" << endl;
    int* intArray = new int[5];
    cout << "   Array elements: ";
    for(int i = 0; i < 5; i++)
    {
        intArray[i] = (i + 1) * 10;
        cout << intArray[i] << " ";
    }
    cout << endl;
    delete[] intArray;
    cout << "   Deleted" << endl;
    cout << endl;

    cout << "4. Float array:" << endl;
    float* floatArray = new float[4];
    cout << "   Array elements: ";
    for(int i = 0; i < 4; i++)
    {
        floatArray[i] = 1.5 + i;
        cout << floatArray[i] << " ";
    }
    cout << endl;
    delete[] floatArray;
    cout << "   Deleted" << endl;
    cout << endl;

    cout << "5. Class object:" << endl;
    Book* bookPtr = new Book("C++ Basics", 300);
    bookPtr->display();
    delete bookPtr;
    cout << endl;

    cout << "6. Array of class objects:" << endl;
    Book* bookArray = new Book[3];
    bookArray[0] = Book("Learn OOP", 250);
    bookArray[1] = Book("Data Structures", 400);
    bookArray[2] = Book("Algorithms", 350);

    cout << "   Displaying books:" << endl;
    for(int i = 0; i < 3; i++)
    {
        cout << "   Book " << (i+1) << ": ";
        bookArray[i].display();
    }
    delete[] bookArray;
    cout << endl;

    cout << "All memory deallocated successfully." << endl;

    return 0;
}
