#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    fstream file("hello.txt", ios::trunc | ios::out | ios::in);
    string s = "Hello World", s2 = "C++  ";
    for(auto c : s){
        file.put(c);
        cout << "Current position of the pointer : " << file.tellp() << endl;
    }
    file.seekp(-5, ios::end);
    for(auto c : s2){
        file.put(c);
    }
        
    return 0;
}