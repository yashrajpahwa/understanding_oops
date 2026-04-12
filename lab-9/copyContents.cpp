#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream readFile;
    readFile.open("NOTES.txt");
    ofstream writeFile;
    writeFile.open("NOTES-copy.txt", ios::out);
    char c;
    while(readFile.get(c)){
        writeFile.put(c);
    }
    readFile.close();
    writeFile.close();
    return 0;
}