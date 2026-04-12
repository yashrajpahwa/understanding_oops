#include <iostream>
#include <fstream>

using namespace std;

int main(){
    fstream file("atoz.txt", ios::in | ios::out);
    char c = 'A';
    while(c <= 'Z'){
        //file << c;
        file.put(c);
        c++;
    }
    file.seekg(9, ios::beg);
    cout << "10th character is : " << file.get() << endl;
    file.seekp(4, ios::beg);
    file.put('e');
    file.seekg(0, ios::end);    
    cout << "File size : " << file.tellg() << endl;
    file.close();

    fstream newFile("data.txt"); //defaults to both in and out modes MAYBE
    newFile.seekg(9, ios::beg);
    cout << "Current position of the pointer : " << newFile.tellg() << endl;

    char x;
    while(newFile.get(x)){
        cout << x;
    }
    newFile.close();
    return 0; 
}